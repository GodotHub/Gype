#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/templates/hash_map.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

HashSet<int> class_id_list;
HashMap<StringName, int> classes;

using namespace godot;

enum {
	/* classid tag        */ /* union usage   | properties */
	JS_CLASS_OBJECT = 1, /* must be first */
	JS_CLASS_ARRAY, /* u.array       | length */
	JS_CLASS_ERROR,
	JS_CLASS_NUMBER, /* u.object_data */
	JS_CLASS_STRING, /* u.object_data */
	JS_CLASS_BOOLEAN, /* u.object_data */
	JS_CLASS_SYMBOL, /* u.object_data */
	JS_CLASS_ARGUMENTS, /* u.array       | length */
	JS_CLASS_MAPPED_ARGUMENTS, /*               | length */
	JS_CLASS_DATE, /* u.object_data */
	JS_CLASS_MODULE_NS,
	JS_CLASS_C_FUNCTION, /* u.cfunc */
	JS_CLASS_BYTECODE_FUNCTION, /* u.func */
	JS_CLASS_BOUND_FUNCTION, /* u.bound_function */
	JS_CLASS_C_FUNCTION_DATA, /* u.c_function_data_record */
	JS_CLASS_GENERATOR_FUNCTION, /* u.func */
	JS_CLASS_FOR_IN_ITERATOR, /* u.for_in_iterator */
	JS_CLASS_REGEXP, /* u.regexp */
	JS_CLASS_ARRAY_BUFFER, /* u.array_buffer */
	JS_CLASS_SHARED_ARRAY_BUFFER, /* u.array_buffer */
	JS_CLASS_UINT8C_ARRAY, /* u.array (typed_array) */
	JS_CLASS_INT8_ARRAY, /* u.array (typed_array) */
	JS_CLASS_UINT8_ARRAY, /* u.array (typed_array) */
	JS_CLASS_INT16_ARRAY, /* u.array (typed_array) */
	JS_CLASS_UINT16_ARRAY, /* u.array (typed_array) */
	JS_CLASS_INT32_ARRAY, /* u.array (typed_array) */
	JS_CLASS_UINT32_ARRAY, /* u.array (typed_array) */
	JS_CLASS_BIG_INT64_ARRAY, /* u.array (typed_array) */
	JS_CLASS_BIG_UINT64_ARRAY, /* u.array (typed_array) */
	JS_CLASS_FLOAT32_ARRAY, /* u.array (typed_array) */
	JS_CLASS_FLOAT64_ARRAY, /* u.array (typed_array) */
	JS_CLASS_DATAVIEW, /* u.typed_array */
	JS_CLASS_BIG_INT, /* u.object_data */
#ifdef CONFIG_BIGNUM
	JS_CLASS_BIG_FLOAT, /* u.object_data */
	JS_CLASS_FLOAT_ENV, /* u.float_env */
	JS_CLASS_BIG_DECIMAL, /* u.object_data */
	JS_CLASS_OPERATOR_SET, /* u.operator_set */
#endif
	JS_CLASS_MAP, /* u.map_state */
	JS_CLASS_SET, /* u.map_state */
	JS_CLASS_WEAKMAP, /* u.map_state */
	JS_CLASS_WEAKSET, /* u.map_state */
	JS_CLASS_MAP_ITERATOR, /* u.map_iterator_data */
	JS_CLASS_SET_ITERATOR, /* u.map_iterator_data */
	JS_CLASS_ARRAY_ITERATOR, /* u.array_iterator_data */
	JS_CLASS_STRING_ITERATOR, /* u.array_iterator_data */
	JS_CLASS_REGEXP_STRING_ITERATOR, /* u.regexp_string_iterator_data */
	JS_CLASS_GENERATOR, /* u.generator_data */
	JS_CLASS_PROXY, /* u.proxy_data */
	JS_CLASS_PROMISE, /* u.promise_data */
	JS_CLASS_PROMISE_RESOLVE_FUNCTION, /* u.promise_function_data */
	JS_CLASS_PROMISE_REJECT_FUNCTION, /* u.promise_function_data */
	JS_CLASS_ASYNC_FUNCTION, /* u.func */
	JS_CLASS_ASYNC_FUNCTION_RESOLVE, /* u.async_function_data */
	JS_CLASS_ASYNC_FUNCTION_REJECT, /* u.async_function_data */
	JS_CLASS_ASYNC_FROM_SYNC_ITERATOR, /* u.async_from_sync_iterator_data */
	JS_CLASS_ASYNC_GENERATOR_FUNCTION, /* u.func */
	JS_CLASS_ASYNC_GENERATOR, /* u.async_generator_data */

	JS_CLASS_INIT_COUNT, /* last entry for predefined classes */
};

#define CREATE_OBJECT_FUNC(type)                                      \
	static JSValue create_##type##_obj(JSContext *ctx, Variant val) { \
		type *obj = memnew(type());                                   \
		memnew_placement(obj, type(val));                             \
		JSClassID class_id = type::__class_id;                        \
		JSValue js_obj = JS_NewObjectClass(ctx, class_id);            \
		JS_SetOpaque(js_obj, obj);                                    \
		return js_obj;                                                \
	}

Variant any_to_variant(JSContext *ctx, JSValue val);
Variant obj_to_variant(JSContext *ctx, JSValue val);
CREATE_OBJECT_FUNC(Vector2);
CREATE_OBJECT_FUNC(Vector2i);
CREATE_OBJECT_FUNC(Vector3);
CREATE_OBJECT_FUNC(Vector3i);
CREATE_OBJECT_FUNC(Vector4);
CREATE_OBJECT_FUNC(Vector4i);

