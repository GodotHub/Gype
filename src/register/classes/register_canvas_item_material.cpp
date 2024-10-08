
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/canvas_item_material.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void canvas_item_material_class_finalizer(JSRuntime *rt, JSValue val) {
	CanvasItemMaterial *canvas_item_material = static_cast<CanvasItemMaterial *>(JS_GetOpaque(val, CanvasItemMaterial::__class_id));
	if (canvas_item_material)
		CanvasItemMaterial::free(nullptr, canvas_item_material);
}

static JSClassDef canvas_item_material_class_def = {
	"CanvasItemMaterial",
	.finalizer = canvas_item_material_class_finalizer
};

static JSValue canvas_item_material_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CanvasItemMaterial *canvas_item_material_class;
	JSValue obj = JS_NewObjectClass(ctx, CanvasItemMaterial::__class_id);
	if (JS_IsException(obj))
		return obj;
	canvas_item_material_class = memnew(CanvasItemMaterial);
	if (!canvas_item_material_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, canvas_item_material_class);
	return obj;
}
static JSValue canvas_item_material_class_set_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CanvasItemMaterial::set_blend_mode, CanvasItemMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_material_class_get_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItemMaterial::get_blend_mode, CanvasItemMaterial::__class_id, ctx, this_val, argv);
};
static JSValue canvas_item_material_class_set_light_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CanvasItemMaterial::set_light_mode, CanvasItemMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_material_class_get_light_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItemMaterial::get_light_mode, CanvasItemMaterial::__class_id, ctx, this_val, argv);
};
static JSValue canvas_item_material_class_set_particles_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CanvasItemMaterial::set_particles_animation, CanvasItemMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_material_class_get_particles_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItemMaterial::get_particles_animation, CanvasItemMaterial::__class_id, ctx, this_val, argv);
};
static JSValue canvas_item_material_class_set_particles_anim_h_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CanvasItemMaterial::set_particles_anim_h_frames, CanvasItemMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_material_class_get_particles_anim_h_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItemMaterial::get_particles_anim_h_frames, CanvasItemMaterial::__class_id, ctx, this_val, argv);
};
static JSValue canvas_item_material_class_set_particles_anim_v_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CanvasItemMaterial::set_particles_anim_v_frames, CanvasItemMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_material_class_get_particles_anim_v_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItemMaterial::get_particles_anim_v_frames, CanvasItemMaterial::__class_id, ctx, this_val, argv);
};
static JSValue canvas_item_material_class_set_particles_anim_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CanvasItemMaterial::set_particles_anim_loop, CanvasItemMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_material_class_get_particles_anim_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItemMaterial::get_particles_anim_loop, CanvasItemMaterial::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry canvas_item_material_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_blend_mode", 1, &canvas_item_material_class_set_blend_mode),
	JS_CFUNC_DEF("get_blend_mode", 0, &canvas_item_material_class_get_blend_mode),
	JS_CFUNC_DEF("set_light_mode", 1, &canvas_item_material_class_set_light_mode),
	JS_CFUNC_DEF("get_light_mode", 0, &canvas_item_material_class_get_light_mode),
	JS_CFUNC_DEF("set_particles_animation", 1, &canvas_item_material_class_set_particles_animation),
	JS_CFUNC_DEF("get_particles_animation", 0, &canvas_item_material_class_get_particles_animation),
	JS_CFUNC_DEF("set_particles_anim_h_frames", 1, &canvas_item_material_class_set_particles_anim_h_frames),
	JS_CFUNC_DEF("get_particles_anim_h_frames", 0, &canvas_item_material_class_get_particles_anim_h_frames),
	JS_CFUNC_DEF("set_particles_anim_v_frames", 1, &canvas_item_material_class_set_particles_anim_v_frames),
	JS_CFUNC_DEF("get_particles_anim_v_frames", 0, &canvas_item_material_class_get_particles_anim_v_frames),
	JS_CFUNC_DEF("set_particles_anim_loop", 1, &canvas_item_material_class_set_particles_anim_loop),
	JS_CFUNC_DEF("get_particles_anim_loop", 0, &canvas_item_material_class_get_particles_anim_loop),
};

static int js_canvas_item_material_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CanvasItemMaterial::__class_id);
	classes["CanvasItemMaterial"] = CanvasItemMaterial::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CanvasItemMaterial::__class_id, &canvas_item_material_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Material::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CanvasItemMaterial::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, canvas_item_material_class_proto_funcs, _countof(canvas_item_material_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, canvas_item_material_class_constructor, "CanvasItemMaterial", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CanvasItemMaterial", ctor);

	return 0;
}

JSModuleDef *_js_init_canvas_item_material_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_canvas_item_material_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CanvasItemMaterial");
	return m;
}

JSModuleDef *js_init_canvas_item_material_module(JSContext *ctx) {
	return _js_init_canvas_item_material_module(ctx, "godot/classes/canvas_item_material");
}

void register_canvas_item_material() {
	js_init_canvas_item_material_module(ctx);
}