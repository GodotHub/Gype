
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/sphere_mesh.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void sphere_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef sphere_mesh_class_def = {
	"SphereMesh",
	.finalizer = sphere_mesh_class_finalizer
};

static JSValue sphere_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SphereMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	SphereMesh *sphere_mesh_class = memnew(SphereMesh);
	if (!sphere_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, sphere_mesh_class);
	return obj;
}
static JSValue sphere_mesh_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&SphereMesh::set_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sphere_mesh_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SphereMesh::get_radius, ctx, this_val, argc, argv);
};
static JSValue sphere_mesh_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&SphereMesh::set_height, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sphere_mesh_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SphereMesh::get_height, ctx, this_val, argc, argv);
};
static JSValue sphere_mesh_class_set_radial_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&SphereMesh::set_radial_segments, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sphere_mesh_class_get_radial_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SphereMesh::get_radial_segments, ctx, this_val, argc, argv);
};
static JSValue sphere_mesh_class_set_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&SphereMesh::set_rings, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sphere_mesh_class_get_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SphereMesh::get_rings, ctx, this_val, argc, argv);
};
static JSValue sphere_mesh_class_set_is_hemisphere(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&SphereMesh::set_is_hemisphere, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sphere_mesh_class_get_is_hemisphere(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SphereMesh::get_is_hemisphere, ctx, this_val, argc, argv);
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

void define_sphere_mesh_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "radius"),
			JS_NewCFunction(ctx, sphere_mesh_class_get_radius, "get_radius", 0),
			JS_NewCFunction(ctx, sphere_mesh_class_set_radius, "set_radius", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "height"),
			JS_NewCFunction(ctx, sphere_mesh_class_get_height, "get_height", 0),
			JS_NewCFunction(ctx, sphere_mesh_class_set_height, "set_height", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "radial_segments"),
			JS_NewCFunction(ctx, sphere_mesh_class_get_radial_segments, "get_radial_segments", 0),
			JS_NewCFunction(ctx, sphere_mesh_class_set_radial_segments, "set_radial_segments", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "rings"),
			JS_NewCFunction(ctx, sphere_mesh_class_get_rings, "get_rings", 0),
			JS_NewCFunction(ctx, sphere_mesh_class_set_rings, "set_rings", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "is_hemisphere"),
			JS_NewCFunction(ctx, sphere_mesh_class_get_is_hemisphere, "get_is_hemisphere", 0),
			JS_NewCFunction(ctx, sphere_mesh_class_set_is_hemisphere, "set_is_hemisphere", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_sphere_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SphereMesh::__class_id);
	classes["SphereMesh"] = SphereMesh::__class_id;
	class_id_list.insert(SphereMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SphereMesh::__class_id, &sphere_mesh_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SphereMesh::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SphereMesh::__class_id, proto);

	define_sphere_mesh_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, sphere_mesh_class_proto_funcs, _countof(sphere_mesh_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, sphere_mesh_class_constructor, "SphereMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SphereMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_sphere_mesh_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/primitive_mesh';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	SphereMesh::__init_js_class_id();
	js_init_sphere_mesh_module(ctx);
}