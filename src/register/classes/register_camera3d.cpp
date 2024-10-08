
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/compositor.hpp>
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/environment.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void camera3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Camera3D *camera3d = static_cast<Camera3D *>(JS_GetOpaque(val, Camera3D::__class_id));
	if (camera3d)
		Camera3D::free(nullptr, camera3d);
}

static JSClassDef camera3d_class_def = {
	"Camera3D",
	.finalizer = camera3d_class_finalizer
};

static JSValue camera3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Camera3D *camera3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Camera3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	camera3d_class = memnew(Camera3D);
	if (!camera3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, camera3d_class);
	return obj;
}
static JSValue camera3d_class_project_ray_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::project_ray_normal, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_project_local_ray_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::project_local_ray_normal, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_project_ray_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::project_ray_origin, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_unproject_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::unproject_position, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_is_position_behind(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::is_position_behind, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_project_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::project_position, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_set_perspective(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_perspective, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_set_orthogonal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_orthogonal, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_set_frustum(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_frustum, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_make_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::make_current, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_clear_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::clear_current, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_set_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_current, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_is_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::is_current, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_get_camera_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_camera_transform, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_get_camera_projection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_camera_projection, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_get_fov(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_fov, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_get_frustum_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_frustum_offset, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_size, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_get_far(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_far, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_get_near(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_near, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_set_fov(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_fov, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_set_frustum_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_frustum_offset, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_size, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_set_far(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_far, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_set_near(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_near, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_get_projection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_projection, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_set_projection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_projection, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_set_h_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_h_offset, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_get_h_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_h_offset, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_set_v_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_v_offset, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_get_v_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_v_offset, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_set_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_cull_mask, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_get_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_cull_mask, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_set_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_environment, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_get_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_environment, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_set_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_attributes, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_get_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_attributes, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_set_compositor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_compositor, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_get_compositor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_compositor, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_set_keep_aspect_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_keep_aspect_mode, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_get_keep_aspect_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_keep_aspect_mode, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_set_doppler_tracking(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_doppler_tracking, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_get_doppler_tracking(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_doppler_tracking, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_get_frustum(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_frustum, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_is_position_in_frustum(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::is_position_in_frustum, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_get_camera_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_camera_rid, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_get_pyramid_shape_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Camera3D::get_pyramid_shape_rid, Camera3D::__class_id, ctx, this_val, argv);
};
static JSValue camera3d_class_set_cull_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera3D::set_cull_mask_value, Camera3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera3d_class_get_cull_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera3D::get_cull_mask_value, Camera3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry camera3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("project_ray_normal", 1, &camera3d_class_project_ray_normal),
	JS_CFUNC_DEF("project_local_ray_normal", 1, &camera3d_class_project_local_ray_normal),
	JS_CFUNC_DEF("project_ray_origin", 1, &camera3d_class_project_ray_origin),
	JS_CFUNC_DEF("unproject_position", 1, &camera3d_class_unproject_position),
	JS_CFUNC_DEF("is_position_behind", 1, &camera3d_class_is_position_behind),
	JS_CFUNC_DEF("project_position", 2, &camera3d_class_project_position),
	JS_CFUNC_DEF("set_perspective", 3, &camera3d_class_set_perspective),
	JS_CFUNC_DEF("set_orthogonal", 3, &camera3d_class_set_orthogonal),
	JS_CFUNC_DEF("set_frustum", 4, &camera3d_class_set_frustum),
	JS_CFUNC_DEF("make_current", 0, &camera3d_class_make_current),
	JS_CFUNC_DEF("clear_current", 1, &camera3d_class_clear_current),
	JS_CFUNC_DEF("set_current", 1, &camera3d_class_set_current),
	JS_CFUNC_DEF("is_current", 0, &camera3d_class_is_current),
	JS_CFUNC_DEF("get_camera_transform", 0, &camera3d_class_get_camera_transform),
	JS_CFUNC_DEF("get_camera_projection", 0, &camera3d_class_get_camera_projection),
	JS_CFUNC_DEF("get_fov", 0, &camera3d_class_get_fov),
	JS_CFUNC_DEF("get_frustum_offset", 0, &camera3d_class_get_frustum_offset),
	JS_CFUNC_DEF("get_size", 0, &camera3d_class_get_size),
	JS_CFUNC_DEF("get_far", 0, &camera3d_class_get_far),
	JS_CFUNC_DEF("get_near", 0, &camera3d_class_get_near),
	JS_CFUNC_DEF("set_fov", 1, &camera3d_class_set_fov),
	JS_CFUNC_DEF("set_frustum_offset", 1, &camera3d_class_set_frustum_offset),
	JS_CFUNC_DEF("set_size", 1, &camera3d_class_set_size),
	JS_CFUNC_DEF("set_far", 1, &camera3d_class_set_far),
	JS_CFUNC_DEF("set_near", 1, &camera3d_class_set_near),
	JS_CFUNC_DEF("get_projection", 0, &camera3d_class_get_projection),
	JS_CFUNC_DEF("set_projection", 1, &camera3d_class_set_projection),
	JS_CFUNC_DEF("set_h_offset", 1, &camera3d_class_set_h_offset),
	JS_CFUNC_DEF("get_h_offset", 0, &camera3d_class_get_h_offset),
	JS_CFUNC_DEF("set_v_offset", 1, &camera3d_class_set_v_offset),
	JS_CFUNC_DEF("get_v_offset", 0, &camera3d_class_get_v_offset),
	JS_CFUNC_DEF("set_cull_mask", 1, &camera3d_class_set_cull_mask),
	JS_CFUNC_DEF("get_cull_mask", 0, &camera3d_class_get_cull_mask),
	JS_CFUNC_DEF("set_environment", 1, &camera3d_class_set_environment),
	JS_CFUNC_DEF("get_environment", 0, &camera3d_class_get_environment),
	JS_CFUNC_DEF("set_attributes", 1, &camera3d_class_set_attributes),
	JS_CFUNC_DEF("get_attributes", 0, &camera3d_class_get_attributes),
	JS_CFUNC_DEF("set_compositor", 1, &camera3d_class_set_compositor),
	JS_CFUNC_DEF("get_compositor", 0, &camera3d_class_get_compositor),
	JS_CFUNC_DEF("set_keep_aspect_mode", 1, &camera3d_class_set_keep_aspect_mode),
	JS_CFUNC_DEF("get_keep_aspect_mode", 0, &camera3d_class_get_keep_aspect_mode),
	JS_CFUNC_DEF("set_doppler_tracking", 1, &camera3d_class_set_doppler_tracking),
	JS_CFUNC_DEF("get_doppler_tracking", 0, &camera3d_class_get_doppler_tracking),
	JS_CFUNC_DEF("get_frustum", 0, &camera3d_class_get_frustum),
	JS_CFUNC_DEF("is_position_in_frustum", 1, &camera3d_class_is_position_in_frustum),
	JS_CFUNC_DEF("get_camera_rid", 0, &camera3d_class_get_camera_rid),
	JS_CFUNC_DEF("get_pyramid_shape_rid", 0, &camera3d_class_get_pyramid_shape_rid),
	JS_CFUNC_DEF("set_cull_mask_value", 2, &camera3d_class_set_cull_mask_value),
	JS_CFUNC_DEF("get_cull_mask_value", 1, &camera3d_class_get_cull_mask_value),
};

static int js_camera3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Camera3D::__class_id);
	classes["Camera3D"] = Camera3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Camera3D::__class_id, &camera3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Camera3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, camera3d_class_proto_funcs, _countof(camera3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, camera3d_class_constructor, "Camera3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Camera3D", ctor);

	return 0;
}

JSModuleDef *_js_init_camera3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_camera3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Camera3D");
	return m;
}

JSModuleDef *js_init_camera3d_module(JSContext *ctx) {
	return _js_init_camera3d_module(ctx, "godot/classes/camera3d");
}

void register_camera3d() {
	js_init_camera3d_module(ctx);
}