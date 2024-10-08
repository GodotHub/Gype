
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/csg_cylinder3d.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void csg_cylinder3d_class_finalizer(JSRuntime *rt, JSValue val) {
	CSGCylinder3D *csg_cylinder3d = static_cast<CSGCylinder3D *>(JS_GetOpaque(val, CSGCylinder3D::__class_id));
	if (csg_cylinder3d)
		CSGCylinder3D::free(nullptr, csg_cylinder3d);
}

static JSClassDef csg_cylinder3d_class_def = {
	"CSGCylinder3D",
	.finalizer = csg_cylinder3d_class_finalizer
};

static JSValue csg_cylinder3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CSGCylinder3D *csg_cylinder3d_class;
	JSValue obj = JS_NewObjectClass(ctx, CSGCylinder3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	csg_cylinder3d_class = memnew(CSGCylinder3D);
	if (!csg_cylinder3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, csg_cylinder3d_class);
	return obj;
}
static JSValue csg_cylinder3d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGCylinder3D::set_radius, CSGCylinder3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_cylinder3d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGCylinder3D::get_radius, CSGCylinder3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_cylinder3d_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGCylinder3D::set_height, CSGCylinder3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_cylinder3d_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGCylinder3D::get_height, CSGCylinder3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_cylinder3d_class_set_sides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGCylinder3D::set_sides, CSGCylinder3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_cylinder3d_class_get_sides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGCylinder3D::get_sides, CSGCylinder3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_cylinder3d_class_set_cone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGCylinder3D::set_cone, CSGCylinder3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_cylinder3d_class_is_cone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGCylinder3D::is_cone, CSGCylinder3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_cylinder3d_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGCylinder3D::set_material, CSGCylinder3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_cylinder3d_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGCylinder3D::get_material, CSGCylinder3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_cylinder3d_class_set_smooth_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGCylinder3D::set_smooth_faces, CSGCylinder3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_cylinder3d_class_get_smooth_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGCylinder3D::get_smooth_faces, CSGCylinder3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry csg_cylinder3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &csg_cylinder3d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &csg_cylinder3d_class_get_radius),
	JS_CFUNC_DEF("set_height", 1, &csg_cylinder3d_class_set_height),
	JS_CFUNC_DEF("get_height", 0, &csg_cylinder3d_class_get_height),
	JS_CFUNC_DEF("set_sides", 1, &csg_cylinder3d_class_set_sides),
	JS_CFUNC_DEF("get_sides", 0, &csg_cylinder3d_class_get_sides),
	JS_CFUNC_DEF("set_cone", 1, &csg_cylinder3d_class_set_cone),
	JS_CFUNC_DEF("is_cone", 0, &csg_cylinder3d_class_is_cone),
	JS_CFUNC_DEF("set_material", 1, &csg_cylinder3d_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &csg_cylinder3d_class_get_material),
	JS_CFUNC_DEF("set_smooth_faces", 1, &csg_cylinder3d_class_set_smooth_faces),
	JS_CFUNC_DEF("get_smooth_faces", 0, &csg_cylinder3d_class_get_smooth_faces),
};

static int js_csg_cylinder3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CSGCylinder3D::__class_id);
	classes["CSGCylinder3D"] = CSGCylinder3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CSGCylinder3D::__class_id, &csg_cylinder3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CSGPrimitive3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CSGCylinder3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, csg_cylinder3d_class_proto_funcs, _countof(csg_cylinder3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, csg_cylinder3d_class_constructor, "CSGCylinder3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CSGCylinder3D", ctor);

	return 0;
}

JSModuleDef *_js_init_csg_cylinder3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_csg_cylinder3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CSGCylinder3D");
	return m;
}

JSModuleDef *js_init_csg_cylinder3d_module(JSContext *ctx) {
	return _js_init_csg_cylinder3d_module(ctx, "godot/classes/csg_cylinder3d");
}

void register_csg_cylinder3d() {
	js_init_csg_cylinder3d_module(ctx);
}