
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/undo_redo.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void undo_redo_class_finalizer(JSRuntime *rt, JSValue val) {
	UndoRedo *undo_redo = static_cast<UndoRedo *>(JS_GetOpaque(val, UndoRedo::__class_id));
	if (undo_redo)
		UndoRedo::free(nullptr, undo_redo);
}

static JSClassDef undo_redo_class_def = {
	"UndoRedo",
	.finalizer = undo_redo_class_finalizer
};

static JSValue undo_redo_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	UndoRedo *undo_redo_class;
	JSValue obj = JS_NewObjectClass(ctx, UndoRedo::__class_id);
	if (JS_IsException(obj))
		return obj;
	undo_redo_class = memnew(UndoRedo);
	if (!undo_redo_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, undo_redo_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue undo_redo_class_create_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UndoRedo::create_action, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue undo_redo_class_commit_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UndoRedo::commit_action, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue undo_redo_class_is_committing_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UndoRedo::is_committing_action, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_add_do_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UndoRedo::add_do_method, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue undo_redo_class_add_undo_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UndoRedo::add_undo_method, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue undo_redo_class_add_do_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UndoRedo::add_do_property, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue undo_redo_class_add_undo_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UndoRedo::add_undo_property, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue undo_redo_class_add_do_reference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UndoRedo::add_do_reference, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue undo_redo_class_add_undo_reference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UndoRedo::add_undo_reference, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue undo_redo_class_start_force_keep_in_merge_ends(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UndoRedo::start_force_keep_in_merge_ends, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue undo_redo_class_end_force_keep_in_merge_ends(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UndoRedo::end_force_keep_in_merge_ends, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue undo_redo_class_get_history_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&UndoRedo::get_history_count, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_get_current_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&UndoRedo::get_current_action, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_get_action_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&UndoRedo::get_action_name, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_clear_history(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UndoRedo::clear_history, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue undo_redo_class_get_current_action_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UndoRedo::get_current_action_name, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_has_undo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UndoRedo::has_undo, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_has_redo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UndoRedo::has_redo, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_get_version(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UndoRedo::get_version, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_set_max_steps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UndoRedo::set_max_steps, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue undo_redo_class_get_max_steps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UndoRedo::get_max_steps, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_redo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&UndoRedo::redo, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_undo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&UndoRedo::undo, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry undo_redo_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_action", 3, &undo_redo_class_create_action),
	JS_CFUNC_DEF("commit_action", 1, &undo_redo_class_commit_action),
	JS_CFUNC_DEF("is_committing_action", 0, &undo_redo_class_is_committing_action),
	JS_CFUNC_DEF("add_do_method", 1, &undo_redo_class_add_do_method),
	JS_CFUNC_DEF("add_undo_method", 1, &undo_redo_class_add_undo_method),
	JS_CFUNC_DEF("add_do_property", 3, &undo_redo_class_add_do_property),
	JS_CFUNC_DEF("add_undo_property", 3, &undo_redo_class_add_undo_property),
	JS_CFUNC_DEF("add_do_reference", 1, &undo_redo_class_add_do_reference),
	JS_CFUNC_DEF("add_undo_reference", 1, &undo_redo_class_add_undo_reference),
	JS_CFUNC_DEF("start_force_keep_in_merge_ends", 0, &undo_redo_class_start_force_keep_in_merge_ends),
	JS_CFUNC_DEF("end_force_keep_in_merge_ends", 0, &undo_redo_class_end_force_keep_in_merge_ends),
	JS_CFUNC_DEF("get_history_count", 0, &undo_redo_class_get_history_count),
	JS_CFUNC_DEF("get_current_action", 0, &undo_redo_class_get_current_action),
	JS_CFUNC_DEF("get_action_name", 1, &undo_redo_class_get_action_name),
	JS_CFUNC_DEF("clear_history", 1, &undo_redo_class_clear_history),
	JS_CFUNC_DEF("get_current_action_name", 0, &undo_redo_class_get_current_action_name),
	JS_CFUNC_DEF("has_undo", 0, &undo_redo_class_has_undo),
	JS_CFUNC_DEF("has_redo", 0, &undo_redo_class_has_redo),
	JS_CFUNC_DEF("get_version", 0, &undo_redo_class_get_version),
	JS_CFUNC_DEF("set_max_steps", 1, &undo_redo_class_set_max_steps),
	JS_CFUNC_DEF("get_max_steps", 0, &undo_redo_class_get_max_steps),
	JS_CFUNC_DEF("redo", 0, &undo_redo_class_redo),
	JS_CFUNC_DEF("undo", 0, &undo_redo_class_undo),
};

void define_undo_redo_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "max_steps"),
        JS_NewCFunction(ctx, undo_redo_class_get_max_steps, "get_max_steps", 0),
        JS_NewCFunction(ctx, undo_redo_class_set_max_steps, "set_max_steps", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_undo_redo_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&UndoRedo::__class_id);
	classes["UndoRedo"] = UndoRedo::__class_id;
	class_id_list.insert(UndoRedo::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), UndoRedo::__class_id, &undo_redo_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, UndoRedo::__class_id, proto);
	define_undo_redo_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, undo_redo_class_proto_funcs, _countof(undo_redo_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, undo_redo_class_constructor, "UndoRedo", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "UndoRedo", ctor);

	return 0;
}

JSModuleDef *_js_init_undo_redo_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_undo_redo_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "UndoRedo");
	return m;
}

JSModuleDef *js_init_undo_redo_module(JSContext *ctx) {
	return _js_init_undo_redo_module(ctx, "godot/classes/undo_redo");
}

void register_undo_redo() {
	UndoRedo::__init_js_class_id();
	js_init_undo_redo_module(ctx);
}