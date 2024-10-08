
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/torus_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void torus_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	TorusMesh *torus_mesh = static_cast<TorusMesh *>(JS_GetOpaque(val, TorusMesh::__class_id));
	if (torus_mesh)
		TorusMesh::free(nullptr, torus_mesh);
}

static JSClassDef torus_mesh_class_def = {
	"TorusMesh",
	.finalizer = torus_mesh_class_finalizer
};

static JSValue torus_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TorusMesh *torus_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, TorusMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	torus_mesh_class = memnew(TorusMesh);
	if (!torus_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, torus_mesh_class);
	return obj;
}
static JSValue torus_mesh_class_set_inner_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TorusMesh::set_inner_radius, TorusMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue torus_mesh_class_get_inner_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TorusMesh::get_inner_radius, TorusMesh::__class_id, ctx, this_val, argv);
};
static JSValue torus_mesh_class_set_outer_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TorusMesh::set_outer_radius, TorusMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue torus_mesh_class_get_outer_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TorusMesh::get_outer_radius, TorusMesh::__class_id, ctx, this_val, argv);
};
static JSValue torus_mesh_class_set_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TorusMesh::set_rings, TorusMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue torus_mesh_class_get_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TorusMesh::get_rings, TorusMesh::__class_id, ctx, this_val, argv);
};
static JSValue torus_mesh_class_set_ring_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TorusMesh::set_ring_segments, TorusMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue torus_mesh_class_get_ring_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TorusMesh::get_ring_segments, TorusMesh::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry torus_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_inner_radius", 1, &torus_mesh_class_set_inner_radius),
	JS_CFUNC_DEF("get_inner_radius", 0, &torus_mesh_class_get_inner_radius),
	JS_CFUNC_DEF("set_outer_radius", 1, &torus_mesh_class_set_outer_radius),
	JS_CFUNC_DEF("get_outer_radius", 0, &torus_mesh_class_get_outer_radius),
	JS_CFUNC_DEF("set_rings", 1, &torus_mesh_class_set_rings),
	JS_CFUNC_DEF("get_rings", 0, &torus_mesh_class_get_rings),
	JS_CFUNC_DEF("set_ring_segments", 1, &torus_mesh_class_set_ring_segments),
	JS_CFUNC_DEF("get_ring_segments", 0, &torus_mesh_class_get_ring_segments),
};

static int js_torus_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TorusMesh::__class_id);
	classes["TorusMesh"] = TorusMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TorusMesh::__class_id, &torus_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TorusMesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, torus_mesh_class_proto_funcs, _countof(torus_mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, torus_mesh_class_constructor, "TorusMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TorusMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_torus_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_torus_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TorusMesh");
	return m;
}

JSModuleDef *js_init_torus_mesh_module(JSContext *ctx) {
	return _js_init_torus_mesh_module(ctx, "godot/classes/torus_mesh");
}

void register_torus_mesh() {
	js_init_torus_mesh_module(ctx);
}