#include "utils/register_helper.h"
#include <godot_cpp/classes/node.hpp>
#include <type_traits>

using namespace godot;

JSValue convert_to_js(Variant arg) {
	switch (arg.get_type()) {
		case Variant::Type::INT:
			return JS_NewInt64(ctx, arg);
		case Variant::Type::FLOAT:
			return JS_NewFloat64(ctx, arg);
		case Variant::Type::BOOL:
			return JS_NewBool(ctx, arg);
		case Variant::Type::STRING:
		case Variant::Type::STRING_NAME:
			return JS_NewString(ctx, std::string(String(arg).utf8().get_data()).c_str());
		case Variant::Type::ARRAY: {
			const Array &arr = arg;
			JSValue js_arr = JS_NewArray(ctx);
			for (int i = 0; i < arr.size(); i++) {
				if (JS_SetPropertyUint32(ctx, js_arr, i, convert_to_js(arr[i]))) {
					throw _excep;
				}
			}
			return js_arr;
		}
		case Variant::Type::OBJECT: {
			Object *obj = arg;
			JSClassID class_id = classes[obj->get_class()];
			return JS_NewObjectClass(ctx, class_id);
		}
		default:
			throw _excep;
	}
}