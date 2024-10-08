
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/marshalls.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void marshalls_class_finalizer(JSRuntime *rt, JSValue val) {
	Marshalls *marshalls = static_cast<Marshalls *>(JS_GetOpaque(val, Marshalls::__class_id));
	if (marshalls)
		Marshalls::free(nullptr, marshalls);
}

static JSClassDef marshalls_class_def = {
	"Marshalls",
	.finalizer = marshalls_class_finalizer
};

static JSValue marshalls_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Marshalls *marshalls_class;
	JSValue obj = JS_NewObjectClass(ctx, Marshalls::__class_id);
	if (JS_IsException(obj))
		return obj;
	marshalls_class = Marshalls::get_singleton();
	if (!marshalls_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, marshalls_class);
	return obj;
}
static JSValue marshalls_class_variant_to_base64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Marshalls::variant_to_base64, Marshalls::__class_id, ctx, this_val, argv);
};
static JSValue marshalls_class_base64_to_variant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Marshalls::base64_to_variant, Marshalls::__class_id, ctx, this_val, argv);
};
static JSValue marshalls_class_raw_to_base64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Marshalls::raw_to_base64, Marshalls::__class_id, ctx, this_val, argv);
};
static JSValue marshalls_class_base64_to_raw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Marshalls::base64_to_raw, Marshalls::__class_id, ctx, this_val, argv);
};
static JSValue marshalls_class_utf8_to_base64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Marshalls::utf8_to_base64, Marshalls::__class_id, ctx, this_val, argv);
};
static JSValue marshalls_class_base64_to_utf8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Marshalls::base64_to_utf8, Marshalls::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry marshalls_class_proto_funcs[] = {
	JS_CFUNC_DEF("variant_to_base64", 2, &marshalls_class_variant_to_base64),
	JS_CFUNC_DEF("base64_to_variant", 2, &marshalls_class_base64_to_variant),
	JS_CFUNC_DEF("raw_to_base64", 1, &marshalls_class_raw_to_base64),
	JS_CFUNC_DEF("base64_to_raw", 1, &marshalls_class_base64_to_raw),
	JS_CFUNC_DEF("utf8_to_base64", 1, &marshalls_class_utf8_to_base64),
	JS_CFUNC_DEF("base64_to_utf8", 1, &marshalls_class_base64_to_utf8),
};

static int js_marshalls_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Marshalls::__class_id);
	classes["Marshalls"] = Marshalls::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Marshalls::__class_id, &marshalls_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Marshalls::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, marshalls_class_proto_funcs, _countof(marshalls_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, marshalls_class_constructor, "Marshalls", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Marshalls", ctor);

	return 0;
}

JSModuleDef *_js_init_marshalls_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_marshalls_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Marshalls");
	return m;
}

JSModuleDef *js_init_marshalls_module(JSContext *ctx) {
	return _js_init_marshalls_module(ctx, "godot/classes/marshalls");
}

void register_marshalls() {
	js_init_marshalls_module(ctx);
}