uint8_t *get_typed_array_buf(JSContext *ctx, JSValue v) {
	int class_id = JS_GetClassID(v);
	size_t len;
	if (class_id >= 21 && class_id <= 31) {
		JSValue tbuf = JS_GetTypedArrayBuffer(ctx, v, NULL, NULL, NULL);
		uint8_t *abuf = JS_GetArrayBuffer(ctx, &len, tbuf);
		return abuf;
	} else {
		return nullptr;
	}
}

bool is_typed_array(JSContext *ctx, JSValue value) {
	JSClassID class_id = JS_GetClassID(value);
	return class_id >= 21 && class_id <= 31;
}

bool is_int(JSContext *ctx, JSValue value) {
	return JS_VALUE_GET_TAG(value) == JS_TAG_INT;
}

bool is_float(JSContext *ctx, JSValue value) {
	return JS_VALUE_GET_TAG(value) == JS_TAG_FLOAT64;
}

int64_t to_int64(JSContext *ctx, JSValue val) {
	int64_t i;
	if (JS_ToInt64(ctx, &i, val))
		throw JS_ThrowTypeError(ctx, "%s", "Error convert to int");
	return i;
}

void print_exception(JSContext *ctx) {
	JSValue exp = JS_GetException(ctx);
	JSValue message = JS_GetPropertyStr(ctx, exp, "message");
	JSValue stack = JS_GetPropertyStr(ctx, exp, "stack");
	const char *mssage_str = JS_ToCString(ctx, message);
	const char *stack_str = JS_ToCString(ctx, stack);
	printf("%s\n", mssage_str);
	printf("%s\n", stack_str);
	JS_FreeValue(ctx, exp);
	JS_FreeValue(ctx, message);
	JS_FreeValue(ctx, stack);
	JS_FreeCString(ctx, mssage_str);
	JS_FreeCString(ctx, stack_str);
}

bool is_exception(JSContext *ctx, JSValue exp) {
	if (JS_IsException(exp)) {
		print_exception(ctx);
		return true;
	} else {
		return false;
	}
}

Variant any_to_variant(JSContext *ctx, JSValue val) {
	int tag = JS_VALUE_GET_TAG(val);
	switch (tag) {
		case JS_TAG_INT: {
			int64_t i;
			if (JS_ToInt64(ctx, &i, val))
				throw JS_ThrowTypeError(ctx, "%s", "Error convert to int");
			return i;
		} break;
		case JS_TAG_FLOAT64: {
			double i;
			if (JS_ToFloat64(ctx, &i, val))
				throw JS_ThrowTypeError(ctx, "%s", "Error convert to float");
			return i;
		} break;
		case JS_TAG_BOOL:
			return JS_ToBool(ctx, val);
		case JS_TAG_STRING: {
			return JS_ToCString(ctx, val);
		} break;
		case JS_TAG_OBJECT: {
			return obj_to_variant(ctx, val);
		} break;
		case JS_TAG_UNDEFINED:
		case JS_TAG_NULL:
		case JS_TAG_UNINITIALIZED:
			return Variant();
		default:
			throw JS_ThrowTypeError(ctx, "%s", "Error convert");
	}
}

Variant obj_to_variant(JSContext *ctx, JSValue val) {
	int class_id = JS_GetClassID(val);
	switch (class_id) {
		case JS_CLASS_OBJECT: {
			if (class_id_list.has(class_id))
				return Variant(reinterpret_cast<Object *>(JS_GetOpaque(val, class_id)));
			else
				throw JS_ThrowTypeError(ctx, "%s", "Error convert to object");
		} break;
		case JS_CLASS_ARRAY: {
			Array gd_arr;
			JSValue js_len = JS_GetPropertyStr(ctx, val, "length");
			int64_t len = to_int64(ctx, js_len);
			for (int64_t i = 0; i < len; i++) {
				JSValue el = JS_GetPropertyUint32(ctx, val, i);
				gd_arr.append(any_to_variant(ctx, el));
				JS_FreeValue(ctx, el);
			}
			JS_FreeValue(ctx, js_len);
		} break;
		default:
			throw JS_ThrowTypeError(ctx, "%s", "Error convert");
	}
}

JSValue any_to_jsvalue(JSContext *ctx, Variant val) {
	Variant::Type type = val.get_type();
	switch (type) {
		case Variant::Type::INT:
			return JS_NewInt64(ctx, val);
		case Variant::Type::FLOAT:
			return JS_NewFloat64(ctx, val);
		case Variant::Type::BOOL:
			return JS_NewBool(ctx, val);
		case Variant::Type::STRING:
			return JS_NewString(ctx, to_chars(String(val)));
		case Variant::Type::STRING_NAME:
			return JS_NewString(ctx, to_chars(StringName(val)));
		case Variant::Type::VECTOR2: {
			return create_Vector2_obj(ctx, val);
		}
		case Variant::Type::ARRAY: {
			Array arr = val;
			JSValue js_arr = JS_NewArray(ctx);
			for (int i = 0; i < arr.size(); i++) {
				JS_SetPropertyUint32(ctx, js_arr, i, any_to_jsvalue(ctx, arr[i]));
			}
			return js_arr;
		}
		case Variant::Type::OBJECT: {
			Object *obj = val;
			JSClassID class_id = obj->__get_js_class_id();
			JSValue js_obj = JS_NewObjectClass(ctx, class_id);
			JS_SetOpaque(js_obj, obj);
			return js_obj;
		}
		default:
			throw JS_ThrowTypeError(ctx, "%s", "Error convert");
	}
}