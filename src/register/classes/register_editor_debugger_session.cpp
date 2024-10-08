
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/editor_debugger_session.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_debugger_session_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorDebuggerSession *editor_debugger_session = static_cast<EditorDebuggerSession *>(JS_GetOpaque(val, EditorDebuggerSession::__class_id));
	if (editor_debugger_session)
		EditorDebuggerSession::free(nullptr, editor_debugger_session);
}

static JSClassDef editor_debugger_session_class_def = {
	"EditorDebuggerSession",
	.finalizer = editor_debugger_session_class_finalizer
};

static JSValue editor_debugger_session_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorDebuggerSession *editor_debugger_session_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorDebuggerSession::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_debugger_session_class = memnew(EditorDebuggerSession);
	if (!editor_debugger_session_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_debugger_session_class);
	return obj;
}
static JSValue editor_debugger_session_class_send_message(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorDebuggerSession::send_message, EditorDebuggerSession::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_debugger_session_class_toggle_profiler(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorDebuggerSession::toggle_profiler, EditorDebuggerSession::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_debugger_session_class_is_breaked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorDebuggerSession::is_breaked, EditorDebuggerSession::__class_id, ctx, this_val, argv);
};
static JSValue editor_debugger_session_class_is_debuggable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorDebuggerSession::is_debuggable, EditorDebuggerSession::__class_id, ctx, this_val, argv);
};
static JSValue editor_debugger_session_class_is_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorDebuggerSession::is_active, EditorDebuggerSession::__class_id, ctx, this_val, argv);
};
static JSValue editor_debugger_session_class_add_session_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorDebuggerSession::add_session_tab, EditorDebuggerSession::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_debugger_session_class_remove_session_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorDebuggerSession::remove_session_tab, EditorDebuggerSession::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_debugger_session_class_set_breakpoint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorDebuggerSession::set_breakpoint, EditorDebuggerSession::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry editor_debugger_session_class_proto_funcs[] = {
	JS_CFUNC_DEF("send_message", 2, &editor_debugger_session_class_send_message),
	JS_CFUNC_DEF("toggle_profiler", 3, &editor_debugger_session_class_toggle_profiler),
	JS_CFUNC_DEF("is_breaked", 0, &editor_debugger_session_class_is_breaked),
	JS_CFUNC_DEF("is_debuggable", 0, &editor_debugger_session_class_is_debuggable),
	JS_CFUNC_DEF("is_active", 0, &editor_debugger_session_class_is_active),
	JS_CFUNC_DEF("add_session_tab", 1, &editor_debugger_session_class_add_session_tab),
	JS_CFUNC_DEF("remove_session_tab", 1, &editor_debugger_session_class_remove_session_tab),
	JS_CFUNC_DEF("set_breakpoint", 3, &editor_debugger_session_class_set_breakpoint),
};

static int js_editor_debugger_session_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorDebuggerSession::__class_id);
	classes["EditorDebuggerSession"] = EditorDebuggerSession::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorDebuggerSession::__class_id, &editor_debugger_session_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorDebuggerSession::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_debugger_session_class_proto_funcs, _countof(editor_debugger_session_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_debugger_session_class_constructor, "EditorDebuggerSession", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorDebuggerSession", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_debugger_session_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_debugger_session_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorDebuggerSession");
	return m;
}

JSModuleDef *js_init_editor_debugger_session_module(JSContext *ctx) {
	return _js_init_editor_debugger_session_module(ctx, "godot/classes/editor_debugger_session");
}

void register_editor_debugger_session() {
	js_init_editor_debugger_session_module(ctx);
}