
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/line2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void line2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Line2D *line2d = static_cast<Line2D *>(JS_GetOpaque(val, Line2D::__class_id));
	if (line2d)
		Line2D::free(nullptr, line2d);
}

static JSClassDef line2d_class_def = {
	"Line2D",
	.finalizer = line2d_class_finalizer
};

static JSValue line2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Line2D *line2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Line2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	line2d_class = memnew(Line2D);
	if (!line2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, line2d_class);
	return obj;
}
static JSValue line2d_class_set_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_points, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_get_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_points, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_set_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_point_position, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_get_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_point_position, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_get_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_point_count, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_add_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::add_point, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_remove_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::remove_point, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_clear_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::clear_points, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_set_closed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_closed, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_is_closed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::is_closed, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_set_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_width, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_get_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_width, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_set_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_curve, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_get_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_curve, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_set_default_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_default_color, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_get_default_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_default_color, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_set_gradient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_gradient, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_get_gradient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_gradient, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_texture, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_texture, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_set_texture_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_texture_mode, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_get_texture_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_texture_mode, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_set_joint_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_joint_mode, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_get_joint_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_joint_mode, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_set_begin_cap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_begin_cap_mode, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_get_begin_cap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_begin_cap_mode, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_set_end_cap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_end_cap_mode, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_get_end_cap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_end_cap_mode, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_set_sharp_limit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_sharp_limit, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_get_sharp_limit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_sharp_limit, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_set_round_precision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_round_precision, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_get_round_precision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_round_precision, Line2D::__class_id, ctx, this_val, argv);
};
static JSValue line2d_class_set_antialiased(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Line2D::set_antialiased, Line2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line2d_class_get_antialiased(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Line2D::get_antialiased, Line2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry line2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_points", 1, &line2d_class_set_points),
	JS_CFUNC_DEF("get_points", 0, &line2d_class_get_points),
	JS_CFUNC_DEF("set_point_position", 2, &line2d_class_set_point_position),
	JS_CFUNC_DEF("get_point_position", 1, &line2d_class_get_point_position),
	JS_CFUNC_DEF("get_point_count", 0, &line2d_class_get_point_count),
	JS_CFUNC_DEF("add_point", 2, &line2d_class_add_point),
	JS_CFUNC_DEF("remove_point", 1, &line2d_class_remove_point),
	JS_CFUNC_DEF("clear_points", 0, &line2d_class_clear_points),
	JS_CFUNC_DEF("set_closed", 1, &line2d_class_set_closed),
	JS_CFUNC_DEF("is_closed", 0, &line2d_class_is_closed),
	JS_CFUNC_DEF("set_width", 1, &line2d_class_set_width),
	JS_CFUNC_DEF("get_width", 0, &line2d_class_get_width),
	JS_CFUNC_DEF("set_curve", 1, &line2d_class_set_curve),
	JS_CFUNC_DEF("get_curve", 0, &line2d_class_get_curve),
	JS_CFUNC_DEF("set_default_color", 1, &line2d_class_set_default_color),
	JS_CFUNC_DEF("get_default_color", 0, &line2d_class_get_default_color),
	JS_CFUNC_DEF("set_gradient", 1, &line2d_class_set_gradient),
	JS_CFUNC_DEF("get_gradient", 0, &line2d_class_get_gradient),
	JS_CFUNC_DEF("set_texture", 1, &line2d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &line2d_class_get_texture),
	JS_CFUNC_DEF("set_texture_mode", 1, &line2d_class_set_texture_mode),
	JS_CFUNC_DEF("get_texture_mode", 0, &line2d_class_get_texture_mode),
	JS_CFUNC_DEF("set_joint_mode", 1, &line2d_class_set_joint_mode),
	JS_CFUNC_DEF("get_joint_mode", 0, &line2d_class_get_joint_mode),
	JS_CFUNC_DEF("set_begin_cap_mode", 1, &line2d_class_set_begin_cap_mode),
	JS_CFUNC_DEF("get_begin_cap_mode", 0, &line2d_class_get_begin_cap_mode),
	JS_CFUNC_DEF("set_end_cap_mode", 1, &line2d_class_set_end_cap_mode),
	JS_CFUNC_DEF("get_end_cap_mode", 0, &line2d_class_get_end_cap_mode),
	JS_CFUNC_DEF("set_sharp_limit", 1, &line2d_class_set_sharp_limit),
	JS_CFUNC_DEF("get_sharp_limit", 0, &line2d_class_get_sharp_limit),
	JS_CFUNC_DEF("set_round_precision", 1, &line2d_class_set_round_precision),
	JS_CFUNC_DEF("get_round_precision", 0, &line2d_class_get_round_precision),
	JS_CFUNC_DEF("set_antialiased", 1, &line2d_class_set_antialiased),
	JS_CFUNC_DEF("get_antialiased", 0, &line2d_class_get_antialiased),
};

static int js_line2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Line2D::__class_id);
	classes["Line2D"] = Line2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Line2D::__class_id, &line2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Line2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, line2d_class_proto_funcs, _countof(line2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, line2d_class_constructor, "Line2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Line2D", ctor);

	return 0;
}

JSModuleDef *_js_init_line2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_line2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Line2D");
	return m;
}

JSModuleDef *js_init_line2d_module(JSContext *ctx) {
	return _js_init_line2d_module(ctx, "godot/classes/line2d");
}

void register_line2d() {
	js_init_line2d_module(ctx);
}