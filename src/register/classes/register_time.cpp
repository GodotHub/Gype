
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/time.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void time_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef time_class_def = {
	"_Time",
	.finalizer = time_class_finalizer
};

static JSValue time_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, Time::__class_id);
	if (JS_IsException(obj))
		return obj;
	Time *time_class = Time::get_singleton();
	if (!time_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, time_class);
	return obj;
}
static JSValue time_class_get_datetime_dict_from_unix_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_datetime_dict_from_unix_time, ctx, this_val, argc, argv);
};
static JSValue time_class_get_date_dict_from_unix_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_date_dict_from_unix_time, ctx, this_val, argc, argv);
};
static JSValue time_class_get_time_dict_from_unix_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_time_dict_from_unix_time, ctx, this_val, argc, argv);
};
static JSValue time_class_get_datetime_string_from_unix_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_datetime_string_from_unix_time, ctx, this_val, argc, argv);
};
static JSValue time_class_get_date_string_from_unix_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_date_string_from_unix_time, ctx, this_val, argc, argv);
};
static JSValue time_class_get_time_string_from_unix_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_time_string_from_unix_time, ctx, this_val, argc, argv);
};
static JSValue time_class_get_datetime_dict_from_datetime_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_datetime_dict_from_datetime_string, ctx, this_val, argc, argv);
};
static JSValue time_class_get_datetime_string_from_datetime_dict(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_datetime_string_from_datetime_dict, ctx, this_val, argc, argv);
};
static JSValue time_class_get_unix_time_from_datetime_dict(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_unix_time_from_datetime_dict, ctx, this_val, argc, argv);
};
static JSValue time_class_get_unix_time_from_datetime_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_unix_time_from_datetime_string, ctx, this_val, argc, argv);
};
static JSValue time_class_get_offset_string_from_offset_minutes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_offset_string_from_offset_minutes, ctx, this_val, argc, argv);
};
static JSValue time_class_get_datetime_dict_from_system(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_datetime_dict_from_system, ctx, this_val, argc, argv);
};
static JSValue time_class_get_date_dict_from_system(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_date_dict_from_system, ctx, this_val, argc, argv);
};
static JSValue time_class_get_time_dict_from_system(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_time_dict_from_system, ctx, this_val, argc, argv);
};
static JSValue time_class_get_datetime_string_from_system(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_datetime_string_from_system, ctx, this_val, argc, argv);
};
static JSValue time_class_get_date_string_from_system(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_date_string_from_system, ctx, this_val, argc, argv);
};
static JSValue time_class_get_time_string_from_system(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_time_string_from_system, ctx, this_val, argc, argv);
};
static JSValue time_class_get_time_zone_from_system(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_time_zone_from_system, ctx, this_val, argc, argv);
};
static JSValue time_class_get_unix_time_from_system(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_unix_time_from_system, ctx, this_val, argc, argv);
};
static JSValue time_class_get_ticks_msec(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_ticks_msec, ctx, this_val, argc, argv);
};
static JSValue time_class_get_ticks_usec(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Time::get_ticks_usec, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry time_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_datetime_dict_from_unix_time", 1, &time_class_get_datetime_dict_from_unix_time),
	JS_CFUNC_DEF("get_date_dict_from_unix_time", 1, &time_class_get_date_dict_from_unix_time),
	JS_CFUNC_DEF("get_time_dict_from_unix_time", 1, &time_class_get_time_dict_from_unix_time),
	JS_CFUNC_DEF("get_datetime_string_from_unix_time", 2, &time_class_get_datetime_string_from_unix_time),
	JS_CFUNC_DEF("get_date_string_from_unix_time", 1, &time_class_get_date_string_from_unix_time),
	JS_CFUNC_DEF("get_time_string_from_unix_time", 1, &time_class_get_time_string_from_unix_time),
	JS_CFUNC_DEF("get_datetime_dict_from_datetime_string", 2, &time_class_get_datetime_dict_from_datetime_string),
	JS_CFUNC_DEF("get_datetime_string_from_datetime_dict", 2, &time_class_get_datetime_string_from_datetime_dict),
	JS_CFUNC_DEF("get_unix_time_from_datetime_dict", 1, &time_class_get_unix_time_from_datetime_dict),
	JS_CFUNC_DEF("get_unix_time_from_datetime_string", 1, &time_class_get_unix_time_from_datetime_string),
	JS_CFUNC_DEF("get_offset_string_from_offset_minutes", 1, &time_class_get_offset_string_from_offset_minutes),
	JS_CFUNC_DEF("get_datetime_dict_from_system", 1, &time_class_get_datetime_dict_from_system),
	JS_CFUNC_DEF("get_date_dict_from_system", 1, &time_class_get_date_dict_from_system),
	JS_CFUNC_DEF("get_time_dict_from_system", 1, &time_class_get_time_dict_from_system),
	JS_CFUNC_DEF("get_datetime_string_from_system", 2, &time_class_get_datetime_string_from_system),
	JS_CFUNC_DEF("get_date_string_from_system", 1, &time_class_get_date_string_from_system),
	JS_CFUNC_DEF("get_time_string_from_system", 1, &time_class_get_time_string_from_system),
	JS_CFUNC_DEF("get_time_zone_from_system", 0, &time_class_get_time_zone_from_system),
	JS_CFUNC_DEF("get_unix_time_from_system", 0, &time_class_get_unix_time_from_system),
	JS_CFUNC_DEF("get_ticks_msec", 0, &time_class_get_ticks_msec),
	JS_CFUNC_DEF("get_ticks_usec", 0, &time_class_get_ticks_usec),
};

static int js_time_class_init(JSContext *ctx) {
	classes["Time"] = Time::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Time::__class_id, &time_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Time::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, time_class_proto_funcs, _countof(time_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, time_class_constructor, "_Time", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "_Time", ctor);
	JS_FreeValue(ctx, global);
	return 0;
}

void register_time() {
	Time::__init_js_class_id();
	js_time_class_init(ctx);
}