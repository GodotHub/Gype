
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/area3d.hpp>
#include <godot_cpp/classes/area3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void area3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Area3D *area3d = static_cast<Area3D *>(JS_GetOpaque(val, Area3D::__class_id));
	if (area3d)
		Area3D::free(nullptr, area3d);
}

static JSClassDef area3d_class_def = {
	"Area3D",
	.finalizer = area3d_class_finalizer
};

static JSValue area3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Area3D *area3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Area3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	area3d_class = memnew(Area3D);
	if (!area3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, area3d_class);
	return obj;
}
static JSValue area3d_class_set_gravity_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_gravity_space_override_mode, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_gravity_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_gravity_space_override_mode, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_gravity_is_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_gravity_is_point, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_is_gravity_a_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::is_gravity_a_point, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_gravity_point_unit_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_gravity_point_unit_distance, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_gravity_point_unit_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_gravity_point_unit_distance, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_gravity_point_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_gravity_point_center, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_gravity_point_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_gravity_point_center, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_gravity_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_gravity_direction, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_gravity_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_gravity_direction, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_gravity, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_gravity, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_linear_damp_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_linear_damp_space_override_mode, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_linear_damp_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_linear_damp_space_override_mode, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_angular_damp_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_angular_damp_space_override_mode, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_angular_damp_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_angular_damp_space_override_mode, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_angular_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_angular_damp, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_angular_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_angular_damp, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_linear_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_linear_damp, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_linear_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_linear_damp, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_priority, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_priority, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_wind_force_magnitude(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_wind_force_magnitude, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_wind_force_magnitude(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_wind_force_magnitude, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_wind_attenuation_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_wind_attenuation_factor, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_wind_attenuation_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_wind_attenuation_factor, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_wind_source_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_wind_source_path, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_wind_source_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_wind_source_path, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_monitorable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_monitorable, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_is_monitorable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::is_monitorable, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_monitoring(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_monitoring, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_is_monitoring(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::is_monitoring, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_get_overlapping_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_overlapping_bodies, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_get_overlapping_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_overlapping_areas, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_has_overlapping_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::has_overlapping_bodies, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_has_overlapping_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::has_overlapping_areas, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_overlaps_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::overlaps_body, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_overlaps_area(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::overlaps_area, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_audio_bus_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_audio_bus_override, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_is_overriding_audio_bus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::is_overriding_audio_bus, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_audio_bus_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_audio_bus_name, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_audio_bus_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_audio_bus_name, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_use_reverb_bus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_use_reverb_bus, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_is_using_reverb_bus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::is_using_reverb_bus, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_reverb_bus_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_reverb_bus_name, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_reverb_bus_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_reverb_bus_name, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_reverb_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_reverb_amount, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_reverb_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_reverb_amount, Area3D::__class_id, ctx, this_val, argv);
};
static JSValue area3d_class_set_reverb_uniformity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Area3D::set_reverb_uniformity, Area3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue area3d_class_get_reverb_uniformity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Area3D::get_reverb_uniformity, Area3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry area3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_gravity_space_override_mode", 1, &area3d_class_set_gravity_space_override_mode),
	JS_CFUNC_DEF("get_gravity_space_override_mode", 0, &area3d_class_get_gravity_space_override_mode),
	JS_CFUNC_DEF("set_gravity_is_point", 1, &area3d_class_set_gravity_is_point),
	JS_CFUNC_DEF("is_gravity_a_point", 0, &area3d_class_is_gravity_a_point),
	JS_CFUNC_DEF("set_gravity_point_unit_distance", 1, &area3d_class_set_gravity_point_unit_distance),
	JS_CFUNC_DEF("get_gravity_point_unit_distance", 0, &area3d_class_get_gravity_point_unit_distance),
	JS_CFUNC_DEF("set_gravity_point_center", 1, &area3d_class_set_gravity_point_center),
	JS_CFUNC_DEF("get_gravity_point_center", 0, &area3d_class_get_gravity_point_center),
	JS_CFUNC_DEF("set_gravity_direction", 1, &area3d_class_set_gravity_direction),
	JS_CFUNC_DEF("get_gravity_direction", 0, &area3d_class_get_gravity_direction),
	JS_CFUNC_DEF("set_gravity", 1, &area3d_class_set_gravity),
	JS_CFUNC_DEF("get_gravity", 0, &area3d_class_get_gravity),
	JS_CFUNC_DEF("set_linear_damp_space_override_mode", 1, &area3d_class_set_linear_damp_space_override_mode),
	JS_CFUNC_DEF("get_linear_damp_space_override_mode", 0, &area3d_class_get_linear_damp_space_override_mode),
	JS_CFUNC_DEF("set_angular_damp_space_override_mode", 1, &area3d_class_set_angular_damp_space_override_mode),
	JS_CFUNC_DEF("get_angular_damp_space_override_mode", 0, &area3d_class_get_angular_damp_space_override_mode),
	JS_CFUNC_DEF("set_angular_damp", 1, &area3d_class_set_angular_damp),
	JS_CFUNC_DEF("get_angular_damp", 0, &area3d_class_get_angular_damp),
	JS_CFUNC_DEF("set_linear_damp", 1, &area3d_class_set_linear_damp),
	JS_CFUNC_DEF("get_linear_damp", 0, &area3d_class_get_linear_damp),
	JS_CFUNC_DEF("set_priority", 1, &area3d_class_set_priority),
	JS_CFUNC_DEF("get_priority", 0, &area3d_class_get_priority),
	JS_CFUNC_DEF("set_wind_force_magnitude", 1, &area3d_class_set_wind_force_magnitude),
	JS_CFUNC_DEF("get_wind_force_magnitude", 0, &area3d_class_get_wind_force_magnitude),
	JS_CFUNC_DEF("set_wind_attenuation_factor", 1, &area3d_class_set_wind_attenuation_factor),
	JS_CFUNC_DEF("get_wind_attenuation_factor", 0, &area3d_class_get_wind_attenuation_factor),
	JS_CFUNC_DEF("set_wind_source_path", 1, &area3d_class_set_wind_source_path),
	JS_CFUNC_DEF("get_wind_source_path", 0, &area3d_class_get_wind_source_path),
	JS_CFUNC_DEF("set_monitorable", 1, &area3d_class_set_monitorable),
	JS_CFUNC_DEF("is_monitorable", 0, &area3d_class_is_monitorable),
	JS_CFUNC_DEF("set_monitoring", 1, &area3d_class_set_monitoring),
	JS_CFUNC_DEF("is_monitoring", 0, &area3d_class_is_monitoring),
	JS_CFUNC_DEF("get_overlapping_bodies", 0, &area3d_class_get_overlapping_bodies),
	JS_CFUNC_DEF("get_overlapping_areas", 0, &area3d_class_get_overlapping_areas),
	JS_CFUNC_DEF("has_overlapping_bodies", 0, &area3d_class_has_overlapping_bodies),
	JS_CFUNC_DEF("has_overlapping_areas", 0, &area3d_class_has_overlapping_areas),
	JS_CFUNC_DEF("overlaps_body", 1, &area3d_class_overlaps_body),
	JS_CFUNC_DEF("overlaps_area", 1, &area3d_class_overlaps_area),
	JS_CFUNC_DEF("set_audio_bus_override", 1, &area3d_class_set_audio_bus_override),
	JS_CFUNC_DEF("is_overriding_audio_bus", 0, &area3d_class_is_overriding_audio_bus),
	JS_CFUNC_DEF("set_audio_bus_name", 1, &area3d_class_set_audio_bus_name),
	JS_CFUNC_DEF("get_audio_bus_name", 0, &area3d_class_get_audio_bus_name),
	JS_CFUNC_DEF("set_use_reverb_bus", 1, &area3d_class_set_use_reverb_bus),
	JS_CFUNC_DEF("is_using_reverb_bus", 0, &area3d_class_is_using_reverb_bus),
	JS_CFUNC_DEF("set_reverb_bus_name", 1, &area3d_class_set_reverb_bus_name),
	JS_CFUNC_DEF("get_reverb_bus_name", 0, &area3d_class_get_reverb_bus_name),
	JS_CFUNC_DEF("set_reverb_amount", 1, &area3d_class_set_reverb_amount),
	JS_CFUNC_DEF("get_reverb_amount", 0, &area3d_class_get_reverb_amount),
	JS_CFUNC_DEF("set_reverb_uniformity", 1, &area3d_class_set_reverb_uniformity),
	JS_CFUNC_DEF("get_reverb_uniformity", 0, &area3d_class_get_reverb_uniformity),
};

static int js_area3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Area3D::__class_id);
	classes["Area3D"] = Area3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Area3D::__class_id, &area3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CollisionObject3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Area3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, area3d_class_proto_funcs, _countof(area3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, area3d_class_constructor, "Area3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Area3D", ctor);

	return 0;
}

JSModuleDef *_js_init_area3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_area3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Area3D");
	return m;
}

JSModuleDef *js_init_area3d_module(JSContext *ctx) {
	return _js_init_area3d_module(ctx, "godot/classes/area3d");
}

void register_area3d() {
	js_init_area3d_module(ctx);
}