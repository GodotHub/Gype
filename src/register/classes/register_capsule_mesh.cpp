
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/capsule_mesh.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void capsule_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef capsule_mesh_class_def = {
	"CapsuleMesh",
	.finalizer = capsule_mesh_class_finalizer
};

static JSValue capsule_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CapsuleMesh::__class_id);
	if (JS_IsException(obj))
		return obj;

	CapsuleMesh *capsule_mesh_class;
	if (argc == 1) 
		capsule_mesh_class = static_cast<CapsuleMesh *>(Variant(*argv).operator Object *());
	else 
		capsule_mesh_class = memnew(CapsuleMesh);
	if (!capsule_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, capsule_mesh_class);
	return obj;
}
static JSValue capsule_mesh_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CapsuleMesh::set_radius, ctx, this_val, argc, argv);
};
static JSValue capsule_mesh_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CapsuleMesh::get_radius, ctx, this_val, argc, argv);
};
static JSValue capsule_mesh_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CapsuleMesh::set_height, ctx, this_val, argc, argv);
};
static JSValue capsule_mesh_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CapsuleMesh::get_height, ctx, this_val, argc, argv);
};
static JSValue capsule_mesh_class_set_radial_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CapsuleMesh::set_radial_segments, ctx, this_val, argc, argv);
};
static JSValue capsule_mesh_class_get_radial_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CapsuleMesh::get_radial_segments, ctx, this_val, argc, argv);
};
static JSValue capsule_mesh_class_set_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CapsuleMesh::set_rings, ctx, this_val, argc, argv);
};
static JSValue capsule_mesh_class_get_rings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CapsuleMesh::get_rings, ctx, this_val, argc, argv);
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

static void define_capsule_mesh_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "radius"),
        JS_NewCFunction(ctx, capsule_mesh_class_get_radius, "get_radius", 0),
        JS_NewCFunction(ctx, capsule_mesh_class_set_radius, "set_radius", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "height"),
        JS_NewCFunction(ctx, capsule_mesh_class_get_height, "get_height", 0),
        JS_NewCFunction(ctx, capsule_mesh_class_set_height, "set_height", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "radial_segments"),
        JS_NewCFunction(ctx, capsule_mesh_class_get_radial_segments, "get_radial_segments", 0),
        JS_NewCFunction(ctx, capsule_mesh_class_set_radial_segments, "set_radial_segments", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "rings"),
        JS_NewCFunction(ctx, capsule_mesh_class_get_rings, "get_rings", 0),
        JS_NewCFunction(ctx, capsule_mesh_class_set_rings, "set_rings", 1),
        JS_PROP_GETSET
    );
	
}

static void define_capsule_mesh_enum(JSContext *ctx, JSValue proto) {
}

static int js_capsule_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["CapsuleMesh"] = CapsuleMesh::__class_id;
	class_id_list.insert(CapsuleMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CapsuleMesh::__class_id, &capsule_mesh_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CapsuleMesh::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CapsuleMesh::__class_id, proto);

	define_capsule_mesh_property(ctx, proto);
	define_capsule_mesh_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, capsule_mesh_class_proto_funcs, _countof(capsule_mesh_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, capsule_mesh_class_constructor, "CapsuleMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CapsuleMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_capsule_mesh_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/primitive_mesh';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_capsule_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CapsuleMesh");
	return m;
}

JSModuleDef *js_init_capsule_mesh_module(JSContext *ctx) {
	return _js_init_capsule_mesh_module(ctx, "@godot/classes/capsule_mesh");
}

void register_capsule_mesh() {
	CapsuleMesh::__init_js_class_id();
	js_init_capsule_mesh_module(ctx);
}