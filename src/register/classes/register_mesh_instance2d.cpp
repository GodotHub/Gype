
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/mesh_instance2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void mesh_instance2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef mesh_instance2d_class_def = {
	"MeshInstance2D",
	.finalizer = mesh_instance2d_class_finalizer
};

static JSValue mesh_instance2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MeshInstance2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	MeshInstance2D *mesh_instance2d_class;
	if (argc == 1) 
		mesh_instance2d_class = static_cast<MeshInstance2D *>(Variant(*argv).operator Object *());
	else 
		mesh_instance2d_class = memnew(MeshInstance2D);
	if (!mesh_instance2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, mesh_instance2d_class);
	return obj;
}
static JSValue mesh_instance2d_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshInstance2D::set_mesh, ctx, this_val, argc, argv);
};
static JSValue mesh_instance2d_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshInstance2D::get_mesh, ctx, this_val, argc, argv);
};
static JSValue mesh_instance2d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshInstance2D::set_texture, ctx, this_val, argc, argv);
};
static JSValue mesh_instance2d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshInstance2D::get_texture, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry mesh_instance2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mesh", 1, &mesh_instance2d_class_set_mesh),
	JS_CFUNC_DEF("get_mesh", 0, &mesh_instance2d_class_get_mesh),
	JS_CFUNC_DEF("set_texture", 1, &mesh_instance2d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &mesh_instance2d_class_get_texture),
};
static JSValue mesh_instance2d_class_get_texture_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	MeshInstance2D *opaque = reinterpret_cast<MeshInstance2D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "texture_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "texture_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "texture_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_mesh_instance2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mesh"),
        JS_NewCFunction(ctx, mesh_instance2d_class_get_mesh, "get_mesh", 0),
        JS_NewCFunction(ctx, mesh_instance2d_class_set_mesh, "set_mesh", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "texture"),
        JS_NewCFunction(ctx, mesh_instance2d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, mesh_instance2d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "texture_changed"),
		JS_NewCFunction(ctx, mesh_instance2d_class_get_texture_changed_signal, "get_texture_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_mesh_instance2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_mesh_instance2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["MeshInstance2D"] = MeshInstance2D::__class_id;
	class_id_list.insert(MeshInstance2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MeshInstance2D::__class_id, &mesh_instance2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MeshInstance2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MeshInstance2D::__class_id, proto);

	define_mesh_instance2d_property(ctx, proto);
	define_mesh_instance2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, mesh_instance2d_class_proto_funcs, _countof(mesh_instance2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, mesh_instance2d_class_constructor, "MeshInstance2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MeshInstance2D", ctor);

	return 0;
}

JSModuleDef *_js_init_mesh_instance2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_mesh_instance2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MeshInstance2D");
	return m;
}

JSModuleDef *js_init_mesh_instance2d_module(JSContext *ctx) {
	return _js_init_mesh_instance2d_module(ctx, "@godot/classes/mesh_instance2d");
}

void register_mesh_instance2d() {
	MeshInstance2D::__init_js_class_id();
	js_init_mesh_instance2d_module(ctx);
}