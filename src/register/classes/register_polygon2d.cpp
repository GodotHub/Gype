
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/polygon2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void polygon2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Polygon2D *polygon2d = static_cast<Polygon2D *>(JS_GetOpaque(val, Polygon2D::__class_id));
	if (polygon2d)
		Polygon2D::free(nullptr, polygon2d);
}

static JSClassDef polygon2d_class_def = {
	"Polygon2D",
	.finalizer = polygon2d_class_finalizer
};

static JSValue polygon2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Polygon2D *polygon2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Polygon2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	polygon2d_class = memnew(Polygon2D);
	if (!polygon2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, polygon2d_class);
	return obj;
}
static JSValue polygon2d_class_set_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_polygon, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_polygon, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_set_uv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_uv, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_uv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_uv, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_color, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_color, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_set_polygons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_polygons, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_polygons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_polygons, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_set_vertex_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_vertex_colors, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_vertex_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_vertex_colors, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_texture, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_texture, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_set_texture_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_texture_offset, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_texture_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_texture_offset, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_set_texture_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_texture_rotation, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_texture_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_texture_rotation, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_set_texture_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_texture_scale, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_texture_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_texture_scale, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_set_invert_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_invert_enabled, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_invert_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_invert_enabled, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_set_antialiased(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_antialiased, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_antialiased(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_antialiased, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_set_invert_border(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_invert_border, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_invert_border(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_invert_border, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_offset, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_offset, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_add_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::add_bone, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_bone_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_bone_count, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_get_bone_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_bone_path, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_get_bone_weights(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_bone_weights, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_erase_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::erase_bone, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_clear_bones(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::clear_bones, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_set_bone_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_bone_path, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_set_bone_weights(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_bone_weights, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_set_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_skeleton, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_skeleton, Polygon2D::__class_id, ctx, this_val, argv);
};
static JSValue polygon2d_class_set_internal_vertex_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Polygon2D::set_internal_vertex_count, Polygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_internal_vertex_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Polygon2D::get_internal_vertex_count, Polygon2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry polygon2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_polygon", 1, &polygon2d_class_set_polygon),
	JS_CFUNC_DEF("get_polygon", 0, &polygon2d_class_get_polygon),
	JS_CFUNC_DEF("set_uv", 1, &polygon2d_class_set_uv),
	JS_CFUNC_DEF("get_uv", 0, &polygon2d_class_get_uv),
	JS_CFUNC_DEF("set_color", 1, &polygon2d_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &polygon2d_class_get_color),
	JS_CFUNC_DEF("set_polygons", 1, &polygon2d_class_set_polygons),
	JS_CFUNC_DEF("get_polygons", 0, &polygon2d_class_get_polygons),
	JS_CFUNC_DEF("set_vertex_colors", 1, &polygon2d_class_set_vertex_colors),
	JS_CFUNC_DEF("get_vertex_colors", 0, &polygon2d_class_get_vertex_colors),
	JS_CFUNC_DEF("set_texture", 1, &polygon2d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &polygon2d_class_get_texture),
	JS_CFUNC_DEF("set_texture_offset", 1, &polygon2d_class_set_texture_offset),
	JS_CFUNC_DEF("get_texture_offset", 0, &polygon2d_class_get_texture_offset),
	JS_CFUNC_DEF("set_texture_rotation", 1, &polygon2d_class_set_texture_rotation),
	JS_CFUNC_DEF("get_texture_rotation", 0, &polygon2d_class_get_texture_rotation),
	JS_CFUNC_DEF("set_texture_scale", 1, &polygon2d_class_set_texture_scale),
	JS_CFUNC_DEF("get_texture_scale", 0, &polygon2d_class_get_texture_scale),
	JS_CFUNC_DEF("set_invert_enabled", 1, &polygon2d_class_set_invert_enabled),
	JS_CFUNC_DEF("get_invert_enabled", 0, &polygon2d_class_get_invert_enabled),
	JS_CFUNC_DEF("set_antialiased", 1, &polygon2d_class_set_antialiased),
	JS_CFUNC_DEF("get_antialiased", 0, &polygon2d_class_get_antialiased),
	JS_CFUNC_DEF("set_invert_border", 1, &polygon2d_class_set_invert_border),
	JS_CFUNC_DEF("get_invert_border", 0, &polygon2d_class_get_invert_border),
	JS_CFUNC_DEF("set_offset", 1, &polygon2d_class_set_offset),
	JS_CFUNC_DEF("get_offset", 0, &polygon2d_class_get_offset),
	JS_CFUNC_DEF("add_bone", 2, &polygon2d_class_add_bone),
	JS_CFUNC_DEF("get_bone_count", 0, &polygon2d_class_get_bone_count),
	JS_CFUNC_DEF("get_bone_path", 1, &polygon2d_class_get_bone_path),
	JS_CFUNC_DEF("get_bone_weights", 1, &polygon2d_class_get_bone_weights),
	JS_CFUNC_DEF("erase_bone", 1, &polygon2d_class_erase_bone),
	JS_CFUNC_DEF("clear_bones", 0, &polygon2d_class_clear_bones),
	JS_CFUNC_DEF("set_bone_path", 2, &polygon2d_class_set_bone_path),
	JS_CFUNC_DEF("set_bone_weights", 2, &polygon2d_class_set_bone_weights),
	JS_CFUNC_DEF("set_skeleton", 1, &polygon2d_class_set_skeleton),
	JS_CFUNC_DEF("get_skeleton", 0, &polygon2d_class_get_skeleton),
	JS_CFUNC_DEF("set_internal_vertex_count", 1, &polygon2d_class_set_internal_vertex_count),
	JS_CFUNC_DEF("get_internal_vertex_count", 0, &polygon2d_class_get_internal_vertex_count),
};

static int js_polygon2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Polygon2D::__class_id);
	classes["Polygon2D"] = Polygon2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Polygon2D::__class_id, &polygon2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Polygon2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, polygon2d_class_proto_funcs, _countof(polygon2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, polygon2d_class_constructor, "Polygon2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Polygon2D", ctor);

	return 0;
}

JSModuleDef *_js_init_polygon2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_polygon2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Polygon2D");
	return m;
}

JSModuleDef *js_init_polygon2d_module(JSContext *ctx) {
	return _js_init_polygon2d_module(ctx, "godot/classes/polygon2d");
}

void register_polygon2d() {
	js_init_polygon2d_module(ctx);
}