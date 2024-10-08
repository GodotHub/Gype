
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/csg_mesh3d.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void csg_mesh3d_class_finalizer(JSRuntime *rt, JSValue val) {
	CSGMesh3D *csg_mesh3d = static_cast<CSGMesh3D *>(JS_GetOpaque(val, CSGMesh3D::__class_id));
	if (csg_mesh3d)
		CSGMesh3D::free(nullptr, csg_mesh3d);
}

static JSClassDef csg_mesh3d_class_def = {
	"CSGMesh3D",
	.finalizer = csg_mesh3d_class_finalizer
};

static JSValue csg_mesh3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CSGMesh3D *csg_mesh3d_class;
	JSValue obj = JS_NewObjectClass(ctx, CSGMesh3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	csg_mesh3d_class = memnew(CSGMesh3D);
	if (!csg_mesh3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, csg_mesh3d_class);
	return obj;
}
static JSValue csg_mesh3d_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGMesh3D::set_mesh, CSGMesh3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_mesh3d_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CSGMesh3D::get_mesh, CSGMesh3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_mesh3d_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGMesh3D::set_material, CSGMesh3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_mesh3d_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGMesh3D::get_material, CSGMesh3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry csg_mesh3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mesh", 1, &csg_mesh3d_class_set_mesh),
	JS_CFUNC_DEF("get_mesh", 0, &csg_mesh3d_class_get_mesh),
	JS_CFUNC_DEF("set_material", 1, &csg_mesh3d_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &csg_mesh3d_class_get_material),
};

static int js_csg_mesh3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CSGMesh3D::__class_id);
	classes["CSGMesh3D"] = CSGMesh3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CSGMesh3D::__class_id, &csg_mesh3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CSGPrimitive3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CSGMesh3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, csg_mesh3d_class_proto_funcs, _countof(csg_mesh3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, csg_mesh3d_class_constructor, "CSGMesh3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CSGMesh3D", ctor);

	return 0;
}

JSModuleDef *_js_init_csg_mesh3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_csg_mesh3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CSGMesh3D");
	return m;
}

JSModuleDef *js_init_csg_mesh3d_module(JSContext *ctx) {
	return _js_init_csg_mesh3d_module(ctx, "godot/classes/csg_mesh3d");
}

void register_csg_mesh3d() {
	js_init_csg_mesh3d_module(ctx);
}