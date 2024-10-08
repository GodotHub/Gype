
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/panel_container.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void panel_container_class_finalizer(JSRuntime *rt, JSValue val) {
	PanelContainer *panel_container = static_cast<PanelContainer *>(JS_GetOpaque(val, PanelContainer::__class_id));
	if (panel_container)
		PanelContainer::free(nullptr, panel_container);
}

static JSClassDef panel_container_class_def = {
	"PanelContainer",
	.finalizer = panel_container_class_finalizer
};

static JSValue panel_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PanelContainer *panel_container_class;
	JSValue obj = JS_NewObjectClass(ctx, PanelContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	panel_container_class = memnew(PanelContainer);
	if (!panel_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, panel_container_class);
	return obj;
}

static int js_panel_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PanelContainer::__class_id);
	classes["PanelContainer"] = PanelContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PanelContainer::__class_id, &panel_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PanelContainer::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, panel_container_class_constructor, "PanelContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PanelContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_panel_container_module(JSContext *ctx, const char *module_name) {
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
	js_init_panel_container_module(ctx);
}