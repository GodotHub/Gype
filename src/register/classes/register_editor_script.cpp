
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_interface.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/editor_script.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_script_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorScript *editor_script = static_cast<EditorScript *>(JS_GetOpaque(val, EditorScript::__class_id));
	if (editor_script)
		EditorScript::free(nullptr, editor_script);
}

static JSClassDef editor_script_class_def = {
	"EditorScript",
	.finalizer = editor_script_class_finalizer
};

static JSValue editor_script_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorScript *editor_script_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorScript::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_script_class = memnew(EditorScript);
	if (!editor_script_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_script_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue editor_script_class_add_root_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorScript::add_root_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_script_class_get_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorScript::get_scene, ctx, this_val, argc, argv);
};
static JSValue editor_script_class_get_editor_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorScript::get_editor_interface, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry editor_script_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_root_node", 1, &editor_script_class_add_root_node),
	JS_CFUNC_DEF("get_scene", 0, &editor_script_class_get_scene),
	JS_CFUNC_DEF("get_editor_interface", 0, &editor_script_class_get_editor_interface),
};

void define_editor_script_property(JSContext *ctx, JSValue obj) {
}

static int js_editor_script_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EditorScript::__class_id);
	classes["EditorScript"] = EditorScript::__class_id;
	class_id_list.insert(EditorScript::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorScript::__class_id, &editor_script_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorScript::__class_id, proto);
	define_editor_script_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_script_class_proto_funcs, _countof(editor_script_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_script_class_constructor, "EditorScript", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorScript", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_script_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_script_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorScript");
	return m;
}

JSModuleDef *js_init_editor_script_module(JSContext *ctx) {
	return _js_init_editor_script_module(ctx, "godot/classes/editor_script");
}

void register_editor_script() {
	EditorScript::__init_js_class_id();
	js_init_editor_script_module(ctx);
}