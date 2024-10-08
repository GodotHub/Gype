
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/panel.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void panel_class_finalizer(JSRuntime *rt, JSValue val) {
	Panel *panel = static_cast<Panel *>(JS_GetOpaque(val, Panel::__class_id));
	if (panel)
		Panel::free(nullptr, panel);
}

static JSClassDef panel_class_def = {
	"Panel",
	.finalizer = panel_class_finalizer
};

static JSValue panel_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Panel *panel_class;
	JSValue obj = JS_NewObjectClass(ctx, Panel::__class_id);
	if (JS_IsException(obj))
		return obj;
	panel_class = memnew(Panel);
	if (!panel_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, panel_class);
	return obj;
}

static int js_panel_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Panel::__class_id);
	classes["Panel"] = Panel::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Panel::__class_id, &panel_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Panel::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, panel_class_constructor, "Panel", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Panel", ctor);

	return 0;
}

JSModuleDef *_js_init_panel_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_panel_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Panel");
	return m;
}

JSModuleDef *js_init_panel_module(JSContext *ctx) {
	return _js_init_panel_module(ctx, "godot/classes/panel");
}

void register_panel() {
	js_init_panel_module(ctx);
}