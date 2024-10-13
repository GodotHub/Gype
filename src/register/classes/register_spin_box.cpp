
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/classes/spin_box.hpp>
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void spin_box_class_finalizer(JSRuntime *rt, JSValue val) {
	SpinBox *spin_box = static_cast<SpinBox *>(JS_GetOpaque(val, SpinBox::__class_id));
	if (spin_box)
		SpinBox::free(nullptr, spin_box);
}

static JSClassDef spin_box_class_def = {
	"SpinBox",
	.finalizer = spin_box_class_finalizer
};

static JSValue spin_box_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SpinBox *spin_box_class;
	JSValue obj = JS_NewObjectClass(ctx, SpinBox::__class_id);
	if (JS_IsException(obj))
		return obj;
	spin_box_class = memnew(SpinBox);
	if (!spin_box_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, spin_box_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue spin_box_class_set_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SpinBox::set_horizontal_alignment, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_get_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpinBox::get_horizontal_alignment, ctx, this_val, argc, argv);
};
static JSValue spin_box_class_set_suffix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SpinBox::set_suffix, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_get_suffix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpinBox::get_suffix, ctx, this_val, argc, argv);
};
static JSValue spin_box_class_set_prefix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SpinBox::set_prefix, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_get_prefix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpinBox::get_prefix, ctx, this_val, argc, argv);
};
static JSValue spin_box_class_set_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SpinBox::set_editable, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_set_custom_arrow_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SpinBox::set_custom_arrow_step, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_get_custom_arrow_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpinBox::get_custom_arrow_step, ctx, this_val, argc, argv);
};
static JSValue spin_box_class_is_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpinBox::is_editable, ctx, this_val, argc, argv);
};
static JSValue spin_box_class_set_update_on_text_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SpinBox::set_update_on_text_changed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_get_update_on_text_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpinBox::get_update_on_text_changed, ctx, this_val, argc, argv);
};
static JSValue spin_box_class_set_select_all_on_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SpinBox::set_select_all_on_focus, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_is_select_all_on_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpinBox::is_select_all_on_focus, ctx, this_val, argc, argv);
};
static JSValue spin_box_class_apply(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SpinBox::apply, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_get_line_edit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SpinBox::get_line_edit, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry spin_box_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_horizontal_alignment", 1, &spin_box_class_set_horizontal_alignment),
	JS_CFUNC_DEF("get_horizontal_alignment", 0, &spin_box_class_get_horizontal_alignment),
	JS_CFUNC_DEF("set_suffix", 1, &spin_box_class_set_suffix),
	JS_CFUNC_DEF("get_suffix", 0, &spin_box_class_get_suffix),
	JS_CFUNC_DEF("set_prefix", 1, &spin_box_class_set_prefix),
	JS_CFUNC_DEF("get_prefix", 0, &spin_box_class_get_prefix),
	JS_CFUNC_DEF("set_editable", 1, &spin_box_class_set_editable),
	JS_CFUNC_DEF("set_custom_arrow_step", 1, &spin_box_class_set_custom_arrow_step),
	JS_CFUNC_DEF("get_custom_arrow_step", 0, &spin_box_class_get_custom_arrow_step),
	JS_CFUNC_DEF("is_editable", 0, &spin_box_class_is_editable),
	JS_CFUNC_DEF("set_update_on_text_changed", 1, &spin_box_class_set_update_on_text_changed),
	JS_CFUNC_DEF("get_update_on_text_changed", 0, &spin_box_class_get_update_on_text_changed),
	JS_CFUNC_DEF("set_select_all_on_focus", 1, &spin_box_class_set_select_all_on_focus),
	JS_CFUNC_DEF("is_select_all_on_focus", 0, &spin_box_class_is_select_all_on_focus),
	JS_CFUNC_DEF("apply", 0, &spin_box_class_apply),
	JS_CFUNC_DEF("get_line_edit", 0, &spin_box_class_get_line_edit),
};

void define_spin_box_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "alignment"),
        JS_NewCFunction(ctx, spin_box_class_get_horizontal_alignment, "get_horizontal_alignment", 0),
        JS_NewCFunction(ctx, spin_box_class_set_horizontal_alignment, "set_horizontal_alignment", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "editable"),
        JS_NewCFunction(ctx, spin_box_class_is_editable, "is_editable", 0),
        JS_NewCFunction(ctx, spin_box_class_set_editable, "set_editable", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "update_on_text_changed"),
        JS_NewCFunction(ctx, spin_box_class_get_update_on_text_changed, "get_update_on_text_changed", 0),
        JS_NewCFunction(ctx, spin_box_class_set_update_on_text_changed, "set_update_on_text_changed", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "prefix"),
        JS_NewCFunction(ctx, spin_box_class_get_prefix, "get_prefix", 0),
        JS_NewCFunction(ctx, spin_box_class_set_prefix, "set_prefix", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "suffix"),
        JS_NewCFunction(ctx, spin_box_class_get_suffix, "get_suffix", 0),
        JS_NewCFunction(ctx, spin_box_class_set_suffix, "set_suffix", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "custom_arrow_step"),
        JS_NewCFunction(ctx, spin_box_class_get_custom_arrow_step, "get_custom_arrow_step", 0),
        JS_NewCFunction(ctx, spin_box_class_set_custom_arrow_step, "set_custom_arrow_step", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "select_all_on_focus"),
        JS_NewCFunction(ctx, spin_box_class_is_select_all_on_focus, "is_select_all_on_focus", 0),
        JS_NewCFunction(ctx, spin_box_class_set_select_all_on_focus, "set_select_all_on_focus", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_spin_box_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&SpinBox::__class_id);
	classes["SpinBox"] = SpinBox::__class_id;
	class_id_list.insert(SpinBox::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SpinBox::__class_id, &spin_box_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Range::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SpinBox::__class_id, proto);
	define_spin_box_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, spin_box_class_proto_funcs, _countof(spin_box_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, spin_box_class_constructor, "SpinBox", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SpinBox", ctor);

	return 0;
}

JSModuleDef *_js_init_spin_box_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/range';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_spin_box_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SpinBox");
	return m;
}

JSModuleDef *js_init_spin_box_module(JSContext *ctx) {
	return _js_init_spin_box_module(ctx, "godot/classes/spin_box");
}

void register_spin_box() {
	SpinBox::__init_js_class_id();
	js_init_spin_box_module(ctx);
}