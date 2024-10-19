
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/panel.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void panel_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef panel_class_def = {
	"Panel",
	.finalizer = panel_class_finalizer
};

static JSValue panel_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Panel::__class_id);
	if (JS_IsException(obj))
		return obj;
	Panel *panel_class = memnew(Panel);
	if (!panel_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, panel_class);	
	return obj;
}

void define_panel_property(JSContext *ctx, JSValue obj) {
}

static int js_panel_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Panel::__class_id);
	classes["Panel"] = Panel::__class_id;
	class_id_list.insert(Panel::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Panel::__class_id, &panel_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Panel::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Panel::__class_id, proto);

	define_panel_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, panel_class_constructor, "Panel", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Panel", ctor);

	return 0;
}

JSModuleDef *_js_init_panel_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/control';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	Panel::__init_js_class_id();
	js_init_panel_module(ctx);
}