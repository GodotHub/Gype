#include "quickjs/utils.h"
#include <stdarg.h>
#include <stdio.h>
#include <godot_cpp/core/logger.hpp>
#include <godot_cpp/godot.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

namespace JSGodot {

void UtilityFunctions::print(qjs::rest<JSValue> args) {
	std::string s;
	for (size_t i = 0; i < args.size(); i++) {
		s += to_string(args[i]);
	}
	printf("%s\n", s.c_str());
	for (auto arg : args) {
		JS_FreeValue(context.ctx, arg);
	}
}

void UtilityFunctions::print_internal(JSValue *args, int argc) {
}

std::string UtilityFunctions::to_string(JSValue value) {
	switch (JS_VALUE_GET_TAG(value)) {
		case JS_TAG_STRING:
			return qjs::js_traits<std::string>::unwrap(context.ctx, value);
		case JS_TAG_INT:
			return std::to_string(qjs::js_traits<int32_t>::unwrap(context.ctx, value));
		case JS_TAG_BOOL:
			return std::to_string(qjs::js_traits<bool>::unwrap(context.ctx, value));
		case JS_TAG_FLOAT64:
			return std::to_string(qjs::js_traits<double>::unwrap(context.ctx, value));
		case JS_TAG_OBJECT: {
			if (JS_IsArray(context.ctx, value)) {
				std::string arr_str;
				int length = qjs::js_traits<int>::unwrap(context.ctx, JS_GetPropertyStr(context.ctx, value, "length"));
				std::string elements;
				for (int i = 0; i < length; i++) {
					std::string element = to_string(JS_GetPropertyUint32(context.ctx, value, i));
					elements += element;
					if (i < length - 1) {
						elements += ",";
					}
				}
				return "[" + elements + "]";
			} else {
				JSValue _to_string = JS_GetPropertyStr(context.ctx, value, "to_string");
				if (JS_IsUndefined(_to_string)) {
					if (!is_object(context.ctx, value)) {
						JSValue constructor = JS_GetPropertyStr(context.ctx, value, "constructor");
						JSValue name = JS_GetPropertyStr(context.ctx, constructor, "name");
						std::string class_name = qjs::js_traits<std::string>::unwrap(context.ctx, name);
						if (class_name == "GDString") {
							return gdstring_to_string(value);
						} else if (class_name == "StringName") {
							return string_name_to_string(value);
						}
						return "<Object>";
					} else {
						JSValue _get_instance_id = JS_GetPropertyStr(context.ctx, value, "get_instance_id");
						JSValue _get_class = JS_GetPropertyStr(context.ctx, value, "get_class");
						return "<" + to_string(JS_Call(context.ctx, _get_class, value, 0, NULL)) + "#" + to_string(JS_Call(context.ctx, _get_instance_id, value, 0, nullptr)) + ">";
					}
				} else {
					return to_string(JS_Call(context.ctx, _to_string, value, 0, NULL));
				}
			}
		}
	}
	return "undefined";
}

bool UtilityFunctions::is_object(JSContext *ctx, JSValue val) {
	JSValue _get_instance_id = JS_GetPropertyStr(ctx, val, "get_instance_id");
	JSValue _get_class = JS_GetPropertyStr(ctx, val, "get_class");
	return !(JS_IsUndefined(_get_instance_id) || JS_IsUndefined(_get_class));
}

std::string UtilityFunctions::gdstring_to_string(JSValue value) {
	JSValue opaque = JS_GetPropertyStr(context.ctx, value, "opaque");
	JSValue length_fun = JS_GetPropertyStr(context.ctx, value, "length");
	int length = qjs::js_traits<int>::unwrap(context.ctx, JS_Call(context.ctx, length_fun, value, 0, NULL));
	char *r_text = new char[length];
	GDExtensionInt r_text_len = internal::gdextension_interface_string_to_latin1_chars(qjs::get_typed_array_buf(context.ctx, opaque), r_text, length);
	std::string ret = r_text;
	free(r_text);
	JS_FreeValue(context.ctx, opaque);
	JS_FreeValue(context.ctx, length_fun);
	return ret.substr(0, r_text_len);
}

std::string UtilityFunctions::string_name_to_string(JSValue value) {
	JSValue cast = JS_GetPropertyStr(context.ctx, value, "cast");
	JSValue *argv = new JSValue[1]{ qjs::js_traits<GDExtensionVariantType>::wrap(context.ctx, GDExtensionVariantType::GDEXTENSION_VARIANT_TYPE_STRING) };
	JSValue gdstring = JS_Call(context.ctx, cast, value, 1, argv);
	std::string ret = gdstring_to_string(gdstring);
	JS_FreeValue(context.ctx, *argv);
	JS_FreeValue(context.ctx, cast);
	JS_FreeValue(context.ctx, gdstring);
	free(argv);
	return ret;
}

} //namespace JSGodot