
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/sprite3d.hpp>
#include <godot_cpp/classes/sprite_base3d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void sprite3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Sprite3D *sprite3d = static_cast<Sprite3D *>(JS_GetOpaque(val, Sprite3D::__class_id));
	if (sprite3d)
		Sprite3D::free(nullptr, sprite3d);
}

static JSClassDef sprite3d_class_def = {
	"Sprite3D",
	.finalizer = sprite3d_class_finalizer
};

static JSValue sprite3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Sprite3D *sprite3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Sprite3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	sprite3d_class = memnew(Sprite3D);
	if (!sprite3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, sprite3d_class);
	return obj;
}
static JSValue sprite3d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Sprite3D::set_texture, Sprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite3d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite3D::get_texture, Sprite3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite3d_class_set_region_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Sprite3D::set_region_enabled, Sprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite3d_class_is_region_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite3D::is_region_enabled, Sprite3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite3d_class_set_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Sprite3D::set_region_rect, Sprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite3d_class_get_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite3D::get_region_rect, Sprite3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite3d_class_set_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Sprite3D::set_frame, Sprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite3d_class_get_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite3D::get_frame, Sprite3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite3d_class_set_frame_coords(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Sprite3D::set_frame_coords, Sprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite3d_class_get_frame_coords(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite3D::get_frame_coords, Sprite3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite3d_class_set_vframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Sprite3D::set_vframes, Sprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite3d_class_get_vframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite3D::get_vframes, Sprite3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite3d_class_set_hframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Sprite3D::set_hframes, Sprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite3d_class_get_hframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sprite3D::get_hframes, Sprite3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry sprite3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture", 1, &sprite3d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &sprite3d_class_get_texture),
	JS_CFUNC_DEF("set_region_enabled", 1, &sprite3d_class_set_region_enabled),
	JS_CFUNC_DEF("is_region_enabled", 0, &sprite3d_class_is_region_enabled),
	JS_CFUNC_DEF("set_region_rect", 1, &sprite3d_class_set_region_rect),
	JS_CFUNC_DEF("get_region_rect", 0, &sprite3d_class_get_region_rect),
	JS_CFUNC_DEF("set_frame", 1, &sprite3d_class_set_frame),
	JS_CFUNC_DEF("get_frame", 0, &sprite3d_class_get_frame),
	JS_CFUNC_DEF("set_frame_coords", 1, &sprite3d_class_set_frame_coords),
	JS_CFUNC_DEF("get_frame_coords", 0, &sprite3d_class_get_frame_coords),
	JS_CFUNC_DEF("set_vframes", 1, &sprite3d_class_set_vframes),
	JS_CFUNC_DEF("get_vframes", 0, &sprite3d_class_get_vframes),
	JS_CFUNC_DEF("set_hframes", 1, &sprite3d_class_set_hframes),
	JS_CFUNC_DEF("get_hframes", 0, &sprite3d_class_get_hframes),
};

static int js_sprite3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Sprite3D::__class_id);
	classes["Sprite3D"] = Sprite3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Sprite3D::__class_id, &sprite3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SpriteBase3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Sprite3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, sprite3d_class_proto_funcs, _countof(sprite3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, sprite3d_class_constructor, "Sprite3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Sprite3D", ctor);

	return 0;
}

JSModuleDef *_js_init_sprite3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sprite3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Sprite3D");
	return m;
}

JSModuleDef *js_init_sprite3d_module(JSContext *ctx) {
	return _js_init_sprite3d_module(ctx, "godot/classes/sprite3d");
}

void register_sprite3d() {
	js_init_sprite3d_module(ctx);
}