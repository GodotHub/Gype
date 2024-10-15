
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/xr_controller_tracker.hpp>
#include <godot_cpp/classes/web_xr_interface.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void web_xr_interface_class_finalizer(JSRuntime *rt, JSValue val) {
	WebXRInterface *web_xr_interface = static_cast<WebXRInterface *>(JS_GetOpaque(val, WebXRInterface::__class_id));
	if (web_xr_interface)
		memdelete(web_xr_interface);
}

static JSClassDef web_xr_interface_class_def = {
	"WebXRInterface",
	.finalizer = web_xr_interface_class_finalizer
};

static JSValue web_xr_interface_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, WebXRInterface::__class_id);
	if (JS_IsException(obj))
		return obj;
	WebXRInterface *web_xr_interface_class = memnew(WebXRInterface);
	if (!web_xr_interface_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, web_xr_interface_class);	
	return obj;
}
static JSValue web_xr_interface_class_is_session_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebXRInterface::is_session_supported, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_xr_interface_class_set_session_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebXRInterface::set_session_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_xr_interface_class_get_session_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebXRInterface::get_session_mode, ctx, this_val, argc, argv);
};
static JSValue web_xr_interface_class_set_required_features(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebXRInterface::set_required_features, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_xr_interface_class_get_required_features(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebXRInterface::get_required_features, ctx, this_val, argc, argv);
};
static JSValue web_xr_interface_class_set_optional_features(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebXRInterface::set_optional_features, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_xr_interface_class_get_optional_features(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebXRInterface::get_optional_features, ctx, this_val, argc, argv);
};
static JSValue web_xr_interface_class_get_reference_space_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebXRInterface::get_reference_space_type, ctx, this_val, argc, argv);
};
static JSValue web_xr_interface_class_get_enabled_features(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebXRInterface::get_enabled_features, ctx, this_val, argc, argv);
};
static JSValue web_xr_interface_class_set_requested_reference_space_types(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebXRInterface::set_requested_reference_space_types, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_xr_interface_class_get_requested_reference_space_types(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebXRInterface::get_requested_reference_space_types, ctx, this_val, argc, argv);
};
static JSValue web_xr_interface_class_is_input_source_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebXRInterface::is_input_source_active, ctx, this_val, argc, argv);
};
static JSValue web_xr_interface_class_get_input_source_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebXRInterface::get_input_source_tracker, ctx, this_val, argc, argv);
};
static JSValue web_xr_interface_class_get_input_source_target_ray_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebXRInterface::get_input_source_target_ray_mode, ctx, this_val, argc, argv);
};
static JSValue web_xr_interface_class_get_visibility_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebXRInterface::get_visibility_state, ctx, this_val, argc, argv);
};
static JSValue web_xr_interface_class_get_display_refresh_rate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebXRInterface::get_display_refresh_rate, ctx, this_val, argc, argv);
};
static JSValue web_xr_interface_class_set_display_refresh_rate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebXRInterface::set_display_refresh_rate, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_xr_interface_class_get_available_display_refresh_rates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebXRInterface::get_available_display_refresh_rates, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry web_xr_interface_class_proto_funcs[] = {
	JS_CFUNC_DEF("is_session_supported", 1, &web_xr_interface_class_is_session_supported),
	JS_CFUNC_DEF("set_session_mode", 1, &web_xr_interface_class_set_session_mode),
	JS_CFUNC_DEF("get_session_mode", 0, &web_xr_interface_class_get_session_mode),
	JS_CFUNC_DEF("set_required_features", 1, &web_xr_interface_class_set_required_features),
	JS_CFUNC_DEF("get_required_features", 0, &web_xr_interface_class_get_required_features),
	JS_CFUNC_DEF("set_optional_features", 1, &web_xr_interface_class_set_optional_features),
	JS_CFUNC_DEF("get_optional_features", 0, &web_xr_interface_class_get_optional_features),
	JS_CFUNC_DEF("get_reference_space_type", 0, &web_xr_interface_class_get_reference_space_type),
	JS_CFUNC_DEF("get_enabled_features", 0, &web_xr_interface_class_get_enabled_features),
	JS_CFUNC_DEF("set_requested_reference_space_types", 1, &web_xr_interface_class_set_requested_reference_space_types),
	JS_CFUNC_DEF("get_requested_reference_space_types", 0, &web_xr_interface_class_get_requested_reference_space_types),
	JS_CFUNC_DEF("is_input_source_active", 1, &web_xr_interface_class_is_input_source_active),
	JS_CFUNC_DEF("get_input_source_tracker", 1, &web_xr_interface_class_get_input_source_tracker),
	JS_CFUNC_DEF("get_input_source_target_ray_mode", 1, &web_xr_interface_class_get_input_source_target_ray_mode),
	JS_CFUNC_DEF("get_visibility_state", 0, &web_xr_interface_class_get_visibility_state),
	JS_CFUNC_DEF("get_display_refresh_rate", 0, &web_xr_interface_class_get_display_refresh_rate),
	JS_CFUNC_DEF("set_display_refresh_rate", 1, &web_xr_interface_class_set_display_refresh_rate),
	JS_CFUNC_DEF("get_available_display_refresh_rates", 0, &web_xr_interface_class_get_available_display_refresh_rates),
};

