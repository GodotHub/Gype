
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/panel_container.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void panel_container_class_finalizer(JSRuntime *rt, JSValue val) {
	PanelContainer *panel_container = static_cast<PanelContainer *>(JS_GetOpaque(val, PanelContainer::__class_id));
	if (panel_container)
		memdelete(panel_container);
}

static JSClassDef panel_container_class_def = {
	"PanelContainer",
	.finalizer = panel_container_class_finalizer
};

static JSValue panel_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PanelContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	PanelContainer *panel_container_class = memnew(PanelContainer);
	if (!panel_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, panel_container_class);	
	return obj;
}

void define_panel_container_property(JSContext *ctx, JSValue obj) {
}

static int js_panel_container_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PanelContainer::__class_id);
	classes["PanelContainer"] = PanelContainer::__class_id;
	class_id_list.insert(PanelContainer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PanelContainer::__class_id, &panel_container_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PanelContainer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PanelContainer::__class_id, proto);

	define_panel_container_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, panel_container_class_constructor, "PanelContainer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PanelContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_panel_container_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_panel_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PanelContainer");
	return m;
}

JSModuleDef *js_init_panel_container_module(JSContext *ctx) {
	return _js_init_panel_container_module(ctx, "godot/classes/panel_container");
}

void register_panel_container() {
	PanelContainer::__init_js_class_id();
	js_init_panel_container_module(ctx);
}