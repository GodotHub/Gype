
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/open_xrapi_extension.hpp>
#include <godot_cpp/classes/open_xr_extension_wrapper_extension.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void open_xrapi_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRAPIExtension *open_xrapi_extension = static_cast<OpenXRAPIExtension *>(JS_GetOpaque(val, OpenXRAPIExtension::__class_id));
	if (open_xrapi_extension)
		OpenXRAPIExtension::free(nullptr, open_xrapi_extension);
}

static JSClassDef open_xrapi_extension_class_def = {
	"OpenXRAPIExtension",
	.finalizer = open_xrapi_extension_class_finalizer
};

static JSValue open_xrapi_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OpenXRAPIExtension *open_xrapi_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, OpenXRAPIExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	open_xrapi_extension_class = memnew(OpenXRAPIExtension);
	if (!open_xrapi_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, open_xrapi_extension_class);
	return obj;
}
static JSValue open_xrapi_extension_class_get_instance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::get_instance, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_get_system_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::get_system_id, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_get_session(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::get_session, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_transform_from_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::transform_from_pose, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_xr_result(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::xr_result, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_get_instance_proc_addr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::get_instance_proc_addr, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_get_error_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::get_error_string, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_get_swapchain_format_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::get_swapchain_format_name, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_is_initialized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::is_initialized, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_is_running(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::is_running, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_get_play_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::get_play_space, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_get_predicted_display_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::get_predicted_display_time, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_get_next_frame_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::get_next_frame_time, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_can_render(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::can_render, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_get_hand_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::get_hand_tracker, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_register_composition_layer_provider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRAPIExtension::register_composition_layer_provider, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xrapi_extension_class_unregister_composition_layer_provider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRAPIExtension::unregister_composition_layer_provider, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xrapi_extension_class_set_emulate_environment_blend_mode_alpha_blend(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRAPIExtension::set_emulate_environment_blend_mode_alpha_blend, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xrapi_extension_class_is_environment_blend_mode_alpha_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRAPIExtension::is_environment_blend_mode_alpha_supported, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xrapi_extension_class_openxr_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&OpenXRAPIExtension::openxr_is_enabled, OpenXRAPIExtension::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry open_xrapi_extension_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_instance", 0, &open_xrapi_extension_class_get_instance),
	JS_CFUNC_DEF("get_system_id", 0, &open_xrapi_extension_class_get_system_id),
	JS_CFUNC_DEF("get_session", 0, &open_xrapi_extension_class_get_session),
	JS_CFUNC_DEF("transform_from_pose", 1, &open_xrapi_extension_class_transform_from_pose),
	JS_CFUNC_DEF("xr_result", 3, &open_xrapi_extension_class_xr_result),
	JS_CFUNC_DEF("get_instance_proc_addr", 1, &open_xrapi_extension_class_get_instance_proc_addr),
	JS_CFUNC_DEF("get_error_string", 1, &open_xrapi_extension_class_get_error_string),
	JS_CFUNC_DEF("get_swapchain_format_name", 1, &open_xrapi_extension_class_get_swapchain_format_name),
	JS_CFUNC_DEF("is_initialized", 0, &open_xrapi_extension_class_is_initialized),
	JS_CFUNC_DEF("is_running", 0, &open_xrapi_extension_class_is_running),
	JS_CFUNC_DEF("get_play_space", 0, &open_xrapi_extension_class_get_play_space),
	JS_CFUNC_DEF("get_predicted_display_time", 0, &open_xrapi_extension_class_get_predicted_display_time),
	JS_CFUNC_DEF("get_next_frame_time", 0, &open_xrapi_extension_class_get_next_frame_time),
	JS_CFUNC_DEF("can_render", 0, &open_xrapi_extension_class_can_render),
	JS_CFUNC_DEF("get_hand_tracker", 1, &open_xrapi_extension_class_get_hand_tracker),
	JS_CFUNC_DEF("register_composition_layer_provider", 1, &open_xrapi_extension_class_register_composition_layer_provider),
	JS_CFUNC_DEF("unregister_composition_layer_provider", 1, &open_xrapi_extension_class_unregister_composition_layer_provider),
	JS_CFUNC_DEF("set_emulate_environment_blend_mode_alpha_blend", 1, &open_xrapi_extension_class_set_emulate_environment_blend_mode_alpha_blend),
	JS_CFUNC_DEF("is_environment_blend_mode_alpha_supported", 0, &open_xrapi_extension_class_is_environment_blend_mode_alpha_supported),
};
static const JSCFunctionListEntry open_xrapi_extension_class_static_funcs[] = {
	JS_CFUNC_DEF("openxr_is_enabled", 1, &open_xrapi_extension_class_openxr_is_enabled),
};

static int js_open_xrapi_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OpenXRAPIExtension::__class_id);
	classes["OpenXRAPIExtension"] = OpenXRAPIExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OpenXRAPIExtension::__class_id, &open_xrapi_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRAPIExtension::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xrapi_extension_class_proto_funcs, _countof(open_xrapi_extension_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, open_xrapi_extension_class_constructor, "OpenXRAPIExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, open_xrapi_extension_class_static_funcs, _countof(open_xrapi_extension_class_static_funcs));

	JS_SetModuleExport(ctx, m, "OpenXRAPIExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xrapi_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xrapi_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRAPIExtension");
	return m;
}

JSModuleDef *js_init_open_xrapi_extension_module(JSContext *ctx) {
	return _js_init_open_xrapi_extension_module(ctx, "godot/classes/open_xrapi_extension");
}

void register_open_xrapi_extension() {
	js_init_open_xrapi_extension_module(ctx);
}