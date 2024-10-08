
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/sphere_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void sphere_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	SphereMesh *sphere_mesh = static_cast<SphereMesh *>(JS_GetOpaque(val, SphereMesh::__class_id));
	if (sphere_mesh)
		SphereMesh::free(nullptr, sphere_mesh);
}

static JSClassDef sphere_mesh_class_def = {
	"SphereMesh",
	.finalizer = sphere_mesh_class_finalizer
};

static JSValue sphere_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SphereMesh *sphere_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, SphereMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	sphere_mesh_class = memnew(SphereMesh);
	if (!sphere_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, sphere_mesh_class);
	return obj;
}
static JSValue sphere_mesh_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SphereMesh::set_radius, SphereMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sphere_mesh_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SphereMesh::get_radius, SphereMesh::__class_id, ctx, this_val, argv);
};
static JSValue sphere_mesh_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SphereMesh::set_height, SphereMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sphere_mesh_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SphereMesh::get_height, SphereMesh::__class_id, ctx, this_val, argv);
};
static JSValue sphere_mesh_class_set_radial_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SphereMesh::set_radial_segments, SphereMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sphere_mesh_class_get_radial_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SphereMesh::get_radial_segments, SphereMesh::__class_id, ctx, this_val, argv);
};
static JSValue sphere_mesh_class_set_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SphereMesh::set_rings, SphereMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sphere_mesh_class_get_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SphereMesh::get_rings, SphereMesh::__class_id, ctx, this_val, argv);
};
static JSValue sphere_mesh_class_set_is_hemisphere(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SphereMesh::set_is_hemisphere, SphereMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sphere_mesh_class_get_is_hemisphere(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SphereMesh::get_is_hemisphere, SphereMesh::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry sphere_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &sphere_mesh_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &sphere_mesh_class_get_radius),
	JS_CFUNC_DEF("set_height", 1, &sphere_mesh_class_set_height),
	JS_CFUNC_DEF("get_height", 0, &sphere_mesh_class_get_height),
	JS_CFUNC_DEF("set_radial_segments", 1, &sphere_mesh_class_set_radial_segments),
	JS_CFUNC_DEF("get_radial_segments", 0, &sphere_mesh_class_get_radial_segments),
	JS_CFUNC_DEF("set_rings", 1, &sphere_mesh_class_set_rings),
	JS_CFUNC_DEF("get_rings", 0, &sphere_mesh_class_get_rings),
	JS_CFUNC_DEF("set_is_hemisphere", 1, &sphere_mesh_class_set_is_hemisphere),
	JS_CFUNC_DEF("get_is_hemisphere", 0, &sphere_mesh_class_get_is_hemisphere),
};

static int js_sphere_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SphereMesh::__class_id);
	classes["SphereMesh"] = SphereMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SphereMesh::__class_id, &sphere_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SphereMesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, sphere_mesh_class_proto_funcs, _countof(sphere_mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, sphere_mesh_class_constructor, "SphereMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SphereMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_sphere_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sphere_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SphereMesh");
	return m;
}

JSModuleDef *js_init_sphere_mesh_module(JSContext *ctx) {
	return _js_init_sphere_mesh_module(ctx, "godot/classes/sphere_mesh");
}

void register_sphere_mesh() {
	js_init_sphere_mesh_module(ctx);
}