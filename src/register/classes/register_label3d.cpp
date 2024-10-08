
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/label3d.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void label3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Label3D *label3d = static_cast<Label3D *>(JS_GetOpaque(val, Label3D::__class_id));
	if (label3d)
		Label3D::free(nullptr, label3d);
}

static JSClassDef label3d_class_def = {
	"Label3D",
	.finalizer = label3d_class_finalizer
};

static JSValue label3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Label3D *label3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Label3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	label3d_class = memnew(Label3D);
	if (!label3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, label3d_class);
	return obj;
}
static JSValue label3d_class_set_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_horizontal_alignment, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_horizontal_alignment, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_vertical_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_vertical_alignment, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_vertical_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_vertical_alignment, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_modulate, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_modulate, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_outline_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_outline_modulate, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_outline_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_outline_modulate, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_text, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_text, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_text_direction, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_text_direction, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_language, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_language, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_structured_text_bidi_override, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_structured_text_bidi_override, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_structured_text_bidi_override_options, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_structured_text_bidi_override_options, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_uppercase(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_uppercase, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_is_uppercase(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::is_uppercase, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_render_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_render_priority, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_render_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_render_priority, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_outline_render_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_outline_render_priority, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_outline_render_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_outline_render_priority, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_font, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_font, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_font_size, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_font_size, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_outline_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_outline_size, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_outline_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_outline_size, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_line_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_line_spacing, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_line_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_line_spacing, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_autowrap_mode, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_autowrap_mode, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_justification_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_justification_flags, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_justification_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_justification_flags, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_width, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_width, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_pixel_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_pixel_size, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_pixel_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_pixel_size, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_offset, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_offset, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_draw_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_draw_flag, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_draw_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_draw_flag, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_billboard_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_billboard_mode, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_billboard_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_billboard_mode, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_alpha_cut_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_alpha_cut_mode, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_alpha_cut_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_alpha_cut_mode, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_alpha_scissor_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_alpha_scissor_threshold, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_alpha_scissor_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_alpha_scissor_threshold, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_alpha_hash_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_alpha_hash_scale, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_alpha_hash_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_alpha_hash_scale, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_alpha_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_alpha_antialiasing, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_alpha_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_alpha_antialiasing, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_alpha_antialiasing_edge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_alpha_antialiasing_edge, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_alpha_antialiasing_edge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_alpha_antialiasing_edge, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_set_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label3D::set_texture_filter, Label3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label3d_class_get_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::get_texture_filter, Label3D::__class_id, ctx, this_val, argv);
};
static JSValue label3d_class_generate_triangle_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label3D::generate_triangle_mesh, Label3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry label3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_horizontal_alignment", 1, &label3d_class_set_horizontal_alignment),
	JS_CFUNC_DEF("get_horizontal_alignment", 0, &label3d_class_get_horizontal_alignment),
	JS_CFUNC_DEF("set_vertical_alignment", 1, &label3d_class_set_vertical_alignment),
	JS_CFUNC_DEF("get_vertical_alignment", 0, &label3d_class_get_vertical_alignment),
	JS_CFUNC_DEF("set_modulate", 1, &label3d_class_set_modulate),
	JS_CFUNC_DEF("get_modulate", 0, &label3d_class_get_modulate),
	JS_CFUNC_DEF("set_outline_modulate", 1, &label3d_class_set_outline_modulate),
	JS_CFUNC_DEF("get_outline_modulate", 0, &label3d_class_get_outline_modulate),
	JS_CFUNC_DEF("set_text", 1, &label3d_class_set_text),
	JS_CFUNC_DEF("get_text", 0, &label3d_class_get_text),
	JS_CFUNC_DEF("set_text_direction", 1, &label3d_class_set_text_direction),
	JS_CFUNC_DEF("get_text_direction", 0, &label3d_class_get_text_direction),
	JS_CFUNC_DEF("set_language", 1, &label3d_class_set_language),
	JS_CFUNC_DEF("get_language", 0, &label3d_class_get_language),
	JS_CFUNC_DEF("set_structured_text_bidi_override", 1, &label3d_class_set_structured_text_bidi_override),
	JS_CFUNC_DEF("get_structured_text_bidi_override", 0, &label3d_class_get_structured_text_bidi_override),
	JS_CFUNC_DEF("set_structured_text_bidi_override_options", 1, &label3d_class_set_structured_text_bidi_override_options),
	JS_CFUNC_DEF("get_structured_text_bidi_override_options", 0, &label3d_class_get_structured_text_bidi_override_options),
	JS_CFUNC_DEF("set_uppercase", 1, &label3d_class_set_uppercase),
	JS_CFUNC_DEF("is_uppercase", 0, &label3d_class_is_uppercase),
	JS_CFUNC_DEF("set_render_priority", 1, &label3d_class_set_render_priority),
	JS_CFUNC_DEF("get_render_priority", 0, &label3d_class_get_render_priority),
	JS_CFUNC_DEF("set_outline_render_priority", 1, &label3d_class_set_outline_render_priority),
	JS_CFUNC_DEF("get_outline_render_priority", 0, &label3d_class_get_outline_render_priority),
	JS_CFUNC_DEF("set_font", 1, &label3d_class_set_font),
	JS_CFUNC_DEF("get_font", 0, &label3d_class_get_font),
	JS_CFUNC_DEF("set_font_size", 1, &label3d_class_set_font_size),
	JS_CFUNC_DEF("get_font_size", 0, &label3d_class_get_font_size),
	JS_CFUNC_DEF("set_outline_size", 1, &label3d_class_set_outline_size),
	JS_CFUNC_DEF("get_outline_size", 0, &label3d_class_get_outline_size),
	JS_CFUNC_DEF("set_line_spacing", 1, &label3d_class_set_line_spacing),
	JS_CFUNC_DEF("get_line_spacing", 0, &label3d_class_get_line_spacing),
	JS_CFUNC_DEF("set_autowrap_mode", 1, &label3d_class_set_autowrap_mode),
	JS_CFUNC_DEF("get_autowrap_mode", 0, &label3d_class_get_autowrap_mode),
	JS_CFUNC_DEF("set_justification_flags", 1, &label3d_class_set_justification_flags),
	JS_CFUNC_DEF("get_justification_flags", 0, &label3d_class_get_justification_flags),
	JS_CFUNC_DEF("set_width", 1, &label3d_class_set_width),
	JS_CFUNC_DEF("get_width", 0, &label3d_class_get_width),
	JS_CFUNC_DEF("set_pixel_size", 1, &label3d_class_set_pixel_size),
	JS_CFUNC_DEF("get_pixel_size", 0, &label3d_class_get_pixel_size),
	JS_CFUNC_DEF("set_offset", 1, &label3d_class_set_offset),
	JS_CFUNC_DEF("get_offset", 0, &label3d_class_get_offset),
	JS_CFUNC_DEF("set_draw_flag", 2, &label3d_class_set_draw_flag),
	JS_CFUNC_DEF("get_draw_flag", 1, &label3d_class_get_draw_flag),
	JS_CFUNC_DEF("set_billboard_mode", 1, &label3d_class_set_billboard_mode),
	JS_CFUNC_DEF("get_billboard_mode", 0, &label3d_class_get_billboard_mode),
	JS_CFUNC_DEF("set_alpha_cut_mode", 1, &label3d_class_set_alpha_cut_mode),
	JS_CFUNC_DEF("get_alpha_cut_mode", 0, &label3d_class_get_alpha_cut_mode),
	JS_CFUNC_DEF("set_alpha_scissor_threshold", 1, &label3d_class_set_alpha_scissor_threshold),
	JS_CFUNC_DEF("get_alpha_scissor_threshold", 0, &label3d_class_get_alpha_scissor_threshold),
	JS_CFUNC_DEF("set_alpha_hash_scale", 1, &label3d_class_set_alpha_hash_scale),
	JS_CFUNC_DEF("get_alpha_hash_scale", 0, &label3d_class_get_alpha_hash_scale),
	JS_CFUNC_DEF("set_alpha_antialiasing", 1, &label3d_class_set_alpha_antialiasing),
	JS_CFUNC_DEF("get_alpha_antialiasing", 0, &label3d_class_get_alpha_antialiasing),
	JS_CFUNC_DEF("set_alpha_antialiasing_edge", 1, &label3d_class_set_alpha_antialiasing_edge),
	JS_CFUNC_DEF("get_alpha_antialiasing_edge", 0, &label3d_class_get_alpha_antialiasing_edge),
	JS_CFUNC_DEF("set_texture_filter", 1, &label3d_class_set_texture_filter),
	JS_CFUNC_DEF("get_texture_filter", 0, &label3d_class_get_texture_filter),
	JS_CFUNC_DEF("generate_triangle_mesh", 0, &label3d_class_generate_triangle_mesh),
};

static int js_label3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Label3D::__class_id);
	classes["Label3D"] = Label3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Label3D::__class_id, &label3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, GeometryInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Label3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, label3d_class_proto_funcs, _countof(label3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, label3d_class_constructor, "Label3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Label3D", ctor);

	return 0;
}

JSModuleDef *_js_init_label3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_label3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Label3D");
	return m;
}

JSModuleDef *js_init_label3d_module(JSContext *ctx) {
	return _js_init_label3d_module(ctx, "godot/classes/label3d");
}

void register_label3d() {
	js_init_label3d_module(ctx);
}