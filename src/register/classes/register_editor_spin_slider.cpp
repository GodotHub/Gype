
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_spin_slider.hpp>
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_spin_slider_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorSpinSlider *editor_spin_slider = static_cast<EditorSpinSlider *>(JS_GetOpaque(val, EditorSpinSlider::__class_id));
	if (editor_spin_slider)
		EditorSpinSlider::free(nullptr, editor_spin_slider);
}

static JSClassDef editor_spin_slider_class_def = {
	"EditorSpinSlider",
	.finalizer = editor_spin_slider_class_finalizer
};

static JSValue editor_spin_slider_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorSpinSlider *editor_spin_slider_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorSpinSlider::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_spin_slider_class = memnew(EditorSpinSlider);
	if (!editor_spin_slider_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_spin_slider_class);
	return obj;
}
static JSValue editor_spin_slider_class_set_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorSpinSlider::set_label, EditorSpinSlider::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_spin_slider_class_get_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorSpinSlider::get_label, EditorSpinSlider::__class_id, ctx, this_val, argv);
};
static JSValue editor_spin_slider_class_set_suffix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorSpinSlider::set_suffix, EditorSpinSlider::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_spin_slider_class_get_suffix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorSpinSlider::get_suffix, EditorSpinSlider::__class_id, ctx, this_val, argv);
};
static JSValue editor_spin_slider_class_set_read_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorSpinSlider::set_read_only, EditorSpinSlider::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_spin_slider_class_is_read_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorSpinSlider::is_read_only, EditorSpinSlider::__class_id, ctx, this_val, argv);
};
static JSValue editor_spin_slider_class_set_flat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorSpinSlider::set_flat, EditorSpinSlider::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_spin_slider_class_is_flat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorSpinSlider::is_flat, EditorSpinSlider::__class_id, ctx, this_val, argv);
};
static JSValue editor_spin_slider_class_set_hide_slider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorSpinSlider::set_hide_slider, EditorSpinSlider::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_spin_slider_class_is_hiding_slider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorSpinSlider::is_hiding_slider, EditorSpinSlider::__class_id, ctx, this_val, argv);
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

static int js_editor_spin_slider_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorSpinSlider::__class_id);
	classes["EditorSpinSlider"] = EditorSpinSlider::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorSpinSlider::__class_id, &editor_spin_slider_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Range::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSpinSlider::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_spin_slider_class_proto_funcs, _countof(editor_spin_slider_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_spin_slider_class_constructor, "EditorSpinSlider", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorSpinSlider", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_spin_slider_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_spin_slider_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSpinSlider");
	return m;
}

JSModuleDef *js_init_editor_spin_slider_module(JSContext *ctx) {
	return _js_init_editor_spin_slider_module(ctx, "godot/classes/editor_spin_slider");
}

void register_editor_spin_slider() {
	js_init_editor_spin_slider_module(ctx);
}