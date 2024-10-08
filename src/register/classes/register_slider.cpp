
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/classes/slider.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void slider_class_finalizer(JSRuntime *rt, JSValue val) {
	Slider *slider = static_cast<Slider *>(JS_GetOpaque(val, Slider::__class_id));
	if (slider)
		Slider::free(nullptr, slider);
}

static JSClassDef slider_class_def = {
	"Slider",
	.finalizer = slider_class_finalizer
};

static JSValue slider_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Slider *slider_class;
	JSValue obj = JS_NewObjectClass(ctx, Slider::__class_id);
	if (JS_IsException(obj))
		return obj;
	slider_class = memnew(Slider);
	if (!slider_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, slider_class);
	return obj;
}
static JSValue slider_class_set_ticks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Slider::set_ticks, Slider::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue slider_class_get_ticks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Slider::get_ticks, Slider::__class_id, ctx, this_val, argv);
};
static JSValue slider_class_get_ticks_on_borders(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Slider::get_ticks_on_borders, Slider::__class_id, ctx, this_val, argv);
};
static JSValue slider_class_set_ticks_on_borders(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Slider::set_ticks_on_borders, Slider::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue slider_class_set_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Slider::set_editable, Slider::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue slider_class_is_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Slider::is_editable, Slider::__class_id, ctx, this_val, argv);
};
static JSValue slider_class_set_scrollable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Slider::set_scrollable, Slider::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue slider_class_is_scrollable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Slider::is_scrollable, Slider::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry slider_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_ticks", 1, &slider_class_set_ticks),
	JS_CFUNC_DEF("get_ticks", 0, &slider_class_get_ticks),
	JS_CFUNC_DEF("get_ticks_on_borders", 0, &slider_class_get_ticks_on_borders),
	JS_CFUNC_DEF("set_ticks_on_borders", 1, &slider_class_set_ticks_on_borders),
	JS_CFUNC_DEF("set_editable", 1, &slider_class_set_editable),
	JS_CFUNC_DEF("is_editable", 0, &slider_class_is_editable),
	JS_CFUNC_DEF("set_scrollable", 1, &slider_class_set_scrollable),
	JS_CFUNC_DEF("is_scrollable", 0, &slider_class_is_scrollable),
};

static int js_slider_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Slider::__class_id);
	classes["Slider"] = Slider::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Slider::__class_id, &slider_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Range::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Slider::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, slider_class_proto_funcs, _countof(slider_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, slider_class_constructor, "Slider", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Slider", ctor);

	return 0;
}

JSModuleDef *_js_init_slider_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_slider_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Slider");
	return m;
}

JSModuleDef *js_init_slider_module(JSContext *ctx) {
	return _js_init_slider_module(ctx, "godot/classes/slider");
}

void register_slider() {
	js_init_slider_module(ctx);
}