
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animation_tree.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/classes/animation_mixer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_tree_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationTree *animation_tree = static_cast<AnimationTree *>(JS_GetOpaque(val, AnimationTree::__class_id));
	if (animation_tree)
		AnimationTree::free(nullptr, animation_tree);
}

static JSClassDef animation_tree_class_def = {
	"AnimationTree",
	.finalizer = animation_tree_class_finalizer
};

static JSValue animation_tree_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationTree *animation_tree_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationTree::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_tree_class = memnew(AnimationTree);
	if (!animation_tree_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_tree_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue animation_tree_class_set_tree_root(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationTree::set_tree_root, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_tree_class_get_tree_root(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationTree::get_tree_root, ctx, this_val, argc, argv);
};
static JSValue animation_tree_class_set_advance_expression_base_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationTree::set_advance_expression_base_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_tree_class_get_advance_expression_base_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationTree::get_advance_expression_base_node, ctx, this_val, argc, argv);
};
static JSValue animation_tree_class_set_animation_player(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationTree::set_animation_player, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_tree_class_get_animation_player(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationTree::get_animation_player, ctx, this_val, argc, argv);
};
static JSValue animation_tree_class_set_process_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationTree::set_process_callback, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_tree_class_get_process_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationTree::get_process_callback, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry animation_tree_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_tree_root", 1, &animation_tree_class_set_tree_root),
	JS_CFUNC_DEF("get_tree_root", 0, &animation_tree_class_get_tree_root),
	JS_CFUNC_DEF("set_advance_expression_base_node", 1, &animation_tree_class_set_advance_expression_base_node),
	JS_CFUNC_DEF("get_advance_expression_base_node", 0, &animation_tree_class_get_advance_expression_base_node),
	JS_CFUNC_DEF("set_animation_player", 1, &animation_tree_class_set_animation_player),
	JS_CFUNC_DEF("get_animation_player", 0, &animation_tree_class_get_animation_player),
	JS_CFUNC_DEF("set_process_callback", 1, &animation_tree_class_set_process_callback),
	JS_CFUNC_DEF("get_process_callback", 0, &animation_tree_class_get_process_callback),
};

void define_animation_tree_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tree_root"),
        JS_NewCFunction(ctx, animation_tree_class_get_tree_root, "get_tree_root", 0),
        JS_NewCFunction(ctx, animation_tree_class_set_tree_root, "set_tree_root", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "advance_expression_base_node"),
        JS_NewCFunction(ctx, animation_tree_class_get_advance_expression_base_node, "get_advance_expression_base_node", 0),
        JS_NewCFunction(ctx, animation_tree_class_set_advance_expression_base_node, "set_advance_expression_base_node", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_player"),
        JS_NewCFunction(ctx, animation_tree_class_get_animation_player, "get_animation_player", 0),
        JS_NewCFunction(ctx, animation_tree_class_set_animation_player, "set_animation_player", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_animation_tree_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AnimationTree::__class_id);
	classes["AnimationTree"] = AnimationTree::__class_id;
	class_id_list.insert(AnimationTree::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationTree::__class_id, &animation_tree_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationMixer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationTree::__class_id, proto);
	define_animation_tree_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_tree_class_proto_funcs, _countof(animation_tree_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_tree_class_constructor, "AnimationTree", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationTree", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_tree_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/animation_mixer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_tree_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationTree");
	return m;
}

JSModuleDef *js_init_animation_tree_module(JSContext *ctx) {
	return _js_init_animation_tree_module(ctx, "godot/classes/animation_tree");
}

void register_animation_tree() {
	AnimationTree::__init_js_class_id();
	js_init_animation_tree_module(ctx);
}