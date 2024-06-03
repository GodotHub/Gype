#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gltf_state.hpp>

using namespace godot;

void register_classes_GLTFState() {
    qjs::Context::Module &_module = _General;
    _module.class_<GLTFState>("GLTFState")
           .constructor<>()
           .property<GLTFState::get_json, GLTFState::set_json>("json")
           .property<GLTFState::get_major_version, GLTFState::set_major_version>("major_version")
           .property<GLTFState::get_minor_version, GLTFState::set_minor_version>("minor_version")
           .property<GLTFState::get_copyright, GLTFState::set_copyright>("copyright")
           .property<GLTFState::get_glb_data, GLTFState::set_glb_data>("glb_data")
           .property<GLTFState::get_use_named_skin_binds, GLTFState::set_use_named_skin_binds>("use_named_skin_binds")
           .property<GLTFState::get_nodes, GLTFState::set_nodes>("nodes")
           .property<GLTFState::get_buffers, GLTFState::set_buffers>("buffers")
           .property<GLTFState::get_buffer_views, GLTFState::set_buffer_views>("buffer_views")
           .property<GLTFState::get_accessors, GLTFState::set_accessors>("accessors")
           .property<GLTFState::get_meshes, GLTFState::set_meshes>("meshes")
           .property<GLTFState::get_materials, GLTFState::set_materials>("materials")
           .property<GLTFState::get_scene_name, GLTFState::set_scene_name>("scene_name")
           .property<GLTFState::get_base_path, GLTFState::set_base_path>("base_path")
           .property<GLTFState::get_filename, GLTFState::set_filename>("filename")
           .property<GLTFState::get_root_nodes, GLTFState::set_root_nodes>("root_nodes")
           .property<GLTFState::get_textures, GLTFState::set_textures>("textures")
           .property<GLTFState::get_texture_samplers, GLTFState::set_texture_samplers>("texture_samplers")
           .property<GLTFState::get_images, GLTFState::set_images>("images")
           .property<GLTFState::get_skins, GLTFState::set_skins>("skins")
           .property<GLTFState::get_cameras, GLTFState::set_cameras>("cameras")
           .property<GLTFState::get_lights, GLTFState::set_lights>("lights")
           .property<GLTFState::get_unique_names, GLTFState::set_unique_names>("unique_names")
           .property<GLTFState::get_unique_animation_names, GLTFState::set_unique_animation_names>("unique_animation_names")
           .property<GLTFState::get_skeletons, GLTFState::set_skeletons>("skeletons")
           .property<GLTFState::get_create_animations, GLTFState::set_create_animations>("create_animations")
           .property<GLTFState::get_animations, GLTFState::set_animations>("animations")
           .property<GLTFState::get_handle_binary_image, GLTFState::set_handle_binary_image>("handle_binary_image")
		    .fun<static_cast<void(GLTFState::*)(const String &,bool)>(&GLTFState::add_used_extension)>("add_used_extension")
		    .fun<static_cast<int32_t(GLTFState::*)(int32_t)>(&GLTFState::get_animation_players_count)>("get_animation_players_count")
		    .fun<static_cast<AnimationPlayer *(GLTFState::*)(int32_t)>(&GLTFState::get_animation_player)>("get_animation_player")
		    .fun<static_cast<Node *(GLTFState::*)(int32_t)>(&GLTFState::get_scene_node)>("get_scene_node")
		    .fun<static_cast<int32_t(GLTFState::*)(Node *)>(&GLTFState::get_node_index)>("get_node_index")
		    .fun<static_cast<Variant(GLTFState::*)(const StringName &)>(&GLTFState::get_additional_data)>("get_additional_data")
		    .fun<static_cast<void(GLTFState::*)(const StringName &,const Variant &)>(&GLTFState::set_additional_data)>("set_additional_data")
;}