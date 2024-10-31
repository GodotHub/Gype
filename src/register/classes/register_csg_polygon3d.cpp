
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/csg_polygon3d.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void csg_polygon3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef csg_polygon3d_class_def = {
	"CSGPolygon3D",
	.finalizer = csg_polygon3d_class_finalizer
};

static JSValue csg_polygon3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CSGPolygon3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	CSGPolygon3D *csg_polygon3d_class;
	if (argc == 1) 
		csg_polygon3d_class = static_cast<CSGPolygon3D *>(Variant(*argv).operator Object *());
	else 
		csg_polygon3d_class = memnew(CSGPolygon3D);
	if (!csg_polygon3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, csg_polygon3d_class);
	return obj;
}
static JSValue csg_polygon3d_class_set_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_polygon, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_get_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::get_polygon, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_mode, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_get_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::get_mode, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_depth, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_get_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::get_depth, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_spin_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_spin_degrees, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_get_spin_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::get_spin_degrees, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_spin_sides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_spin_sides, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_get_spin_sides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::get_spin_sides, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_path_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_path_node, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_get_path_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::get_path_node, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_path_interval_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_path_interval_type, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_get_path_interval_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::get_path_interval_type, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_path_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_path_interval, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_get_path_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::get_path_interval, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_path_simplify_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_path_simplify_angle, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_get_path_simplify_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::get_path_simplify_angle, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_path_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_path_rotation, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_get_path_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::get_path_rotation, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_path_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_path_local, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_is_path_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::is_path_local, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_path_continuous_u(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_path_continuous_u, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_is_path_continuous_u(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::is_path_continuous_u, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_path_u_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_path_u_distance, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_get_path_u_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::get_path_u_distance, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_path_joined(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_path_joined, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_is_path_joined(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::is_path_joined, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_material, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::get_material, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_set_smooth_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CSGPolygon3D::set_smooth_faces, ctx, this_val, argc, argv);
};
static JSValue csg_polygon3d_class_get_smooth_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGPolygon3D::get_smooth_faces, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry csg_polygon3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_polygon", 1, &csg_polygon3d_class_set_polygon),
	JS_CFUNC_DEF("get_polygon", 0, &csg_polygon3d_class_get_polygon),
	JS_CFUNC_DEF("set_mode", 1, &csg_polygon3d_class_set_mode),
	JS_CFUNC_DEF("get_mode", 0, &csg_polygon3d_class_get_mode),
	JS_CFUNC_DEF("set_depth", 1, &csg_polygon3d_class_set_depth),
	JS_CFUNC_DEF("get_depth", 0, &csg_polygon3d_class_get_depth),
	JS_CFUNC_DEF("set_spin_degrees", 1, &csg_polygon3d_class_set_spin_degrees),
	JS_CFUNC_DEF("get_spin_degrees", 0, &csg_polygon3d_class_get_spin_degrees),
	JS_CFUNC_DEF("set_spin_sides", 1, &csg_polygon3d_class_set_spin_sides),
	JS_CFUNC_DEF("get_spin_sides", 0, &csg_polygon3d_class_get_spin_sides),
	JS_CFUNC_DEF("set_path_node", 1, &csg_polygon3d_class_set_path_node),
	JS_CFUNC_DEF("get_path_node", 0, &csg_polygon3d_class_get_path_node),
	JS_CFUNC_DEF("set_path_interval_type", 1, &csg_polygon3d_class_set_path_interval_type),
	JS_CFUNC_DEF("get_path_interval_type", 0, &csg_polygon3d_class_get_path_interval_type),
	JS_CFUNC_DEF("set_path_interval", 1, &csg_polygon3d_class_set_path_interval),
	JS_CFUNC_DEF("get_path_interval", 0, &csg_polygon3d_class_get_path_interval),
	JS_CFUNC_DEF("set_path_simplify_angle", 1, &csg_polygon3d_class_set_path_simplify_angle),
	JS_CFUNC_DEF("get_path_simplify_angle", 0, &csg_polygon3d_class_get_path_simplify_angle),
	JS_CFUNC_DEF("set_path_rotation", 1, &csg_polygon3d_class_set_path_rotation),
	JS_CFUNC_DEF("get_path_rotation", 0, &csg_polygon3d_class_get_path_rotation),
	JS_CFUNC_DEF("set_path_local", 1, &csg_polygon3d_class_set_path_local),
	JS_CFUNC_DEF("is_path_local", 0, &csg_polygon3d_class_is_path_local),
	JS_CFUNC_DEF("set_path_continuous_u", 1, &csg_polygon3d_class_set_path_continuous_u),
	JS_CFUNC_DEF("is_path_continuous_u", 0, &csg_polygon3d_class_is_path_continuous_u),
	JS_CFUNC_DEF("set_path_u_distance", 1, &csg_polygon3d_class_set_path_u_distance),
	JS_CFUNC_DEF("get_path_u_distance", 0, &csg_polygon3d_class_get_path_u_distance),
	JS_CFUNC_DEF("set_path_joined", 1, &csg_polygon3d_class_set_path_joined),
	JS_CFUNC_DEF("is_path_joined", 0, &csg_polygon3d_class_is_path_joined),
	JS_CFUNC_DEF("set_material", 1, &csg_polygon3d_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &csg_polygon3d_class_get_material),
	JS_CFUNC_DEF("set_smooth_faces", 1, &csg_polygon3d_class_set_smooth_faces),
	JS_CFUNC_DEF("get_smooth_faces", 0, &csg_polygon3d_class_get_smooth_faces),
};

static void define_csg_polygon3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "polygon"),
        JS_NewCFunction(ctx, csg_polygon3d_class_get_polygon, "get_polygon", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_polygon, "set_polygon", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mode"),
        JS_NewCFunction(ctx, csg_polygon3d_class_get_mode, "get_mode", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_mode, "set_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "depth"),
        JS_NewCFunction(ctx, csg_polygon3d_class_get_depth, "get_depth", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_depth, "set_depth", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "spin_degrees"),
        JS_NewCFunction(ctx, csg_polygon3d_class_get_spin_degrees, "get_spin_degrees", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_spin_degrees, "set_spin_degrees", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "spin_sides"),
        JS_NewCFunction(ctx, csg_polygon3d_class_get_spin_sides, "get_spin_sides", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_spin_sides, "set_spin_sides", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_node"),
        JS_NewCFunction(ctx, csg_polygon3d_class_get_path_node, "get_path_node", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_path_node, "set_path_node", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_interval_type"),
        JS_NewCFunction(ctx, csg_polygon3d_class_get_path_interval_type, "get_path_interval_type", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_path_interval_type, "set_path_interval_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_interval"),
        JS_NewCFunction(ctx, csg_polygon3d_class_get_path_interval, "get_path_interval", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_path_interval, "set_path_interval", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_simplify_angle"),
        JS_NewCFunction(ctx, csg_polygon3d_class_get_path_simplify_angle, "get_path_simplify_angle", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_path_simplify_angle, "set_path_simplify_angle", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_rotation"),
        JS_NewCFunction(ctx, csg_polygon3d_class_get_path_rotation, "get_path_rotation", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_path_rotation, "set_path_rotation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_local"),
        JS_NewCFunction(ctx, csg_polygon3d_class_is_path_local, "is_path_local", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_path_local, "set_path_local", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_continuous_u"),
        JS_NewCFunction(ctx, csg_polygon3d_class_is_path_continuous_u, "is_path_continuous_u", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_path_continuous_u, "set_path_continuous_u", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_u_distance"),
        JS_NewCFunction(ctx, csg_polygon3d_class_get_path_u_distance, "get_path_u_distance", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_path_u_distance, "set_path_u_distance", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_joined"),
        JS_NewCFunction(ctx, csg_polygon3d_class_is_path_joined, "is_path_joined", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_path_joined, "set_path_joined", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "smooth_faces"),
        JS_NewCFunction(ctx, csg_polygon3d_class_get_smooth_faces, "get_smooth_faces", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_smooth_faces, "set_smooth_faces", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "material"),
        JS_NewCFunction(ctx, csg_polygon3d_class_get_material, "get_material", 0),
        JS_NewCFunction(ctx, csg_polygon3d_class_set_material, "set_material", 1),
        JS_PROP_GETSET
    );
	
}

static void define_csg_polygon3d_enum(JSContext *ctx, JSValue proto) {
	JSValue Mode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_DEPTH", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_SPIN", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_PATH", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "Mode", Mode_obj);
	JSValue PathRotation_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, PathRotation_obj, "PATH_ROTATION_POLYGON", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, PathRotation_obj, "PATH_ROTATION_PATH", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, PathRotation_obj, "PATH_ROTATION_PATH_FOLLOW", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "PathRotation", PathRotation_obj);
	JSValue PathIntervalType_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, PathIntervalType_obj, "PATH_INTERVAL_DISTANCE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, PathIntervalType_obj, "PATH_INTERVAL_SUBDIVIDE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "PathIntervalType", PathIntervalType_obj);
}

static int js_csg_polygon3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["CSGPolygon3D"] = CSGPolygon3D::__class_id;
	class_id_list.insert(CSGPolygon3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CSGPolygon3D::__class_id, &csg_polygon3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CSGPolygon3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, CSGPrimitive3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CSGPolygon3D::__class_id, proto);

	define_csg_polygon3d_property(ctx, proto);
	define_csg_polygon3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, csg_polygon3d_class_proto_funcs, _countof(csg_polygon3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, csg_polygon3d_class_constructor, "CSGPolygon3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CSGPolygon3D", ctor);

	return 0;
}

JSModuleDef *_js_init_csg_polygon3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/csg_primitive3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_csg_polygon3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CSGPolygon3D");
	return m;
}

JSModuleDef *js_init_csg_polygon3d_module(JSContext *ctx) {
	return _js_init_csg_polygon3d_module(ctx, "@godot/classes/csg_polygon3d");
}

void register_csg_polygon3d() {
	CSGPolygon3D::__init_js_class_id();
	js_init_csg_polygon3d_module(ctx);
}