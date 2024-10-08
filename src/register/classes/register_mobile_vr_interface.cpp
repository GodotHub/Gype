
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/mobile_vr_interface.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void mobile_vr_interface_class_finalizer(JSRuntime *rt, JSValue val) {
	MobileVRInterface *mobile_vr_interface = static_cast<MobileVRInterface *>(JS_GetOpaque(val, MobileVRInterface::__class_id));
	if (mobile_vr_interface)
		MobileVRInterface::free(nullptr, mobile_vr_interface);
}

static JSClassDef mobile_vr_interface_class_def = {
	"MobileVRInterface",
	.finalizer = mobile_vr_interface_class_finalizer
};

static JSValue mobile_vr_interface_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MobileVRInterface *mobile_vr_interface_class;
	JSValue obj = JS_NewObjectClass(ctx, MobileVRInterface::__class_id);
	if (JS_IsException(obj))
		return obj;
	mobile_vr_interface_class = memnew(MobileVRInterface);
	if (!mobile_vr_interface_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, mobile_vr_interface_class);
	return obj;
}
static JSValue mobile_vr_interface_class_set_eye_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MobileVRInterface::set_eye_height, MobileVRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mobile_vr_interface_class_get_eye_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MobileVRInterface::get_eye_height, MobileVRInterface::__class_id, ctx, this_val, argv);
};
static JSValue mobile_vr_interface_class_set_iod(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MobileVRInterface::set_iod, MobileVRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mobile_vr_interface_class_get_iod(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MobileVRInterface::get_iod, MobileVRInterface::__class_id, ctx, this_val, argv);
};
static JSValue mobile_vr_interface_class_set_display_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MobileVRInterface::set_display_width, MobileVRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mobile_vr_interface_class_get_display_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MobileVRInterface::get_display_width, MobileVRInterface::__class_id, ctx, this_val, argv);
};
static JSValue mobile_vr_interface_class_set_display_to_lens(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MobileVRInterface::set_display_to_lens, MobileVRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mobile_vr_interface_class_get_display_to_lens(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MobileVRInterface::get_display_to_lens, MobileVRInterface::__class_id, ctx, this_val, argv);
};
static JSValue mobile_vr_interface_class_set_offset_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MobileVRInterface::set_offset_rect, MobileVRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mobile_vr_interface_class_get_offset_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MobileVRInterface::get_offset_rect, MobileVRInterface::__class_id, ctx, this_val, argv);
};
static JSValue mobile_vr_interface_class_set_oversample(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MobileVRInterface::set_oversample, MobileVRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mobile_vr_interface_class_get_oversample(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MobileVRInterface::get_oversample, MobileVRInterface::__class_id, ctx, this_val, argv);
};
static JSValue mobile_vr_interface_class_set_k1(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MobileVRInterface::set_k1, MobileVRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mobile_vr_interface_class_get_k1(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MobileVRInterface::get_k1, MobileVRInterface::__class_id, ctx, this_val, argv);
};
static JSValue mobile_vr_interface_class_set_k2(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MobileVRInterface::set_k2, MobileVRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mobile_vr_interface_class_get_k2(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MobileVRInterface::get_k2, MobileVRInterface::__class_id, ctx, this_val, argv);
};
static JSValue mobile_vr_interface_class_get_vrs_min_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MobileVRInterface::get_vrs_min_radius, MobileVRInterface::__class_id, ctx, this_val, argv);
};
static JSValue mobile_vr_interface_class_set_vrs_min_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MobileVRInterface::set_vrs_min_radius, MobileVRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mobile_vr_interface_class_get_vrs_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MobileVRInterface::get_vrs_strength, MobileVRInterface::__class_id, ctx, this_val, argv);
};
static JSValue mobile_vr_interface_class_set_vrs_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MobileVRInterface::set_vrs_strength, MobileVRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry mobile_vr_interface_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_eye_height", 1, &mobile_vr_interface_class_set_eye_height),
	JS_CFUNC_DEF("get_eye_height", 0, &mobile_vr_interface_class_get_eye_height),
	JS_CFUNC_DEF("set_iod", 1, &mobile_vr_interface_class_set_iod),
	JS_CFUNC_DEF("get_iod", 0, &mobile_vr_interface_class_get_iod),
	JS_CFUNC_DEF("set_display_width", 1, &mobile_vr_interface_class_set_display_width),
	JS_CFUNC_DEF("get_display_width", 0, &mobile_vr_interface_class_get_display_width),
	JS_CFUNC_DEF("set_display_to_lens", 1, &mobile_vr_interface_class_set_display_to_lens),
	JS_CFUNC_DEF("get_display_to_lens", 0, &mobile_vr_interface_class_get_display_to_lens),
	JS_CFUNC_DEF("set_offset_rect", 1, &mobile_vr_interface_class_set_offset_rect),
	JS_CFUNC_DEF("get_offset_rect", 0, &mobile_vr_interface_class_get_offset_rect),
	JS_CFUNC_DEF("set_oversample", 1, &mobile_vr_interface_class_set_oversample),
	JS_CFUNC_DEF("get_oversample", 0, &mobile_vr_interface_class_get_oversample),
	JS_CFUNC_DEF("set_k1", 1, &mobile_vr_interface_class_set_k1),
	JS_CFUNC_DEF("get_k1", 0, &mobile_vr_interface_class_get_k1),
	JS_CFUNC_DEF("set_k2", 1, &mobile_vr_interface_class_set_k2),
	JS_CFUNC_DEF("get_k2", 0, &mobile_vr_interface_class_get_k2),
	JS_CFUNC_DEF("get_vrs_min_radius", 0, &mobile_vr_interface_class_get_vrs_min_radius),
	JS_CFUNC_DEF("set_vrs_min_radius", 1, &mobile_vr_interface_class_set_vrs_min_radius),
	JS_CFUNC_DEF("get_vrs_strength", 0, &mobile_vr_interface_class_get_vrs_strength),
	JS_CFUNC_DEF("set_vrs_strength", 1, &mobile_vr_interface_class_set_vrs_strength),
};

static int js_mobile_vr_interface_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MobileVRInterface::__class_id);
	classes["MobileVRInterface"] = MobileVRInterface::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MobileVRInterface::__class_id, &mobile_vr_interface_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, XRInterface::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MobileVRInterface::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, mobile_vr_interface_class_proto_funcs, _countof(mobile_vr_interface_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, mobile_vr_interface_class_constructor, "MobileVRInterface", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MobileVRInterface", ctor);

	return 0;
}

JSModuleDef *_js_init_mobile_vr_interface_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_mobile_vr_interface_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MobileVRInterface");
	return m;
}

JSModuleDef *js_init_mobile_vr_interface_module(JSContext *ctx) {
	return _js_init_mobile_vr_interface_module(ctx, "godot/classes/mobile_vr_interface");
}

void register_mobile_vr_interface() {
	js_init_mobile_vr_interface_module(ctx);
}