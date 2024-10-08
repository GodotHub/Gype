
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_feature_profile.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_feature_profile_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorFeatureProfile *editor_feature_profile = static_cast<EditorFeatureProfile *>(JS_GetOpaque(val, EditorFeatureProfile::__class_id));
	if (editor_feature_profile)
		EditorFeatureProfile::free(nullptr, editor_feature_profile);
}

static JSClassDef editor_feature_profile_class_def = {
	"EditorFeatureProfile",
	.finalizer = editor_feature_profile_class_finalizer
};

static JSValue editor_feature_profile_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorFeatureProfile *editor_feature_profile_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorFeatureProfile::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_feature_profile_class = memnew(EditorFeatureProfile);
	if (!editor_feature_profile_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_feature_profile_class);
	return obj;
}
static JSValue editor_feature_profile_class_set_disable_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorFeatureProfile::set_disable_class, EditorFeatureProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_feature_profile_class_is_class_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFeatureProfile::is_class_disabled, EditorFeatureProfile::__class_id, ctx, this_val, argv);
};
static JSValue editor_feature_profile_class_set_disable_class_editor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorFeatureProfile::set_disable_class_editor, EditorFeatureProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_feature_profile_class_is_class_editor_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFeatureProfile::is_class_editor_disabled, EditorFeatureProfile::__class_id, ctx, this_val, argv);
};
static JSValue editor_feature_profile_class_set_disable_class_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorFeatureProfile::set_disable_class_property, EditorFeatureProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_feature_profile_class_is_class_property_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFeatureProfile::is_class_property_disabled, EditorFeatureProfile::__class_id, ctx, this_val, argv);
};
static JSValue editor_feature_profile_class_set_disable_feature(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorFeatureProfile::set_disable_feature, EditorFeatureProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_feature_profile_class_is_feature_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFeatureProfile::is_feature_disabled, EditorFeatureProfile::__class_id, ctx, this_val, argv);
};
static JSValue editor_feature_profile_class_get_feature_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorFeatureProfile::get_feature_name, EditorFeatureProfile::__class_id, ctx, this_val, argv);
};
static JSValue editor_feature_profile_class_save_to_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorFeatureProfile::save_to_file, EditorFeatureProfile::__class_id, ctx, this_val, argv);
};
static JSValue editor_feature_profile_class_load_from_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorFeatureProfile::load_from_file, EditorFeatureProfile::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry editor_feature_profile_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_disable_class", 2, &editor_feature_profile_class_set_disable_class),
	JS_CFUNC_DEF("is_class_disabled", 1, &editor_feature_profile_class_is_class_disabled),
	JS_CFUNC_DEF("set_disable_class_editor", 2, &editor_feature_profile_class_set_disable_class_editor),
	JS_CFUNC_DEF("is_class_editor_disabled", 1, &editor_feature_profile_class_is_class_editor_disabled),
	JS_CFUNC_DEF("set_disable_class_property", 3, &editor_feature_profile_class_set_disable_class_property),
	JS_CFUNC_DEF("is_class_property_disabled", 2, &editor_feature_profile_class_is_class_property_disabled),
	JS_CFUNC_DEF("set_disable_feature", 2, &editor_feature_profile_class_set_disable_feature),
	JS_CFUNC_DEF("is_feature_disabled", 1, &editor_feature_profile_class_is_feature_disabled),
	JS_CFUNC_DEF("get_feature_name", 1, &editor_feature_profile_class_get_feature_name),
	JS_CFUNC_DEF("save_to_file", 1, &editor_feature_profile_class_save_to_file),
	JS_CFUNC_DEF("load_from_file", 1, &editor_feature_profile_class_load_from_file),
};

static int js_editor_feature_profile_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorFeatureProfile::__class_id);
	classes["EditorFeatureProfile"] = EditorFeatureProfile::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorFeatureProfile::__class_id, &editor_feature_profile_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorFeatureProfile::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_feature_profile_class_proto_funcs, _countof(editor_feature_profile_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_feature_profile_class_constructor, "EditorFeatureProfile", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorFeatureProfile", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_feature_profile_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_feature_profile_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorFeatureProfile");
	return m;
}

JSModuleDef *js_init_editor_feature_profile_module(JSContext *ctx) {
	return _js_init_editor_feature_profile_module(ctx, "godot/classes/editor_feature_profile");
}

void register_editor_feature_profile() {
	js_init_editor_feature_profile_module(ctx);
}