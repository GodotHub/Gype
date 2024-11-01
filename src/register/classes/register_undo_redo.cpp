
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/undo_redo.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void undo_redo_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef undo_redo_class_def = {
	"UndoRedo",
	.finalizer = undo_redo_class_finalizer
};

static JSValue undo_redo_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, UndoRedo::__class_id);
	if (JS_IsException(obj))
		return obj;

	UndoRedo *undo_redo_class;
	if (argc == 1) 
		undo_redo_class = static_cast<UndoRedo *>(Variant(*argv).operator Object *());
	else 
		undo_redo_class = memnew(UndoRedo);
	if (!undo_redo_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, undo_redo_class);
	return obj;
}
static JSValue undo_redo_class_create_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&UndoRedo::create_action, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_commit_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&UndoRedo::commit_action, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_is_committing_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UndoRedo::is_committing_action, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_add_do_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&UndoRedo::add_do_method, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_add_undo_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&UndoRedo::add_undo_method, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_add_do_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&UndoRedo::add_do_property, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_add_undo_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&UndoRedo::add_undo_property, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_add_do_reference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&UndoRedo::add_do_reference, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_add_undo_reference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&UndoRedo::add_undo_reference, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_start_force_keep_in_merge_ends(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&UndoRedo::start_force_keep_in_merge_ends, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_end_force_keep_in_merge_ends(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&UndoRedo::end_force_keep_in_merge_ends, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_get_history_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&UndoRedo::get_history_count, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_get_current_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&UndoRedo::get_current_action, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_get_action_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&UndoRedo::get_action_name, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_clear_history(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&UndoRedo::clear_history, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_get_current_action_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UndoRedo::get_current_action_name, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_has_undo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UndoRedo::has_undo, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_has_redo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UndoRedo::has_redo, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_get_version(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UndoRedo::get_version, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_set_max_steps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&UndoRedo::set_max_steps, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_get_max_steps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UndoRedo::get_max_steps, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_redo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&UndoRedo::redo, ctx, this_val, argc, argv);
};
static JSValue undo_redo_class_undo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
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
static JSValue undo_redo_class_get_version_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	UndoRedo *opaque = reinterpret_cast<UndoRedo *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "version_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "version_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "version_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_undo_redo_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_steps"),
        JS_NewCFunction(ctx, undo_redo_class_get_max_steps, "get_max_steps", 0),
        JS_NewCFunction(ctx, undo_redo_class_set_max_steps, "set_max_steps", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "version_changed"),
		JS_NewCFunction(ctx, undo_redo_class_get_version_changed_signal, "get_version_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_undo_redo_enum(JSContext *ctx, JSValue proto) {
	JSValue MergeMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, MergeMode_obj, "MERGE_DISABLE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, MergeMode_obj, "MERGE_ENDS", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, MergeMode_obj, "MERGE_ALL", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "MergeMode", MergeMode_obj);
}

static int js_undo_redo_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["UndoRedo"] = UndoRedo::__class_id;
	class_id_list.insert(UndoRedo::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), UndoRedo::__class_id, &undo_redo_class_def);

	JSValue proto = JS_NewObjectClass(ctx, UndoRedo::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, UndoRedo::__class_id, proto);

	define_undo_redo_property(ctx, proto);
	define_undo_redo_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, undo_redo_class_proto_funcs, _countof(undo_redo_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, undo_redo_class_constructor, "UndoRedo", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "UndoRedo", ctor);

	return 0;
}

JSModuleDef *_js_init_undo_redo_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/godot_object';";
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
	return _js_init_undo_redo_module(ctx, "@godot/classes/undo_redo");
}

void register_undo_redo() {
	UndoRedo::__init_js_class_id();
	js_init_undo_redo_module(ctx);
}