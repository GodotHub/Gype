
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/area2d.hpp>
#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void area2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Area2D *area2d = static_cast<Area2D *>(JS_GetOpaque(val, Area2D::__class_id));
	if (area2d)
		Area2D::free(nullptr, area2d);
}

static JSClassDef area2d_class_def = {
	"Area2D",
	.finalizer = area2d_class_finalizer
};

static JSValue area2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Area2D *area2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Area2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	area2d_class = memnew(Area2D);
	if (!area2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, area2d_class);
	return obj;
}
static JSValue area2d_class_set_gravity_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_gravity_space_override_mode, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_gravity_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::get_gravity_space_override_mode, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_set_gravity_is_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_gravity_is_point, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_is_gravity_a_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::is_gravity_a_point, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_set_gravity_point_unit_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_gravity_point_unit_distance, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_gravity_point_unit_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::get_gravity_point_unit_distance, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_set_gravity_point_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_gravity_point_center, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_gravity_point_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::get_gravity_point_center, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_set_gravity_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_gravity_direction, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_gravity_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::get_gravity_direction, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_set_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_gravity, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::get_gravity, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_set_linear_damp_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_linear_damp_space_override_mode, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_linear_damp_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::get_linear_damp_space_override_mode, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_set_angular_damp_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_angular_damp_space_override_mode, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_angular_damp_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::get_angular_damp_space_override_mode, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_set_linear_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_linear_damp, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_linear_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::get_linear_damp, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_set_angular_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_angular_damp, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_angular_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::get_angular_damp, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_set_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_priority, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::get_priority, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_set_monitoring(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_monitoring, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_is_monitoring(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::is_monitoring, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_set_monitorable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_monitorable, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_is_monitorable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::is_monitorable, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_get_overlapping_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::get_overlapping_bodies, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_get_overlapping_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::get_overlapping_areas, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_has_overlapping_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::has_overlapping_bodies, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_has_overlapping_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::has_overlapping_areas, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_overlaps_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::overlaps_body, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_overlaps_area(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::overlaps_area, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_set_audio_bus_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_audio_bus_name, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_audio_bus_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::get_audio_bus_name, Area2D::__class_id, ctx, this_val, argv);
};
static JSValue area2d_class_set_audio_bus_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Area2D::set_audio_bus_override, Area2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_is_overriding_audio_bus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area2D::is_overriding_audio_bus, Area2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry area2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_gravity_space_override_mode", 1, &area2d_class_set_gravity_space_override_mode),
	JS_CFUNC_DEF("get_gravity_space_override_mode", 0, &area2d_class_get_gravity_space_override_mode),
	JS_CFUNC_DEF("set_gravity_is_point", 1, &area2d_class_set_gravity_is_point),
	JS_CFUNC_DEF("is_gravity_a_point", 0, &area2d_class_is_gravity_a_point),
	JS_CFUNC_DEF("set_gravity_point_unit_distance", 1, &area2d_class_set_gravity_point_unit_distance),
	JS_CFUNC_DEF("get_gravity_point_unit_distance", 0, &area2d_class_get_gravity_point_unit_distance),
	JS_CFUNC_DEF("set_gravity_point_center", 1, &area2d_class_set_gravity_point_center),
	JS_CFUNC_DEF("get_gravity_point_center", 0, &area2d_class_get_gravity_point_center),
	JS_CFUNC_DEF("set_gravity_direction", 1, &area2d_class_set_gravity_direction),
	JS_CFUNC_DEF("get_gravity_direction", 0, &area2d_class_get_gravity_direction),
	JS_CFUNC_DEF("set_gravity", 1, &area2d_class_set_gravity),
	JS_CFUNC_DEF("get_gravity", 0, &area2d_class_get_gravity),
	JS_CFUNC_DEF("set_linear_damp_space_override_mode", 1, &area2d_class_set_linear_damp_space_override_mode),
	JS_CFUNC_DEF("get_linear_damp_space_override_mode", 0, &area2d_class_get_linear_damp_space_override_mode),
	JS_CFUNC_DEF("set_angular_damp_space_override_mode", 1, &area2d_class_set_angular_damp_space_override_mode),
	JS_CFUNC_DEF("get_angular_damp_space_override_mode", 0, &area2d_class_get_angular_damp_space_override_mode),
	JS_CFUNC_DEF("set_linear_damp", 1, &area2d_class_set_linear_damp),
	JS_CFUNC_DEF("get_linear_damp", 0, &area2d_class_get_linear_damp),
	JS_CFUNC_DEF("set_angular_damp", 1, &area2d_class_set_angular_damp),
	JS_CFUNC_DEF("get_angular_damp", 0, &area2d_class_get_angular_damp),
	JS_CFUNC_DEF("set_priority", 1, &area2d_class_set_priority),
	JS_CFUNC_DEF("get_priority", 0, &area2d_class_get_priority),
	JS_CFUNC_DEF("set_monitoring", 1, &area2d_class_set_monitoring),
	JS_CFUNC_DEF("is_monitoring", 0, &area2d_class_is_monitoring),
	JS_CFUNC_DEF("set_monitorable", 1, &area2d_class_set_monitorable),
	JS_CFUNC_DEF("is_monitorable", 0, &area2d_class_is_monitorable),
	JS_CFUNC_DEF("get_overlapping_bodies", 0, &area2d_class_get_overlapping_bodies),
	JS_CFUNC_DEF("get_overlapping_areas", 0, &area2d_class_get_overlapping_areas),
	JS_CFUNC_DEF("has_overlapping_bodies", 0, &area2d_class_has_overlapping_bodies),
	JS_CFUNC_DEF("has_overlapping_areas", 0, &area2d_class_has_overlapping_areas),
	JS_CFUNC_DEF("overlaps_body", 1, &area2d_class_overlaps_body),
	JS_CFUNC_DEF("overlaps_area", 1, &area2d_class_overlaps_area),
	JS_CFUNC_DEF("set_audio_bus_name", 1, &area2d_class_set_audio_bus_name),
	JS_CFUNC_DEF("get_audio_bus_name", 0, &area2d_class_get_audio_bus_name),
	JS_CFUNC_DEF("set_audio_bus_override", 1, &area2d_class_set_audio_bus_override),
	JS_CFUNC_DEF("is_overriding_audio_bus", 0, &area2d_class_is_overriding_audio_bus),
};

static int js_area2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Area2D::__class_id);
	classes["Area2D"] = Area2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Area2D::__class_id, &area2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CollisionObject2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Area2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, area2d_class_proto_funcs, _countof(area2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, area2d_class_constructor, "Area2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Area2D", ctor);

	return 0;
}

JSModuleDef *_js_init_area2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_area2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Area2D");
	return m;
}

JSModuleDef *js_init_area2d_module(JSContext *ctx) {
	return _js_init_area2d_module(ctx, "godot/classes/area2d");
}

void register_area2d() {
	js_init_area2d_module(ctx);
}