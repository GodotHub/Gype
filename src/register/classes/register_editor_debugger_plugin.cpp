
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_debugger_session.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/editor_debugger_plugin.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_debugger_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_debugger_plugin_class_def = {
	"EditorDebuggerPlugin",
	.finalizer = editor_debugger_plugin_class_finalizer
};

static JSValue editor_debugger_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorDebuggerPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;
	EditorDebuggerPlugin *editor_debugger_plugin_class = memnew(EditorDebuggerPlugin);
	if (!editor_debugger_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_debugger_plugin_class);	
	return obj;
}
static JSValue editor_debugger_plugin_class_get_session(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorDebuggerPlugin::get_session, ctx, this_val, argc, argv);
};
static JSValue editor_debugger_plugin_class_get_sessions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorDebuggerPlugin::get_sessions, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry editor_debugger_plugin_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_session", 1, &editor_debugger_plugin_class_get_session),
	JS_CFUNC_DEF("get_sessions", 0, &editor_debugger_plugin_class_get_sessions),
};

void define_editor_debugger_plugin_property(JSContext *ctx, JSValue obj) {
}

static int js_editor_debugger_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EditorDebuggerPlugin::__class_id);
	classes["EditorDebuggerPlugin"] = EditorDebuggerPlugin::__class_id;
	class_id_list.insert(EditorDebuggerPlugin::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorDebuggerPlugin::__class_id, &editor_debugger_plugin_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorDebuggerPlugin::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorDebuggerPlugin::__class_id, proto);

	define_editor_debugger_plugin_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_debugger_plugin_class_proto_funcs, _countof(editor_debugger_plugin_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_debugger_plugin_class_constructor, "EditorDebuggerPlugin", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorDebuggerPlugin", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_debugger_plugin_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_debugger_plugin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorDebuggerPlugin");
	return m;
}

JSModuleDef *js_init_editor_debugger_plugin_module(JSContext *ctx) {
	return _js_init_editor_debugger_plugin_module(ctx, "godot/classes/editor_debugger_plugin");
}

void register_editor_debugger_plugin() {
	EditorDebuggerPlugin::__init_js_class_id();
	js_init_editor_debugger_plugin_module(ctx);
}