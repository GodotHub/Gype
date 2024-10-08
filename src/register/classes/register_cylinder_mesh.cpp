
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/cylinder_mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void cylinder_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	CylinderMesh *cylinder_mesh = static_cast<CylinderMesh *>(JS_GetOpaque(val, CylinderMesh::__class_id));
	if (cylinder_mesh)
		CylinderMesh::free(nullptr, cylinder_mesh);
}

static JSClassDef cylinder_mesh_class_def = {
	"CylinderMesh",
	.finalizer = cylinder_mesh_class_finalizer
};

static JSValue cylinder_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CylinderMesh *cylinder_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, CylinderMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	cylinder_mesh_class = memnew(CylinderMesh);
	if (!cylinder_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, cylinder_mesh_class);
	return obj;
}
static JSValue cylinder_mesh_class_set_top_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CylinderMesh::set_top_radius, CylinderMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_mesh_class_get_top_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CylinderMesh::get_top_radius, CylinderMesh::__class_id, ctx, this_val, argv);
};
static JSValue cylinder_mesh_class_set_bottom_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CylinderMesh::set_bottom_radius, CylinderMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_mesh_class_get_bottom_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CylinderMesh::get_bottom_radius, CylinderMesh::__class_id, ctx, this_val, argv);
};
static JSValue cylinder_mesh_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CylinderMesh::set_height, CylinderMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_mesh_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CylinderMesh::get_height, CylinderMesh::__class_id, ctx, this_val, argv);
};
static JSValue cylinder_mesh_class_set_radial_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CylinderMesh::set_radial_segments, CylinderMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_mesh_class_get_radial_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CylinderMesh::get_radial_segments, CylinderMesh::__class_id, ctx, this_val, argv);
};
static JSValue cylinder_mesh_class_set_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CylinderMesh::set_rings, CylinderMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_mesh_class_get_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CylinderMesh::get_rings, CylinderMesh::__class_id, ctx, this_val, argv);
};
static JSValue cylinder_mesh_class_set_cap_top(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CylinderMesh::set_cap_top, CylinderMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_mesh_class_is_cap_top(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CylinderMesh::is_cap_top, CylinderMesh::__class_id, ctx, this_val, argv);
};
static JSValue cylinder_mesh_class_set_cap_bottom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CylinderMesh::set_cap_bottom, CylinderMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_mesh_class_is_cap_bottom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CylinderMesh::is_cap_bottom, CylinderMesh::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry cylinder_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_top_radius", 1, &cylinder_mesh_class_set_top_radius),
	JS_CFUNC_DEF("get_top_radius", 0, &cylinder_mesh_class_get_top_radius),
	JS_CFUNC_DEF("set_bottom_radius", 1, &cylinder_mesh_class_set_bottom_radius),
	JS_CFUNC_DEF("get_bottom_radius", 0, &cylinder_mesh_class_get_bottom_radius),
	JS_CFUNC_DEF("set_height", 1, &cylinder_mesh_class_set_height),
	JS_CFUNC_DEF("get_height", 0, &cylinder_mesh_class_get_height),
	JS_CFUNC_DEF("set_radial_segments", 1, &cylinder_mesh_class_set_radial_segments),
	JS_CFUNC_DEF("get_radial_segments", 0, &cylinder_mesh_class_get_radial_segments),
	JS_CFUNC_DEF("set_rings", 1, &cylinder_mesh_class_set_rings),
	JS_CFUNC_DEF("get_rings", 0, &cylinder_mesh_class_get_rings),
	JS_CFUNC_DEF("set_cap_top", 1, &cylinder_mesh_class_set_cap_top),
	JS_CFUNC_DEF("is_cap_top", 0, &cylinder_mesh_class_is_cap_top),
	JS_CFUNC_DEF("set_cap_bottom", 1, &cylinder_mesh_class_set_cap_bottom),
	JS_CFUNC_DEF("is_cap_bottom", 0, &cylinder_mesh_class_is_cap_bottom),
};

static int js_cylinder_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CylinderMesh::__class_id);
	classes["CylinderMesh"] = CylinderMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CylinderMesh::__class_id, &cylinder_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CylinderMesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, cylinder_mesh_class_proto_funcs, _countof(cylinder_mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, cylinder_mesh_class_constructor, "CylinderMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CylinderMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_cylinder_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_cylinder_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CylinderMesh");
	return m;
}

JSModuleDef *js_init_cylinder_mesh_module(JSContext *ctx) {
	return _js_init_cylinder_mesh_module(ctx, "godot/classes/cylinder_mesh");
}

void register_cylinder_mesh() {
	js_init_cylinder_mesh_module(ctx);
}