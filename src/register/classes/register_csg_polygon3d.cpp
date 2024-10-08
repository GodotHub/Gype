
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/csg_polygon3d.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void csg_polygon3d_class_finalizer(JSRuntime *rt, JSValue val) {
	CSGPolygon3D *csg_polygon3d = static_cast<CSGPolygon3D *>(JS_GetOpaque(val, CSGPolygon3D::__class_id));
	if (csg_polygon3d)
		CSGPolygon3D::free(nullptr, csg_polygon3d);
}

static JSClassDef csg_polygon3d_class_def = {
	"CSGPolygon3D",
	.finalizer = csg_polygon3d_class_finalizer
};

static JSValue csg_polygon3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CSGPolygon3D *csg_polygon3d_class;
	JSValue obj = JS_NewObjectClass(ctx, CSGPolygon3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	csg_polygon3d_class = memnew(CSGPolygon3D);
	if (!csg_polygon3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, csg_polygon3d_class);
	return obj;
}
static JSValue csg_polygon3d_class_set_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_polygon, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_get_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::get_polygon, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_mode, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_get_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::get_mode, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_depth, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_get_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::get_depth, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_spin_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_spin_degrees, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_get_spin_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::get_spin_degrees, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_spin_sides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_spin_sides, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_get_spin_sides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::get_spin_sides, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_path_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_path_node, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_get_path_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::get_path_node, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_path_interval_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_path_interval_type, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_get_path_interval_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::get_path_interval_type, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_path_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_path_interval, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_get_path_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::get_path_interval, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_path_simplify_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_path_simplify_angle, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_get_path_simplify_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::get_path_simplify_angle, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_path_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_path_rotation, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_get_path_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::get_path_rotation, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_path_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_path_local, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_is_path_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::is_path_local, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_path_continuous_u(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_path_continuous_u, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_is_path_continuous_u(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::is_path_continuous_u, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_path_u_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_path_u_distance, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_get_path_u_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::get_path_u_distance, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_path_joined(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_path_joined, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_is_path_joined(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::is_path_joined, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_material, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::get_material, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_polygon3d_class_set_smooth_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPolygon3D::set_smooth_faces, CSGPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_polygon3d_class_get_smooth_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGPolygon3D::get_smooth_faces, CSGPolygon3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry csg_polygon3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_polygon", 1, &csg_polygon3d_class_set_polygon),
	JS_CFUNC_DEF("get_polygon", 0, &csg_polygon3d_class_get_polygon),
	JS_CFUNC_DEF("set_mode", 1, &csg_polygon3d_class_set_mode),
	JS_CFUNC_DEF("get_mode", 0, &csg_polygon3d_class_get_mode),
	JS_CFUNC_DEF("set_depth", 1, &csg_polygon3d_class_set_depth),
	JS_CFUNC_DEF("get_depth", 0, &csg_polygon3d_class_get_depth),
	JS_CFUNC_DEF("set_spin_degrees", 1, &csg_polygon3d_class_set_spin_degrees),
	JS_CFUNC_DEF("get_spin_degrees", 0, &csg_polygon3d_class_get_spin_degrees),
	JS_CFUNC_DEF("set_spin_sides", 1, &csg_polygon3d_class_set_spin_sides),
	JS_CFUNC_DEF("get_spin_sides", 0, &csg_polygon3d_class_get_spin_sides),
	JS_CFUNC_DEF("set_path_node", 1, &csg_polygon3d_class_set_path_node),
	JS_CFUNC_DEF("get_path_node", 0, &csg_polygon3d_class_get_path_node),
	JS_CFUNC_DEF("set_path_interval_type", 1, &csg_polygon3d_class_set_path_interval_type),
	JS_CFUNC_DEF("get_path_interval_type", 0, &csg_polygon3d_class_get_path_interval_type),
	JS_CFUNC_DEF("set_path_interval", 1, &csg_polygon3d_class_set_path_interval),
	JS_CFUNC_DEF("get_path_interval", 0, &csg_polygon3d_class_get_path_interval),
	JS_CFUNC_DEF("set_path_simplify_angle", 1, &csg_polygon3d_class_set_path_simplify_angle),
	JS_CFUNC_DEF("get_path_simplify_angle", 0, &csg_polygon3d_class_get_path_simplify_angle),
	JS_CFUNC_DEF("set_path_rotation", 1, &csg_polygon3d_class_set_path_rotation),
	JS_CFUNC_DEF("get_path_rotation", 0, &csg_polygon3d_class_get_path_rotation),
	JS_CFUNC_DEF("set_path_local", 1, &csg_polygon3d_class_set_path_local),
	JS_CFUNC_DEF("is_path_local", 0, &csg_polygon3d_class_is_path_local),
	JS_CFUNC_DEF("set_path_continuous_u", 1, &csg_polygon3d_class_set_path_continuous_u),
	JS_CFUNC_DEF("is_path_continuous_u", 0, &csg_polygon3d_class_is_path_continuous_u),
	JS_CFUNC_DEF("set_path_u_distance", 1, &csg_polygon3d_class_set_path_u_distance),
	JS_CFUNC_DEF("get_path_u_distance", 0, &csg_polygon3d_class_get_path_u_distance),
	JS_CFUNC_DEF("set_path_joined", 1, &csg_polygon3d_class_set_path_joined),
	JS_CFUNC_DEF("is_path_joined", 0, &csg_polygon3d_class_is_path_joined),
	JS_CFUNC_DEF("set_material", 1, &csg_polygon3d_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &csg_polygon3d_class_get_material),
	JS_CFUNC_DEF("set_smooth_faces", 1, &csg_polygon3d_class_set_smooth_faces),
	JS_CFUNC_DEF("get_smooth_faces", 0, &csg_polygon3d_class_get_smooth_faces),
};

static int js_csg_polygon3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CSGPolygon3D::__class_id);
	classes["CSGPolygon3D"] = CSGPolygon3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CSGPolygon3D::__class_id, &csg_polygon3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CSGPrimitive3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CSGPolygon3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, csg_polygon3d_class_proto_funcs, _countof(csg_polygon3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, csg_polygon3d_class_constructor, "CSGPolygon3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CSGPolygon3D", ctor);

	return 0;
}

JSModuleDef *_js_init_csg_polygon3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_csg_polygon3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CSGPolygon3D");
	return m;
}

JSModuleDef *js_init_csg_polygon3d_module(JSContext *ctx) {
	return _js_init_csg_polygon3d_module(ctx, "godot/classes/csg_polygon3d");
}

void register_csg_polygon3d() {
	js_init_csg_polygon3d_module(ctx);
}