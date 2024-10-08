
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/node3d_gizmo.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void node3d_gizmo_class_finalizer(JSRuntime *rt, JSValue val) {
	Node3DGizmo *node3d_gizmo = static_cast<Node3DGizmo *>(JS_GetOpaque(val, Node3DGizmo::__class_id));
	if (node3d_gizmo)
		Node3DGizmo::free(nullptr, node3d_gizmo);
}

static JSClassDef node3d_gizmo_class_def = {
	"Node3DGizmo",
	.finalizer = node3d_gizmo_class_finalizer
};

static JSValue node3d_gizmo_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Node3DGizmo *node3d_gizmo_class;
	JSValue obj = JS_NewObjectClass(ctx, Node3DGizmo::__class_id);
	if (JS_IsException(obj))
		return obj;
	node3d_gizmo_class = memnew(Node3DGizmo);
	if (!node3d_gizmo_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, node3d_gizmo_class);
	return obj;
}

static int js_node3d_gizmo_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Node3DGizmo::__class_id);
	classes["Node3DGizmo"] = Node3DGizmo::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Node3DGizmo::__class_id, &node3d_gizmo_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Node3DGizmo::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, node3d_gizmo_class_constructor, "Node3DGizmo", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Node3DGizmo", ctor);

	return 0;
}

JSModuleDef *_js_init_node3d_gizmo_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_node3d_gizmo_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Node3DGizmo");
	return m;
}

JSModuleDef *js_init_node3d_gizmo_module(JSContext *ctx) {
	return _js_init_node3d_gizmo_module(ctx, "godot/classes/node3d_gizmo");
}

void register_node3d_gizmo() {
	js_init_node3d_gizmo_module(ctx);
}