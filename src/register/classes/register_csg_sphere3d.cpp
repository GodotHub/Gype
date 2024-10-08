
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/csg_sphere3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void csg_sphere3d_class_finalizer(JSRuntime *rt, JSValue val) {
	CSGSphere3D *csg_sphere3d = static_cast<CSGSphere3D *>(JS_GetOpaque(val, CSGSphere3D::__class_id));
	if (csg_sphere3d)
		CSGSphere3D::free(nullptr, csg_sphere3d);
}

static JSClassDef csg_sphere3d_class_def = {
	"CSGSphere3D",
	.finalizer = csg_sphere3d_class_finalizer
};

static JSValue csg_sphere3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CSGSphere3D *csg_sphere3d_class;
	JSValue obj = JS_NewObjectClass(ctx, CSGSphere3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	csg_sphere3d_class = memnew(CSGSphere3D);
	if (!csg_sphere3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, csg_sphere3d_class);
	return obj;
}
static JSValue csg_sphere3d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGSphere3D::set_radius, CSGSphere3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_sphere3d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGSphere3D::get_radius, CSGSphere3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_sphere3d_class_set_radial_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGSphere3D::set_radial_segments, CSGSphere3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_sphere3d_class_get_radial_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGSphere3D::get_radial_segments, CSGSphere3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_sphere3d_class_set_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGSphere3D::set_rings, CSGSphere3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_sphere3d_class_get_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGSphere3D::get_rings, CSGSphere3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_sphere3d_class_set_smooth_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGSphere3D::set_smooth_faces, CSGSphere3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_sphere3d_class_get_smooth_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGSphere3D::get_smooth_faces, CSGSphere3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_sphere3d_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGSphere3D::set_material, CSGSphere3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_sphere3d_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGSphere3D::get_material, CSGSphere3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry csg_sphere3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &csg_sphere3d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &csg_sphere3d_class_get_radius),
	JS_CFUNC_DEF("set_radial_segments", 1, &csg_sphere3d_class_set_radial_segments),
	JS_CFUNC_DEF("get_radial_segments", 0, &csg_sphere3d_class_get_radial_segments),
	JS_CFUNC_DEF("set_rings", 1, &csg_sphere3d_class_set_rings),
	JS_CFUNC_DEF("get_rings", 0, &csg_sphere3d_class_get_rings),
	JS_CFUNC_DEF("set_smooth_faces", 1, &csg_sphere3d_class_set_smooth_faces),
	JS_CFUNC_DEF("get_smooth_faces", 0, &csg_sphere3d_class_get_smooth_faces),
	JS_CFUNC_DEF("set_material", 1, &csg_sphere3d_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &csg_sphere3d_class_get_material),
};

static int js_csg_sphere3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CSGSphere3D::__class_id);
	classes["CSGSphere3D"] = CSGSphere3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CSGSphere3D::__class_id, &csg_sphere3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CSGPrimitive3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CSGSphere3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, csg_sphere3d_class_proto_funcs, _countof(csg_sphere3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, csg_sphere3d_class_constructor, "CSGSphere3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CSGSphere3D", ctor);

	return 0;
}

JSModuleDef *_js_init_csg_sphere3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_csg_sphere3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CSGSphere3D");
	return m;
}

JSModuleDef *js_init_csg_sphere3d_module(JSContext *ctx) {
	return _js_init_csg_sphere3d_module(ctx, "godot/classes/csg_sphere3d");
}

void register_csg_sphere3d() {
	js_init_csg_sphere3d_module(ctx);
}