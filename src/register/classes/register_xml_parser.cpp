
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/xml_parser.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void xml_parser_class_finalizer(JSRuntime *rt, JSValue val) {
	XMLParser *xml_parser = static_cast<XMLParser *>(JS_GetOpaque(val, XMLParser::__class_id));
	if (xml_parser)
		XMLParser::free(nullptr, xml_parser);
}

static JSClassDef xml_parser_class_def = {
	"XMLParser",
	.finalizer = xml_parser_class_finalizer
};

static JSValue xml_parser_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XMLParser *xml_parser_class;
	JSValue obj = JS_NewObjectClass(ctx, XMLParser::__class_id);
	if (JS_IsException(obj))
		return obj;
	xml_parser_class = memnew(XMLParser);
	if (!xml_parser_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xml_parser_class);
	return obj;
}
static JSValue xml_parser_class_read(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XMLParser::read, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_get_node_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XMLParser::get_node_type, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_get_node_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XMLParser::get_node_name, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_get_node_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XMLParser::get_node_data, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_get_node_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XMLParser::get_node_offset, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_get_attribute_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XMLParser::get_attribute_count, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_get_attribute_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XMLParser::get_attribute_name, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_get_attribute_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XMLParser::get_attribute_value, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_has_attribute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XMLParser::has_attribute, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_get_named_attribute_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XMLParser::get_named_attribute_value, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_get_named_attribute_value_safe(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XMLParser::get_named_attribute_value_safe, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_is_empty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XMLParser::is_empty, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_get_current_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XMLParser::get_current_line, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_skip_section(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XMLParser::skip_section, XMLParser::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xml_parser_class_seek(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XMLParser::seek, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_open(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XMLParser::open, XMLParser::__class_id, ctx, this_val, argv);
};
static JSValue xml_parser_class_open_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XMLParser::open_buffer, XMLParser::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry xml_parser_class_proto_funcs[] = {
	JS_CFUNC_DEF("read", 0, &xml_parser_class_read),
	JS_CFUNC_DEF("get_node_type", 0, &xml_parser_class_get_node_type),
	JS_CFUNC_DEF("get_node_name", 0, &xml_parser_class_get_node_name),
	JS_CFUNC_DEF("get_node_data", 0, &xml_parser_class_get_node_data),
	JS_CFUNC_DEF("get_node_offset", 0, &xml_parser_class_get_node_offset),
	JS_CFUNC_DEF("get_attribute_count", 0, &xml_parser_class_get_attribute_count),
	JS_CFUNC_DEF("get_attribute_name", 1, &xml_parser_class_get_attribute_name),
	JS_CFUNC_DEF("get_attribute_value", 1, &xml_parser_class_get_attribute_value),
	JS_CFUNC_DEF("has_attribute", 1, &xml_parser_class_has_attribute),
	JS_CFUNC_DEF("get_named_attribute_value", 1, &xml_parser_class_get_named_attribute_value),
	JS_CFUNC_DEF("get_named_attribute_value_safe", 1, &xml_parser_class_get_named_attribute_value_safe),
	JS_CFUNC_DEF("is_empty", 0, &xml_parser_class_is_empty),
	JS_CFUNC_DEF("get_current_line", 0, &xml_parser_class_get_current_line),
	JS_CFUNC_DEF("skip_section", 0, &xml_parser_class_skip_section),
	JS_CFUNC_DEF("seek", 1, &xml_parser_class_seek),
	JS_CFUNC_DEF("open", 1, &xml_parser_class_open),
	JS_CFUNC_DEF("open_buffer", 1, &xml_parser_class_open_buffer),
};

static int js_xml_parser_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XMLParser::__class_id);
	classes["XMLParser"] = XMLParser::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XMLParser::__class_id, &xml_parser_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XMLParser::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xml_parser_class_proto_funcs, _countof(xml_parser_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xml_parser_class_constructor, "XMLParser", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XMLParser", ctor);

	return 0;
}

JSModuleDef *_js_init_xml_parser_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xml_parser_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XMLParser");
	return m;
}

JSModuleDef *js_init_xml_parser_module(JSContext *ctx) {
	return _js_init_xml_parser_module(ctx, "godot/classes/xml_parser");
}

void register_xml_parser() {
	js_init_xml_parser_module(ctx);
}