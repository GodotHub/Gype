
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/csg_shape3d.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void csg_shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	CSGShape3D *csg_shape3d = static_cast<CSGShape3D *>(JS_GetOpaque(val, CSGShape3D::__class_id));
	if (csg_shape3d)
		CSGShape3D::free(nullptr, csg_shape3d);
}

static JSClassDef csg_shape3d_class_def = {
	"CSGShape3D",
	.finalizer = csg_shape3d_class_finalizer
};

static JSValue csg_shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CSGShape3D *csg_shape3d_class;
	JSValue obj = JS_NewObjectClass(ctx, CSGShape3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	csg_shape3d_class = memnew(CSGShape3D);
	if (!csg_shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, csg_shape3d_class);
	return obj;
}
static JSValue csg_shape3d_class_is_root_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGShape3D::is_root_shape, CSGShape3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_shape3d_class_set_operation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGShape3D::set_operation, CSGShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_get_operation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGShape3D::get_operation, CSGShape3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_shape3d_class_set_snap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGShape3D::set_snap, CSGShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_get_snap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGShape3D::get_snap, CSGShape3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_shape3d_class_set_use_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGShape3D::set_use_collision, CSGShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_is_using_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGShape3D::is_using_collision, CSGShape3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_shape3d_class_set_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGShape3D::set_collision_layer, CSGShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_get_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGShape3D::get_collision_layer, CSGShape3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_shape3d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGShape3D::set_collision_mask, CSGShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGShape3D::get_collision_mask, CSGShape3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_shape3d_class_set_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGShape3D::set_collision_mask_value, CSGShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_get_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGShape3D::get_collision_mask_value, CSGShape3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_shape3d_class_set_collision_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGShape3D::set_collision_layer_value, CSGShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_get_collision_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGShape3D::get_collision_layer_value, CSGShape3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_shape3d_class_set_collision_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGShape3D::set_collision_priority, CSGShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_get_collision_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGShape3D::get_collision_priority, CSGShape3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_shape3d_class_set_calculate_tangents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGShape3D::set_calculate_tangents, CSGShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_shape3d_class_is_calculating_tangents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGShape3D::is_calculating_tangents, CSGShape3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_shape3d_class_get_meshes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGShape3D::get_meshes, CSGShape3D::__class_id, ctx, this_val, argv);
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

static int js_csg_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CSGShape3D::__class_id);
	classes["CSGShape3D"] = CSGShape3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CSGShape3D::__class_id, &csg_shape3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, GeometryInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CSGShape3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, csg_shape3d_class_proto_funcs, _countof(csg_shape3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, csg_shape3d_class_constructor, "CSGShape3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CSGShape3D", ctor);

	return 0;
}

JSModuleDef *_js_init_csg_shape3d_module(JSContext *ctx, const char *module_name) {
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
	js_init_csg_shape3d_module(ctx);
}