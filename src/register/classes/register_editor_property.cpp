
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/editor_property.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_property_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorProperty *editor_property = static_cast<EditorProperty *>(JS_GetOpaque(val, EditorProperty::__class_id));
	if (editor_property)
		EditorProperty::free(nullptr, editor_property);
}

static JSClassDef editor_property_class_def = {
	"EditorProperty",
	.finalizer = editor_property_class_finalizer
};

static JSValue editor_property_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorProperty *editor_property_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorProperty::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_property_class = memnew(EditorProperty);
	if (!editor_property_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_property_class);
	return obj;
}
static JSValue editor_property_class_set_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorProperty::set_label, EditorProperty::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_property_class_get_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorProperty::get_label, EditorProperty::__class_id, ctx, this_val, argv);
};
static JSValue editor_property_class_set_read_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorProperty::set_read_only, EditorProperty::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_property_class_is_read_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorProperty::is_read_only, EditorProperty::__class_id, ctx, this_val, argv);
};
static JSValue editor_property_class_set_checkable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorProperty::set_checkable, EditorProperty::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_property_class_is_checkable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorProperty::is_checkable, EditorProperty::__class_id, ctx, this_val, argv);
};
static JSValue editor_property_class_set_checked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorProperty::set_checked, EditorProperty::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_property_class_is_checked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorProperty::is_checked, EditorProperty::__class_id, ctx, this_val, argv);
};
static JSValue editor_property_class_set_draw_warning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorProperty::set_draw_warning, EditorProperty::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_property_class_is_draw_warning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorProperty::is_draw_warning, EditorProperty::__class_id, ctx, this_val, argv);
};
static JSValue editor_property_class_set_keying(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorProperty::set_keying, EditorProperty::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_property_class_is_keying(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorProperty::is_keying, EditorProperty::__class_id, ctx, this_val, argv);
};
static JSValue editor_property_class_set_deletable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorProperty::set_deletable, EditorProperty::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_property_class_is_deletable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorProperty::is_deletable, EditorProperty::__class_id, ctx, this_val, argv);
};
static JSValue editor_property_class_get_edited_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorProperty::get_edited_property, EditorProperty::__class_id, ctx, this_val, argv);
};
static JSValue editor_property_class_get_edited_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorProperty::get_edited_object, EditorProperty::__class_id, ctx, this_val, argv);
};
static JSValue editor_property_class_update_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorProperty::update_property, EditorProperty::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_property_class_add_focusable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorProperty::add_focusable, EditorProperty::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_property_class_set_bottom_editor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorProperty::set_bottom_editor, EditorProperty::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_property_class_emit_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorProperty::emit_changed, EditorProperty::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry editor_property_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_label", 1, &editor_property_class_set_label),
	JS_CFUNC_DEF("get_label", 0, &editor_property_class_get_label),
	JS_CFUNC_DEF("set_read_only", 1, &editor_property_class_set_read_only),
	JS_CFUNC_DEF("is_read_only", 0, &editor_property_class_is_read_only),
	JS_CFUNC_DEF("set_checkable", 1, &editor_property_class_set_checkable),
	JS_CFUNC_DEF("is_checkable", 0, &editor_property_class_is_checkable),
	JS_CFUNC_DEF("set_checked", 1, &editor_property_class_set_checked),
	JS_CFUNC_DEF("is_checked", 0, &editor_property_class_is_checked),
	JS_CFUNC_DEF("set_draw_warning", 1, &editor_property_class_set_draw_warning),
	JS_CFUNC_DEF("is_draw_warning", 0, &editor_property_class_is_draw_warning),
	JS_CFUNC_DEF("set_keying", 1, &editor_property_class_set_keying),
	JS_CFUNC_DEF("is_keying", 0, &editor_property_class_is_keying),
	JS_CFUNC_DEF("set_deletable", 1, &editor_property_class_set_deletable),
	JS_CFUNC_DEF("is_deletable", 0, &editor_property_class_is_deletable),
	JS_CFUNC_DEF("get_edited_property", 0, &editor_property_class_get_edited_property),
	JS_CFUNC_DEF("get_edited_object", 0, &editor_property_class_get_edited_object),
	JS_CFUNC_DEF("update_property", 0, &editor_property_class_update_property),
	JS_CFUNC_DEF("add_focusable", 1, &editor_property_class_add_focusable),
	JS_CFUNC_DEF("set_bottom_editor", 1, &editor_property_class_set_bottom_editor),
	JS_CFUNC_DEF("emit_changed", 4, &editor_property_class_emit_changed),
};

static int js_editor_property_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorProperty::__class_id);
	classes["EditorProperty"] = EditorProperty::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorProperty::__class_id, &editor_property_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorProperty::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_property_class_proto_funcs, _countof(editor_property_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_property_class_constructor, "EditorProperty", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorProperty", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_property_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_property_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorProperty");
	return m;
}

JSModuleDef *js_init_editor_property_module(JSContext *ctx) {
	return _js_init_editor_property_module(ctx, "godot/classes/editor_property");
}

void register_editor_property() {
	js_init_editor_property_module(ctx);
}