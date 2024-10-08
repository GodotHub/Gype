
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/editor_resource_picker.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_resource_picker_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorResourcePicker *editor_resource_picker = static_cast<EditorResourcePicker *>(JS_GetOpaque(val, EditorResourcePicker::__class_id));
	if (editor_resource_picker)
		EditorResourcePicker::free(nullptr, editor_resource_picker);
}

static JSClassDef editor_resource_picker_class_def = {
	"EditorResourcePicker",
	.finalizer = editor_resource_picker_class_finalizer
};

static JSValue editor_resource_picker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorResourcePicker *editor_resource_picker_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorResourcePicker::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_resource_picker_class = memnew(EditorResourcePicker);
	if (!editor_resource_picker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_resource_picker_class);
	return obj;
}
static JSValue editor_resource_picker_class_set_base_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorResourcePicker::set_base_type, EditorResourcePicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_resource_picker_class_get_base_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorResourcePicker::get_base_type, EditorResourcePicker::__class_id, ctx, this_val, argv);
};
static JSValue editor_resource_picker_class_get_allowed_types(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorResourcePicker::get_allowed_types, EditorResourcePicker::__class_id, ctx, this_val, argv);
};
static JSValue editor_resource_picker_class_set_edited_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorResourcePicker::set_edited_resource, EditorResourcePicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_resource_picker_class_get_edited_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorResourcePicker::get_edited_resource, EditorResourcePicker::__class_id, ctx, this_val, argv);
};
static JSValue editor_resource_picker_class_set_toggle_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorResourcePicker::set_toggle_mode, EditorResourcePicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_resource_picker_class_is_toggle_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorResourcePicker::is_toggle_mode, EditorResourcePicker::__class_id, ctx, this_val, argv);
};
static JSValue editor_resource_picker_class_set_toggle_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorResourcePicker::set_toggle_pressed, EditorResourcePicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_resource_picker_class_set_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorResourcePicker::set_editable, EditorResourcePicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_resource_picker_class_is_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorResourcePicker::is_editable, EditorResourcePicker::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry editor_resource_picker_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_base_type", 1, &editor_resource_picker_class_set_base_type),
	JS_CFUNC_DEF("get_base_type", 0, &editor_resource_picker_class_get_base_type),
	JS_CFUNC_DEF("get_allowed_types", 0, &editor_resource_picker_class_get_allowed_types),
	JS_CFUNC_DEF("set_edited_resource", 1, &editor_resource_picker_class_set_edited_resource),
	JS_CFUNC_DEF("get_edited_resource", 0, &editor_resource_picker_class_get_edited_resource),
	JS_CFUNC_DEF("set_toggle_mode", 1, &editor_resource_picker_class_set_toggle_mode),
	JS_CFUNC_DEF("is_toggle_mode", 0, &editor_resource_picker_class_is_toggle_mode),
	JS_CFUNC_DEF("set_toggle_pressed", 1, &editor_resource_picker_class_set_toggle_pressed),
	JS_CFUNC_DEF("set_editable", 1, &editor_resource_picker_class_set_editable),
	JS_CFUNC_DEF("is_editable", 0, &editor_resource_picker_class_is_editable),
};

static int js_editor_resource_picker_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorResourcePicker::__class_id);
	classes["EditorResourcePicker"] = EditorResourcePicker::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorResourcePicker::__class_id, &editor_resource_picker_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, HBoxContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorResourcePicker::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_resource_picker_class_proto_funcs, _countof(editor_resource_picker_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_resource_picker_class_constructor, "EditorResourcePicker", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorResourcePicker", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_resource_picker_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_resource_picker_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorResourcePicker");
	return m;
}

JSModuleDef *js_init_editor_resource_picker_module(JSContext *ctx) {
	return _js_init_editor_resource_picker_module(ctx, "godot/classes/editor_resource_picker");
}

void register_editor_resource_picker() {
	js_init_editor_resource_picker_module(ctx);
}