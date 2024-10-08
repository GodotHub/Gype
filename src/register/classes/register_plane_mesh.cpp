
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/plane_mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void plane_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	PlaneMesh *plane_mesh = static_cast<PlaneMesh *>(JS_GetOpaque(val, PlaneMesh::__class_id));
	if (plane_mesh)
		PlaneMesh::free(nullptr, plane_mesh);
}

static JSClassDef plane_mesh_class_def = {
	"PlaneMesh",
	.finalizer = plane_mesh_class_finalizer
};

static JSValue plane_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PlaneMesh *plane_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, PlaneMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	plane_mesh_class = memnew(PlaneMesh);
	if (!plane_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, plane_mesh_class);
	return obj;
}
static JSValue plane_mesh_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PlaneMesh::set_size, PlaneMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue plane_mesh_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PlaneMesh::get_size, PlaneMesh::__class_id, ctx, this_val, argv);
};
static JSValue plane_mesh_class_set_subdivide_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PlaneMesh::set_subdivide_width, PlaneMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue plane_mesh_class_get_subdivide_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PlaneMesh::get_subdivide_width, PlaneMesh::__class_id, ctx, this_val, argv);
};
static JSValue plane_mesh_class_set_subdivide_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PlaneMesh::set_subdivide_depth, PlaneMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue plane_mesh_class_get_subdivide_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PlaneMesh::get_subdivide_depth, PlaneMesh::__class_id, ctx, this_val, argv);
};
static JSValue plane_mesh_class_set_center_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PlaneMesh::set_center_offset, PlaneMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue plane_mesh_class_get_center_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PlaneMesh::get_center_offset, PlaneMesh::__class_id, ctx, this_val, argv);
};
static JSValue plane_mesh_class_set_orientation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PlaneMesh::set_orientation, PlaneMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue plane_mesh_class_get_orientation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PlaneMesh::get_orientation, PlaneMesh::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry plane_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &plane_mesh_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &plane_mesh_class_get_size),
	JS_CFUNC_DEF("set_subdivide_width", 1, &plane_mesh_class_set_subdivide_width),
	JS_CFUNC_DEF("get_subdivide_width", 0, &plane_mesh_class_get_subdivide_width),
	JS_CFUNC_DEF("set_subdivide_depth", 1, &plane_mesh_class_set_subdivide_depth),
	JS_CFUNC_DEF("get_subdivide_depth", 0, &plane_mesh_class_get_subdivide_depth),
	JS_CFUNC_DEF("set_center_offset", 1, &plane_mesh_class_set_center_offset),
	JS_CFUNC_DEF("get_center_offset", 0, &plane_mesh_class_get_center_offset),
	JS_CFUNC_DEF("set_orientation", 1, &plane_mesh_class_set_orientation),
	JS_CFUNC_DEF("get_orientation", 0, &plane_mesh_class_get_orientation),
};

static int js_plane_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PlaneMesh::__class_id);
	classes["PlaneMesh"] = PlaneMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PlaneMesh::__class_id, &plane_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaneMesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, plane_mesh_class_proto_funcs, _countof(plane_mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, plane_mesh_class_constructor, "PlaneMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PlaneMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_plane_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_plane_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaneMesh");
	return m;
}

JSModuleDef *js_init_plane_mesh_module(JSContext *ctx) {
	return _js_init_plane_mesh_module(ctx, "godot/classes/plane_mesh");
}

void register_plane_mesh() {
	js_init_plane_mesh_module(ctx);
}