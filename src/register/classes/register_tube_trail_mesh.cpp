
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/tube_trail_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tube_trail_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	TubeTrailMesh *tube_trail_mesh = static_cast<TubeTrailMesh *>(JS_GetOpaque(val, TubeTrailMesh::__class_id));
	if (tube_trail_mesh)
		TubeTrailMesh::free(nullptr, tube_trail_mesh);
}

static JSClassDef tube_trail_mesh_class_def = {
	"TubeTrailMesh",
	.finalizer = tube_trail_mesh_class_finalizer
};

static JSValue tube_trail_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TubeTrailMesh *tube_trail_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, TubeTrailMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	tube_trail_mesh_class = memnew(TubeTrailMesh);
	if (!tube_trail_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, tube_trail_mesh_class);
	return obj;
}
static JSValue tube_trail_mesh_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TubeTrailMesh::set_radius, TubeTrailMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tube_trail_mesh_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TubeTrailMesh::get_radius, TubeTrailMesh::__class_id, ctx, this_val, argv);
};
static JSValue tube_trail_mesh_class_set_radial_steps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TubeTrailMesh::set_radial_steps, TubeTrailMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tube_trail_mesh_class_get_radial_steps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TubeTrailMesh::get_radial_steps, TubeTrailMesh::__class_id, ctx, this_val, argv);
};
static JSValue tube_trail_mesh_class_set_sections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TubeTrailMesh::set_sections, TubeTrailMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tube_trail_mesh_class_get_sections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TubeTrailMesh::get_sections, TubeTrailMesh::__class_id, ctx, this_val, argv);
};
static JSValue tube_trail_mesh_class_set_section_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TubeTrailMesh::set_section_length, TubeTrailMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tube_trail_mesh_class_get_section_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TubeTrailMesh::get_section_length, TubeTrailMesh::__class_id, ctx, this_val, argv);
};
static JSValue tube_trail_mesh_class_set_section_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TubeTrailMesh::set_section_rings, TubeTrailMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tube_trail_mesh_class_get_section_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TubeTrailMesh::get_section_rings, TubeTrailMesh::__class_id, ctx, this_val, argv);
};
static JSValue tube_trail_mesh_class_set_cap_top(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TubeTrailMesh::set_cap_top, TubeTrailMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tube_trail_mesh_class_is_cap_top(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TubeTrailMesh::is_cap_top, TubeTrailMesh::__class_id, ctx, this_val, argv);
};
static JSValue tube_trail_mesh_class_set_cap_bottom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TubeTrailMesh::set_cap_bottom, TubeTrailMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tube_trail_mesh_class_is_cap_bottom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TubeTrailMesh::is_cap_bottom, TubeTrailMesh::__class_id, ctx, this_val, argv);
};
static JSValue tube_trail_mesh_class_set_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TubeTrailMesh::set_curve, TubeTrailMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tube_trail_mesh_class_get_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TubeTrailMesh::get_curve, TubeTrailMesh::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry tube_trail_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &tube_trail_mesh_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &tube_trail_mesh_class_get_radius),
	JS_CFUNC_DEF("set_radial_steps", 1, &tube_trail_mesh_class_set_radial_steps),
	JS_CFUNC_DEF("get_radial_steps", 0, &tube_trail_mesh_class_get_radial_steps),
	JS_CFUNC_DEF("set_sections", 1, &tube_trail_mesh_class_set_sections),
	JS_CFUNC_DEF("get_sections", 0, &tube_trail_mesh_class_get_sections),
	JS_CFUNC_DEF("set_section_length", 1, &tube_trail_mesh_class_set_section_length),
	JS_CFUNC_DEF("get_section_length", 0, &tube_trail_mesh_class_get_section_length),
	JS_CFUNC_DEF("set_section_rings", 1, &tube_trail_mesh_class_set_section_rings),
	JS_CFUNC_DEF("get_section_rings", 0, &tube_trail_mesh_class_get_section_rings),
	JS_CFUNC_DEF("set_cap_top", 1, &tube_trail_mesh_class_set_cap_top),
	JS_CFUNC_DEF("is_cap_top", 0, &tube_trail_mesh_class_is_cap_top),
	JS_CFUNC_DEF("set_cap_bottom", 1, &tube_trail_mesh_class_set_cap_bottom),
	JS_CFUNC_DEF("is_cap_bottom", 0, &tube_trail_mesh_class_is_cap_bottom),
	JS_CFUNC_DEF("set_curve", 1, &tube_trail_mesh_class_set_curve),
	JS_CFUNC_DEF("get_curve", 0, &tube_trail_mesh_class_get_curve),
};

static int js_tube_trail_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TubeTrailMesh::__class_id);
	classes["TubeTrailMesh"] = TubeTrailMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TubeTrailMesh::__class_id, &tube_trail_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TubeTrailMesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, tube_trail_mesh_class_proto_funcs, _countof(tube_trail_mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, tube_trail_mesh_class_constructor, "TubeTrailMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TubeTrailMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_tube_trail_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tube_trail_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TubeTrailMesh");
	return m;
}

JSModuleDef *js_init_tube_trail_mesh_module(JSContext *ctx) {
	return _js_init_tube_trail_mesh_module(ctx, "godot/classes/tube_trail_mesh");
}

void register_tube_trail_mesh() {
	js_init_tube_trail_mesh_module(ctx);
}