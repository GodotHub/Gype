
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/classes/editor_spin_slider.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_spin_slider_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_spin_slider_class_def = {
	"EditorSpinSlider",
	.finalizer = editor_spin_slider_class_finalizer
};

static JSValue editor_spin_slider_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorSpinSlider::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorSpinSlider *editor_spin_slider_class;
	if (argc == 1) 
		editor_spin_slider_class = static_cast<EditorSpinSlider *>(Variant(*argv).operator Object *());
	else 
		editor_spin_slider_class = memnew(EditorSpinSlider);
	if (!editor_spin_slider_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_spin_slider_class);
	return obj;
}
static JSValue editor_spin_slider_class_set_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSpinSlider::set_label, ctx, this_val, argc, argv);
};
static JSValue editor_spin_slider_class_get_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorSpinSlider::get_label, ctx, this_val, argc, argv);
};
static JSValue editor_spin_slider_class_set_suffix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSpinSlider::set_suffix, ctx, this_val, argc, argv);
};
static JSValue editor_spin_slider_class_get_suffix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorSpinSlider::get_suffix, ctx, this_val, argc, argv);
};
static JSValue editor_spin_slider_class_set_read_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSpinSlider::set_read_only, ctx, this_val, argc, argv);
};
static JSValue editor_spin_slider_class_is_read_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorSpinSlider::is_read_only, ctx, this_val, argc, argv);
};
static JSValue editor_spin_slider_class_set_flat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSpinSlider::set_flat, ctx, this_val, argc, argv);
};
static JSValue editor_spin_slider_class_is_flat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorSpinSlider::is_flat, ctx, this_val, argc, argv);
};
static JSValue editor_spin_slider_class_set_hide_slider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSpinSlider::set_hide_slider, ctx, this_val, argc, argv);
};
static JSValue editor_spin_slider_class_is_hiding_slider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorSpinSlider::is_hiding_slider, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry editor_spin_slider_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_label", 1, &editor_spin_slider_class_set_label),
	JS_CFUNC_DEF("get_label", 0, &editor_spin_slider_class_get_label),
	JS_CFUNC_DEF("set_suffix", 1, &editor_spin_slider_class_set_suffix),
	JS_CFUNC_DEF("get_suffix", 0, &editor_spin_slider_class_get_suffix),
	JS_CFUNC_DEF("set_read_only", 1, &editor_spin_slider_class_set_read_only),
	JS_CFUNC_DEF("is_read_only", 0, &editor_spin_slider_class_is_read_only),
	JS_CFUNC_DEF("set_flat", 1, &editor_spin_slider_class_set_flat),
	JS_CFUNC_DEF("is_flat", 0, &editor_spin_slider_class_is_flat),
	JS_CFUNC_DEF("set_hide_slider", 1, &editor_spin_slider_class_set_hide_slider),
	JS_CFUNC_DEF("is_hiding_slider", 0, &editor_spin_slider_class_is_hiding_slider),
};
static JSValue editor_spin_slider_class_get_grabbed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorSpinSlider *opaque = reinterpret_cast<EditorSpinSlider *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "grabbed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "grabbed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "grabbed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_spin_slider_class_get_ungrabbed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorSpinSlider *opaque = reinterpret_cast<EditorSpinSlider *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "ungrabbed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "ungrabbed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "ungrabbed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_spin_slider_class_get_value_focus_entered_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorSpinSlider *opaque = reinterpret_cast<EditorSpinSlider *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "value_focus_entered_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "value_focus_entered").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "value_focus_entered_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_spin_slider_class_get_value_focus_exited_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorSpinSlider *opaque = reinterpret_cast<EditorSpinSlider *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "value_focus_exited_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "value_focus_exited").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "value_focus_exited_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_editor_spin_slider_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "label"),
        JS_NewCFunction(ctx, editor_spin_slider_class_get_label, "get_label", 0),
        JS_NewCFunction(ctx, editor_spin_slider_class_set_label, "set_label", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "suffix"),
        JS_NewCFunction(ctx, editor_spin_slider_class_get_suffix, "get_suffix", 0),
        JS_NewCFunction(ctx, editor_spin_slider_class_set_suffix, "set_suffix", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "read_only"),
        JS_NewCFunction(ctx, editor_spin_slider_class_is_read_only, "is_read_only", 0),
        JS_NewCFunction(ctx, editor_spin_slider_class_set_read_only, "set_read_only", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "flat"),
        JS_NewCFunction(ctx, editor_spin_slider_class_is_flat, "is_flat", 0),
        JS_NewCFunction(ctx, editor_spin_slider_class_set_flat, "set_flat", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "hide_slider"),
        JS_NewCFunction(ctx, editor_spin_slider_class_is_hiding_slider, "is_hiding_slider", 0),
        JS_NewCFunction(ctx, editor_spin_slider_class_set_hide_slider, "set_hide_slider", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "grabbed"),
		JS_NewCFunction(ctx, editor_spin_slider_class_get_grabbed_signal, "get_grabbed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "ungrabbed"),
		JS_NewCFunction(ctx, editor_spin_slider_class_get_ungrabbed_signal, "get_ungrabbed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "value_focus_entered"),
		JS_NewCFunction(ctx, editor_spin_slider_class_get_value_focus_entered_signal, "get_value_focus_entered_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "value_focus_exited"),
		JS_NewCFunction(ctx, editor_spin_slider_class_get_value_focus_exited_signal, "get_value_focus_exited_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_editor_spin_slider_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_spin_slider_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorSpinSlider"] = EditorSpinSlider::__class_id;
	class_id_list.insert(EditorSpinSlider::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorSpinSlider::__class_id, &editor_spin_slider_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorSpinSlider::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Range::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSpinSlider::__class_id, proto);

	define_editor_spin_slider_property(ctx, proto);
	define_editor_spin_slider_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_spin_slider_class_proto_funcs, _countof(editor_spin_slider_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_spin_slider_class_constructor, "EditorSpinSlider", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorSpinSlider", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_spin_slider_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/range';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_spin_slider_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSpinSlider");
	return m;
}

JSModuleDef *js_init_editor_spin_slider_module(JSContext *ctx) {
	return _js_init_editor_spin_slider_module(ctx, "@godot/classes/editor_spin_slider");
}

void register_editor_spin_slider() {
	EditorSpinSlider::__init_js_class_id();
	js_init_editor_spin_slider_module(ctx);
}