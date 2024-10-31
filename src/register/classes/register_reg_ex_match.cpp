
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/reg_ex_match.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void reg_ex_match_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef reg_ex_match_class_def = {
	"RegExMatch",
	.finalizer = reg_ex_match_class_finalizer
};

static JSValue reg_ex_match_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RegExMatch::__class_id);
	if (JS_IsException(obj))
		return obj;

	RegExMatch *reg_ex_match_class;
	if (argc == 1) 
		reg_ex_match_class = static_cast<RegExMatch *>(static_cast<Object *>(Variant(*argv)));
	else 
		reg_ex_match_class = memnew(RegExMatch);
	if (!reg_ex_match_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, reg_ex_match_class);	
	return obj;
}
static JSValue reg_ex_match_class_get_subject(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RegExMatch::get_subject, ctx, this_val, argc, argv);
};
static JSValue reg_ex_match_class_get_group_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RegExMatch::get_group_count, ctx, this_val, argc, argv);
};
static JSValue reg_ex_match_class_get_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RegExMatch::get_names, ctx, this_val, argc, argv);
};
static JSValue reg_ex_match_class_get_strings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RegExMatch::get_strings, ctx, this_val, argc, argv);
};
static JSValue reg_ex_match_class_get_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RegExMatch::get_string, ctx, this_val, argc, argv);
};
static JSValue reg_ex_match_class_get_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RegExMatch::get_start, ctx, this_val, argc, argv);
};
static JSValue reg_ex_match_class_get_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RegExMatch::get_end, ctx, this_val, argc, argv);
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

static void define_reg_ex_match_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "subject"),
        JS_NewCFunction(ctx, reg_ex_match_class_get_subject, "get_subject", 0),
        JS_UNDEFINED,
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "names"),
        JS_NewCFunction(ctx, reg_ex_match_class_get_names, "get_names", 0),
        JS_UNDEFINED,
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "strings"),
        JS_NewCFunction(ctx, reg_ex_match_class_get_strings, "get_strings", 0),
        JS_UNDEFINED,
        JS_PROP_GETSET
    );
	
}

static void define_reg_ex_match_enum(JSContext *ctx, JSValue proto) {
}

static int js_reg_ex_match_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&RegExMatch::__class_id);
	classes["RegExMatch"] = RegExMatch::__class_id;
	class_id_list.insert(RegExMatch::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RegExMatch::__class_id, &reg_ex_match_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RegExMatch::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RegExMatch::__class_id, proto);

	define_reg_ex_match_property(ctx, proto);
	define_reg_ex_match_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, reg_ex_match_class_proto_funcs, _countof(reg_ex_match_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, reg_ex_match_class_constructor, "RegExMatch", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RegExMatch", ctor);

	return 0;
}

JSModuleDef *_js_init_reg_ex_match_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_reg_ex_match_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RegExMatch");
	return m;
}

JSModuleDef *js_init_reg_ex_match_module(JSContext *ctx) {
	return _js_init_reg_ex_match_module(ctx, "@godot/classes/reg_ex_match");
}

void register_reg_ex_match() {
	RegExMatch::__init_js_class_id();
	js_init_reg_ex_match_module(ctx);
}