
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/popup.hpp>
#include <godot_cpp/classes/popup_panel.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void popup_panel_class_finalizer(JSRuntime *rt, JSValue val) {
	PopupPanel *popup_panel = static_cast<PopupPanel *>(JS_GetOpaque(val, PopupPanel::__class_id));
	if (popup_panel)
		PopupPanel::free(nullptr, popup_panel);
}

static JSClassDef popup_panel_class_def = {
	"PopupPanel",
	.finalizer = popup_panel_class_finalizer
};

static JSValue popup_panel_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PopupPanel *popup_panel_class;
	JSValue obj = JS_NewObjectClass(ctx, PopupPanel::__class_id);
	if (JS_IsException(obj))
		return obj;
	popup_panel_class = memnew(PopupPanel);
	if (!popup_panel_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, popup_panel_class);
	return obj;
}

static int js_popup_panel_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PopupPanel::__class_id);
	classes["PopupPanel"] = PopupPanel::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PopupPanel::__class_id, &popup_panel_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Popup::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PopupPanel::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, popup_panel_class_constructor, "PopupPanel", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PopupPanel", ctor);

	return 0;
}

JSModuleDef *_js_init_popup_panel_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_popup_panel_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PopupPanel");
	return m;
}

JSModuleDef *js_init_popup_panel_module(JSContext *ctx) {
	return _js_init_popup_panel_module(ctx, "godot/classes/popup_panel");
}

void register_popup_panel() {
	js_init_popup_panel_module(ctx);
}