
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/editor_settings.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_settings_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorSettings *editor_settings = static_cast<EditorSettings *>(JS_GetOpaque(val, EditorSettings::__class_id));
	if (editor_settings)
		EditorSettings::free(nullptr, editor_settings);
}

static JSClassDef editor_settings_class_def = {
	"EditorSettings",
	.finalizer = editor_settings_class_finalizer
};

static JSValue editor_settings_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorSettings *editor_settings_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorSettings::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_settings_class = memnew(EditorSettings);
	if (!editor_settings_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_settings_class);
	return obj;
}
static JSValue editor_settings_class_has_setting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorSettings::has_setting, EditorSettings::__class_id, ctx, this_val, argv);
};
static JSValue editor_settings_class_set_setting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorSettings::set_setting, EditorSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_settings_class_get_setting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorSettings::get_setting, EditorSettings::__class_id, ctx, this_val, argv);
};
static JSValue editor_settings_class_erase(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorSettings::erase, EditorSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_settings_class_set_initial_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorSettings::set_initial_value, EditorSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_settings_class_add_property_info(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorSettings::add_property_info, EditorSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_settings_class_set_project_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorSettings::set_project_metadata, EditorSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_settings_class_get_project_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorSettings::get_project_metadata, EditorSettings::__class_id, ctx, this_val, argv);
};
static JSValue editor_settings_class_set_favorites(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorSettings::set_favorites, EditorSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_settings_class_get_favorites(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorSettings::get_favorites, EditorSettings::__class_id, ctx, this_val, argv);
};
static JSValue editor_settings_class_set_recent_dirs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorSettings::set_recent_dirs, EditorSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_settings_class_get_recent_dirs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorSettings::get_recent_dirs, EditorSettings::__class_id, ctx, this_val, argv);
};
static JSValue editor_settings_class_set_builtin_action_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorSettings::set_builtin_action_override, EditorSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_settings_class_check_changed_settings_in_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorSettings::check_changed_settings_in_group, EditorSettings::__class_id, ctx, this_val, argv);
};
static JSValue editor_settings_class_get_changed_settings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorSettings::get_changed_settings, EditorSettings::__class_id, ctx, this_val, argv);
};
static JSValue editor_settings_class_mark_setting_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorSettings::mark_setting_changed, EditorSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry editor_settings_class_proto_funcs[] = {
	JS_CFUNC_DEF("has_setting", 1, &editor_settings_class_has_setting),
	JS_CFUNC_DEF("set_setting", 2, &editor_settings_class_set_setting),
	JS_CFUNC_DEF("get_setting", 1, &editor_settings_class_get_setting),
	JS_CFUNC_DEF("erase", 1, &editor_settings_class_erase),
	JS_CFUNC_DEF("set_initial_value", 3, &editor_settings_class_set_initial_value),
	JS_CFUNC_DEF("add_property_info", 1, &editor_settings_class_add_property_info),
	JS_CFUNC_DEF("set_project_metadata", 3, &editor_settings_class_set_project_metadata),
	JS_CFUNC_DEF("get_project_metadata", 3, &editor_settings_class_get_project_metadata),
	JS_CFUNC_DEF("set_favorites", 1, &editor_settings_class_set_favorites),
	JS_CFUNC_DEF("get_favorites", 0, &editor_settings_class_get_favorites),
	JS_CFUNC_DEF("set_recent_dirs", 1, &editor_settings_class_set_recent_dirs),
	JS_CFUNC_DEF("get_recent_dirs", 0, &editor_settings_class_get_recent_dirs),
	JS_CFUNC_DEF("set_builtin_action_override", 2, &editor_settings_class_set_builtin_action_override),
	JS_CFUNC_DEF("check_changed_settings_in_group", 1, &editor_settings_class_check_changed_settings_in_group),
	JS_CFUNC_DEF("get_changed_settings", 0, &editor_settings_class_get_changed_settings),
	JS_CFUNC_DEF("mark_setting_changed", 1, &editor_settings_class_mark_setting_changed),
};

static int js_editor_settings_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorSettings::__class_id);
	classes["EditorSettings"] = EditorSettings::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorSettings::__class_id, &editor_settings_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSettings::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_settings_class_proto_funcs, _countof(editor_settings_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_settings_class_constructor, "EditorSettings", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorSettings", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_settings_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_settings_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSettings");
	return m;
}

JSModuleDef *js_init_editor_settings_module(JSContext *ctx) {
	return _js_init_editor_settings_module(ctx, "godot/classes/editor_settings");
}

void register_editor_settings() {
	js_init_editor_settings_module(ctx);
}