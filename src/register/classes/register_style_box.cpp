
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void style_box_class_finalizer(JSRuntime *rt, JSValue val) {
	StyleBox *style_box = static_cast<StyleBox *>(JS_GetOpaque(val, StyleBox::__class_id));
	if (style_box)
		StyleBox::free(nullptr, style_box);
}

static JSClassDef style_box_class_def = {
	"StyleBox",
	.finalizer = style_box_class_finalizer
};

static JSValue style_box_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	StyleBox *style_box_class;
	JSValue obj = JS_NewObjectClass(ctx, StyleBox::__class_id);
	if (JS_IsException(obj))
		return obj;
	style_box_class = memnew(StyleBox);
	if (!style_box_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, style_box_class);
	return obj;
}
static JSValue style_box_class_get_minimum_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBox::get_minimum_size, StyleBox::__class_id, ctx, this_val, argv);
};
static JSValue style_box_class_set_content_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBox::set_content_margin, StyleBox::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_class_set_content_margin_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBox::set_content_margin_all, StyleBox::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_class_get_content_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBox::get_content_margin, StyleBox::__class_id, ctx, this_val, argv);
};
static JSValue style_box_class_get_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBox::get_margin, StyleBox::__class_id, ctx, this_val, argv);
};
static JSValue style_box_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBox::get_offset, StyleBox::__class_id, ctx, this_val, argv);
};
static JSValue style_box_class_draw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&StyleBox::draw, StyleBox::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_class_get_current_item_drawn(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBox::get_current_item_drawn, StyleBox::__class_id, ctx, this_val, argv);
};
static JSValue style_box_class_test_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBox::test_mask, StyleBox::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry style_box_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_minimum_size", 0, &style_box_class_get_minimum_size),
	JS_CFUNC_DEF("set_content_margin", 2, &style_box_class_set_content_margin),
	JS_CFUNC_DEF("set_content_margin_all", 1, &style_box_class_set_content_margin_all),
	JS_CFUNC_DEF("get_content_margin", 1, &style_box_class_get_content_margin),
	JS_CFUNC_DEF("get_margin", 1, &style_box_class_get_margin),
	JS_CFUNC_DEF("get_offset", 0, &style_box_class_get_offset),
	JS_CFUNC_DEF("draw", 2, &style_box_class_draw),
	JS_CFUNC_DEF("get_current_item_drawn", 0, &style_box_class_get_current_item_drawn),
	JS_CFUNC_DEF("test_mask", 2, &style_box_class_test_mask),
};

static int js_style_box_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&StyleBox::__class_id);
	classes["StyleBox"] = StyleBox::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), StyleBox::__class_id, &style_box_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StyleBox::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, style_box_class_proto_funcs, _countof(style_box_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, style_box_class_constructor, "StyleBox", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "StyleBox", ctor);

	return 0;
}

JSModuleDef *_js_init_style_box_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_style_box_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StyleBox");
	return m;
}

JSModuleDef *js_init_style_box_module(JSContext *ctx) {
	return _js_init_style_box_module(ctx, "godot/classes/style_box");
}

void register_style_box() {
	js_init_style_box_module(ctx);
}