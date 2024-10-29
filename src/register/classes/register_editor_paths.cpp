
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/editor_paths.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_paths_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_paths_class_def = {
	"EditorPaths",
	.finalizer = editor_paths_class_finalizer
};

static JSValue editor_paths_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorPaths::__class_id);
	if (JS_IsException(obj))
		return obj;
	EditorPaths *editor_paths_class = memnew(EditorPaths);
	if (!editor_paths_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_paths_class);	
	return obj;
}
static JSValue editor_paths_class_get_data_dir(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorPaths::get_data_dir, ctx, this_val, argc, argv);
};
static JSValue editor_paths_class_get_config_dir(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorPaths::get_config_dir, ctx, this_val, argc, argv);
};
static JSValue editor_paths_class_get_cache_dir(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorPaths::get_cache_dir, ctx, this_val, argc, argv);
};
static JSValue editor_paths_class_is_self_contained(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorPaths::is_self_contained, ctx, this_val, argc, argv);
};
static JSValue editor_paths_class_get_self_contained_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorPaths::get_self_contained_file, ctx, this_val, argc, argv);
};
static JSValue editor_paths_class_get_project_settings_dir(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorPaths::get_project_settings_dir, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry editor_paths_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_data_dir", 0, &editor_paths_class_get_data_dir),
	JS_CFUNC_DEF("get_config_dir", 0, &editor_paths_class_get_config_dir),
	JS_CFUNC_DEF("get_cache_dir", 0, &editor_paths_class_get_cache_dir),
	JS_CFUNC_DEF("is_self_contained", 0, &editor_paths_class_is_self_contained),
	JS_CFUNC_DEF("get_self_contained_file", 0, &editor_paths_class_get_self_contained_file),
	JS_CFUNC_DEF("get_project_settings_dir", 0, &editor_paths_class_get_project_settings_dir),
};

void define_editor_paths_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_paths_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EditorPaths::__class_id);
	classes["EditorPaths"] = EditorPaths::__class_id;
	class_id_list.insert(EditorPaths::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorPaths::__class_id, &editor_paths_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorPaths::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorPaths::__class_id, proto);

	define_editor_paths_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_paths_class_proto_funcs, _countof(editor_paths_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_paths_class_constructor, "EditorPaths", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorPaths", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_paths_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_paths_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorPaths");
	return m;
}

JSModuleDef *js_init_editor_paths_module(JSContext *ctx) {
	return _js_init_editor_paths_module(ctx, "@godot/classes/editor_paths");
}

void register_editor_paths() {
	EditorPaths::__init_js_class_id();
	js_init_editor_paths_module(ctx);
}