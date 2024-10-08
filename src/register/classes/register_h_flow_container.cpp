
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/flow_container.hpp>
#include <godot_cpp/classes/h_flow_container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void h_flow_container_class_finalizer(JSRuntime *rt, JSValue val) {
	HFlowContainer *h_flow_container = static_cast<HFlowContainer *>(JS_GetOpaque(val, HFlowContainer::__class_id));
	if (h_flow_container)
		HFlowContainer::free(nullptr, h_flow_container);
}

static JSClassDef h_flow_container_class_def = {
	"HFlowContainer",
	.finalizer = h_flow_container_class_finalizer
};

static JSValue h_flow_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	HFlowContainer *h_flow_container_class;
	JSValue obj = JS_NewObjectClass(ctx, HFlowContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	h_flow_container_class = memnew(HFlowContainer);
	if (!h_flow_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, h_flow_container_class);
	return obj;
}

static int js_h_flow_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&HFlowContainer::__class_id);
	classes["HFlowContainer"] = HFlowContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), HFlowContainer::__class_id, &h_flow_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, FlowContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HFlowContainer::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, h_flow_container_class_constructor, "HFlowContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "HFlowContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_h_flow_container_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_h_flow_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "HFlowContainer");
	return m;
}

JSModuleDef *js_init_h_flow_container_module(JSContext *ctx) {
	return _js_init_h_flow_container_module(ctx, "godot/classes/h_flow_container");
}

void register_h_flow_container() {
	js_init_h_flow_container_module(ctx);
}