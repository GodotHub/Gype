
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_debugger_plugin.hpp>
#include <godot_cpp/classes/editor_debugger_session.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_debugger_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorDebuggerPlugin *editor_debugger_plugin = static_cast<EditorDebuggerPlugin *>(JS_GetOpaque(val, EditorDebuggerPlugin::__class_id));
	if (editor_debugger_plugin)
		EditorDebuggerPlugin::free(nullptr, editor_debugger_plugin);
}

static JSClassDef editor_debugger_plugin_class_def = {
	"EditorDebuggerPlugin",
	.finalizer = editor_debugger_plugin_class_finalizer
};

static JSValue editor_debugger_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorDebuggerPlugin *editor_debugger_plugin_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorDebuggerPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_debugger_plugin_class = memnew(EditorDebuggerPlugin);
	if (!editor_debugger_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_debugger_plugin_class);
	return obj;
}
static JSValue editor_debugger_plugin_class_get_session(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorDebuggerPlugin::get_session, EditorDebuggerPlugin::__class_id, ctx, this_val, argv);
};
static JSValue editor_debugger_plugin_class_get_sessions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorDebuggerPlugin::get_sessions, EditorDebuggerPlugin::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry editor_debugger_plugin_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_session", 1, &editor_debugger_plugin_class_get_session),
	JS_CFUNC_DEF("get_sessions", 0, &editor_debugger_plugin_class_get_sessions),
};

static int js_editor_debugger_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorDebuggerPlugin::__class_id);
	classes["EditorDebuggerPlugin"] = EditorDebuggerPlugin::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorDebuggerPlugin::__class_id, &editor_debugger_plugin_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorDebuggerPlugin::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_debugger_plugin_class_proto_funcs, _countof(editor_debugger_plugin_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_debugger_plugin_class_constructor, "EditorDebuggerPlugin", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorDebuggerPlugin", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_debugger_plugin_module(JSContext *ctx, const char *module_name) {
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
	js_init_editor_debugger_plugin_module(ctx);
}