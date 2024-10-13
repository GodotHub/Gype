
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/popup_panel.hpp>
#include <godot_cpp/classes/popup.hpp>
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
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_popup_panel_property(JSContext *ctx, JSValue obj) {
}

static int js_popup_panel_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PopupPanel::__class_id);
	classes["PopupPanel"] = PopupPanel::__class_id;
	class_id_list.insert(PopupPanel::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PopupPanel::__class_id, &popup_panel_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Popup::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PopupPanel::__class_id, proto);
	define_popup_panel_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, popup_panel_class_constructor, "PopupPanel", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PopupPanel", ctor);

	return 0;
}

JSModuleDef *_js_init_popup_panel_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/popup';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	PopupPanel::__init_js_class_id();
	js_init_popup_panel_module(ctx);
}