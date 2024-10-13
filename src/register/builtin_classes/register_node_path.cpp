
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/node_path.hpp>

using namespace godot;

static void node_path_class_finalizer(JSRuntime *rt, JSValue val) {
	NodePath *node_path = static_cast<NodePath *>(JS_GetOpaque(val, NodePath::__class_id));
	if (node_path)
		memfree(node_path);
}

static JSClassDef node_path_class_def = {
	"NodePath",
	.finalizer = node_path_class_finalizer
};

static JSValue node_path_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NodePath *node_path_class;
	JSValue obj = JS_NewObjectClass(ctx, NodePath::__class_id);
	if (JS_IsException(obj))
		return obj;
	node_path_class = memnew(NodePath);
	if (!node_path_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, node_path_class);
	return obj;
}

void define_node_path_property(JSContext *ctx, JSValue obj) {
}

static int js_node_path_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&NodePath::__class_id);
	classes["NodePath"] = NodePath::__class_id;
	class_id_list.insert(NodePath::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), NodePath::__class_id, &node_path_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, NodePath::__class_id, proto);
	define_node_path_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, node_path_class_constructor, "NodePath", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "NodePath", ctor);

	return 0;
}

JSModuleDef *_js_init_node_path_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_node_path_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NodePath");
	return m;
}

JSModuleDef *js_init_node_path_module(JSContext *ctx) {
	return _js_init_node_path_module(ctx, "godot/classes/node_path");
}

void register_node_path() {
	NodePath::__init_js_class_id();
	js_init_node_path_module(ctx);
}