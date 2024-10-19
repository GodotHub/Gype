
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_resource_picker.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_resource_picker_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_resource_picker_class_def = {
	"EditorResourcePicker",
	.finalizer = editor_resource_picker_class_finalizer
};

static JSValue editor_resource_picker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorResourcePicker::__class_id);
	if (JS_IsException(obj))
		return obj;
	EditorResourcePicker *editor_resource_picker_class = memnew(EditorResourcePicker);
	if (!editor_resource_picker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_resource_picker_class);	
	return obj;
}
static JSValue editor_resource_picker_class_set_base_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorResourcePicker::set_base_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_resource_picker_class_get_base_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorResourcePicker::get_base_type, ctx, this_val, argc, argv);
};
static JSValue editor_resource_picker_class_get_allowed_types(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorResourcePicker::get_allowed_types, ctx, this_val, argc, argv);
};
static JSValue editor_resource_picker_class_set_edited_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorResourcePicker::set_edited_resource, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_resource_picker_class_get_edited_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorResourcePicker::get_edited_resource, ctx, this_val, argc, argv);
};
static JSValue editor_resource_picker_class_set_toggle_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorResourcePicker::set_toggle_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_resource_picker_class_is_toggle_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorResourcePicker::is_toggle_mode, ctx, this_val, argc, argv);
};
static JSValue editor_resource_picker_class_set_toggle_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorResourcePicker::set_toggle_pressed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_resource_picker_class_set_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorResourcePicker::set_editable, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_resource_picker_class_is_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorResourcePicker::is_editable, ctx, this_val, argc, argv);
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

void define_editor_resource_picker_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "base_type"),
        JS_NewCFunction(ctx, editor_resource_picker_class_get_base_type, "get_base_type", 0),
        JS_NewCFunction(ctx, editor_resource_picker_class_set_base_type, "set_base_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "edited_resource"),
        JS_NewCFunction(ctx, editor_resource_picker_class_get_edited_resource, "get_edited_resource", 0),
        JS_NewCFunction(ctx, editor_resource_picker_class_set_edited_resource, "set_edited_resource", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "editable"),
        JS_NewCFunction(ctx, editor_resource_picker_class_is_editable, "is_editable", 0),
        JS_NewCFunction(ctx, editor_resource_picker_class_set_editable, "set_editable", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "toggle_mode"),
        JS_NewCFunction(ctx, editor_resource_picker_class_is_toggle_mode, "is_toggle_mode", 0),
        JS_NewCFunction(ctx, editor_resource_picker_class_set_toggle_mode, "set_toggle_mode", 1),
        JS_PROP_GETSET
    );
}

static int js_editor_resource_picker_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EditorResourcePicker::__class_id);
	classes["EditorResourcePicker"] = EditorResourcePicker::__class_id;
	class_id_list.insert(EditorResourcePicker::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorResourcePicker::__class_id, &editor_resource_picker_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorResourcePicker::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, HBoxContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorResourcePicker::__class_id, proto);

	define_editor_resource_picker_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_resource_picker_class_proto_funcs, _countof(editor_resource_picker_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_resource_picker_class_constructor, "EditorResourcePicker", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorResourcePicker", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_resource_picker_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/h_box_container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	EditorResourcePicker::__init_js_class_id();
	js_init_editor_resource_picker_module(ctx);
}