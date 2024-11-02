
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/open_xr_interaction_profile.hpp>
#include <godot_cpp/classes/open_xrip_binding.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_interaction_profile_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef open_xr_interaction_profile_class_def = {
	"OpenXRInteractionProfile",
	.finalizer = open_xr_interaction_profile_class_finalizer
};

static JSValue open_xr_interaction_profile_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OpenXRInteractionProfile::__class_id);
	if (JS_IsException(obj))
		return obj;

	OpenXRInteractionProfile *open_xr_interaction_profile_class;
	if (argc == 1) 
		open_xr_interaction_profile_class = static_cast<OpenXRInteractionProfile *>(Variant(*argv).operator Object *());
	else 
		open_xr_interaction_profile_class = memnew(OpenXRInteractionProfile);
	if (!open_xr_interaction_profile_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, open_xr_interaction_profile_class);
	return obj;
}
static JSValue open_xr_interaction_profile_class_set_interaction_profile_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRInteractionProfile::set_interaction_profile_path, ctx, this_val, argc, argv);
};
static JSValue open_xr_interaction_profile_class_get_interaction_profile_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRInteractionProfile::get_interaction_profile_path, ctx, this_val, argc, argv);
};
static JSValue open_xr_interaction_profile_class_get_binding_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRInteractionProfile::get_binding_count, ctx, this_val, argc, argv);
};
static JSValue open_xr_interaction_profile_class_get_binding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRInteractionProfile::get_binding, ctx, this_val, argc, argv);
};
static JSValue open_xr_interaction_profile_class_set_bindings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRInteractionProfile::set_bindings, ctx, this_val, argc, argv);
};
static JSValue open_xr_interaction_profile_class_get_bindings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRInteractionProfile::get_bindings, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry open_xr_interaction_profile_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_interaction_profile_path", 1, &open_xr_interaction_profile_class_set_interaction_profile_path),
	JS_CFUNC_DEF("get_interaction_profile_path", 0, &open_xr_interaction_profile_class_get_interaction_profile_path),
	JS_CFUNC_DEF("get_binding_count", 0, &open_xr_interaction_profile_class_get_binding_count),
	JS_CFUNC_DEF("get_binding", 1, &open_xr_interaction_profile_class_get_binding),
	JS_CFUNC_DEF("set_bindings", 1, &open_xr_interaction_profile_class_set_bindings),
	JS_CFUNC_DEF("get_bindings", 0, &open_xr_interaction_profile_class_get_bindings),
};

static void define_open_xr_interaction_profile_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "interaction_profile_path"),
        JS_NewCFunction(ctx, open_xr_interaction_profile_class_get_interaction_profile_path, "get_interaction_profile_path", 0),
        JS_NewCFunction(ctx, open_xr_interaction_profile_class_set_interaction_profile_path, "set_interaction_profile_path", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bindings"),
        JS_NewCFunction(ctx, open_xr_interaction_profile_class_get_bindings, "get_bindings", 0),
        JS_NewCFunction(ctx, open_xr_interaction_profile_class_set_bindings, "set_bindings", 1),
        JS_PROP_GETSET
    );
	
}

static void define_open_xr_interaction_profile_enum(JSContext *ctx, JSValue proto) {
}

static int js_open_xr_interaction_profile_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["OpenXRInteractionProfile"] = OpenXRInteractionProfile::__class_id;
	class_id_list.insert(OpenXRInteractionProfile::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OpenXRInteractionProfile::__class_id, &open_xr_interaction_profile_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OpenXRInteractionProfile::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRInteractionProfile::__class_id, proto);

	define_open_xr_interaction_profile_property(ctx, proto);
	define_open_xr_interaction_profile_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_interaction_profile_class_proto_funcs, _countof(open_xr_interaction_profile_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, open_xr_interaction_profile_class_constructor, "OpenXRInteractionProfile", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OpenXRInteractionProfile", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_interaction_profile_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_interaction_profile_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRInteractionProfile");
	return m;
}

JSModuleDef *js_init_open_xr_interaction_profile_module(JSContext *ctx) {
	return _js_init_open_xr_interaction_profile_module(ctx, "@godot/classes/open_xr_interaction_profile");
}

void register_open_xr_interaction_profile() {
	OpenXRInteractionProfile::__init_js_class_id();
	js_init_open_xr_interaction_profile_module(ctx);
}