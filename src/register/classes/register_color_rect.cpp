
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/color_rect.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void color_rect_class_finalizer(JSRuntime *rt, JSValue val) {
	ColorRect *color_rect = static_cast<ColorRect *>(JS_GetOpaque(val, ColorRect::__class_id));
	if (color_rect)
		ColorRect::free(nullptr, color_rect);
}

static JSClassDef color_rect_class_def = {
	"ColorRect",
	.finalizer = color_rect_class_finalizer
};

static JSValue color_rect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ColorRect *color_rect_class;
	JSValue obj = JS_NewObjectClass(ctx, ColorRect::__class_id);
	if (JS_IsException(obj))
		return obj;
	color_rect_class = memnew(ColorRect);
	if (!color_rect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, color_rect_class);
	return obj;
}
static JSValue color_rect_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ColorRect::set_color, ColorRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_rect_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorRect::get_color, ColorRect::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry color_rect_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_color", 1, &color_rect_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &color_rect_class_get_color),
};

static int js_color_rect_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ColorRect::__class_id);
	classes["ColorRect"] = ColorRect::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ColorRect::__class_id, &color_rect_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ColorRect::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, color_rect_class_proto_funcs, _countof(color_rect_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, color_rect_class_constructor, "ColorRect", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ColorRect", ctor);

	return 0;
}

JSModuleDef *_js_init_color_rect_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_color_rect_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ColorRect");
	return m;
}

JSModuleDef *js_init_color_rect_module(JSContext *ctx) {
	return _js_init_color_rect_module(ctx, "godot/classes/color_rect");
}

void register_color_rect() {
	js_init_color_rect_module(ctx);
}