void define_web_xr_interface_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "session_mode"),
        JS_NewCFunction(ctx, web_xr_interface_class_get_session_mode, "get_session_mode", 0),
        JS_NewCFunction(ctx, web_xr_interface_class_set_session_mode, "set_session_mode", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "required_features"),
        JS_NewCFunction(ctx, web_xr_interface_class_get_required_features, "get_required_features", 0),
        JS_NewCFunction(ctx, web_xr_interface_class_set_required_features, "set_required_features", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "optional_features"),
        JS_NewCFunction(ctx, web_xr_interface_class_get_optional_features, "get_optional_features", 0),
        JS_NewCFunction(ctx, web_xr_interface_class_set_optional_features, "set_optional_features", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "requested_reference_space_types"),
        JS_NewCFunction(ctx, web_xr_interface_class_get_requested_reference_space_types, "get_requested_reference_space_types", 0),
        JS_NewCFunction(ctx, web_xr_interface_class_set_requested_reference_space_types, "set_requested_reference_space_types", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "reference_space_type"),
        JS_NewCFunction(ctx, web_xr_interface_class_get_reference_space_type, "get_reference_space_type", 0),
        JS_UNDEFINED,
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "enabled_features"),
        JS_NewCFunction(ctx, web_xr_interface_class_get_enabled_features, "get_enabled_features", 0),
        JS_UNDEFINED,
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "visibility_state"),
        JS_NewCFunction(ctx, web_xr_interface_class_get_visibility_state, "get_visibility_state", 0),
        JS_UNDEFINED,
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_web_xr_interface_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&WebXRInterface::__class_id);
	classes["WebXRInterface"] = WebXRInterface::__class_id;
	class_id_list.insert(WebXRInterface::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), WebXRInterface::__class_id, &web_xr_interface_class_def);

	JSValue proto = JS_NewObjectClass(ctx, WebXRInterface::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, XRInterface::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WebXRInterface::__class_id, proto);

	define_web_xr_interface_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, web_xr_interface_class_proto_funcs, _countof(web_xr_interface_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, web_xr_interface_class_constructor, "WebXRInterface", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "WebXRInterface", ctor);

	return 0;
}

JSModuleDef *_js_init_web_xr_interface_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/xr_interface';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_web_xr_interface_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "WebXRInterface");
	return m;
}

JSModuleDef *js_init_web_xr_interface_module(JSContext *ctx) {
	return _js_init_web_xr_interface_module(ctx, "godot/classes/web_xr_interface");
}

void register_web_xr_interface() {
	WebXRInterface::__init_js_class_id();
	js_init_web_xr_interface_module(ctx);
}