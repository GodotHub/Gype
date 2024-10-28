
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/open_xr_extension_wrapper_extension.hpp>
#include <godot_cpp/classes/open_xrapi_extension.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void open_xrapi_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef open_xrapi_extension_class_def = {
	"OpenXRAPIExtension",
	.finalizer = open_xrapi_extension_class_finalizer
};

static JSValue open_xrapi_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OpenXRAPIExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	OpenXRAPIExtension *open_xrapi_extension_class = memnew(OpenXRAPIExtension);
	if (!open_xrapi_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, open_xrapi_extension_class);
	return obj;
}
static JSValue open_xrapi_extension_class_get_instance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::get_instance, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_get_system_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::get_system_id, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_get_session(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::get_session, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_transform_from_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::transform_from_pose, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_xr_result(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::xr_result, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_get_instance_proc_addr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::get_instance_proc_addr, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_get_error_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::get_error_string, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_get_swapchain_format_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::get_swapchain_format_name, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_is_initialized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::is_initialized, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_is_running(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::is_running, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_get_play_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::get_play_space, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_get_predicted_display_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::get_predicted_display_time, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_get_next_frame_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::get_next_frame_time, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_can_render(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::can_render, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_get_hand_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::get_hand_tracker, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_register_composition_layer_provider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&OpenXRAPIExtension::register_composition_layer_provider, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xrapi_extension_class_unregister_composition_layer_provider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&OpenXRAPIExtension::unregister_composition_layer_provider, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xrapi_extension_class_set_emulate_environment_blend_mode_alpha_blend(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&OpenXRAPIExtension::set_emulate_environment_blend_mode_alpha_blend, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xrapi_extension_class_is_environment_blend_mode_alpha_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRAPIExtension::is_environment_blend_mode_alpha_supported, ctx, this_val, argc, argv);
};
static JSValue open_xrapi_extension_class_openxr_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&OpenXRAPIExtension::openxr_is_enabled, ctx, this_val, argc, argv);
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

void define_open_xrapi_extension_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue OpenXRAlphaBlendModeSupport_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, OpenXRAlphaBlendModeSupport_obj, "OPENXR_ALPHA_BLEND_MODE_SUPPORT_NONE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, OpenXRAlphaBlendModeSupport_obj, "OPENXR_ALPHA_BLEND_MODE_SUPPORT_REAL", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, OpenXRAlphaBlendModeSupport_obj, "OPENXR_ALPHA_BLEND_MODE_SUPPORT_EMULATING", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "OpenXRAlphaBlendModeSupport", OpenXRAlphaBlendModeSupport_obj);
}

static int js_open_xrapi_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OpenXRAPIExtension::__class_id);
	classes["OpenXRAPIExtension"] = OpenXRAPIExtension::__class_id;
	class_id_list.insert(OpenXRAPIExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OpenXRAPIExtension::__class_id, &open_xrapi_extension_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OpenXRAPIExtension::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRAPIExtension::__class_id, proto);

	define_open_xrapi_extension_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xrapi_extension_class_proto_funcs, _countof(open_xrapi_extension_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, open_xrapi_extension_class_constructor, "OpenXRAPIExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, open_xrapi_extension_class_static_funcs, _countof(open_xrapi_extension_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OpenXRAPIExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xrapi_extension_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	OpenXRAPIExtension::__init_js_class_id();
	js_init_open_xrapi_extension_module(ctx);
}