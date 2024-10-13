
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/color.hpp>

using namespace godot;

static void color_class_finalizer(JSRuntime *rt, JSValue val) {
	Color *color = static_cast<Color *>(JS_GetOpaque(val, Color::__class_id));
	if (color)
		memfree(color);
}

static JSClassDef color_class_def = {
	"Color",
	.finalizer = color_class_finalizer
};

static JSValue color_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Color *color_class;
	JSValue obj = JS_NewObjectClass(ctx, Color::__class_id);
	if (JS_IsException(obj))
		return obj;
	color_class = memnew(Color);
	if (!color_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, color_class);
	return obj;
}

void define_color_property(JSContext *ctx, JSValue obj) {
}

static int js_color_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Color::__class_id);
	classes["Color"] = Color::__class_id;
	class_id_list.insert(Color::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Color::__class_id, &color_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Color::__class_id, proto);
	define_color_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, color_class_constructor, "Color", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Color", ctor);

	return 0;
}

JSModuleDef *_js_init_color_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_color_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Color");
	return m;
}

JSModuleDef *js_init_color_module(JSContext *ctx) {
	return _js_init_color_module(ctx, "godot/classes/color");
}

void register_color() {
	Color::__init_js_class_id();
	js_init_color_module(ctx);
}