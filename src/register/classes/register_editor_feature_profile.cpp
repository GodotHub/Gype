
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_feature_profile.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_feature_profile_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorFeatureProfile *editor_feature_profile = static_cast<EditorFeatureProfile *>(JS_GetOpaque(val, EditorFeatureProfile::__class_id));
	if (editor_feature_profile)
		memdelete(editor_feature_profile);
}

static JSClassDef editor_feature_profile_class_def = {
	"EditorFeatureProfile",
	.finalizer = editor_feature_profile_class_finalizer
};

static JSValue editor_feature_profile_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorFeatureProfile::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorFeatureProfile *editor_feature_profile_class;
	if (argc == 1) 
		editor_feature_profile_class = static_cast<EditorFeatureProfile *>(Variant(*argv).operator Object *());
	else 
		editor_feature_profile_class = memnew(EditorFeatureProfile);
	if (!editor_feature_profile_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_feature_profile_class);
	return obj;
}
static JSValue editor_feature_profile_class_set_disable_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorFeatureProfile::set_disable_class, ctx, this_val, argc, argv);
};
static JSValue editor_feature_profile_class_is_class_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorFeatureProfile::is_class_disabled, ctx, this_val, argc, argv);
};
static JSValue editor_feature_profile_class_set_disable_class_editor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorFeatureProfile::set_disable_class_editor, ctx, this_val, argc, argv);
};
static JSValue editor_feature_profile_class_is_class_editor_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorFeatureProfile::is_class_editor_disabled, ctx, this_val, argc, argv);
};
static JSValue editor_feature_profile_class_set_disable_class_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorFeatureProfile::set_disable_class_property, ctx, this_val, argc, argv);
};
static JSValue editor_feature_profile_class_is_class_property_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorFeatureProfile::is_class_property_disabled, ctx, this_val, argc, argv);
};
static JSValue editor_feature_profile_class_set_disable_feature(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorFeatureProfile::set_disable_feature, ctx, this_val, argc, argv);
};
static JSValue editor_feature_profile_class_is_feature_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorFeatureProfile::is_feature_disabled, ctx, this_val, argc, argv);
};
static JSValue editor_feature_profile_class_get_feature_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorFeatureProfile::get_feature_name, ctx, this_val, argc, argv);
};
static JSValue editor_feature_profile_class_save_to_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorFeatureProfile::save_to_file, ctx, this_val, argc, argv);
};
static JSValue editor_feature_profile_class_load_from_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorFeatureProfile::load_from_file, ctx, this_val, argc, argv);
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

static void define_editor_feature_profile_property(JSContext *ctx, JSValue proto) {
	
}

static void define_editor_feature_profile_enum(JSContext *ctx, JSValue proto) {
	JSValue Feature_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Feature_obj, "FEATURE_3D", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Feature_obj, "FEATURE_SCRIPT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Feature_obj, "FEATURE_ASSET_LIB", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Feature_obj, "FEATURE_SCENE_TREE", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Feature_obj, "FEATURE_NODE_DOCK", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, Feature_obj, "FEATURE_FILESYSTEM_DOCK", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, Feature_obj, "FEATURE_IMPORT_DOCK", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, Feature_obj, "FEATURE_HISTORY_DOCK", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, Feature_obj, "FEATURE_MAX", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, proto, "Feature", Feature_obj);
}

static int js_editor_feature_profile_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorFeatureProfile"] = EditorFeatureProfile::__class_id;
	class_id_list.insert(EditorFeatureProfile::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorFeatureProfile::__class_id, &editor_feature_profile_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorFeatureProfile::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorFeatureProfile::__class_id, proto);

	define_editor_feature_profile_property(ctx, proto);
	define_editor_feature_profile_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_feature_profile_class_proto_funcs, _countof(editor_feature_profile_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_feature_profile_class_constructor, "EditorFeatureProfile", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "EditorFeatureProfile", ctor);
	constructors[EditorFeatureProfile::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_editor_feature_profile_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_feature_profile_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorFeatureProfile");
	return m;
}

JSModuleDef *js_init_editor_feature_profile_module(JSContext *ctx) {
	return _js_init_editor_feature_profile_module(ctx, "@godot/classes/editor_feature_profile");
}

void register_editor_feature_profile() {
	EditorFeatureProfile::__init_js_class_id();
	js_init_editor_feature_profile_module(ctx);
}