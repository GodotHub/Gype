
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/csg_shape3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void csg_shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef csg_shape3d_class_def = {
	"CSGShape3D",
	.finalizer = csg_shape3d_class_finalizer
};

static JSValue csg_shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CSGShape3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	CSGShape3D *csg_shape3d_class = memnew(CSGShape3D);
	if (!csg_shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, csg_shape3d_class);	
	return obj;
}
static JSValue csg_shape3d_class_is_root_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGShape3D::is_root_shape, ctx, this_val, argc, argv);
};
static JSValue csg_shape3d_class_set_operation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CSGShape3D::set_operation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_get_operation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGShape3D::get_operation, ctx, this_val, argc, argv);
};
static JSValue csg_shape3d_class_set_snap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CSGShape3D::set_snap, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_get_snap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGShape3D::get_snap, ctx, this_val, argc, argv);
};
static JSValue csg_shape3d_class_set_use_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CSGShape3D::set_use_collision, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_is_using_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGShape3D::is_using_collision, ctx, this_val, argc, argv);
};
static JSValue csg_shape3d_class_set_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CSGShape3D::set_collision_layer, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_get_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGShape3D::get_collision_layer, ctx, this_val, argc, argv);
};
static JSValue csg_shape3d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CSGShape3D::set_collision_mask, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGShape3D::get_collision_mask, ctx, this_val, argc, argv);
};
static JSValue csg_shape3d_class_set_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CSGShape3D::set_collision_mask_value, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_get_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGShape3D::get_collision_mask_value, ctx, this_val, argc, argv);
};
static JSValue csg_shape3d_class_set_collision_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CSGShape3D::set_collision_layer_value, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_get_collision_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGShape3D::get_collision_layer_value, ctx, this_val, argc, argv);
};
static JSValue csg_shape3d_class_set_collision_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CSGShape3D::set_collision_priority, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_get_collision_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGShape3D::get_collision_priority, ctx, this_val, argc, argv);
};
static JSValue csg_shape3d_class_set_calculate_tangents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CSGShape3D::set_calculate_tangents, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_is_calculating_tangents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGShape3D::is_calculating_tangents, ctx, this_val, argc, argv);
};
static JSValue csg_shape3d_class_get_meshes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CSGShape3D::get_meshes, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry csg_shape3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("is_root_shape", 0, &csg_shape3d_class_is_root_shape),
	JS_CFUNC_DEF("set_operation", 1, &csg_shape3d_class_set_operation),
	JS_CFUNC_DEF("get_operation", 0, &csg_shape3d_class_get_operation),
	JS_CFUNC_DEF("set_snap", 1, &csg_shape3d_class_set_snap),
	JS_CFUNC_DEF("get_snap", 0, &csg_shape3d_class_get_snap),
	JS_CFUNC_DEF("set_use_collision", 1, &csg_shape3d_class_set_use_collision),
	JS_CFUNC_DEF("is_using_collision", 0, &csg_shape3d_class_is_using_collision),
	JS_CFUNC_DEF("set_collision_layer", 1, &csg_shape3d_class_set_collision_layer),
	JS_CFUNC_DEF("get_collision_layer", 0, &csg_shape3d_class_get_collision_layer),
	JS_CFUNC_DEF("set_collision_mask", 1, &csg_shape3d_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &csg_shape3d_class_get_collision_mask),
	JS_CFUNC_DEF("set_collision_mask_value", 2, &csg_shape3d_class_set_collision_mask_value),
	JS_CFUNC_DEF("get_collision_mask_value", 1, &csg_shape3d_class_get_collision_mask_value),
	JS_CFUNC_DEF("set_collision_layer_value", 2, &csg_shape3d_class_set_collision_layer_value),
	JS_CFUNC_DEF("get_collision_layer_value", 1, &csg_shape3d_class_get_collision_layer_value),
	JS_CFUNC_DEF("set_collision_priority", 1, &csg_shape3d_class_set_collision_priority),
	JS_CFUNC_DEF("get_collision_priority", 0, &csg_shape3d_class_get_collision_priority),
	JS_CFUNC_DEF("set_calculate_tangents", 1, &csg_shape3d_class_set_calculate_tangents),
	JS_CFUNC_DEF("is_calculating_tangents", 0, &csg_shape3d_class_is_calculating_tangents),
	JS_CFUNC_DEF("get_meshes", 0, &csg_shape3d_class_get_meshes),
};

void define_csg_shape3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "operation"),
        JS_NewCFunction(ctx, csg_shape3d_class_get_operation, "get_operation", 0),
        JS_NewCFunction(ctx, csg_shape3d_class_set_operation, "set_operation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "snap"),
        JS_NewCFunction(ctx, csg_shape3d_class_get_snap, "get_snap", 0),
        JS_NewCFunction(ctx, csg_shape3d_class_set_snap, "set_snap", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "calculate_tangents"),
        JS_NewCFunction(ctx, csg_shape3d_class_is_calculating_tangents, "is_calculating_tangents", 0),
        JS_NewCFunction(ctx, csg_shape3d_class_set_calculate_tangents, "set_calculate_tangents", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "use_collision"),
        JS_NewCFunction(ctx, csg_shape3d_class_is_using_collision, "is_using_collision", 0),
        JS_NewCFunction(ctx, csg_shape3d_class_set_use_collision, "set_use_collision", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collision_layer"),
        JS_NewCFunction(ctx, csg_shape3d_class_get_collision_layer, "get_collision_layer", 0),
        JS_NewCFunction(ctx, csg_shape3d_class_set_collision_layer, "set_collision_layer", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collision_mask"),
        JS_NewCFunction(ctx, csg_shape3d_class_get_collision_mask, "get_collision_mask", 0),
        JS_NewCFunction(ctx, csg_shape3d_class_set_collision_mask, "set_collision_mask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collision_priority"),
        JS_NewCFunction(ctx, csg_shape3d_class_get_collision_priority, "get_collision_priority", 0),
        JS_NewCFunction(ctx, csg_shape3d_class_set_collision_priority, "set_collision_priority", 1),
        JS_PROP_GETSET
    );
}

static int js_csg_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CSGShape3D::__class_id);
	classes["CSGShape3D"] = CSGShape3D::__class_id;
	class_id_list.insert(CSGShape3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CSGShape3D::__class_id, &csg_shape3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CSGShape3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, GeometryInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CSGShape3D::__class_id, proto);

	define_csg_shape3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, csg_shape3d_class_proto_funcs, _countof(csg_shape3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, csg_shape3d_class_constructor, "CSGShape3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CSGShape3D", ctor);

	return 0;
}

JSModuleDef *_js_init_csg_shape3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/geometry_instance3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_csg_shape3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CSGShape3D");
	return m;
}

JSModuleDef *js_init_csg_shape3d_module(JSContext *ctx) {
	return _js_init_csg_shape3d_module(ctx, "godot/classes/csg_shape3d");
}

void register_csg_shape3d() {
	CSGShape3D::__init_js_class_id();
	js_init_csg_shape3d_module(ctx);
}