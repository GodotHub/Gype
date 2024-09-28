#include "register/register_utility_functions.h"
#include "utils/env.h"
#include "utils/vector_helper.h"
#include "wrapper/variant_wrapper.h"
#include <wrapper/wrappers.h>
#include <godot_cpp/variant/utility_functions.hpp>
#include <vector>

using namespace godot;

JSValue go;
JSValue gd;

static void gd_print(const Variant **p_args, GDExtensionInt p_arg_count) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("print")._native_ptr(), 2648703342);
	CHECK_METHOD_BIND(_gde_function);
	Variant ret;
	_gde_function(&ret, reinterpret_cast<GDExtensionConstVariantPtr *>(p_args), p_arg_count);
}

static JSValue js_print(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	std::vector<const Variant *> args;
	for (int i = 0; i < argc; i++) {
		JSValue var = argv[i];
		Variant *variant = GET_OPAQUE(Variant, var.gptr);
		args.push_back(variant);
		JS_FreeValue(ctx, var);
	}
	gd_print(args.data(), args.size());
	return JS_UNDEFINED;
}

static const JSCFunctionListEntry gd_utility_funcs[] = {
	JS_CFUNC_DEF("print", 0, &js_print),
};

void register_utility_functions() {
	go = JS_GetGlobalObject(ctx);
	gd = JS_NewObject(ctx);
	ERR_FAIL_COND(JS_DefinePropertyValueStr(ctx, go, "GD", gd, JS_PROP_HAS_VALUE) <= 0);
	JS_SetPropertyFunctionList(ctx, gd, gd_utility_funcs, sizeof(gd_utility_funcs) / sizeof(gd_utility_funcs[0]));
	JS_FreeValue(ctx, go);
}

void unregister_utility_functions() {
	JS_FreeValue(ctx, go);
	JS_FreeValue(ctx, gd);
}
