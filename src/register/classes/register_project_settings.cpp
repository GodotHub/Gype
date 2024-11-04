
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/project_settings.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void project_settings_class_finalizer(JSRuntime *rt, JSValue val) {
	ProjectSettings *project_settings = static_cast<ProjectSettings *>(JS_GetOpaque(val, ProjectSettings::__class_id));
	if (project_settings)
		memdelete(project_settings);
}

static JSClassDef project_settings_class_def = {
	"_ProjectSettings",
	.finalizer = project_settings_class_finalizer
};

static JSValue project_settings_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, ProjectSettings::__class_id);
	if (JS_IsException(obj))
		return obj;
	ProjectSettings *project_settings_class = ProjectSettings::get_singleton();
	if (!project_settings_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, project_settings_class);
	return obj;
}
static JSValue project_settings_class_has_setting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProjectSettings::has_setting, ctx, this_val, argc, argv);
};
static JSValue project_settings_class_set_setting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProjectSettings::set_setting, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue project_settings_class_get_setting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProjectSettings::get_setting, ctx, this_val, argc, argv);
};
static JSValue project_settings_class_get_setting_with_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProjectSettings::get_setting_with_override, ctx, this_val, argc, argv);
};
static JSValue project_settings_class_get_global_class_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ProjectSettings::get_global_class_list, ctx, this_val, argc, argv);
};
static JSValue project_settings_class_set_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProjectSettings::set_order, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue project_settings_class_get_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProjectSettings::get_order, ctx, this_val, argc, argv);
};
static JSValue project_settings_class_set_initial_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProjectSettings::set_initial_value, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue project_settings_class_set_as_basic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProjectSettings::set_as_basic, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue project_settings_class_set_as_internal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProjectSettings::set_as_internal, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue project_settings_class_add_property_info(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProjectSettings::add_property_info, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue project_settings_class_set_restart_if_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProjectSettings::set_restart_if_changed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue project_settings_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProjectSettings::clear, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue project_settings_class_localize_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProjectSettings::localize_path, ctx, this_val, argc, argv);
};
static JSValue project_settings_class_globalize_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProjectSettings::globalize_path, ctx, this_val, argc, argv);
};
static JSValue project_settings_class_save(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ProjectSettings::save, ctx, this_val, argc, argv);
};
static JSValue project_settings_class_load_resource_pack(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ProjectSettings::load_resource_pack, ctx, this_val, argc, argv);
};
static JSValue project_settings_class_save_custom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ProjectSettings::save_custom, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry project_settings_class_proto_funcs[] = {
	JS_CFUNC_DEF("has_setting", 1, &project_settings_class_has_setting),
	JS_CFUNC_DEF("set_setting", 2, &project_settings_class_set_setting),
	JS_CFUNC_DEF("get_setting", 2, &project_settings_class_get_setting),
	JS_CFUNC_DEF("get_setting_with_override", 1, &project_settings_class_get_setting_with_override),
	JS_CFUNC_DEF("get_global_class_list", 0, &project_settings_class_get_global_class_list),
	JS_CFUNC_DEF("set_order", 2, &project_settings_class_set_order),
	JS_CFUNC_DEF("get_order", 1, &project_settings_class_get_order),
	JS_CFUNC_DEF("set_initial_value", 2, &project_settings_class_set_initial_value),
	JS_CFUNC_DEF("set_as_basic", 2, &project_settings_class_set_as_basic),
	JS_CFUNC_DEF("set_as_internal", 2, &project_settings_class_set_as_internal),
	JS_CFUNC_DEF("add_property_info", 1, &project_settings_class_add_property_info),
	JS_CFUNC_DEF("set_restart_if_changed", 2, &project_settings_class_set_restart_if_changed),
	JS_CFUNC_DEF("clear", 1, &project_settings_class_clear),
	JS_CFUNC_DEF("localize_path", 1, &project_settings_class_localize_path),
	JS_CFUNC_DEF("globalize_path", 1, &project_settings_class_globalize_path),
	JS_CFUNC_DEF("save", 0, &project_settings_class_save),
	JS_CFUNC_DEF("load_resource_pack", 3, &project_settings_class_load_resource_pack),
	JS_CFUNC_DEF("save_custom", 1, &project_settings_class_save_custom),
};

static int js_project_settings_class_init(JSContext *ctx) {
	classes["ProjectSettings"] = ProjectSettings::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ProjectSettings::__class_id, &project_settings_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ProjectSettings::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, project_settings_class_proto_funcs, _countof(project_settings_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, project_settings_class_constructor, "_ProjectSettings", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "_ProjectSettings", ctor);
	JS_FreeValue(ctx, global);
	return 0;
}

void register_project_settings() {
	ProjectSettings::__init_js_class_id();
	js_project_settings_class_init(ctx);
}