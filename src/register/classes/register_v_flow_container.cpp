
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/flow_container.hpp>
#include <godot_cpp/classes/v_flow_container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void v_flow_container_class_finalizer(JSRuntime *rt, JSValue val) {
	VFlowContainer *v_flow_container = static_cast<VFlowContainer *>(JS_GetOpaque(val, VFlowContainer::__class_id));
	if (v_flow_container)
		VFlowContainer::free(nullptr, v_flow_container);
}

static JSClassDef v_flow_container_class_def = {
	"VFlowContainer",
	.finalizer = v_flow_container_class_finalizer
};

static JSValue v_flow_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VFlowContainer *v_flow_container_class;
	JSValue obj = JS_NewObjectClass(ctx, VFlowContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	v_flow_container_class = memnew(VFlowContainer);
	if (!v_flow_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, v_flow_container_class);
	return obj;
}

static int js_v_flow_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VFlowContainer::__class_id);
	classes["VFlowContainer"] = VFlowContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VFlowContainer::__class_id, &v_flow_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, FlowContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VFlowContainer::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, v_flow_container_class_constructor, "VFlowContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VFlowContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_v_flow_container_module(JSContext *ctx, const char *module_name) {
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
	js_init_v_flow_container_module(ctx);
}