
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/style_box_line.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void style_box_line_class_finalizer(JSRuntime *rt, JSValue val) {
	StyleBoxLine *style_box_line = static_cast<StyleBoxLine *>(JS_GetOpaque(val, StyleBoxLine::__class_id));
	if (style_box_line)
		memdelete(style_box_line);
}

static JSClassDef style_box_line_class_def = {
	"StyleBoxLine",
	.finalizer = style_box_line_class_finalizer
};

static JSValue style_box_line_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, StyleBoxLine::__class_id);
	if (JS_IsException(obj))
		return obj;

	StyleBoxLine *style_box_line_class;
	if (argc == 1) 
		style_box_line_class = static_cast<StyleBoxLine *>(Variant(*argv).operator Object *());
	else 
		style_box_line_class = memnew(StyleBoxLine);
	if (!style_box_line_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, style_box_line_class);
	return obj;
}
static JSValue style_box_line_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxLine::set_color, ctx, this_val, argc, argv);
};
static JSValue style_box_line_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxLine::get_color, ctx, this_val, argc, argv);
};
static JSValue style_box_line_class_set_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxLine::set_thickness, ctx, this_val, argc, argv);
};
static JSValue style_box_line_class_get_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxLine::get_thickness, ctx, this_val, argc, argv);
};
static JSValue style_box_line_class_set_grow_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxLine::set_grow_begin, ctx, this_val, argc, argv);
};
static JSValue style_box_line_class_get_grow_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxLine::get_grow_begin, ctx, this_val, argc, argv);
};
static JSValue style_box_line_class_set_grow_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxLine::set_grow_end, ctx, this_val, argc, argv);
};
static JSValue style_box_line_class_get_grow_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxLine::get_grow_end, ctx, this_val, argc, argv);
};
static JSValue style_box_line_class_set_vertical(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxLine::set_vertical, ctx, this_val, argc, argv);
};
static JSValue style_box_line_class_is_vertical(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxLine::is_vertical, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry style_box_line_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_color", 1, &style_box_line_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &style_box_line_class_get_color),
	JS_CFUNC_DEF("set_thickness", 1, &style_box_line_class_set_thickness),
	JS_CFUNC_DEF("get_thickness", 0, &style_box_line_class_get_thickness),
	JS_CFUNC_DEF("set_grow_begin", 1, &style_box_line_class_set_grow_begin),
	JS_CFUNC_DEF("get_grow_begin", 0, &style_box_line_class_get_grow_begin),
	JS_CFUNC_DEF("set_grow_end", 1, &style_box_line_class_set_grow_end),
	JS_CFUNC_DEF("get_grow_end", 0, &style_box_line_class_get_grow_end),
	JS_CFUNC_DEF("set_vertical", 1, &style_box_line_class_set_vertical),
	JS_CFUNC_DEF("is_vertical", 0, &style_box_line_class_is_vertical),
};

static void define_style_box_line_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "color"),
        JS_NewCFunction(ctx, style_box_line_class_get_color, "get_color", 0),
        JS_NewCFunction(ctx, style_box_line_class_set_color, "set_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "grow_begin"),
        JS_NewCFunction(ctx, style_box_line_class_get_grow_begin, "get_grow_begin", 0),
        JS_NewCFunction(ctx, style_box_line_class_set_grow_begin, "set_grow_begin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "grow_end"),
        JS_NewCFunction(ctx, style_box_line_class_get_grow_end, "get_grow_end", 0),
        JS_NewCFunction(ctx, style_box_line_class_set_grow_end, "set_grow_end", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "thickness"),
        JS_NewCFunction(ctx, style_box_line_class_get_thickness, "get_thickness", 0),
        JS_NewCFunction(ctx, style_box_line_class_set_thickness, "set_thickness", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "vertical"),
        JS_NewCFunction(ctx, style_box_line_class_is_vertical, "is_vertical", 0),
        JS_NewCFunction(ctx, style_box_line_class_set_vertical, "set_vertical", 1),
        JS_PROP_GETSET
    );
	
}

static void define_style_box_line_enum(JSContext *ctx, JSValue proto) {
}

static int js_style_box_line_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["StyleBoxLine"] = StyleBoxLine::__class_id;
	class_id_list.insert(StyleBoxLine::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), StyleBoxLine::__class_id, &style_box_line_class_def);

	JSValue proto = JS_NewObjectClass(ctx, StyleBoxLine::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, StyleBox::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StyleBoxLine::__class_id, proto);

	define_style_box_line_property(ctx, proto);
	define_style_box_line_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, style_box_line_class_proto_funcs, _countof(style_box_line_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, style_box_line_class_constructor, "StyleBoxLine", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "StyleBoxLine", ctor);
	constructors[StyleBoxLine::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_style_box_line_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/style_box';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_style_box_line_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StyleBoxLine");
	return m;
}

JSModuleDef *js_init_style_box_line_module(JSContext *ctx) {
	return _js_init_style_box_line_module(ctx, "@godot/classes/style_box_line");
}

void register_style_box_line() {
	StyleBoxLine::__init_js_class_id();
	js_init_style_box_line_module(ctx);
}