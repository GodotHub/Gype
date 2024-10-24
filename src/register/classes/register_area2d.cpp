
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/area2d.hpp>
#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/area2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void area2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef area2d_class_def = {
	"Area2D",
	.finalizer = area2d_class_finalizer
};

static JSValue area2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Area2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	Area2D *area2d_class = memnew(Area2D);
	if (!area2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, area2d_class);	
	return obj;
}
static JSValue area2d_class_set_gravity_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_gravity_space_override_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_gravity_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::get_gravity_space_override_mode, ctx, this_val, argc, argv);
};
static JSValue area2d_class_set_gravity_is_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_gravity_is_point, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_is_gravity_a_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::is_gravity_a_point, ctx, this_val, argc, argv);
};
static JSValue area2d_class_set_gravity_point_unit_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_gravity_point_unit_distance, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_gravity_point_unit_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::get_gravity_point_unit_distance, ctx, this_val, argc, argv);
};
static JSValue area2d_class_set_gravity_point_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_gravity_point_center, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_gravity_point_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::get_gravity_point_center, ctx, this_val, argc, argv);
};
static JSValue area2d_class_set_gravity_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_gravity_direction, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_gravity_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::get_gravity_direction, ctx, this_val, argc, argv);
};
static JSValue area2d_class_set_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_gravity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::get_gravity, ctx, this_val, argc, argv);
};
static JSValue area2d_class_set_linear_damp_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_linear_damp_space_override_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_linear_damp_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::get_linear_damp_space_override_mode, ctx, this_val, argc, argv);
};
static JSValue area2d_class_set_angular_damp_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_angular_damp_space_override_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_angular_damp_space_override_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::get_angular_damp_space_override_mode, ctx, this_val, argc, argv);
};
static JSValue area2d_class_set_linear_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_linear_damp, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_linear_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::get_linear_damp, ctx, this_val, argc, argv);
};
static JSValue area2d_class_set_angular_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_angular_damp, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_angular_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::get_angular_damp, ctx, this_val, argc, argv);
};
static JSValue area2d_class_set_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_priority, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::get_priority, ctx, this_val, argc, argv);
};
static JSValue area2d_class_set_monitoring(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_monitoring, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_is_monitoring(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::is_monitoring, ctx, this_val, argc, argv);
};
static JSValue area2d_class_set_monitorable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_monitorable, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_is_monitorable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::is_monitorable, ctx, this_val, argc, argv);
};
static JSValue area2d_class_get_overlapping_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::get_overlapping_bodies, ctx, this_val, argc, argv);
};
static JSValue area2d_class_get_overlapping_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::get_overlapping_areas, ctx, this_val, argc, argv);
};
static JSValue area2d_class_has_overlapping_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::has_overlapping_bodies, ctx, this_val, argc, argv);
};
static JSValue area2d_class_has_overlapping_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::has_overlapping_areas, ctx, this_val, argc, argv);
};
static JSValue area2d_class_overlaps_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::overlaps_body, ctx, this_val, argc, argv);
};
static JSValue area2d_class_overlaps_area(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::overlaps_area, ctx, this_val, argc, argv);
};
static JSValue area2d_class_set_audio_bus_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_audio_bus_name, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_get_audio_bus_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::get_audio_bus_name, ctx, this_val, argc, argv);
};
static JSValue area2d_class_set_audio_bus_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Area2D::set_audio_bus_override, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue area2d_class_is_overriding_audio_bus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Area2D::is_overriding_audio_bus, ctx, this_val, argc, argv);
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

