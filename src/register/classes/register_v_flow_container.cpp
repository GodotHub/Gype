
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/flow_container.hpp>
#include <godot_cpp/classes/v_flow_container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void v_flow_container_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef v_flow_container_class_def = {
	"VFlowContainer",
	.finalizer = v_flow_container_class_finalizer
};

static JSValue v_flow_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VFlowContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	VFlowContainer *v_flow_container_class = memnew(VFlowContainer);
	if (!v_flow_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, v_flow_container_class);	
	return obj;
}

void define_v_flow_container_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_v_flow_container_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VFlowContainer::__class_id);
	classes["VFlowContainer"] = VFlowContainer::__class_id;
	class_id_list.insert(VFlowContainer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VFlowContainer::__class_id, &v_flow_container_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VFlowContainer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, FlowContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VFlowContainer::__class_id, proto);

	define_v_flow_container_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, v_flow_container_class_constructor, "VFlowContainer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VFlowContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_v_flow_container_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/flow_container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_v_flow_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VFlowContainer");
	return m;
}

JSModuleDef *js_init_v_flow_container_module(JSContext *ctx) {
	return _js_init_v_flow_container_module(ctx, "godot/classes/v_flow_container");
}

void register_v_flow_container() {
	VFlowContainer::__init_js_class_id();
	js_init_v_flow_container_module(ctx);
}