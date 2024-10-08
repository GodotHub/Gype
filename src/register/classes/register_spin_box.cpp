
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/classes/spin_box.hpp>
#include <godot_cpp/core/convert_helper.hpp>
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
	return obj;
}
static JSValue spin_box_class_set_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpinBox::set_horizontal_alignment, SpinBox::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_get_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpinBox::get_horizontal_alignment, SpinBox::__class_id, ctx, this_val, argv);
};
static JSValue spin_box_class_set_suffix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpinBox::set_suffix, SpinBox::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_get_suffix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpinBox::get_suffix, SpinBox::__class_id, ctx, this_val, argv);
};
static JSValue spin_box_class_set_prefix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpinBox::set_prefix, SpinBox::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_get_prefix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpinBox::get_prefix, SpinBox::__class_id, ctx, this_val, argv);
};
static JSValue spin_box_class_set_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpinBox::set_editable, SpinBox::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_set_custom_arrow_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpinBox::set_custom_arrow_step, SpinBox::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_get_custom_arrow_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpinBox::get_custom_arrow_step, SpinBox::__class_id, ctx, this_val, argv);
};
static JSValue spin_box_class_is_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpinBox::is_editable, SpinBox::__class_id, ctx, this_val, argv);
};
static JSValue spin_box_class_set_update_on_text_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpinBox::set_update_on_text_changed, SpinBox::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_get_update_on_text_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpinBox::get_update_on_text_changed, SpinBox::__class_id, ctx, this_val, argv);
};
static JSValue spin_box_class_set_select_all_on_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpinBox::set_select_all_on_focus, SpinBox::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_is_select_all_on_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpinBox::is_select_all_on_focus, SpinBox::__class_id, ctx, this_val, argv);
};
static JSValue spin_box_class_apply(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpinBox::apply, SpinBox::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue spin_box_class_get_line_edit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SpinBox::get_line_edit, SpinBox::__class_id, ctx, this_val, argv);
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

static int js_spin_box_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SpinBox::__class_id);
	classes["SpinBox"] = SpinBox::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SpinBox::__class_id, &spin_box_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Range::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SpinBox::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, spin_box_class_proto_funcs, _countof(spin_box_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, spin_box_class_constructor, "SpinBox", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SpinBox", ctor);

	return 0;
}

JSModuleDef *_js_init_spin_box_module(JSContext *ctx, const char *module_name) {
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
	js_init_spin_box_module(ctx);
}