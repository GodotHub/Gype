
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/node3d_gizmo.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void node3d_gizmo_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef node3d_gizmo_class_def = {
	"Node3DGizmo",
	.finalizer = node3d_gizmo_class_finalizer
};

static JSValue node3d_gizmo_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Node3DGizmo::__class_id);
	if (JS_IsException(obj))
		return obj;

	Node3DGizmo *node3d_gizmo_class;
	if (argc == 1) 
		node3d_gizmo_class = static_cast<Node3DGizmo *>(Variant(*argv).operator Object *());
	else 
		node3d_gizmo_class = memnew(Node3DGizmo);
	if (!node3d_gizmo_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, node3d_gizmo_class);
	return obj;
}

static void define_node3d_gizmo_property(JSContext *ctx, JSValue proto) {
	
}

static void define_node3d_gizmo_enum(JSContext *ctx, JSValue proto) {
}

static int js_node3d_gizmo_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Node3DGizmo"] = Node3DGizmo::__class_id;
	class_id_list.insert(Node3DGizmo::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Node3DGizmo::__class_id, &node3d_gizmo_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Node3DGizmo::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Node3DGizmo::__class_id, proto);

	define_node3d_gizmo_property(ctx, proto);
	define_node3d_gizmo_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, node3d_gizmo_class_constructor, "Node3DGizmo", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Node3DGizmo", ctor);

	return 0;
}

JSModuleDef *_js_init_node3d_gizmo_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_node3d_gizmo_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Node3DGizmo");
	return m;
}

JSModuleDef *js_init_node3d_gizmo_module(JSContext *ctx) {
	return _js_init_node3d_gizmo_module(ctx, "@godot/classes/node3d_gizmo");
}

void register_node3d_gizmo() {
	Node3DGizmo::__init_js_class_id();
	js_init_node3d_gizmo_module(ctx);
}