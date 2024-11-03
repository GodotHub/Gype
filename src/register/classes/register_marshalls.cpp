
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/marshalls.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void marshalls_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef marshalls_class_def = {
	"_Marshalls",
	.finalizer = marshalls_class_finalizer
};

static JSValue marshalls_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, Marshalls::__class_id);
	if (JS_IsException(obj))
		return obj;
	Marshalls *marshalls_class = Marshalls::get_singleton();
	if (!marshalls_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, marshalls_class);
	return obj;
}
static JSValue marshalls_class_variant_to_base64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Marshalls::variant_to_base64, ctx, this_val, argc, argv);
};
static JSValue marshalls_class_base64_to_variant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Marshalls::base64_to_variant, ctx, this_val, argc, argv);
};
static JSValue marshalls_class_raw_to_base64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Marshalls::raw_to_base64, ctx, this_val, argc, argv);
};
static JSValue marshalls_class_base64_to_raw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Marshalls::base64_to_raw, ctx, this_val, argc, argv);
};
static JSValue marshalls_class_utf8_to_base64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Marshalls::utf8_to_base64, ctx, this_val, argc, argv);
};
static JSValue marshalls_class_base64_to_utf8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Marshalls::base64_to_utf8, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry marshalls_class_proto_funcs[] = {
	JS_CFUNC_DEF("variant_to_base64", 2, &marshalls_class_variant_to_base64),
	JS_CFUNC_DEF("base64_to_variant", 2, &marshalls_class_base64_to_variant),
	JS_CFUNC_DEF("raw_to_base64", 1, &marshalls_class_raw_to_base64),
	JS_CFUNC_DEF("base64_to_raw", 1, &marshalls_class_base64_to_raw),
	JS_CFUNC_DEF("utf8_to_base64", 1, &marshalls_class_utf8_to_base64),
	JS_CFUNC_DEF("base64_to_utf8", 1, &marshalls_class_base64_to_utf8),
};

static int js_marshalls_class_init(JSContext *ctx) {
	classes["Marshalls"] = Marshalls::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Marshalls::__class_id, &marshalls_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Marshalls::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, marshalls_class_proto_funcs, _countof(marshalls_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, marshalls_class_constructor, "_Marshalls", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "_Marshalls", ctor);
	JS_FreeValue(ctx, global);
	return 0;
}

void register_marshalls() {
	Marshalls::__init_js_class_id();
	js_marshalls_class_init(ctx);
}