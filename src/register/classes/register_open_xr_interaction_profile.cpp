
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/open_xr_interaction_profile.hpp>
#include <godot_cpp/classes/open_xrip_binding.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void open_xr_interaction_profile_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRInteractionProfile *open_xr_interaction_profile = static_cast<OpenXRInteractionProfile *>(JS_GetOpaque(val, OpenXRInteractionProfile::__class_id));
	if (open_xr_interaction_profile)
		OpenXRInteractionProfile::free(nullptr, open_xr_interaction_profile);
}

static JSClassDef open_xr_interaction_profile_class_def = {
	"OpenXRInteractionProfile",
	.finalizer = open_xr_interaction_profile_class_finalizer
};

static JSValue open_xr_interaction_profile_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OpenXRInteractionProfile *open_xr_interaction_profile_class;
	JSValue obj = JS_NewObjectClass(ctx, OpenXRInteractionProfile::__class_id);
	if (JS_IsException(obj))
		return obj;
	open_xr_interaction_profile_class = memnew(OpenXRInteractionProfile);
	if (!open_xr_interaction_profile_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, open_xr_interaction_profile_class);
	return obj;
}
static JSValue open_xr_interaction_profile_class_set_interaction_profile_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRInteractionProfile::set_interaction_profile_path, OpenXRInteractionProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interaction_profile_class_get_interaction_profile_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInteractionProfile::get_interaction_profile_path, OpenXRInteractionProfile::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_interaction_profile_class_get_binding_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInteractionProfile::get_binding_count, OpenXRInteractionProfile::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_interaction_profile_class_get_binding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInteractionProfile::get_binding, OpenXRInteractionProfile::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_interaction_profile_class_set_bindings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRInteractionProfile::set_bindings, OpenXRInteractionProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interaction_profile_class_get_bindings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInteractionProfile::get_bindings, OpenXRInteractionProfile::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry open_xr_interaction_profile_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_interaction_profile_path", 1, &open_xr_interaction_profile_class_set_interaction_profile_path),
	JS_CFUNC_DEF("get_interaction_profile_path", 0, &open_xr_interaction_profile_class_get_interaction_profile_path),
	JS_CFUNC_DEF("get_binding_count", 0, &open_xr_interaction_profile_class_get_binding_count),
	JS_CFUNC_DEF("get_binding", 1, &open_xr_interaction_profile_class_get_binding),
	JS_CFUNC_DEF("set_bindings", 1, &open_xr_interaction_profile_class_set_bindings),
	JS_CFUNC_DEF("get_bindings", 0, &open_xr_interaction_profile_class_get_bindings),
};

static int js_open_xr_interaction_profile_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OpenXRInteractionProfile::__class_id);
	classes["OpenXRInteractionProfile"] = OpenXRInteractionProfile::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OpenXRInteractionProfile::__class_id, &open_xr_interaction_profile_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRInteractionProfile::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_interaction_profile_class_proto_funcs, _countof(open_xr_interaction_profile_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, open_xr_interaction_profile_class_constructor, "OpenXRInteractionProfile", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OpenXRInteractionProfile", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_interaction_profile_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_interaction_profile_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRInteractionProfile");
	return m;
}

JSModuleDef *js_init_open_xr_interaction_profile_module(JSContext *ctx) {
	return _js_init_open_xr_interaction_profile_module(ctx, "godot/classes/open_xr_interaction_profile");
}

void register_open_xr_interaction_profile() {
	js_init_open_xr_interaction_profile_module(ctx);
}