void define_area2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "monitoring"),
        JS_NewCFunction(ctx, area2d_class_is_monitoring, "is_monitoring", 0),
        JS_NewCFunction(ctx, area2d_class_set_monitoring, "set_monitoring", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "monitorable"),
        JS_NewCFunction(ctx, area2d_class_is_monitorable, "is_monitorable", 0),
        JS_NewCFunction(ctx, area2d_class_set_monitorable, "set_monitorable", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "priority"),
        JS_NewCFunction(ctx, area2d_class_get_priority, "get_priority", 0),
        JS_NewCFunction(ctx, area2d_class_set_priority, "set_priority", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gravity_space_override"),
        JS_NewCFunction(ctx, area2d_class_get_gravity_space_override_mode, "get_gravity_space_override_mode", 0),
        JS_NewCFunction(ctx, area2d_class_set_gravity_space_override_mode, "set_gravity_space_override_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gravity_point"),
        JS_NewCFunction(ctx, area2d_class_is_gravity_a_point, "is_gravity_a_point", 0),
        JS_NewCFunction(ctx, area2d_class_set_gravity_is_point, "set_gravity_is_point", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gravity_point_unit_distance"),
        JS_NewCFunction(ctx, area2d_class_get_gravity_point_unit_distance, "get_gravity_point_unit_distance", 0),
        JS_NewCFunction(ctx, area2d_class_set_gravity_point_unit_distance, "set_gravity_point_unit_distance", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gravity_point_center"),
        JS_NewCFunction(ctx, area2d_class_get_gravity_point_center, "get_gravity_point_center", 0),
        JS_NewCFunction(ctx, area2d_class_set_gravity_point_center, "set_gravity_point_center", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gravity_direction"),
        JS_NewCFunction(ctx, area2d_class_get_gravity_direction, "get_gravity_direction", 0),
        JS_NewCFunction(ctx, area2d_class_set_gravity_direction, "set_gravity_direction", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gravity"),
        JS_NewCFunction(ctx, area2d_class_get_gravity, "get_gravity", 0),
        JS_NewCFunction(ctx, area2d_class_set_gravity, "set_gravity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "linear_damp_space_override"),
        JS_NewCFunction(ctx, area2d_class_get_linear_damp_space_override_mode, "get_linear_damp_space_override_mode", 0),
        JS_NewCFunction(ctx, area2d_class_set_linear_damp_space_override_mode, "set_linear_damp_space_override_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "linear_damp"),
        JS_NewCFunction(ctx, area2d_class_get_linear_damp, "get_linear_damp", 0),
        JS_NewCFunction(ctx, area2d_class_set_linear_damp, "set_linear_damp", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angular_damp_space_override"),
        JS_NewCFunction(ctx, area2d_class_get_angular_damp_space_override_mode, "get_angular_damp_space_override_mode", 0),
        JS_NewCFunction(ctx, area2d_class_set_angular_damp_space_override_mode, "set_angular_damp_space_override_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angular_damp"),
        JS_NewCFunction(ctx, area2d_class_get_angular_damp, "get_angular_damp", 0),
        JS_NewCFunction(ctx, area2d_class_set_angular_damp, "set_angular_damp", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "audio_bus_override"),
        JS_NewCFunction(ctx, area2d_class_is_overriding_audio_bus, "is_overriding_audio_bus", 0),
        JS_NewCFunction(ctx, area2d_class_set_audio_bus_override, "set_audio_bus_override", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "audio_bus_name"),
        JS_NewCFunction(ctx, area2d_class_get_audio_bus_name, "get_audio_bus_name", 0),
        JS_NewCFunction(ctx, area2d_class_set_audio_bus_name, "set_audio_bus_name", 1),
        JS_PROP_GETSET
    );
}

static int js_area2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Area2D::__class_id);
	classes["Area2D"] = Area2D::__class_id;
	class_id_list.insert(Area2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Area2D::__class_id, &area2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Area2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, CollisionObject2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Area2D::__class_id, proto);

	define_area2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, area2d_class_proto_funcs, _countof(area2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, area2d_class_constructor, "Area2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Area2D", ctor);

	return 0;
}

JSModuleDef *_js_init_area2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/collision_object2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	Area2D::__init_js_class_id();
	js_init_area2d_module(ctx);
}