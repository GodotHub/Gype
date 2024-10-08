
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/style_box_empty.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void style_box_empty_class_finalizer(JSRuntime *rt, JSValue val) {
	StyleBoxEmpty *style_box_empty = static_cast<StyleBoxEmpty *>(JS_GetOpaque(val, StyleBoxEmpty::__class_id));
	if (style_box_empty)
		StyleBoxEmpty::free(nullptr, style_box_empty);
}

static JSClassDef style_box_empty_class_def = {
	"StyleBoxEmpty",
	.finalizer = style_box_empty_class_finalizer
};

static JSValue style_box_empty_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	StyleBoxEmpty *style_box_empty_class;
	JSValue obj = JS_NewObjectClass(ctx, StyleBoxEmpty::__class_id);
	if (JS_IsException(obj))
		return obj;
	style_box_empty_class = memnew(StyleBoxEmpty);
	if (!style_box_empty_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, style_box_empty_class);
	return obj;
}

static int js_style_box_empty_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&StyleBoxEmpty::__class_id);
	classes["StyleBoxEmpty"] = StyleBoxEmpty::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), StyleBoxEmpty::__class_id, &style_box_empty_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, StyleBox::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StyleBoxEmpty::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, style_box_empty_class_constructor, "StyleBoxEmpty", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "StyleBoxEmpty", ctor);

	return 0;
}

JSModuleDef *_js_init_style_box_empty_module(JSContext *ctx, const char *module_name) {
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
	js_init_style_box_empty_module(ctx);
}