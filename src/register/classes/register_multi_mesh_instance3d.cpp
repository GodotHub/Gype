
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/multi_mesh.hpp>
#include <godot_cpp/classes/multi_mesh_instance3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void multi_mesh_instance3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef multi_mesh_instance3d_class_def = {
	"MultiMeshInstance3D",
	.finalizer = multi_mesh_instance3d_class_finalizer
};

static JSValue multi_mesh_instance3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MultiMeshInstance3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	MultiMeshInstance3D *multi_mesh_instance3d_class = memnew(MultiMeshInstance3D);
	if (!multi_mesh_instance3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, multi_mesh_instance3d_class);	
	return obj;
}
static JSValue multi_mesh_instance3d_class_set_multimesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MultiMeshInstance3D::set_multimesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multi_mesh_instance3d_class_get_multimesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiMeshInstance3D::get_multimesh, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry multi_mesh_instance3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_multimesh", 1, &multi_mesh_instance3d_class_set_multimesh),
	JS_CFUNC_DEF("get_multimesh", 0, &multi_mesh_instance3d_class_get_multimesh),
};

void define_multi_mesh_instance3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "multimesh"),
        JS_NewCFunction(ctx, multi_mesh_instance3d_class_get_multimesh, "get_multimesh", 0),
        JS_NewCFunction(ctx, multi_mesh_instance3d_class_set_multimesh, "set_multimesh", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_multi_mesh_instance3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&MultiMeshInstance3D::__class_id);
	classes["MultiMeshInstance3D"] = MultiMeshInstance3D::__class_id;
	class_id_list.insert(MultiMeshInstance3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MultiMeshInstance3D::__class_id, &multi_mesh_instance3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MultiMeshInstance3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, GeometryInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MultiMeshInstance3D::__class_id, proto);

	define_multi_mesh_instance3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, multi_mesh_instance3d_class_proto_funcs, _countof(multi_mesh_instance3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, multi_mesh_instance3d_class_constructor, "MultiMeshInstance3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MultiMeshInstance3D", ctor);

	return 0;
}

JSModuleDef *_js_init_multi_mesh_instance3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/geometry_instance3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_multi_mesh_instance3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MultiMeshInstance3D");
	return m;
}

JSModuleDef *js_init_multi_mesh_instance3d_module(JSContext *ctx) {
	return _js_init_multi_mesh_instance3d_module(ctx, "@godot/classes/multi_mesh_instance3d");
}

void register_multi_mesh_instance3d() {
	MultiMeshInstance3D::__init_js_class_id();
	js_init_multi_mesh_instance3d_module(ctx);
}