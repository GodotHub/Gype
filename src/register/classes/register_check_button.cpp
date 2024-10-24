
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/check_button.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void check_button_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef check_button_class_def = {
	"CheckButton",
	.finalizer = check_button_class_finalizer
};

static JSValue check_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CheckButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	CheckButton *check_button_class = memnew(CheckButton);
	if (!check_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, check_button_class);	
	return obj;
}

void define_check_button_property(JSContext *ctx, JSValue obj) {
}

static int js_check_button_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CheckButton::__class_id);
	classes["CheckButton"] = CheckButton::__class_id;
	class_id_list.insert(CheckButton::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CheckButton::__class_id, &check_button_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CheckButton::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Button::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CheckButton::__class_id, proto);

	define_check_button_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, check_button_class_constructor, "CheckButton", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CheckButton", ctor);

	return 0;
}

JSModuleDef *_js_init_check_button_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/button';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_check_button_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CheckButton");
	return m;
}

JSModuleDef *js_init_check_button_module(JSContext *ctx) {
	return _js_init_check_button_module(ctx, "godot/classes/check_button");
}

void register_check_button() {
	CheckButton::__init_js_class_id();
	js_init_check_button_module(ctx);
}