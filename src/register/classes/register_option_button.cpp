
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/option_button.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void option_button_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef option_button_class_def = {
	"OptionButton",
	.finalizer = option_button_class_finalizer
};

static JSValue option_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OptionButton::__class_id);
	if (JS_IsException(obj))
		return obj;

	OptionButton *option_button_class;
	if (argc == 1) 
		option_button_class = static_cast<OptionButton *>(Variant(*argv).operator Object *());
	else 
		option_button_class = memnew(OptionButton);
	if (!option_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, option_button_class);
	return obj;
}
static JSValue option_button_class_add_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::add_item, ctx, this_val, argc, argv);
};
static JSValue option_button_class_add_icon_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::add_icon_item, ctx, this_val, argc, argv);
};
static JSValue option_button_class_set_item_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::set_item_text, ctx, this_val, argc, argv);
};
static JSValue option_button_class_set_item_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::set_item_icon, ctx, this_val, argc, argv);
};
static JSValue option_button_class_set_item_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::set_item_disabled, ctx, this_val, argc, argv);
};
static JSValue option_button_class_set_item_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::set_item_id, ctx, this_val, argc, argv);
};
static JSValue option_button_class_set_item_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::set_item_metadata, ctx, this_val, argc, argv);
};
static JSValue option_button_class_set_item_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::set_item_tooltip, ctx, this_val, argc, argv);
};
static JSValue option_button_class_get_item_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::get_item_text, ctx, this_val, argc, argv);
};
static JSValue option_button_class_get_item_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::get_item_icon, ctx, this_val, argc, argv);
};
static JSValue option_button_class_get_item_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::get_item_id, ctx, this_val, argc, argv);
};
static JSValue option_button_class_get_item_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::get_item_index, ctx, this_val, argc, argv);
};
static JSValue option_button_class_get_item_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::get_item_metadata, ctx, this_val, argc, argv);
};
static JSValue option_button_class_get_item_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::get_item_tooltip, ctx, this_val, argc, argv);
};
static JSValue option_button_class_is_item_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::is_item_disabled, ctx, this_val, argc, argv);
};
static JSValue option_button_class_is_item_separator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::is_item_separator, ctx, this_val, argc, argv);
};
static JSValue option_button_class_add_separator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::add_separator, ctx, this_val, argc, argv);
};
static JSValue option_button_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::clear, ctx, this_val, argc, argv);
};
static JSValue option_button_class_select(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::select, ctx, this_val, argc, argv);
};
static JSValue option_button_class_get_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::get_selected, ctx, this_val, argc, argv);
};
static JSValue option_button_class_get_selected_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::get_selected_id, ctx, this_val, argc, argv);
};
static JSValue option_button_class_get_selected_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::get_selected_metadata, ctx, this_val, argc, argv);
};
static JSValue option_button_class_remove_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::remove_item, ctx, this_val, argc, argv);
};
static JSValue option_button_class_get_popup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::get_popup, ctx, this_val, argc, argv);
};
static JSValue option_button_class_show_popup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::show_popup, ctx, this_val, argc, argv);
};
static JSValue option_button_class_set_item_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::set_item_count, ctx, this_val, argc, argv);
};
static JSValue option_button_class_get_item_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::get_item_count, ctx, this_val, argc, argv);
};
static JSValue option_button_class_has_selectable_items(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::has_selectable_items, ctx, this_val, argc, argv);
};
static JSValue option_button_class_get_selectable_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::get_selectable_item, ctx, this_val, argc, argv);
};
static JSValue option_button_class_set_fit_to_longest_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::set_fit_to_longest_item, ctx, this_val, argc, argv);
};
static JSValue option_button_class_is_fit_to_longest_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::is_fit_to_longest_item, ctx, this_val, argc, argv);
};
static JSValue option_button_class_set_allow_reselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::set_allow_reselect, ctx, this_val, argc, argv);
};
static JSValue option_button_class_get_allow_reselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OptionButton::get_allow_reselect, ctx, this_val, argc, argv);
};
static JSValue option_button_class_set_disable_shortcuts(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptionButton::set_disable_shortcuts, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry option_button_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_item", 2, &option_button_class_add_item),
	JS_CFUNC_DEF("add_icon_item", 3, &option_button_class_add_icon_item),
	JS_CFUNC_DEF("set_item_text", 2, &option_button_class_set_item_text),
	JS_CFUNC_DEF("set_item_icon", 2, &option_button_class_set_item_icon),
	JS_CFUNC_DEF("set_item_disabled", 2, &option_button_class_set_item_disabled),
	JS_CFUNC_DEF("set_item_id", 2, &option_button_class_set_item_id),
	JS_CFUNC_DEF("set_item_metadata", 2, &option_button_class_set_item_metadata),
	JS_CFUNC_DEF("set_item_tooltip", 2, &option_button_class_set_item_tooltip),
	JS_CFUNC_DEF("get_item_text", 1, &option_button_class_get_item_text),
	JS_CFUNC_DEF("get_item_icon", 1, &option_button_class_get_item_icon),
	JS_CFUNC_DEF("get_item_id", 1, &option_button_class_get_item_id),
	JS_CFUNC_DEF("get_item_index", 1, &option_button_class_get_item_index),
	JS_CFUNC_DEF("get_item_metadata", 1, &option_button_class_get_item_metadata),
	JS_CFUNC_DEF("get_item_tooltip", 1, &option_button_class_get_item_tooltip),
	JS_CFUNC_DEF("is_item_disabled", 1, &option_button_class_is_item_disabled),
	JS_CFUNC_DEF("is_item_separator", 1, &option_button_class_is_item_separator),
	JS_CFUNC_DEF("add_separator", 1, &option_button_class_add_separator),
	JS_CFUNC_DEF("clear", 0, &option_button_class_clear),
	JS_CFUNC_DEF("select", 1, &option_button_class_select),
	JS_CFUNC_DEF("get_selected", 0, &option_button_class_get_selected),
	JS_CFUNC_DEF("get_selected_id", 0, &option_button_class_get_selected_id),
	JS_CFUNC_DEF("get_selected_metadata", 0, &option_button_class_get_selected_metadata),
	JS_CFUNC_DEF("remove_item", 1, &option_button_class_remove_item),
	JS_CFUNC_DEF("get_popup", 0, &option_button_class_get_popup),
	JS_CFUNC_DEF("show_popup", 0, &option_button_class_show_popup),
	JS_CFUNC_DEF("set_item_count", 1, &option_button_class_set_item_count),
	JS_CFUNC_DEF("get_item_count", 0, &option_button_class_get_item_count),
	JS_CFUNC_DEF("has_selectable_items", 0, &option_button_class_has_selectable_items),
	JS_CFUNC_DEF("get_selectable_item", 1, &option_button_class_get_selectable_item),
	JS_CFUNC_DEF("set_fit_to_longest_item", 1, &option_button_class_set_fit_to_longest_item),
	JS_CFUNC_DEF("is_fit_to_longest_item", 0, &option_button_class_is_fit_to_longest_item),
	JS_CFUNC_DEF("set_allow_reselect", 1, &option_button_class_set_allow_reselect),
	JS_CFUNC_DEF("get_allow_reselect", 0, &option_button_class_get_allow_reselect),
	JS_CFUNC_DEF("set_disable_shortcuts", 1, &option_button_class_set_disable_shortcuts),
};
static JSValue option_button_class_get_item_selected_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	OptionButton *opaque = reinterpret_cast<OptionButton *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "item_selected_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "item_selected").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "item_selected_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue option_button_class_get_item_focused_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	OptionButton *opaque = reinterpret_cast<OptionButton *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "item_focused_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "item_focused").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "item_focused_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_option_button_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "selected"),
        JS_NewCFunction(ctx, option_button_class_get_selected, "get_selected", 0),
        JS_UNDEFINED,
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "fit_to_longest_item"),
        JS_NewCFunction(ctx, option_button_class_is_fit_to_longest_item, "is_fit_to_longest_item", 0),
        JS_NewCFunction(ctx, option_button_class_set_fit_to_longest_item, "set_fit_to_longest_item", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "allow_reselect"),
        JS_NewCFunction(ctx, option_button_class_get_allow_reselect, "get_allow_reselect", 0),
        JS_NewCFunction(ctx, option_button_class_set_allow_reselect, "set_allow_reselect", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "item_count"),
        JS_NewCFunction(ctx, option_button_class_get_item_count, "get_item_count", 0),
        JS_NewCFunction(ctx, option_button_class_set_item_count, "set_item_count", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "item_selected"),
		JS_NewCFunction(ctx, option_button_class_get_item_selected_signal, "get_item_selected_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "item_focused"),
		JS_NewCFunction(ctx, option_button_class_get_item_focused_signal, "get_item_focused_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_option_button_enum(JSContext *ctx, JSValue proto) {
}

static int js_option_button_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["OptionButton"] = OptionButton::__class_id;
	class_id_list.insert(OptionButton::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OptionButton::__class_id, &option_button_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OptionButton::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Button::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OptionButton::__class_id, proto);

	define_option_button_property(ctx, proto);
	define_option_button_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, option_button_class_proto_funcs, _countof(option_button_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, option_button_class_constructor, "OptionButton", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OptionButton", ctor);

	return 0;
}

JSModuleDef *_js_init_option_button_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/button';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_option_button_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OptionButton");
	return m;
}

JSModuleDef *js_init_option_button_module(JSContext *ctx) {
	return _js_init_option_button_module(ctx, "@godot/classes/option_button");
}

void register_option_button() {
	OptionButton::__init_js_class_id();
	js_init_option_button_module(ctx);
}