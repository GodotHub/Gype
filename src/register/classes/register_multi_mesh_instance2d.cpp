
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/multi_mesh.hpp>
#include <godot_cpp/classes/multi_mesh_instance2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void multi_mesh_instance2d_class_finalizer(JSRuntime *rt, JSValue val) {
	MultiMeshInstance2D *multi_mesh_instance2d = static_cast<MultiMeshInstance2D *>(JS_GetOpaque(val, MultiMeshInstance2D::__class_id));
	if (multi_mesh_instance2d)
		MultiMeshInstance2D::free(nullptr, multi_mesh_instance2d);
}

static JSClassDef multi_mesh_instance2d_class_def = {
	"MultiMeshInstance2D",
	.finalizer = multi_mesh_instance2d_class_finalizer
};

static JSValue multi_mesh_instance2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MultiMeshInstance2D *multi_mesh_instance2d_class;
	JSValue obj = JS_NewObjectClass(ctx, MultiMeshInstance2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	multi_mesh_instance2d_class = memnew(MultiMeshInstance2D);
	if (!multi_mesh_instance2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, multi_mesh_instance2d_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue multi_mesh_instance2d_class_set_multimesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiMeshInstance2D::set_multimesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multi_mesh_instance2d_class_get_multimesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMeshInstance2D::get_multimesh, ctx, this_val, argc, argv);
};
static JSValue multi_mesh_instance2d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiMeshInstance2D::set_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multi_mesh_instance2d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMeshInstance2D::get_texture, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry multi_mesh_instance2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_multimesh", 1, &multi_mesh_instance2d_class_set_multimesh),
	JS_CFUNC_DEF("get_multimesh", 0, &multi_mesh_instance2d_class_get_multimesh),
	JS_CFUNC_DEF("set_texture", 1, &multi_mesh_instance2d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &multi_mesh_instance2d_class_get_texture),
};

void define_multi_mesh_instance2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "multimesh"),
        JS_NewCFunction(ctx, multi_mesh_instance2d_class_get_multimesh, "get_multimesh", 0),
        JS_NewCFunction(ctx, multi_mesh_instance2d_class_set_multimesh, "set_multimesh", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture"),
        JS_NewCFunction(ctx, multi_mesh_instance2d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, multi_mesh_instance2d_class_set_texture, "set_texture", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_multi_mesh_instance2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&MultiMeshInstance2D::__class_id);
	classes["MultiMeshInstance2D"] = MultiMeshInstance2D::__class_id;
	class_id_list.insert(MultiMeshInstance2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MultiMeshInstance2D::__class_id, &multi_mesh_instance2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MultiMeshInstance2D::__class_id, proto);
	define_multi_mesh_instance2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, multi_mesh_instance2d_class_proto_funcs, _countof(multi_mesh_instance2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, multi_mesh_instance2d_class_constructor, "MultiMeshInstance2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MultiMeshInstance2D", ctor);

	return 0;
}

JSModuleDef *_js_init_multi_mesh_instance2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_multi_mesh_instance2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MultiMeshInstance2D");
	return m;
}

JSModuleDef *js_init_multi_mesh_instance2d_module(JSContext *ctx) {
	return _js_init_multi_mesh_instance2d_module(ctx, "godot/classes/multi_mesh_instance2d");
}

void register_multi_mesh_instance2d() {
	MultiMeshInstance2D::__init_js_class_id();
	js_init_multi_mesh_instance2d_module(ctx);
}