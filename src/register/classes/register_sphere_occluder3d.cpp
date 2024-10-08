
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/classes/sphere_occluder3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void sphere_occluder3d_class_finalizer(JSRuntime *rt, JSValue val) {
	SphereOccluder3D *sphere_occluder3d = static_cast<SphereOccluder3D *>(JS_GetOpaque(val, SphereOccluder3D::__class_id));
	if (sphere_occluder3d)
		SphereOccluder3D::free(nullptr, sphere_occluder3d);
}

static JSClassDef sphere_occluder3d_class_def = {
	"SphereOccluder3D",
	.finalizer = sphere_occluder3d_class_finalizer
};

static JSValue sphere_occluder3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SphereOccluder3D *sphere_occluder3d_class;
	JSValue obj = JS_NewObjectClass(ctx, SphereOccluder3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	sphere_occluder3d_class = memnew(SphereOccluder3D);
	if (!sphere_occluder3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, sphere_occluder3d_class);
	return obj;
}
static JSValue sphere_occluder3d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SphereOccluder3D::set_radius, SphereOccluder3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sphere_occluder3d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SphereOccluder3D::get_radius, SphereOccluder3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry sphere_occluder3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &sphere_occluder3d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &sphere_occluder3d_class_get_radius),
};

static int js_sphere_occluder3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SphereOccluder3D::__class_id);
	classes["SphereOccluder3D"] = SphereOccluder3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SphereOccluder3D::__class_id, &sphere_occluder3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Occluder3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SphereOccluder3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, sphere_occluder3d_class_proto_funcs, _countof(sphere_occluder3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, sphere_occluder3d_class_constructor, "SphereOccluder3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SphereOccluder3D", ctor);

	return 0;
}

JSModuleDef *_js_init_sphere_occluder3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sphere_occluder3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SphereOccluder3D");
	return m;
}

JSModuleDef *js_init_sphere_occluder3d_module(JSContext *ctx) {
	return _js_init_sphere_occluder3d_module(ctx, "godot/classes/sphere_occluder3d");
}

void register_sphere_occluder3d() {
	js_init_sphere_occluder3d_module(ctx);
}