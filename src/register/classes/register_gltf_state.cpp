
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/animation_player.hpp>
#include <godot_cpp/classes/gltf_accessor.hpp>
#include <godot_cpp/classes/gltf_animation.hpp>
#include <godot_cpp/classes/gltf_buffer_view.hpp>
#include <godot_cpp/classes/gltf_camera.hpp>
#include <godot_cpp/classes/gltf_light.hpp>
#include <godot_cpp/classes/gltf_mesh.hpp>
#include <godot_cpp/classes/gltf_node.hpp>
#include <godot_cpp/classes/gltf_skeleton.hpp>
#include <godot_cpp/classes/gltf_skin.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/gltf_texture.hpp>
#include <godot_cpp/classes/gltf_texture_sampler.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_state_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFState *gltf_state = static_cast<GLTFState *>(JS_GetOpaque(val, GLTFState::__class_id));
	if (gltf_state)
		GLTFState::free(nullptr, gltf_state);
}

static JSClassDef gltf_state_class_def = {
	"GLTFState",
	.finalizer = gltf_state_class_finalizer
};

static JSValue gltf_state_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GLTFState *gltf_state_class;
	JSValue obj = JS_NewObjectClass(ctx, GLTFState::__class_id);
	if (JS_IsException(obj))
		return obj;
	gltf_state_class = memnew(GLTFState);
	if (!gltf_state_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gltf_state_class);
	return obj;
}
static JSValue gltf_state_class_add_used_extension(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::add_used_extension, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_append_data_to_buffers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::append_data_to_buffers, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_get_json(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_json, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_json(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_json, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_major_version(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_major_version, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_major_version(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_major_version, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_minor_version(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_minor_version, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_minor_version(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_minor_version, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_copyright(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFState::get_copyright, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_copyright(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_copyright, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_glb_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_glb_data, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_glb_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_glb_data, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_use_named_skin_binds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_use_named_skin_binds, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_use_named_skin_binds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_use_named_skin_binds, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_nodes, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_nodes, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_buffers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_buffers, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_buffers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_buffers, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_buffer_views(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_buffer_views, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_buffer_views(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_buffer_views, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_accessors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_accessors, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_accessors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_accessors, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_meshes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_meshes, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_meshes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_meshes, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_animation_players_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_animation_players_count, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_get_animation_player(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_animation_player, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_get_materials(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_materials, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_materials(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_materials, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_scene_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_scene_name, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_scene_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_scene_name, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_base_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_base_path, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_base_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_base_path, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_filename(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFState::get_filename, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_filename(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_filename, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_root_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_root_nodes, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_root_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_root_nodes, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_textures(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_textures, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_textures(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_textures, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_texture_samplers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_texture_samplers, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_texture_samplers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_texture_samplers, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_images(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_images, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_images(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_images, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_skins(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_skins, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_skins(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_skins, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_cameras(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_cameras, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_cameras(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_cameras, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_lights(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_lights, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_lights(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_lights, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_unique_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_unique_names, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_unique_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_unique_names, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_unique_animation_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_unique_animation_names, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_unique_animation_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_unique_animation_names, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_skeletons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_skeletons, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_skeletons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_skeletons, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_create_animations(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_create_animations, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_create_animations(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_create_animations, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_import_as_skeleton_bones(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_import_as_skeleton_bones, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_import_as_skeleton_bones(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_import_as_skeleton_bones, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_animations(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_animations, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_animations(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_animations, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_scene_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_scene_node, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_get_node_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_node_index, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_get_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_additional_data, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_additional_data, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_handle_binary_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFState::get_handle_binary_image, GLTFState::__class_id, ctx, this_val, argv);
};
static JSValue gltf_state_class_set_handle_binary_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_handle_binary_image, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_set_bake_fps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFState::set_bake_fps, GLTFState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_state_class_get_bake_fps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFState::get_bake_fps, GLTFState::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry gltf_state_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_used_extension", 2, &gltf_state_class_add_used_extension),
	JS_CFUNC_DEF("append_data_to_buffers", 2, &gltf_state_class_append_data_to_buffers),
	JS_CFUNC_DEF("get_json", 0, &gltf_state_class_get_json),
	JS_CFUNC_DEF("set_json", 1, &gltf_state_class_set_json),
	JS_CFUNC_DEF("get_major_version", 0, &gltf_state_class_get_major_version),
	JS_CFUNC_DEF("set_major_version", 1, &gltf_state_class_set_major_version),
	JS_CFUNC_DEF("get_minor_version", 0, &gltf_state_class_get_minor_version),
	JS_CFUNC_DEF("set_minor_version", 1, &gltf_state_class_set_minor_version),
	JS_CFUNC_DEF("get_copyright", 0, &gltf_state_class_get_copyright),
	JS_CFUNC_DEF("set_copyright", 1, &gltf_state_class_set_copyright),
	JS_CFUNC_DEF("get_glb_data", 0, &gltf_state_class_get_glb_data),
	JS_CFUNC_DEF("set_glb_data", 1, &gltf_state_class_set_glb_data),
	JS_CFUNC_DEF("get_use_named_skin_binds", 0, &gltf_state_class_get_use_named_skin_binds),
	JS_CFUNC_DEF("set_use_named_skin_binds", 1, &gltf_state_class_set_use_named_skin_binds),
	JS_CFUNC_DEF("get_nodes", 0, &gltf_state_class_get_nodes),
	JS_CFUNC_DEF("set_nodes", 1, &gltf_state_class_set_nodes),
	JS_CFUNC_DEF("get_buffers", 0, &gltf_state_class_get_buffers),
	JS_CFUNC_DEF("set_buffers", 1, &gltf_state_class_set_buffers),
	JS_CFUNC_DEF("get_buffer_views", 0, &gltf_state_class_get_buffer_views),
	JS_CFUNC_DEF("set_buffer_views", 1, &gltf_state_class_set_buffer_views),
	JS_CFUNC_DEF("get_accessors", 0, &gltf_state_class_get_accessors),
	JS_CFUNC_DEF("set_accessors", 1, &gltf_state_class_set_accessors),
	JS_CFUNC_DEF("get_meshes", 0, &gltf_state_class_get_meshes),
	JS_CFUNC_DEF("set_meshes", 1, &gltf_state_class_set_meshes),
	JS_CFUNC_DEF("get_animation_players_count", 1, &gltf_state_class_get_animation_players_count),
	JS_CFUNC_DEF("get_animation_player", 1, &gltf_state_class_get_animation_player),
	JS_CFUNC_DEF("get_materials", 0, &gltf_state_class_get_materials),
	JS_CFUNC_DEF("set_materials", 1, &gltf_state_class_set_materials),
	JS_CFUNC_DEF("get_scene_name", 0, &gltf_state_class_get_scene_name),
	JS_CFUNC_DEF("set_scene_name", 1, &gltf_state_class_set_scene_name),
	JS_CFUNC_DEF("get_base_path", 0, &gltf_state_class_get_base_path),
	JS_CFUNC_DEF("set_base_path", 1, &gltf_state_class_set_base_path),
	JS_CFUNC_DEF("get_filename", 0, &gltf_state_class_get_filename),
	JS_CFUNC_DEF("set_filename", 1, &gltf_state_class_set_filename),
	JS_CFUNC_DEF("get_root_nodes", 0, &gltf_state_class_get_root_nodes),
	JS_CFUNC_DEF("set_root_nodes", 1, &gltf_state_class_set_root_nodes),
	JS_CFUNC_DEF("get_textures", 0, &gltf_state_class_get_textures),
	JS_CFUNC_DEF("set_textures", 1, &gltf_state_class_set_textures),
	JS_CFUNC_DEF("get_texture_samplers", 0, &gltf_state_class_get_texture_samplers),
	JS_CFUNC_DEF("set_texture_samplers", 1, &gltf_state_class_set_texture_samplers),
	JS_CFUNC_DEF("get_images", 0, &gltf_state_class_get_images),
	JS_CFUNC_DEF("set_images", 1, &gltf_state_class_set_images),
	JS_CFUNC_DEF("get_skins", 0, &gltf_state_class_get_skins),
	JS_CFUNC_DEF("set_skins", 1, &gltf_state_class_set_skins),
	JS_CFUNC_DEF("get_cameras", 0, &gltf_state_class_get_cameras),
	JS_CFUNC_DEF("set_cameras", 1, &gltf_state_class_set_cameras),
	JS_CFUNC_DEF("get_lights", 0, &gltf_state_class_get_lights),
	JS_CFUNC_DEF("set_lights", 1, &gltf_state_class_set_lights),
	JS_CFUNC_DEF("get_unique_names", 0, &gltf_state_class_get_unique_names),
	JS_CFUNC_DEF("set_unique_names", 1, &gltf_state_class_set_unique_names),
	JS_CFUNC_DEF("get_unique_animation_names", 0, &gltf_state_class_get_unique_animation_names),
	JS_CFUNC_DEF("set_unique_animation_names", 1, &gltf_state_class_set_unique_animation_names),
	JS_CFUNC_DEF("get_skeletons", 0, &gltf_state_class_get_skeletons),
	JS_CFUNC_DEF("set_skeletons", 1, &gltf_state_class_set_skeletons),
	JS_CFUNC_DEF("get_create_animations", 0, &gltf_state_class_get_create_animations),
	JS_CFUNC_DEF("set_create_animations", 1, &gltf_state_class_set_create_animations),
	JS_CFUNC_DEF("get_import_as_skeleton_bones", 0, &gltf_state_class_get_import_as_skeleton_bones),
	JS_CFUNC_DEF("set_import_as_skeleton_bones", 1, &gltf_state_class_set_import_as_skeleton_bones),
	JS_CFUNC_DEF("get_animations", 0, &gltf_state_class_get_animations),
	JS_CFUNC_DEF("set_animations", 1, &gltf_state_class_set_animations),
	JS_CFUNC_DEF("get_scene_node", 1, &gltf_state_class_get_scene_node),
	JS_CFUNC_DEF("get_node_index", 1, &gltf_state_class_get_node_index),
	JS_CFUNC_DEF("get_additional_data", 1, &gltf_state_class_get_additional_data),
	JS_CFUNC_DEF("set_additional_data", 2, &gltf_state_class_set_additional_data),
	JS_CFUNC_DEF("get_handle_binary_image", 0, &gltf_state_class_get_handle_binary_image),
	JS_CFUNC_DEF("set_handle_binary_image", 1, &gltf_state_class_set_handle_binary_image),
	JS_CFUNC_DEF("set_bake_fps", 1, &gltf_state_class_set_bake_fps),
	JS_CFUNC_DEF("get_bake_fps", 0, &gltf_state_class_get_bake_fps),
};

static int js_gltf_state_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GLTFState::__class_id);
	classes["GLTFState"] = GLTFState::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GLTFState::__class_id, &gltf_state_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFState::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_state_class_proto_funcs, _countof(gltf_state_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gltf_state_class_constructor, "GLTFState", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GLTFState", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_state_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_state_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFState");
	return m;
}

JSModuleDef *js_init_gltf_state_module(JSContext *ctx) {
	return _js_init_gltf_state_module(ctx, "godot/classes/gltf_state");
}

void register_gltf_state() {
	js_init_gltf_state_module(ctx);
}