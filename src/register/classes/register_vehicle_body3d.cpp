
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/rigid_body3d.hpp>
#include <godot_cpp/classes/vehicle_body3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void vehicle_body3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef vehicle_body3d_class_def = {
	"VehicleBody3D",
	.finalizer = vehicle_body3d_class_finalizer
};

static JSValue vehicle_body3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VehicleBody3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	VehicleBody3D *vehicle_body3d_class = memnew(VehicleBody3D);
	if (!vehicle_body3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, vehicle_body3d_class);	
	return obj;
}
static JSValue vehicle_body3d_class_set_engine_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VehicleBody3D::set_engine_force, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_body3d_class_get_engine_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VehicleBody3D::get_engine_force, ctx, this_val, argc, argv);
};
static JSValue vehicle_body3d_class_set_brake(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VehicleBody3D::set_brake, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_body3d_class_get_brake(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VehicleBody3D::get_brake, ctx, this_val, argc, argv);
};
static JSValue vehicle_body3d_class_set_steering(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VehicleBody3D::set_steering, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_body3d_class_get_steering(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VehicleBody3D::get_steering, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry vehicle_body3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_engine_force", 1, &vehicle_body3d_class_set_engine_force),
	JS_CFUNC_DEF("get_engine_force", 0, &vehicle_body3d_class_get_engine_force),
	JS_CFUNC_DEF("set_brake", 1, &vehicle_body3d_class_set_brake),
	JS_CFUNC_DEF("get_brake", 0, &vehicle_body3d_class_get_brake),
	JS_CFUNC_DEF("set_steering", 1, &vehicle_body3d_class_set_steering),
	JS_CFUNC_DEF("get_steering", 0, &vehicle_body3d_class_get_steering),
};

void define_vehicle_body3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "engine_force"),
        JS_NewCFunction(ctx, vehicle_body3d_class_get_engine_force, "get_engine_force", 0),
        JS_NewCFunction(ctx, vehicle_body3d_class_set_engine_force, "set_engine_force", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "brake"),
        JS_NewCFunction(ctx, vehicle_body3d_class_get_brake, "get_brake", 0),
        JS_NewCFunction(ctx, vehicle_body3d_class_set_brake, "set_brake", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "steering"),
        JS_NewCFunction(ctx, vehicle_body3d_class_get_steering, "get_steering", 0),
        JS_NewCFunction(ctx, vehicle_body3d_class_set_steering, "set_steering", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_vehicle_body3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VehicleBody3D::__class_id);
	classes["VehicleBody3D"] = VehicleBody3D::__class_id;
	class_id_list.insert(VehicleBody3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VehicleBody3D::__class_id, &vehicle_body3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VehicleBody3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RigidBody3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VehicleBody3D::__class_id, proto);

	define_vehicle_body3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, vehicle_body3d_class_proto_funcs, _countof(vehicle_body3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, vehicle_body3d_class_constructor, "VehicleBody3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VehicleBody3D", ctor);

	return 0;
}

JSModuleDef *_js_init_vehicle_body3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/rigid_body3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_vehicle_body3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VehicleBody3D");
	return m;
}

JSModuleDef *js_init_vehicle_body3d_module(JSContext *ctx) {
	return _js_init_vehicle_body3d_module(ctx, "@godot/classes/vehicle_body3d");
}

void register_vehicle_body3d() {
	VehicleBody3D::__init_js_class_id();
	js_init_vehicle_body3d_module(ctx);
}