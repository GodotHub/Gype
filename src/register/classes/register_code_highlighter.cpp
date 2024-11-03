
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/classes/code_highlighter.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void code_highlighter_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef code_highlighter_class_def = {
	"CodeHighlighter",
	.finalizer = code_highlighter_class_finalizer
};

static JSValue code_highlighter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CodeHighlighter::__class_id);
	if (JS_IsException(obj))
		return obj;

	CodeHighlighter *code_highlighter_class;
	if (argc == 1) 
		code_highlighter_class = static_cast<CodeHighlighter *>(Variant(*argv).operator Object *());
	else 
		code_highlighter_class = memnew(CodeHighlighter);
	if (!code_highlighter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, code_highlighter_class);
	return obj;
}
static JSValue code_highlighter_class_add_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::add_keyword_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_remove_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::remove_keyword_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_has_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CodeHighlighter::has_keyword_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_get_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CodeHighlighter::get_keyword_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_set_keyword_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::set_keyword_colors, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_clear_keyword_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::clear_keyword_colors, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_get_keyword_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CodeHighlighter::get_keyword_colors, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_add_member_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::add_member_keyword_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_remove_member_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::remove_member_keyword_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_has_member_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CodeHighlighter::has_member_keyword_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_get_member_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CodeHighlighter::get_member_keyword_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_set_member_keyword_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::set_member_keyword_colors, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_clear_member_keyword_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::clear_member_keyword_colors, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_get_member_keyword_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CodeHighlighter::get_member_keyword_colors, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_add_color_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::add_color_region, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_remove_color_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::remove_color_region, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_has_color_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CodeHighlighter::has_color_region, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_set_color_regions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::set_color_regions, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_clear_color_regions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::clear_color_regions, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_get_color_regions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CodeHighlighter::get_color_regions, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_set_function_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::set_function_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_get_function_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CodeHighlighter::get_function_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_set_number_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::set_number_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_get_number_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CodeHighlighter::get_number_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_set_symbol_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::set_symbol_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_get_symbol_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CodeHighlighter::get_symbol_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_set_member_variable_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CodeHighlighter::set_member_variable_color, ctx, this_val, argc, argv);
};
static JSValue code_highlighter_class_get_member_variable_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CodeHighlighter::get_member_variable_color, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry code_highlighter_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_keyword_color", 2, &code_highlighter_class_add_keyword_color),
	JS_CFUNC_DEF("remove_keyword_color", 1, &code_highlighter_class_remove_keyword_color),
	JS_CFUNC_DEF("has_keyword_color", 1, &code_highlighter_class_has_keyword_color),
	JS_CFUNC_DEF("get_keyword_color", 1, &code_highlighter_class_get_keyword_color),
	JS_CFUNC_DEF("set_keyword_colors", 1, &code_highlighter_class_set_keyword_colors),
	JS_CFUNC_DEF("clear_keyword_colors", 0, &code_highlighter_class_clear_keyword_colors),
	JS_CFUNC_DEF("get_keyword_colors", 0, &code_highlighter_class_get_keyword_colors),
	JS_CFUNC_DEF("add_member_keyword_color", 2, &code_highlighter_class_add_member_keyword_color),
	JS_CFUNC_DEF("remove_member_keyword_color", 1, &code_highlighter_class_remove_member_keyword_color),
	JS_CFUNC_DEF("has_member_keyword_color", 1, &code_highlighter_class_has_member_keyword_color),
	JS_CFUNC_DEF("get_member_keyword_color", 1, &code_highlighter_class_get_member_keyword_color),
	JS_CFUNC_DEF("set_member_keyword_colors", 1, &code_highlighter_class_set_member_keyword_colors),
	JS_CFUNC_DEF("clear_member_keyword_colors", 0, &code_highlighter_class_clear_member_keyword_colors),
	JS_CFUNC_DEF("get_member_keyword_colors", 0, &code_highlighter_class_get_member_keyword_colors),
	JS_CFUNC_DEF("add_color_region", 4, &code_highlighter_class_add_color_region),
	JS_CFUNC_DEF("remove_color_region", 1, &code_highlighter_class_remove_color_region),
	JS_CFUNC_DEF("has_color_region", 1, &code_highlighter_class_has_color_region),
	JS_CFUNC_DEF("set_color_regions", 1, &code_highlighter_class_set_color_regions),
	JS_CFUNC_DEF("clear_color_regions", 0, &code_highlighter_class_clear_color_regions),
	JS_CFUNC_DEF("get_color_regions", 0, &code_highlighter_class_get_color_regions),
	JS_CFUNC_DEF("set_function_color", 1, &code_highlighter_class_set_function_color),
	JS_CFUNC_DEF("get_function_color", 0, &code_highlighter_class_get_function_color),
	JS_CFUNC_DEF("set_number_color", 1, &code_highlighter_class_set_number_color),
	JS_CFUNC_DEF("get_number_color", 0, &code_highlighter_class_get_number_color),
	JS_CFUNC_DEF("set_symbol_color", 1, &code_highlighter_class_set_symbol_color),
	JS_CFUNC_DEF("get_symbol_color", 0, &code_highlighter_class_get_symbol_color),
	JS_CFUNC_DEF("set_member_variable_color", 1, &code_highlighter_class_set_member_variable_color),
	JS_CFUNC_DEF("get_member_variable_color", 0, &code_highlighter_class_get_member_variable_color),
};

