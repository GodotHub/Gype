
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/style_box_empty.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void style_box_empty_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef style_box_empty_class_def = {
	"StyleBoxEmpty",
	.finalizer = style_box_empty_class_finalizer
};

static JSValue style_box_empty_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, StyleBoxEmpty::__class_id);
	if (JS_IsException(obj))
		return obj;
	StyleBoxEmpty *style_box_empty_class = memnew(StyleBoxEmpty);
	if (!style_box_empty_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, style_box_empty_class);	
	return obj;
}

void define_style_box_empty_property(JSContext *ctx, JSValue obj) {
}

static int js_style_box_empty_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&StyleBoxEmpty::__class_id);
	classes["StyleBoxEmpty"] = StyleBoxEmpty::__class_id;
	class_id_list.insert(StyleBoxEmpty::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), StyleBoxEmpty::__class_id, &style_box_empty_class_def);

	JSValue proto = JS_NewObjectClass(ctx, StyleBoxEmpty::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, StyleBox::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StyleBoxEmpty::__class_id, proto);

	define_style_box_empty_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, style_box_empty_class_constructor, "StyleBoxEmpty", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "StyleBoxEmpty", ctor);

	return 0;
}

JSModuleDef *_js_init_style_box_empty_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/style_box';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_style_box_empty_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StyleBoxEmpty");
	return m;
}

JSModuleDef *js_init_style_box_empty_module(JSContext *ctx) {
	return _js_init_style_box_empty_module(ctx, "godot/classes/style_box_empty");
}

void register_style_box_empty() {
	StyleBoxEmpty::__init_js_class_id();
	js_init_style_box_empty_module(ctx);
}