
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/visible_on_screen_notifier2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visible_on_screen_notifier2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visible_on_screen_notifier2d_class_def = {
	"VisibleOnScreenNotifier2D",
	.finalizer = visible_on_screen_notifier2d_class_finalizer
};

static JSValue visible_on_screen_notifier2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisibleOnScreenNotifier2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisibleOnScreenNotifier2D *visible_on_screen_notifier2d_class = memnew(VisibleOnScreenNotifier2D);
	if (!visible_on_screen_notifier2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visible_on_screen_notifier2d_class);	
	return obj;
}
static JSValue visible_on_screen_notifier2d_class_set_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisibleOnScreenNotifier2D::set_rect, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visible_on_screen_notifier2d_class_get_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisibleOnScreenNotifier2D::get_rect, ctx, this_val, argc, argv);
};
static JSValue visible_on_screen_notifier2d_class_is_on_screen(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisibleOnScreenNotifier2D::is_on_screen, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visible_on_screen_notifier2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_rect", 1, &visible_on_screen_notifier2d_class_set_rect),
	JS_CFUNC_DEF("get_rect", 0, &visible_on_screen_notifier2d_class_get_rect),
	JS_CFUNC_DEF("is_on_screen", 0, &visible_on_screen_notifier2d_class_is_on_screen),
};

void define_visible_on_screen_notifier2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rect"),
        JS_NewCFunction(ctx, visible_on_screen_notifier2d_class_get_rect, "get_rect", 0),
        JS_NewCFunction(ctx, visible_on_screen_notifier2d_class_set_rect, "set_rect", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_visible_on_screen_notifier2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisibleOnScreenNotifier2D::__class_id);
	classes["VisibleOnScreenNotifier2D"] = VisibleOnScreenNotifier2D::__class_id;
	class_id_list.insert(VisibleOnScreenNotifier2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisibleOnScreenNotifier2D::__class_id, &visible_on_screen_notifier2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisibleOnScreenNotifier2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisibleOnScreenNotifier2D::__class_id, proto);

	define_visible_on_screen_notifier2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visible_on_screen_notifier2d_class_proto_funcs, _countof(visible_on_screen_notifier2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visible_on_screen_notifier2d_class_constructor, "VisibleOnScreenNotifier2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisibleOnScreenNotifier2D", ctor);

	return 0;
}

JSModuleDef *_js_init_visible_on_screen_notifier2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visible_on_screen_notifier2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisibleOnScreenNotifier2D");
	return m;
}

JSModuleDef *js_init_visible_on_screen_notifier2d_module(JSContext *ctx) {
	return _js_init_visible_on_screen_notifier2d_module(ctx, "godot/classes/visible_on_screen_notifier2d");
}

void register_visible_on_screen_notifier2d() {
	VisibleOnScreenNotifier2D::__init_js_class_id();
	js_init_visible_on_screen_notifier2d_module(ctx);
}