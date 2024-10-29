
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/classes/omni_light3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void omni_light3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef omni_light3d_class_def = {
	"OmniLight3D",
	.finalizer = omni_light3d_class_finalizer
};

static JSValue omni_light3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OmniLight3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	OmniLight3D *omni_light3d_class = memnew(OmniLight3D);
	if (!omni_light3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, omni_light3d_class);	
	return obj;
}
static JSValue omni_light3d_class_set_shadow_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&OmniLight3D::set_shadow_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue omni_light3d_class_get_shadow_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OmniLight3D::get_shadow_mode, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry omni_light3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_shadow_mode", 1, &omni_light3d_class_set_shadow_mode),
	JS_CFUNC_DEF("get_shadow_mode", 0, &omni_light3d_class_get_shadow_mode),
};

void define_omni_light3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "omni_shadow_mode"),
        JS_NewCFunction(ctx, omni_light3d_class_get_shadow_mode, "get_shadow_mode", 0),
        JS_NewCFunction(ctx, omni_light3d_class_set_shadow_mode, "set_shadow_mode", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue ShadowMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, ShadowMode_obj, "SHADOW_DUAL_PARABOLOID", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, ShadowMode_obj, "SHADOW_CUBE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "ShadowMode", ShadowMode_obj);
}

static int js_omni_light3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&OmniLight3D::__class_id);
	classes["OmniLight3D"] = OmniLight3D::__class_id;
	class_id_list.insert(OmniLight3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OmniLight3D::__class_id, &omni_light3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OmniLight3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Light3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OmniLight3D::__class_id, proto);

	define_omni_light3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, omni_light3d_class_proto_funcs, _countof(omni_light3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, omni_light3d_class_constructor, "OmniLight3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OmniLight3D", ctor);

	return 0;
}

JSModuleDef *_js_init_omni_light3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/light3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_omni_light3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OmniLight3D");
	return m;
}

JSModuleDef *js_init_omni_light3d_module(JSContext *ctx) {
	return _js_init_omni_light3d_module(ctx, "@godot/classes/omni_light3d");
}

void register_omni_light3d() {
	OmniLight3D::__init_js_class_id();
	js_init_omni_light3d_module(ctx);
}