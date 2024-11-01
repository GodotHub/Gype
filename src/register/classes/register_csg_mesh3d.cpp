
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/csg_mesh3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void csg_mesh3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef csg_mesh3d_class_def = {
	"CSGMesh3D",
	.finalizer = csg_mesh3d_class_finalizer
};

static JSValue csg_mesh3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CSGMesh3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	CSGMesh3D *csg_mesh3d_class;
	if (argc == 1) 
		csg_mesh3d_class = static_cast<CSGMesh3D *>(Variant(*argv).operator Object *());
	else 
		csg_mesh3d_class = memnew(CSGMesh3D);
	if (!csg_mesh3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, csg_mesh3d_class);
	return obj;
}
static JSValue csg_mesh3d_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGMesh3D::set_mesh, ctx, this_val, argc, argv);
};
static JSValue csg_mesh3d_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CSGMesh3D::get_mesh, ctx, this_val, argc, argv);
};
static JSValue csg_mesh3d_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGMesh3D::set_material, ctx, this_val, argc, argv);
};
static JSValue csg_mesh3d_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGMesh3D::get_material, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry csg_mesh3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mesh", 1, &csg_mesh3d_class_set_mesh),
	JS_CFUNC_DEF("get_mesh", 0, &csg_mesh3d_class_get_mesh),
	JS_CFUNC_DEF("set_material", 1, &csg_mesh3d_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &csg_mesh3d_class_get_material),
};

static void define_csg_mesh3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mesh"),
        JS_NewCFunction(ctx, csg_mesh3d_class_get_mesh, "get_mesh", 0),
        JS_NewCFunction(ctx, csg_mesh3d_class_set_mesh, "set_mesh", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "material"),
        JS_NewCFunction(ctx, csg_mesh3d_class_get_material, "get_material", 0),
        JS_NewCFunction(ctx, csg_mesh3d_class_set_material, "set_material", 1),
        JS_PROP_GETSET
    );
	
}

static void define_csg_mesh3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_csg_mesh3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["CSGMesh3D"] = CSGMesh3D::__class_id;
	class_id_list.insert(CSGMesh3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CSGMesh3D::__class_id, &csg_mesh3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CSGMesh3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, CSGPrimitive3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CSGMesh3D::__class_id, proto);

	define_csg_mesh3d_property(ctx, proto);
	define_csg_mesh3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, csg_mesh3d_class_proto_funcs, _countof(csg_mesh3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, csg_mesh3d_class_constructor, "CSGMesh3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CSGMesh3D", ctor);

	return 0;
}

JSModuleDef *_js_init_csg_mesh3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/csg_primitive3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_csg_mesh3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CSGMesh3D");
	return m;
}

JSModuleDef *js_init_csg_mesh3d_module(JSContext *ctx) {
	return _js_init_csg_mesh3d_module(ctx, "@godot/classes/csg_mesh3d");
}

void register_csg_mesh3d() {
	CSGMesh3D::__init_js_class_id();
	js_init_csg_mesh3d_module(ctx);
}