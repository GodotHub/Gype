
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/check_button.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void check_button_class_finalizer(JSRuntime *rt, JSValue val) {
	CheckButton *check_button = static_cast<CheckButton *>(JS_GetOpaque(val, CheckButton::__class_id));
	if (check_button)
		CheckButton::free(nullptr, check_button);
}

static JSClassDef check_button_class_def = {
	"CheckButton",
	.finalizer = check_button_class_finalizer
};

static JSValue check_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CheckButton *check_button_class;
	JSValue obj = JS_NewObjectClass(ctx, CheckButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	check_button_class = memnew(CheckButton);
	if (!check_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, check_button_class);
	return obj;
}

static int js_check_button_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CheckButton::__class_id);
	classes["CheckButton"] = CheckButton::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CheckButton::__class_id, &check_button_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Button::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CheckButton::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, check_button_class_constructor, "CheckButton", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CheckButton", ctor);

	return 0;
}

JSModuleDef *_js_init_check_button_module(JSContext *ctx, const char *module_name) {
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
	js_init_check_button_module(ctx);
}