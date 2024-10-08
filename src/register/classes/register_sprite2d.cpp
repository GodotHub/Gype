
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/sprite2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void sprite2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Sprite2D *sprite2d = static_cast<Sprite2D *>(JS_GetOpaque(val, Sprite2D::__class_id));
	if (sprite2d)
		Sprite2D::free(nullptr, sprite2d);
}

static JSClassDef sprite2d_class_def = {
	"Sprite2D",
	.finalizer = sprite2d_class_finalizer
};

static JSValue sprite2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Sprite2D *sprite2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Sprite2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	sprite2d_class = memnew(Sprite2D);
	if (!sprite2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, sprite2d_class);
	return obj;
}
static JSValue sprite2d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sprite2D::set_texture, Sprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite2d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite2D::get_texture, Sprite2D::__class_id, ctx, this_val, argv);
};
static JSValue sprite2d_class_set_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sprite2D::set_centered, Sprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite2d_class_is_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite2D::is_centered, Sprite2D::__class_id, ctx, this_val, argv);
};
static JSValue sprite2d_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sprite2D::set_offset, Sprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite2d_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite2D::get_offset, Sprite2D::__class_id, ctx, this_val, argv);
};
static JSValue sprite2d_class_set_flip_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sprite2D::set_flip_h, Sprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite2d_class_is_flipped_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite2D::is_flipped_h, Sprite2D::__class_id, ctx, this_val, argv);
};
static JSValue sprite2d_class_set_flip_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sprite2D::set_flip_v, Sprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite2d_class_is_flipped_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite2D::is_flipped_v, Sprite2D::__class_id, ctx, this_val, argv);
};
static JSValue sprite2d_class_set_region_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sprite2D::set_region_enabled, Sprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite2d_class_is_region_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite2D::is_region_enabled, Sprite2D::__class_id, ctx, this_val, argv);
};
static JSValue sprite2d_class_is_pixel_opaque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite2D::is_pixel_opaque, Sprite2D::__class_id, ctx, this_val, argv);
};
static JSValue sprite2d_class_set_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sprite2D::set_region_rect, Sprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite2d_class_get_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite2D::get_region_rect, Sprite2D::__class_id, ctx, this_val, argv);
};
static JSValue sprite2d_class_set_region_filter_clip_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sprite2D::set_region_filter_clip_enabled, Sprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite2d_class_is_region_filter_clip_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite2D::is_region_filter_clip_enabled, Sprite2D::__class_id, ctx, this_val, argv);
};
static JSValue sprite2d_class_set_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sprite2D::set_frame, Sprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite2d_class_get_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite2D::get_frame, Sprite2D::__class_id, ctx, this_val, argv);
};
static JSValue sprite2d_class_set_frame_coords(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sprite2D::set_frame_coords, Sprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite2d_class_get_frame_coords(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite2D::get_frame_coords, Sprite2D::__class_id, ctx, this_val, argv);
};
static JSValue sprite2d_class_set_vframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sprite2D::set_vframes, Sprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite2d_class_get_vframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite2D::get_vframes, Sprite2D::__class_id, ctx, this_val, argv);
};
static JSValue sprite2d_class_set_hframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sprite2D::set_hframes, Sprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite2d_class_get_hframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite2D::get_hframes, Sprite2D::__class_id, ctx, this_val, argv);
};
static JSValue sprite2d_class_get_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite2D::get_rect, Sprite2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry sprite2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture", 1, &sprite2d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &sprite2d_class_get_texture),
	JS_CFUNC_DEF("set_centered", 1, &sprite2d_class_set_centered),
	JS_CFUNC_DEF("is_centered", 0, &sprite2d_class_is_centered),
	JS_CFUNC_DEF("set_offset", 1, &sprite2d_class_set_offset),
	JS_CFUNC_DEF("get_offset", 0, &sprite2d_class_get_offset),
	JS_CFUNC_DEF("set_flip_h", 1, &sprite2d_class_set_flip_h),
	JS_CFUNC_DEF("is_flipped_h", 0, &sprite2d_class_is_flipped_h),
	JS_CFUNC_DEF("set_flip_v", 1, &sprite2d_class_set_flip_v),
	JS_CFUNC_DEF("is_flipped_v", 0, &sprite2d_class_is_flipped_v),
	JS_CFUNC_DEF("set_region_enabled", 1, &sprite2d_class_set_region_enabled),
	JS_CFUNC_DEF("is_region_enabled", 0, &sprite2d_class_is_region_enabled),
	JS_CFUNC_DEF("is_pixel_opaque", 1, &sprite2d_class_is_pixel_opaque),
	JS_CFUNC_DEF("set_region_rect", 1, &sprite2d_class_set_region_rect),
	JS_CFUNC_DEF("get_region_rect", 0, &sprite2d_class_get_region_rect),
	JS_CFUNC_DEF("set_region_filter_clip_enabled", 1, &sprite2d_class_set_region_filter_clip_enabled),
	JS_CFUNC_DEF("is_region_filter_clip_enabled", 0, &sprite2d_class_is_region_filter_clip_enabled),
	JS_CFUNC_DEF("set_frame", 1, &sprite2d_class_set_frame),
	JS_CFUNC_DEF("get_frame", 0, &sprite2d_class_get_frame),
	JS_CFUNC_DEF("set_frame_coords", 1, &sprite2d_class_set_frame_coords),
	JS_CFUNC_DEF("get_frame_coords", 0, &sprite2d_class_get_frame_coords),
	JS_CFUNC_DEF("set_vframes", 1, &sprite2d_class_set_vframes),
	JS_CFUNC_DEF("get_vframes", 0, &sprite2d_class_get_vframes),
	JS_CFUNC_DEF("set_hframes", 1, &sprite2d_class_set_hframes),
	JS_CFUNC_DEF("get_hframes", 0, &sprite2d_class_get_hframes),
	JS_CFUNC_DEF("get_rect", 0, &sprite2d_class_get_rect),
};

static int js_sprite2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Sprite2D::__class_id);
	classes["Sprite2D"] = Sprite2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Sprite2D::__class_id, &sprite2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Sprite2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, sprite2d_class_proto_funcs, _countof(sprite2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, sprite2d_class_constructor, "Sprite2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Sprite2D", ctor);

	return 0;
}

JSModuleDef *_js_init_sprite2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sprite2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Sprite2D");
	return m;
}

JSModuleDef *js_init_sprite2d_module(JSContext *ctx) {
	return _js_init_sprite2d_module(ctx, "godot/classes/sprite2d");
}

void register_sprite2d() {
	js_init_sprite2d_module(ctx);
}