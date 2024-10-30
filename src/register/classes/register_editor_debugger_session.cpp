
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_debugger_session.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_debugger_session_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_debugger_session_class_def = {
	"EditorDebuggerSession",
	.finalizer = editor_debugger_session_class_finalizer
};

static JSValue editor_debugger_session_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorDebuggerSession::__class_id);
	if (JS_IsException(obj))
		return obj;
	EditorDebuggerSession *editor_debugger_session_class;
	if (argc == 1) {
		Variant vobj = *argv;
		editor_debugger_session_class = static_cast<EditorDebuggerSession *>(static_cast<Object *>(vobj));
	} else {
		editor_debugger_session_class = memnew(EditorDebuggerSession);
	}
	if (!editor_debugger_session_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_debugger_session_class);	
	return obj;
}
static JSValue editor_debugger_session_class_send_message(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&EditorDebuggerSession::send_message, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_debugger_session_class_toggle_profiler(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&EditorDebuggerSession::toggle_profiler, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_debugger_session_class_is_breaked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorDebuggerSession::is_breaked, ctx, this_val, argc, argv);
};
static JSValue editor_debugger_session_class_is_debuggable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorDebuggerSession::is_debuggable, ctx, this_val, argc, argv);
};
static JSValue editor_debugger_session_class_is_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorDebuggerSession::is_active, ctx, this_val, argc, argv);
};
static JSValue editor_debugger_session_class_add_session_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&EditorDebuggerSession::add_session_tab, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_debugger_session_class_remove_session_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&EditorDebuggerSession::remove_session_tab, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_debugger_session_class_set_breakpoint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&EditorDebuggerSession::set_breakpoint, ctx, this_val, argc, argv);
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

void define_editor_debugger_session_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_debugger_session_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EditorDebuggerSession::__class_id);
	classes["EditorDebuggerSession"] = EditorDebuggerSession::__class_id;
	class_id_list.insert(EditorDebuggerSession::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorDebuggerSession::__class_id, &editor_debugger_session_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorDebuggerSession::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorDebuggerSession::__class_id, proto);

	define_editor_debugger_session_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_debugger_session_class_proto_funcs, _countof(editor_debugger_session_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_debugger_session_class_constructor, "EditorDebuggerSession", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorDebuggerSession", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_debugger_session_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_debugger_session_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorDebuggerSession");
	return m;
}

JSModuleDef *js_init_editor_debugger_session_module(JSContext *ctx) {
	return _js_init_editor_debugger_session_module(ctx, "@godot/classes/editor_debugger_session");
}

void register_editor_debugger_session() {
	EditorDebuggerSession::__init_js_class_id();
	js_init_editor_debugger_session_module(ctx);
}