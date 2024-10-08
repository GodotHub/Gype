
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/capsule_mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void capsule_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	CapsuleMesh *capsule_mesh = static_cast<CapsuleMesh *>(JS_GetOpaque(val, CapsuleMesh::__class_id));
	if (capsule_mesh)
		CapsuleMesh::free(nullptr, capsule_mesh);
}

static JSClassDef capsule_mesh_class_def = {
	"CapsuleMesh",
	.finalizer = capsule_mesh_class_finalizer
};

static JSValue capsule_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CapsuleMesh *capsule_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, CapsuleMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	capsule_mesh_class = memnew(CapsuleMesh);
	if (!capsule_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, capsule_mesh_class);
	return obj;
}
static JSValue capsule_mesh_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CapsuleMesh::set_radius, CapsuleMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue capsule_mesh_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CapsuleMesh::get_radius, CapsuleMesh::__class_id, ctx, this_val, argv);
};
static JSValue capsule_mesh_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CapsuleMesh::set_height, CapsuleMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue capsule_mesh_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CapsuleMesh::get_height, CapsuleMesh::__class_id, ctx, this_val, argv);
};
static JSValue capsule_mesh_class_set_radial_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CapsuleMesh::set_radial_segments, CapsuleMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue capsule_mesh_class_get_radial_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CapsuleMesh::get_radial_segments, CapsuleMesh::__class_id, ctx, this_val, argv);
};
static JSValue capsule_mesh_class_set_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CapsuleMesh::set_rings, CapsuleMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue capsule_mesh_class_get_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CapsuleMesh::get_rings, CapsuleMesh::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry capsule_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &capsule_mesh_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &capsule_mesh_class_get_radius),
	JS_CFUNC_DEF("set_height", 1, &capsule_mesh_class_set_height),
	JS_CFUNC_DEF("get_height", 0, &capsule_mesh_class_get_height),
	JS_CFUNC_DEF("set_radial_segments", 1, &capsule_mesh_class_set_radial_segments),
	JS_CFUNC_DEF("get_radial_segments", 0, &capsule_mesh_class_get_radial_segments),
	JS_CFUNC_DEF("set_rings", 1, &capsule_mesh_class_set_rings),
	JS_CFUNC_DEF("get_rings", 0, &capsule_mesh_class_get_rings),
};

static int js_capsule_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CapsuleMesh::__class_id);
	classes["CapsuleMesh"] = CapsuleMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CapsuleMesh::__class_id, &capsule_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CapsuleMesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, capsule_mesh_class_proto_funcs, _countof(capsule_mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, capsule_mesh_class_constructor, "CapsuleMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CapsuleMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_capsule_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_capsule_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CapsuleMesh");
	return m;
}

JSModuleDef *js_init_capsule_mesh_module(JSContext *ctx) {
	return _js_init_capsule_mesh_module(ctx, "godot/classes/capsule_mesh");
}

void register_capsule_mesh() {
	js_init_capsule_mesh_module(ctx);
}