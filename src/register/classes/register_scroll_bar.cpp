
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/scroll_bar.hpp>
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void scroll_bar_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef scroll_bar_class_def = {
	"ScrollBar",
	.finalizer = scroll_bar_class_finalizer
};

static JSValue scroll_bar_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ScrollBar::__class_id);
	if (JS_IsException(obj))
		return obj;
	ScrollBar *scroll_bar_class = memnew(ScrollBar);
	if (!scroll_bar_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, scroll_bar_class);	
	return obj;
}
static JSValue scroll_bar_class_set_custom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ScrollBar::set_custom_step, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_bar_class_get_custom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ScrollBar::get_custom_step, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry scroll_bar_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_custom_step", 1, &scroll_bar_class_set_custom_step),
	JS_CFUNC_DEF("get_custom_step", 0, &scroll_bar_class_get_custom_step),
};

void define_scroll_bar_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "custom_step"),
        JS_NewCFunction(ctx, scroll_bar_class_get_custom_step, "get_custom_step", 0),
        JS_NewCFunction(ctx, scroll_bar_class_set_custom_step, "set_custom_step", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_scroll_bar_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ScrollBar::__class_id);
	classes["ScrollBar"] = ScrollBar::__class_id;
	class_id_list.insert(ScrollBar::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ScrollBar::__class_id, &scroll_bar_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ScrollBar::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Range::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ScrollBar::__class_id, proto);

	define_scroll_bar_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, scroll_bar_class_proto_funcs, _countof(scroll_bar_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, scroll_bar_class_constructor, "ScrollBar", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ScrollBar", ctor);

	return 0;
}

JSModuleDef *_js_init_scroll_bar_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/range';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_scroll_bar_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ScrollBar");
	return m;
}

JSModuleDef *js_init_scroll_bar_module(JSContext *ctx) {
	return _js_init_scroll_bar_module(ctx, "@godot/classes/scroll_bar");
}

void register_scroll_bar() {
	ScrollBar::__init_js_class_id();
	js_init_scroll_bar_module(ctx);
}