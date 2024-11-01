
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/editor_settings.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_settings_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_settings_class_def = {
	"EditorSettings",
	.finalizer = editor_settings_class_finalizer
};

static JSValue editor_settings_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorSettings::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorSettings *editor_settings_class;
	if (argc == 1) 
		editor_settings_class = static_cast<EditorSettings *>(Variant(*argv).operator Object *());
	else 
		editor_settings_class = memnew(EditorSettings);
	if (!editor_settings_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_settings_class);
	return obj;
}
static JSValue editor_settings_class_has_setting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorSettings::has_setting, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_set_setting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSettings::set_setting, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_get_setting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorSettings::get_setting, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_erase(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSettings::erase, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_set_initial_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSettings::set_initial_value, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_add_property_info(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSettings::add_property_info, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_set_project_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSettings::set_project_metadata, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_get_project_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorSettings::get_project_metadata, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_set_favorites(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSettings::set_favorites, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_get_favorites(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorSettings::get_favorites, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_set_recent_dirs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSettings::set_recent_dirs, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_get_recent_dirs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorSettings::get_recent_dirs, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_set_builtin_action_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSettings::set_builtin_action_override, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_check_changed_settings_in_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorSettings::check_changed_settings_in_group, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_get_changed_settings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorSettings::get_changed_settings, ctx, this_val, argc, argv);
};
static JSValue editor_settings_class_mark_setting_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSettings::mark_setting_changed, ctx, this_val, argc, argv);
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
static JSValue editor_settings_class_get_settings_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorSettings *opaque = reinterpret_cast<EditorSettings *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "settings_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "settings_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "settings_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_editor_settings_property(JSContext *ctx, JSValue proto) {
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "settings_changed"),
		JS_NewCFunction(ctx, editor_settings_class_get_settings_changed_signal, "get_settings_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_editor_settings_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_settings_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorSettings"] = EditorSettings::__class_id;
	class_id_list.insert(EditorSettings::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorSettings::__class_id, &editor_settings_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorSettings::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSettings::__class_id, proto);

	define_editor_settings_property(ctx, proto);
	define_editor_settings_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_settings_class_proto_funcs, _countof(editor_settings_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_settings_class_constructor, "EditorSettings", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorSettings", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_settings_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_settings_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSettings");
	return m;
}

JSModuleDef *js_init_editor_settings_module(JSContext *ctx) {
	return _js_init_editor_settings_module(ctx, "@godot/classes/editor_settings");
}

void register_editor_settings() {
	EditorSettings::__init_js_class_id();
	js_init_editor_settings_module(ctx);
}