static void define_code_highlighter_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "number_color"),
        JS_NewCFunction(ctx, code_highlighter_class_get_number_color, "get_number_color", 0),
        JS_NewCFunction(ctx, code_highlighter_class_set_number_color, "set_number_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "symbol_color"),
        JS_NewCFunction(ctx, code_highlighter_class_get_symbol_color, "get_symbol_color", 0),
        JS_NewCFunction(ctx, code_highlighter_class_set_symbol_color, "set_symbol_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "function_color"),
        JS_NewCFunction(ctx, code_highlighter_class_get_function_color, "get_function_color", 0),
        JS_NewCFunction(ctx, code_highlighter_class_set_function_color, "set_function_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "member_variable_color"),
        JS_NewCFunction(ctx, code_highlighter_class_get_member_variable_color, "get_member_variable_color", 0),
        JS_NewCFunction(ctx, code_highlighter_class_set_member_variable_color, "set_member_variable_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "keyword_colors"),
        JS_NewCFunction(ctx, code_highlighter_class_get_keyword_colors, "get_keyword_colors", 0),
        JS_NewCFunction(ctx, code_highlighter_class_set_keyword_colors, "set_keyword_colors", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "member_keyword_colors"),
        JS_NewCFunction(ctx, code_highlighter_class_get_member_keyword_colors, "get_member_keyword_colors", 0),
        JS_NewCFunction(ctx, code_highlighter_class_set_member_keyword_colors, "set_member_keyword_colors", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "color_regions"),
        JS_NewCFunction(ctx, code_highlighter_class_get_color_regions, "get_color_regions", 0),
        JS_NewCFunction(ctx, code_highlighter_class_set_color_regions, "set_color_regions", 1),
        JS_PROP_GETSET
    );
	
}

static void define_code_highlighter_enum(JSContext *ctx, JSValue proto) {
}

static int js_code_highlighter_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["CodeHighlighter"] = CodeHighlighter::__class_id;
	class_id_list.insert(CodeHighlighter::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CodeHighlighter::__class_id, &code_highlighter_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CodeHighlighter::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, SyntaxHighlighter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CodeHighlighter::__class_id, proto);

	define_code_highlighter_property(ctx, proto);
	define_code_highlighter_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, code_highlighter_class_proto_funcs, _countof(code_highlighter_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, code_highlighter_class_constructor, "CodeHighlighter", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "CodeHighlighter", ctor);
	constructors[CodeHighlighter::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_code_highlighter_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/syntax_highlighter';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_code_highlighter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CodeHighlighter");
	return m;
}

JSModuleDef *js_init_code_highlighter_module(JSContext *ctx) {
	return _js_init_code_highlighter_module(ctx, "@godot/classes/code_highlighter");
}

void register_code_highlighter() {
	CodeHighlighter::__init_js_class_id();
	js_init_code_highlighter_module(ctx);
}