
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/check_box.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void check_box_class_finalizer(JSRuntime *rt, JSValue val) {
	CheckBox *check_box = static_cast<CheckBox *>(JS_GetOpaque(val, CheckBox::__class_id));
	if (check_box)
		CheckBox::free(nullptr, check_box);
}

static JSClassDef check_box_class_def = {
	"CheckBox",
	.finalizer = check_box_class_finalizer
};

static JSValue check_box_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CheckBox *check_box_class;
	JSValue obj = JS_NewObjectClass(ctx, CheckBox::__class_id);
	if (JS_IsException(obj))
		return obj;
	check_box_class = memnew(CheckBox);
	if (!check_box_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, check_box_class);
	return obj;
}

static int js_check_box_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CheckBox::__class_id);
	classes["CheckBox"] = CheckBox::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CheckBox::__class_id, &check_box_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Button::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CheckBox::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, check_box_class_constructor, "CheckBox", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CheckBox", ctor);

	return 0;
}

JSModuleDef *_js_init_check_box_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_check_box_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CheckBox");
	return m;
}

JSModuleDef *js_init_check_box_module(JSContext *ctx) {
	return _js_init_check_box_module(ctx, "godot/classes/check_box");
}

void register_check_box() {
	js_init_check_box_module(ctx);
}