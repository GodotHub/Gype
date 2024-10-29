
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/color_rect.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void color_rect_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef color_rect_class_def = {
	"ColorRect",
	.finalizer = color_rect_class_finalizer
};

static JSValue color_rect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ColorRect::__class_id);
	if (JS_IsException(obj))
		return obj;
	ColorRect *color_rect_class = memnew(ColorRect);
	if (!color_rect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, color_rect_class);	
	return obj;
}
static JSValue color_rect_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorRect::set_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_rect_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorRect::get_color, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry color_rect_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_color", 1, &color_rect_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &color_rect_class_get_color),
};

void define_color_rect_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color"),
        JS_NewCFunction(ctx, color_rect_class_get_color, "get_color", 0),
        JS_NewCFunction(ctx, color_rect_class_set_color, "set_color", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_color_rect_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ColorRect::__class_id);
	classes["ColorRect"] = ColorRect::__class_id;
	class_id_list.insert(ColorRect::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ColorRect::__class_id, &color_rect_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ColorRect::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ColorRect::__class_id, proto);

	define_color_rect_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, color_rect_class_proto_funcs, _countof(color_rect_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, color_rect_class_constructor, "ColorRect", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ColorRect", ctor);

	return 0;
}

JSModuleDef *_js_init_color_rect_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/control';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_color_rect_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ColorRect");
	return m;
}

JSModuleDef *js_init_color_rect_module(JSContext *ctx) {
	return _js_init_color_rect_module(ctx, "@godot/classes/color_rect");
}

void register_color_rect() {
	ColorRect::__init_js_class_id();
	js_init_color_rect_module(ctx);
}