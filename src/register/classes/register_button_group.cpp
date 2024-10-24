
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/button_group.hpp>
#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void button_group_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef button_group_class_def = {
	"ButtonGroup",
	.finalizer = button_group_class_finalizer
};

static JSValue button_group_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ButtonGroup::__class_id);
	if (JS_IsException(obj))
		return obj;
	ButtonGroup *button_group_class = memnew(ButtonGroup);
	if (!button_group_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, button_group_class);	
	return obj;
}
static JSValue button_group_class_get_pressed_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ButtonGroup::get_pressed_button, ctx, this_val, argc, argv);
};
static JSValue button_group_class_get_buttons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ButtonGroup::get_buttons, ctx, this_val, argc, argv);
};
static JSValue button_group_class_set_allow_unpress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ButtonGroup::set_allow_unpress, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue button_group_class_is_allow_unpress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ButtonGroup::is_allow_unpress, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry button_group_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_pressed_button", 0, &button_group_class_get_pressed_button),
	JS_CFUNC_DEF("get_buttons", 0, &button_group_class_get_buttons),
	JS_CFUNC_DEF("set_allow_unpress", 1, &button_group_class_set_allow_unpress),
	JS_CFUNC_DEF("is_allow_unpress", 0, &button_group_class_is_allow_unpress),
};

void define_button_group_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "allow_unpress"),
        JS_NewCFunction(ctx, button_group_class_is_allow_unpress, "is_allow_unpress", 0),
        JS_NewCFunction(ctx, button_group_class_set_allow_unpress, "set_allow_unpress", 1),
        JS_PROP_GETSET
    );
}

static int js_button_group_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ButtonGroup::__class_id);
	classes["ButtonGroup"] = ButtonGroup::__class_id;
	class_id_list.insert(ButtonGroup::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ButtonGroup::__class_id, &button_group_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ButtonGroup::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ButtonGroup::__class_id, proto);

	define_button_group_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, button_group_class_proto_funcs, _countof(button_group_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, button_group_class_constructor, "ButtonGroup", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ButtonGroup", ctor);

	return 0;
}

JSModuleDef *_js_init_button_group_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_button_group_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ButtonGroup");
	return m;
}

JSModuleDef *js_init_button_group_module(JSContext *ctx) {
	return _js_init_button_group_module(ctx, "godot/classes/button_group");
}

void register_button_group() {
	ButtonGroup::__init_js_class_id();
	js_init_button_group_module(ctx);
}