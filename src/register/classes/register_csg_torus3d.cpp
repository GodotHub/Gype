
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/csg_torus3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void csg_torus3d_class_finalizer(JSRuntime *rt, JSValue val) {
	CSGTorus3D *csg_torus3d = static_cast<CSGTorus3D *>(JS_GetOpaque(val, CSGTorus3D::__class_id));
	if (csg_torus3d)
		CSGTorus3D::free(nullptr, csg_torus3d);
}

static JSClassDef csg_torus3d_class_def = {
	"CSGTorus3D",
	.finalizer = csg_torus3d_class_finalizer
};

static JSValue csg_torus3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CSGTorus3D *csg_torus3d_class;
	JSValue obj = JS_NewObjectClass(ctx, CSGTorus3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	csg_torus3d_class = memnew(CSGTorus3D);
	if (!csg_torus3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, csg_torus3d_class);
	return obj;
}
static JSValue csg_torus3d_class_set_inner_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGTorus3D::set_inner_radius, CSGTorus3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_torus3d_class_get_inner_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGTorus3D::get_inner_radius, CSGTorus3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_torus3d_class_set_outer_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGTorus3D::set_outer_radius, CSGTorus3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_torus3d_class_get_outer_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGTorus3D::get_outer_radius, CSGTorus3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_torus3d_class_set_sides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGTorus3D::set_sides, CSGTorus3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_torus3d_class_get_sides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGTorus3D::get_sides, CSGTorus3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_torus3d_class_set_ring_sides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGTorus3D::set_ring_sides, CSGTorus3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_torus3d_class_get_ring_sides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGTorus3D::get_ring_sides, CSGTorus3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_torus3d_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGTorus3D::set_material, CSGTorus3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_torus3d_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGTorus3D::get_material, CSGTorus3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_torus3d_class_set_smooth_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGTorus3D::set_smooth_faces, CSGTorus3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_torus3d_class_get_smooth_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGTorus3D::get_smooth_faces, CSGTorus3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry csg_torus3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_inner_radius", 1, &csg_torus3d_class_set_inner_radius),
	JS_CFUNC_DEF("get_inner_radius", 0, &csg_torus3d_class_get_inner_radius),
	JS_CFUNC_DEF("set_outer_radius", 1, &csg_torus3d_class_set_outer_radius),
	JS_CFUNC_DEF("get_outer_radius", 0, &csg_torus3d_class_get_outer_radius),
	JS_CFUNC_DEF("set_sides", 1, &csg_torus3d_class_set_sides),
	JS_CFUNC_DEF("get_sides", 0, &csg_torus3d_class_get_sides),
	JS_CFUNC_DEF("set_ring_sides", 1, &csg_torus3d_class_set_ring_sides),
	JS_CFUNC_DEF("get_ring_sides", 0, &csg_torus3d_class_get_ring_sides),
	JS_CFUNC_DEF("set_material", 1, &csg_torus3d_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &csg_torus3d_class_get_material),
	JS_CFUNC_DEF("set_smooth_faces", 1, &csg_torus3d_class_set_smooth_faces),
	JS_CFUNC_DEF("get_smooth_faces", 0, &csg_torus3d_class_get_smooth_faces),
};

static int js_csg_torus3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CSGTorus3D::__class_id);
	classes["CSGTorus3D"] = CSGTorus3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CSGTorus3D::__class_id, &csg_torus3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CSGPrimitive3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CSGTorus3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, csg_torus3d_class_proto_funcs, _countof(csg_torus3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, csg_torus3d_class_constructor, "CSGTorus3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CSGTorus3D", ctor);

	return 0;
}

JSModuleDef *_js_init_csg_torus3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_csg_torus3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CSGTorus3D");
	return m;
}

JSModuleDef *js_init_csg_torus3d_module(JSContext *ctx) {
	return _js_init_csg_torus3d_module(ctx, "godot/classes/csg_torus3d");
}

void register_csg_torus3d() {
	js_init_csg_torus3d_module(ctx);
}