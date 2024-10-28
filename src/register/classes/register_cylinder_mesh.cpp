
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/cylinder_mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void cylinder_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef cylinder_mesh_class_def = {
	"CylinderMesh",
	.finalizer = cylinder_mesh_class_finalizer
};

static JSValue cylinder_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CylinderMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	CylinderMesh *cylinder_mesh_class = memnew(CylinderMesh);
	if (!cylinder_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, cylinder_mesh_class);
	return obj;
}
static JSValue cylinder_mesh_class_set_top_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&CylinderMesh::set_top_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_mesh_class_get_top_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CylinderMesh::get_top_radius, ctx, this_val, argc, argv);
};
static JSValue cylinder_mesh_class_set_bottom_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&CylinderMesh::set_bottom_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_mesh_class_get_bottom_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CylinderMesh::get_bottom_radius, ctx, this_val, argc, argv);
};
static JSValue cylinder_mesh_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&CylinderMesh::set_height, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_mesh_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CylinderMesh::get_height, ctx, this_val, argc, argv);
};
static JSValue cylinder_mesh_class_set_radial_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&CylinderMesh::set_radial_segments, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_mesh_class_get_radial_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CylinderMesh::get_radial_segments, ctx, this_val, argc, argv);
};
static JSValue cylinder_mesh_class_set_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&CylinderMesh::set_rings, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_mesh_class_get_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CylinderMesh::get_rings, ctx, this_val, argc, argv);
};
static JSValue cylinder_mesh_class_set_cap_top(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&CylinderMesh::set_cap_top, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_mesh_class_is_cap_top(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CylinderMesh::is_cap_top, ctx, this_val, argc, argv);
};
static JSValue cylinder_mesh_class_set_cap_bottom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&CylinderMesh::set_cap_bottom, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_mesh_class_is_cap_bottom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CylinderMesh::is_cap_bottom, ctx, this_val, argc, argv);
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

void define_cylinder_mesh_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "top_radius"),
			JS_NewCFunction(ctx, cylinder_mesh_class_get_top_radius, "get_top_radius", 0),
			JS_NewCFunction(ctx, cylinder_mesh_class_set_top_radius, "set_top_radius", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "bottom_radius"),
			JS_NewCFunction(ctx, cylinder_mesh_class_get_bottom_radius, "get_bottom_radius", 0),
			JS_NewCFunction(ctx, cylinder_mesh_class_set_bottom_radius, "set_bottom_radius", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "height"),
			JS_NewCFunction(ctx, cylinder_mesh_class_get_height, "get_height", 0),
			JS_NewCFunction(ctx, cylinder_mesh_class_set_height, "set_height", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "radial_segments"),
			JS_NewCFunction(ctx, cylinder_mesh_class_get_radial_segments, "get_radial_segments", 0),
			JS_NewCFunction(ctx, cylinder_mesh_class_set_radial_segments, "set_radial_segments", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "rings"),
			JS_NewCFunction(ctx, cylinder_mesh_class_get_rings, "get_rings", 0),
			JS_NewCFunction(ctx, cylinder_mesh_class_set_rings, "set_rings", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "cap_top"),
			JS_NewCFunction(ctx, cylinder_mesh_class_is_cap_top, "is_cap_top", 0),
			JS_NewCFunction(ctx, cylinder_mesh_class_set_cap_top, "set_cap_top", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "cap_bottom"),
			JS_NewCFunction(ctx, cylinder_mesh_class_is_cap_bottom, "is_cap_bottom", 0),
			JS_NewCFunction(ctx, cylinder_mesh_class_set_cap_bottom, "set_cap_bottom", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_cylinder_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CylinderMesh::__class_id);
	classes["CylinderMesh"] = CylinderMesh::__class_id;
	class_id_list.insert(CylinderMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CylinderMesh::__class_id, &cylinder_mesh_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CylinderMesh::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CylinderMesh::__class_id, proto);

	define_cylinder_mesh_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, cylinder_mesh_class_proto_funcs, _countof(cylinder_mesh_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, cylinder_mesh_class_constructor, "CylinderMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CylinderMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_cylinder_mesh_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/primitive_mesh';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	CylinderMesh::__init_js_class_id();
	js_init_cylinder_mesh_module(ctx);
}