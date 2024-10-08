
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/nine_patch_rect.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void nine_patch_rect_class_finalizer(JSRuntime *rt, JSValue val) {
	NinePatchRect *nine_patch_rect = static_cast<NinePatchRect *>(JS_GetOpaque(val, NinePatchRect::__class_id));
	if (nine_patch_rect)
		NinePatchRect::free(nullptr, nine_patch_rect);
}

static JSClassDef nine_patch_rect_class_def = {
	"NinePatchRect",
	.finalizer = nine_patch_rect_class_finalizer
};

static JSValue nine_patch_rect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NinePatchRect *nine_patch_rect_class;
	JSValue obj = JS_NewObjectClass(ctx, NinePatchRect::__class_id);
	if (JS_IsException(obj))
		return obj;
	nine_patch_rect_class = memnew(NinePatchRect);
	if (!nine_patch_rect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, nine_patch_rect_class);
	return obj;
}
static JSValue nine_patch_rect_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NinePatchRect::set_texture, NinePatchRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue nine_patch_rect_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NinePatchRect::get_texture, NinePatchRect::__class_id, ctx, this_val, argv);
};
static JSValue nine_patch_rect_class_set_patch_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NinePatchRect::set_patch_margin, NinePatchRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue nine_patch_rect_class_get_patch_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NinePatchRect::get_patch_margin, NinePatchRect::__class_id, ctx, this_val, argv);
};
static JSValue nine_patch_rect_class_set_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NinePatchRect::set_region_rect, NinePatchRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue nine_patch_rect_class_get_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NinePatchRect::get_region_rect, NinePatchRect::__class_id, ctx, this_val, argv);
};
static JSValue nine_patch_rect_class_set_draw_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NinePatchRect::set_draw_center, NinePatchRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue nine_patch_rect_class_is_draw_center_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NinePatchRect::is_draw_center_enabled, NinePatchRect::__class_id, ctx, this_val, argv);
};
static JSValue nine_patch_rect_class_set_h_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NinePatchRect::set_h_axis_stretch_mode, NinePatchRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue nine_patch_rect_class_get_h_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NinePatchRect::get_h_axis_stretch_mode, NinePatchRect::__class_id, ctx, this_val, argv);
};
static JSValue nine_patch_rect_class_set_v_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NinePatchRect::set_v_axis_stretch_mode, NinePatchRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue nine_patch_rect_class_get_v_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NinePatchRect::get_v_axis_stretch_mode, NinePatchRect::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry nine_patch_rect_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture", 1, &nine_patch_rect_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &nine_patch_rect_class_get_texture),
	JS_CFUNC_DEF("set_patch_margin", 2, &nine_patch_rect_class_set_patch_margin),
	JS_CFUNC_DEF("get_patch_margin", 1, &nine_patch_rect_class_get_patch_margin),
	JS_CFUNC_DEF("set_region_rect", 1, &nine_patch_rect_class_set_region_rect),
	JS_CFUNC_DEF("get_region_rect", 0, &nine_patch_rect_class_get_region_rect),
	JS_CFUNC_DEF("set_draw_center", 1, &nine_patch_rect_class_set_draw_center),
	JS_CFUNC_DEF("is_draw_center_enabled", 0, &nine_patch_rect_class_is_draw_center_enabled),
	JS_CFUNC_DEF("set_h_axis_stretch_mode", 1, &nine_patch_rect_class_set_h_axis_stretch_mode),
	JS_CFUNC_DEF("get_h_axis_stretch_mode", 0, &nine_patch_rect_class_get_h_axis_stretch_mode),
	JS_CFUNC_DEF("set_v_axis_stretch_mode", 1, &nine_patch_rect_class_set_v_axis_stretch_mode),
	JS_CFUNC_DEF("get_v_axis_stretch_mode", 0, &nine_patch_rect_class_get_v_axis_stretch_mode),
};

static int js_nine_patch_rect_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NinePatchRect::__class_id);
	classes["NinePatchRect"] = NinePatchRect::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NinePatchRect::__class_id, &nine_patch_rect_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NinePatchRect::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, nine_patch_rect_class_proto_funcs, _countof(nine_patch_rect_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, nine_patch_rect_class_constructor, "NinePatchRect", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NinePatchRect", ctor);

	return 0;
}

JSModuleDef *_js_init_nine_patch_rect_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_nine_patch_rect_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NinePatchRect");
	return m;
}

JSModuleDef *js_init_nine_patch_rect_module(JSContext *ctx) {
	return _js_init_nine_patch_rect_module(ctx, "godot/classes/nine_patch_rect");
}

void register_nine_patch_rect() {
	js_init_nine_patch_rect_module(ctx);
}