
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/reg_ex_match.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void reg_ex_match_class_finalizer(JSRuntime *rt, JSValue val) {
	RegExMatch *reg_ex_match = static_cast<RegExMatch *>(JS_GetOpaque(val, RegExMatch::__class_id));
	if (reg_ex_match)
		RegExMatch::free(nullptr, reg_ex_match);
}

static JSClassDef reg_ex_match_class_def = {
	"RegExMatch",
	.finalizer = reg_ex_match_class_finalizer
};

static JSValue reg_ex_match_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RegExMatch *reg_ex_match_class;
	JSValue obj = JS_NewObjectClass(ctx, RegExMatch::__class_id);
	if (JS_IsException(obj))
		return obj;
	reg_ex_match_class = memnew(RegExMatch);
	if (!reg_ex_match_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, reg_ex_match_class);
	return obj;
}
static JSValue reg_ex_match_class_get_subject(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RegExMatch::get_subject, RegExMatch::__class_id, ctx, this_val, argv);
};
static JSValue reg_ex_match_class_get_group_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RegExMatch::get_group_count, RegExMatch::__class_id, ctx, this_val, argv);
};
static JSValue reg_ex_match_class_get_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RegExMatch::get_names, RegExMatch::__class_id, ctx, this_val, argv);
};
static JSValue reg_ex_match_class_get_strings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RegExMatch::get_strings, RegExMatch::__class_id, ctx, this_val, argv);
};
static JSValue reg_ex_match_class_get_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RegExMatch::get_string, RegExMatch::__class_id, ctx, this_val, argv);
};
static JSValue reg_ex_match_class_get_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RegExMatch::get_start, RegExMatch::__class_id, ctx, this_val, argv);
};
static JSValue reg_ex_match_class_get_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RegExMatch::get_end, RegExMatch::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry reg_ex_match_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_subject", 0, &reg_ex_match_class_get_subject),
	JS_CFUNC_DEF("get_group_count", 0, &reg_ex_match_class_get_group_count),
	JS_CFUNC_DEF("get_names", 0, &reg_ex_match_class_get_names),
	JS_CFUNC_DEF("get_strings", 0, &reg_ex_match_class_get_strings),
	JS_CFUNC_DEF("get_string", 1, &reg_ex_match_class_get_string),
	JS_CFUNC_DEF("get_start", 1, &reg_ex_match_class_get_start),
	JS_CFUNC_DEF("get_end", 1, &reg_ex_match_class_get_end),
};

static int js_reg_ex_match_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RegExMatch::__class_id);
	classes["RegExMatch"] = RegExMatch::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RegExMatch::__class_id, &reg_ex_match_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RegExMatch::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, reg_ex_match_class_proto_funcs, _countof(reg_ex_match_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, reg_ex_match_class_constructor, "RegExMatch", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RegExMatch", ctor);

	return 0;
}

JSModuleDef *_js_init_reg_ex_match_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_reg_ex_match_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RegExMatch");
	return m;
}

JSModuleDef *js_init_reg_ex_match_module(JSContext *ctx) {
	return _js_init_reg_ex_match_module(ctx, "godot/classes/reg_ex_match");
}

void register_reg_ex_match() {
	js_init_reg_ex_match_module(ctx);
}