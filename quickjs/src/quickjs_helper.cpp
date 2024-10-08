#include "quickjs/quickjs_helper.h"

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