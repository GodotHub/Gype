
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/scene_tree_timer.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/scene_tree.hpp>
#include <godot_cpp/classes/main_loop.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void scene_tree_class_finalizer(JSRuntime *rt, JSValue val) {
	SceneTree *scene_tree = static_cast<SceneTree *>(JS_GetOpaque(val, SceneTree::__class_id));
	if (scene_tree)
		SceneTree::free(nullptr, scene_tree);
}

static JSClassDef scene_tree_class_def = {
	"SceneTree",
	.finalizer = scene_tree_class_finalizer
};

static JSValue scene_tree_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SceneTree *scene_tree_class;
	JSValue obj = JS_NewObjectClass(ctx, SceneTree::__class_id);
	if (JS_IsException(obj))
		return obj;
	scene_tree_class = memnew(SceneTree);
	if (!scene_tree_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, scene_tree_class);
	return obj;
}
static JSValue scene_tree_class_get_root(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::get_root, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_has_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::has_group, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_is_auto_accept_quit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::is_auto_accept_quit, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_set_auto_accept_quit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::set_auto_accept_quit, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_is_quit_on_go_back(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::is_quit_on_go_back, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_set_quit_on_go_back(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::set_quit_on_go_back, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_set_debug_collisions_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::set_debug_collisions_hint, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_is_debugging_collisions_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::is_debugging_collisions_hint, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_set_debug_paths_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::set_debug_paths_hint, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_is_debugging_paths_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::is_debugging_paths_hint, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_set_debug_navigation_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::set_debug_navigation_hint, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_is_debugging_navigation_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::is_debugging_navigation_hint, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_set_edited_scene_root(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::set_edited_scene_root, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_get_edited_scene_root(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::get_edited_scene_root, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_set_pause(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::set_pause, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_is_paused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::is_paused, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_create_timer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneTree::create_timer, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_create_tween(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneTree::create_tween, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_get_processed_tweens(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneTree::get_processed_tweens, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_get_node_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::get_node_count, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_get_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::get_frame, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_quit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::quit, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_set_physics_interpolation_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::set_physics_interpolation_enabled, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_is_physics_interpolation_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::is_physics_interpolation_enabled, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_queue_delete(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::queue_delete, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_notify_group_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::notify_group_flags, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_set_group_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::set_group_flags, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_notify_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::notify_group, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_set_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::set_group, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_get_nodes_in_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneTree::get_nodes_in_group, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_get_first_node_in_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneTree::get_first_node_in_group, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_get_node_count_in_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::get_node_count_in_group, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_set_current_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::set_current_scene, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_get_current_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::get_current_scene, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_change_scene_to_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneTree::change_scene_to_file, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_change_scene_to_packed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneTree::change_scene_to_packed, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_reload_current_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneTree::reload_current_scene, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_unload_current_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::unload_current_scene, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_set_multiplayer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::set_multiplayer, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_get_multiplayer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::get_multiplayer, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_set_multiplayer_poll_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTree::set_multiplayer_poll_enabled, SceneTree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_class_is_multiplayer_poll_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTree::is_multiplayer_poll_enabled, SceneTree::__class_id, ctx, this_val, argv);
};
static JSValue scene_tree_class_call_group_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_vararg_method_no_ret(&SceneTree::js_call_group_flags, SceneTree::__class_id, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
}
static JSValue scene_tree_class_call_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_vararg_method_no_ret(&SceneTree::js_call_group, SceneTree::__class_id, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
}
static const JSCFunctionListEntry scene_tree_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_root", 0, &scene_tree_class_get_root),
	JS_CFUNC_DEF("has_group", 1, &scene_tree_class_has_group),
	JS_CFUNC_DEF("is_auto_accept_quit", 0, &scene_tree_class_is_auto_accept_quit),
	JS_CFUNC_DEF("set_auto_accept_quit", 1, &scene_tree_class_set_auto_accept_quit),
	JS_CFUNC_DEF("is_quit_on_go_back", 0, &scene_tree_class_is_quit_on_go_back),
	JS_CFUNC_DEF("set_quit_on_go_back", 1, &scene_tree_class_set_quit_on_go_back),
	JS_CFUNC_DEF("set_debug_collisions_hint", 1, &scene_tree_class_set_debug_collisions_hint),
	JS_CFUNC_DEF("is_debugging_collisions_hint", 0, &scene_tree_class_is_debugging_collisions_hint),
	JS_CFUNC_DEF("set_debug_paths_hint", 1, &scene_tree_class_set_debug_paths_hint),
	JS_CFUNC_DEF("is_debugging_paths_hint", 0, &scene_tree_class_is_debugging_paths_hint),
	JS_CFUNC_DEF("set_debug_navigation_hint", 1, &scene_tree_class_set_debug_navigation_hint),
	JS_CFUNC_DEF("is_debugging_navigation_hint", 0, &scene_tree_class_is_debugging_navigation_hint),
	JS_CFUNC_DEF("set_edited_scene_root", 1, &scene_tree_class_set_edited_scene_root),
	JS_CFUNC_DEF("get_edited_scene_root", 0, &scene_tree_class_get_edited_scene_root),
	JS_CFUNC_DEF("set_pause", 1, &scene_tree_class_set_pause),
	JS_CFUNC_DEF("is_paused", 0, &scene_tree_class_is_paused),
	JS_CFUNC_DEF("create_timer", 4, &scene_tree_class_create_timer),
	JS_CFUNC_DEF("create_tween", 0, &scene_tree_class_create_tween),
	JS_CFUNC_DEF("get_processed_tweens", 0, &scene_tree_class_get_processed_tweens),
	JS_CFUNC_DEF("get_node_count", 0, &scene_tree_class_get_node_count),
	JS_CFUNC_DEF("get_frame", 0, &scene_tree_class_get_frame),
	JS_CFUNC_DEF("quit", 1, &scene_tree_class_quit),
	JS_CFUNC_DEF("set_physics_interpolation_enabled", 1, &scene_tree_class_set_physics_interpolation_enabled),
	JS_CFUNC_DEF("is_physics_interpolation_enabled", 0, &scene_tree_class_is_physics_interpolation_enabled),
	JS_CFUNC_DEF("queue_delete", 1, &scene_tree_class_queue_delete),
	JS_CFUNC_DEF("notify_group_flags", 3, &scene_tree_class_notify_group_flags),
	JS_CFUNC_DEF("set_group_flags", 4, &scene_tree_class_set_group_flags),
	JS_CFUNC_DEF("notify_group", 2, &scene_tree_class_notify_group),
	JS_CFUNC_DEF("set_group", 3, &scene_tree_class_set_group),
	JS_CFUNC_DEF("get_nodes_in_group", 1, &scene_tree_class_get_nodes_in_group),
	JS_CFUNC_DEF("get_first_node_in_group", 1, &scene_tree_class_get_first_node_in_group),
	JS_CFUNC_DEF("get_node_count_in_group", 1, &scene_tree_class_get_node_count_in_group),
	JS_CFUNC_DEF("set_current_scene", 1, &scene_tree_class_set_current_scene),
	JS_CFUNC_DEF("get_current_scene", 0, &scene_tree_class_get_current_scene),
	JS_CFUNC_DEF("change_scene_to_file", 1, &scene_tree_class_change_scene_to_file),
	JS_CFUNC_DEF("change_scene_to_packed", 1, &scene_tree_class_change_scene_to_packed),
	JS_CFUNC_DEF("reload_current_scene", 0, &scene_tree_class_reload_current_scene),
	JS_CFUNC_DEF("unload_current_scene", 0, &scene_tree_class_unload_current_scene),
	JS_CFUNC_DEF("set_multiplayer", 2, &scene_tree_class_set_multiplayer),
	JS_CFUNC_DEF("get_multiplayer", 1, &scene_tree_class_get_multiplayer),
	JS_CFUNC_DEF("set_multiplayer_poll_enabled", 1, &scene_tree_class_set_multiplayer_poll_enabled),
	JS_CFUNC_DEF("is_multiplayer_poll_enabled", 0, &scene_tree_class_is_multiplayer_poll_enabled),
	JS_CFUNC_DEF("call_group_flags", 3, &scene_tree_class_call_group_flags),
	JS_CFUNC_DEF("call_group", 2, &scene_tree_class_call_group),
};

static int js_scene_tree_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SceneTree::__class_id);
	classes["SceneTree"] = SceneTree::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SceneTree::__class_id, &scene_tree_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, MainLoop::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SceneTree::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, scene_tree_class_proto_funcs, _countof(scene_tree_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, scene_tree_class_constructor, "SceneTree", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SceneTree", ctor);

	return 0;
}

JSModuleDef *_js_init_scene_tree_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_scene_tree_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SceneTree");
	return m;
}

JSModuleDef *js_init_scene_tree_module(JSContext *ctx) {
	return _js_init_scene_tree_module(ctx, "godot/classes/scene_tree");
}

void register_scene_tree() {
	js_init_scene_tree_module(ctx);
}