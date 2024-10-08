
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void range_class_finalizer(JSRuntime *rt, JSValue val) {
	Range *range = static_cast<Range *>(JS_GetOpaque(val, Range::__class_id));
	if (range)
		Range::free(nullptr, range);
}

static JSClassDef range_class_def = {
	"Range",
	.finalizer = range_class_finalizer
};

static JSValue range_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Range *range_class;
	JSValue obj = JS_NewObjectClass(ctx, Range::__class_id);
	if (JS_IsException(obj))
		return obj;
	range_class = memnew(Range);
	if (!range_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, range_class);
	return obj;
}
static JSValue range_class_get_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Range::get_value, Range::__class_id, ctx, this_val, argv);
};
static JSValue range_class_get_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Range::get_min, Range::__class_id, ctx, this_val, argv);
};
static JSValue range_class_get_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Range::get_max, Range::__class_id, ctx, this_val, argv);
};
static JSValue range_class_get_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Range::get_step, Range::__class_id, ctx, this_val, argv);
};
static JSValue range_class_get_page(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Range::get_page, Range::__class_id, ctx, this_val, argv);
};
static JSValue range_class_get_as_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Range::get_as_ratio, Range::__class_id, ctx, this_val, argv);
};
static JSValue range_class_set_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Range::set_value, Range::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue range_class_set_value_no_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Range::set_value_no_signal, Range::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue range_class_set_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Range::set_min, Range::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue range_class_set_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Range::set_max, Range::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue range_class_set_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Range::set_step, Range::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue range_class_set_page(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Range::set_page, Range::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue range_class_set_as_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Range::set_as_ratio, Range::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue range_class_set_use_rounded_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Range::set_use_rounded_values, Range::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue range_class_is_using_rounded_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Range::is_using_rounded_values, Range::__class_id, ctx, this_val, argv);
};
static JSValue range_class_set_exp_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Range::set_exp_ratio, Range::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue range_class_is_ratio_exp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Range::is_ratio_exp, Range::__class_id, ctx, this_val, argv);
};
static JSValue range_class_set_allow_greater(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Range::set_allow_greater, Range::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue range_class_is_greater_allowed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Range::is_greater_allowed, Range::__class_id, ctx, this_val, argv);
};
static JSValue range_class_set_allow_lesser(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Range::set_allow_lesser, Range::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue range_class_is_lesser_allowed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Range::is_lesser_allowed, Range::__class_id, ctx, this_val, argv);
};
static JSValue range_class_share(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Range::share, Range::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue range_class_unshare(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Range::unshare, Range::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry range_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_value", 0, &range_class_get_value),
	JS_CFUNC_DEF("get_min", 0, &range_class_get_min),
	JS_CFUNC_DEF("get_max", 0, &range_class_get_max),
	JS_CFUNC_DEF("get_step", 0, &range_class_get_step),
	JS_CFUNC_DEF("get_page", 0, &range_class_get_page),
	JS_CFUNC_DEF("get_as_ratio", 0, &range_class_get_as_ratio),
	JS_CFUNC_DEF("set_value", 1, &range_class_set_value),
	JS_CFUNC_DEF("set_value_no_signal", 1, &range_class_set_value_no_signal),
	JS_CFUNC_DEF("set_min", 1, &range_class_set_min),
	JS_CFUNC_DEF("set_max", 1, &range_class_set_max),
	JS_CFUNC_DEF("set_step", 1, &range_class_set_step),
	JS_CFUNC_DEF("set_page", 1, &range_class_set_page),
	JS_CFUNC_DEF("set_as_ratio", 1, &range_class_set_as_ratio),
	JS_CFUNC_DEF("set_use_rounded_values", 1, &range_class_set_use_rounded_values),
	JS_CFUNC_DEF("is_using_rounded_values", 0, &range_class_is_using_rounded_values),
	JS_CFUNC_DEF("set_exp_ratio", 1, &range_class_set_exp_ratio),
	JS_CFUNC_DEF("is_ratio_exp", 0, &range_class_is_ratio_exp),
	JS_CFUNC_DEF("set_allow_greater", 1, &range_class_set_allow_greater),
	JS_CFUNC_DEF("is_greater_allowed", 0, &range_class_is_greater_allowed),
	JS_CFUNC_DEF("set_allow_lesser", 1, &range_class_set_allow_lesser),
	JS_CFUNC_DEF("is_lesser_allowed", 0, &range_class_is_lesser_allowed),
	JS_CFUNC_DEF("share", 1, &range_class_share),
	JS_CFUNC_DEF("unshare", 0, &range_class_unshare),
};

static int js_range_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Range::__class_id);
	classes["Range"] = Range::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Range::__class_id, &range_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Range::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, range_class_proto_funcs, _countof(range_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, range_class_constructor, "Range", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Range", ctor);

	return 0;
}

JSModuleDef *_js_init_range_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_range_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Range");
	return m;
}

JSModuleDef *js_init_range_module(JSContext *ctx) {
	return _js_init_range_module(ctx, "godot/classes/range");
}

void register_range() {
	js_init_range_module(ctx);
}