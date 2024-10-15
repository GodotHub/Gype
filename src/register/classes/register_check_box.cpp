
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/check_box.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void check_box_class_finalizer(JSRuntime *rt, JSValue val) {
	CheckBox *check_box = static_cast<CheckBox *>(JS_GetOpaque(val, CheckBox::__class_id));
	if (check_box)
		memdelete(check_box);
}

static JSClassDef check_box_class_def = {
	"CheckBox",
	.finalizer = check_box_class_finalizer
};

static JSValue check_box_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CheckBox::__class_id);
	if (JS_IsException(obj))
		return obj;
	CheckBox *check_box_class = memnew(CheckBox);
	if (!check_box_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, check_box_class);	
	return obj;
}

void define_check_box_property(JSContext *ctx, JSValue obj) {
}

static int js_check_box_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CheckBox::__class_id);
	classes["CheckBox"] = CheckBox::__class_id;
	class_id_list.insert(CheckBox::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CheckBox::__class_id, &check_box_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CheckBox::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Button::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CheckBox::__class_id, proto);

	define_check_box_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, check_box_class_constructor, "CheckBox", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CheckBox", ctor);

	return 0;
}

JSModuleDef *_js_init_check_box_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/button';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	CheckBox::__init_js_class_id();
	js_init_check_box_module(ctx);
}