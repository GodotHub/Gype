
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/classes/omni_light3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void omni_light3d_class_finalizer(JSRuntime *rt, JSValue val) {
	OmniLight3D *omni_light3d = static_cast<OmniLight3D *>(JS_GetOpaque(val, OmniLight3D::__class_id));
	if (omni_light3d)
		OmniLight3D::free(nullptr, omni_light3d);
}

static JSClassDef omni_light3d_class_def = {
	"OmniLight3D",
	.finalizer = omni_light3d_class_finalizer
};

static JSValue omni_light3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OmniLight3D *omni_light3d_class;
	JSValue obj = JS_NewObjectClass(ctx, OmniLight3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	omni_light3d_class = memnew(OmniLight3D);
	if (!omni_light3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, omni_light3d_class);
	return obj;
}
static JSValue omni_light3d_class_set_shadow_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OmniLight3D::set_shadow_mode, OmniLight3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue omni_light3d_class_get_shadow_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OmniLight3D::get_shadow_mode, OmniLight3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry omni_light3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_shadow_mode", 1, &omni_light3d_class_set_shadow_mode),
	JS_CFUNC_DEF("get_shadow_mode", 0, &omni_light3d_class_get_shadow_mode),
};

static int js_omni_light3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OmniLight3D::__class_id);
	classes["OmniLight3D"] = OmniLight3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OmniLight3D::__class_id, &omni_light3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Light3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OmniLight3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, omni_light3d_class_proto_funcs, _countof(omni_light3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, omni_light3d_class_constructor, "OmniLight3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OmniLight3D", ctor);

	return 0;
}

JSModuleDef *_js_init_omni_light3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_omni_light3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OmniLight3D");
	return m;
}

JSModuleDef *js_init_omni_light3d_module(JSContext *ctx) {
	return _js_init_omni_light3d_module(ctx, "godot/classes/omni_light3d");
}

void register_omni_light3d() {
	js_init_omni_light3d_module(ctx);
}