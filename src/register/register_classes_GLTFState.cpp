#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
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
#include <godot_cpp/classes/gltf_texture.hpp>
#include <godot_cpp/classes/gltf_texture_sampler.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GLTFState() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GLTFState>("GLTFState")
            .constructor<>()
            .base<Resource>()
            .static_fun<&GLTFState::HANDLE_BINARY_DISCARD_TEXTURES>("HANDLE_BINARY_DISCARD_TEXTURES")
            .static_fun<&GLTFState::HANDLE_BINARY_EXTRACT_TEXTURES>("HANDLE_BINARY_EXTRACT_TEXTURES")
            .static_fun<&GLTFState::HANDLE_BINARY_EMBED_AS_BASISU>("HANDLE_BINARY_EMBED_AS_BASISU")
            .static_fun<&GLTFState::HANDLE_BINARY_EMBED_AS_UNCOMPRESSED>("HANDLE_BINARY_EMBED_AS_UNCOMPRESSED")
            .property<static_cast<Dictionary(GLTFState::*)()>(&GLTFState::get_json),static_cast<void(GLTFState::*)(const Dictionary &)>(&GLTFState::set_json)>("json")
            .property<static_cast<int32_t(GLTFState::*)()>(&GLTFState::get_major_version),static_cast<void(GLTFState::*)(int32_t)>(&GLTFState::set_major_version)>("major_version")
            .property<static_cast<int32_t(GLTFState::*)()>(&GLTFState::get_minor_version),static_cast<void(GLTFState::*)(int32_t)>(&GLTFState::set_minor_version)>("minor_version")
            .property<static_cast<String(GLTFState::*)()const>(&GLTFState::get_copyright),static_cast<void(GLTFState::*)(const String &)>(&GLTFState::set_copyright)>("copyright")
            .property<static_cast<PackedByteArray(GLTFState::*)()>(&GLTFState::get_glb_data),static_cast<void(GLTFState::*)(const PackedByteArray &)>(&GLTFState::set_glb_data)>("glb_data")
            .property<static_cast<bool(GLTFState::*)()>(&GLTFState::get_use_named_skin_binds),static_cast<void(GLTFState::*)(bool)>(&GLTFState::set_use_named_skin_binds)>("use_named_skin_binds")
            .property<static_cast<TypedArray<GLTFNode>(GLTFState::*)()>(&GLTFState::get_nodes),static_cast<void(GLTFState::*)(const TypedArray<GLTFNode> &)>(&GLTFState::set_nodes)>("nodes")
            .property<static_cast<TypedArray<PackedByteArray>(GLTFState::*)()>(&GLTFState::get_buffers),static_cast<void(GLTFState::*)(const TypedArray<PackedByteArray> &)>(&GLTFState::set_buffers)>("buffers")
            .property<static_cast<TypedArray<GLTFBufferView>(GLTFState::*)()>(&GLTFState::get_buffer_views),static_cast<void(GLTFState::*)(const TypedArray<GLTFBufferView> &)>(&GLTFState::set_buffer_views)>("buffer_views")
            .property<static_cast<TypedArray<GLTFAccessor>(GLTFState::*)()>(&GLTFState::get_accessors),static_cast<void(GLTFState::*)(const TypedArray<GLTFAccessor> &)>(&GLTFState::set_accessors)>("accessors")
            .property<static_cast<TypedArray<GLTFMesh>(GLTFState::*)()>(&GLTFState::get_meshes),static_cast<void(GLTFState::*)(const TypedArray<GLTFMesh> &)>(&GLTFState::set_meshes)>("meshes")
            .property<static_cast<TypedArray<Material>(GLTFState::*)()>(&GLTFState::get_materials),static_cast<void(GLTFState::*)(const TypedArray<Material> &)>(&GLTFState::set_materials)>("materials")
            .property<static_cast<String(GLTFState::*)()>(&GLTFState::get_scene_name),static_cast<void(GLTFState::*)(const String &)>(&GLTFState::set_scene_name)>("scene_name")
            .property<static_cast<String(GLTFState::*)()>(&GLTFState::get_base_path),static_cast<void(GLTFState::*)(const String &)>(&GLTFState::set_base_path)>("base_path")
            .property<static_cast<String(GLTFState::*)()const>(&GLTFState::get_filename),static_cast<void(GLTFState::*)(const String &)>(&GLTFState::set_filename)>("filename")
            .property<static_cast<PackedInt32Array(GLTFState::*)()>(&GLTFState::get_root_nodes),static_cast<void(GLTFState::*)(const PackedInt32Array &)>(&GLTFState::set_root_nodes)>("root_nodes")
            .property<static_cast<TypedArray<GLTFTexture>(GLTFState::*)()>(&GLTFState::get_textures),static_cast<void(GLTFState::*)(const TypedArray<GLTFTexture> &)>(&GLTFState::set_textures)>("textures")
            .property<static_cast<TypedArray<GLTFTextureSampler>(GLTFState::*)()>(&GLTFState::get_texture_samplers),static_cast<void(GLTFState::*)(const TypedArray<GLTFTextureSampler> &)>(&GLTFState::set_texture_samplers)>("texture_samplers")
            .property<static_cast<TypedArray<Texture2D>(GLTFState::*)()>(&GLTFState::get_images),static_cast<void(GLTFState::*)(const TypedArray<Texture2D> &)>(&GLTFState::set_images)>("images")
            .property<static_cast<TypedArray<GLTFSkin>(GLTFState::*)()>(&GLTFState::get_skins),static_cast<void(GLTFState::*)(const TypedArray<GLTFSkin> &)>(&GLTFState::set_skins)>("skins")
            .property<static_cast<TypedArray<GLTFCamera>(GLTFState::*)()>(&GLTFState::get_cameras),static_cast<void(GLTFState::*)(const TypedArray<GLTFCamera> &)>(&GLTFState::set_cameras)>("cameras")
            .property<static_cast<TypedArray<GLTFLight>(GLTFState::*)()>(&GLTFState::get_lights),static_cast<void(GLTFState::*)(const TypedArray<GLTFLight> &)>(&GLTFState::set_lights)>("lights")
            .property<static_cast<TypedArray<String>(GLTFState::*)()>(&GLTFState::get_unique_names),static_cast<void(GLTFState::*)(const TypedArray<String> &)>(&GLTFState::set_unique_names)>("unique_names")
            .property<static_cast<TypedArray<String>(GLTFState::*)()>(&GLTFState::get_unique_animation_names),static_cast<void(GLTFState::*)(const TypedArray<String> &)>(&GLTFState::set_unique_animation_names)>("unique_animation_names")
            .property<static_cast<TypedArray<GLTFSkeleton>(GLTFState::*)()>(&GLTFState::get_skeletons),static_cast<void(GLTFState::*)(const TypedArray<GLTFSkeleton> &)>(&GLTFState::set_skeletons)>("skeletons")
            .property<static_cast<bool(GLTFState::*)()>(&GLTFState::get_create_animations),static_cast<void(GLTFState::*)(bool)>(&GLTFState::set_create_animations)>("create_animations")
            .property<static_cast<bool(GLTFState::*)()>(&GLTFState::get_import_as_skeleton_bones),static_cast<void(GLTFState::*)(bool)>(&GLTFState::set_import_as_skeleton_bones)>("import_as_skeleton_bones")
            .property<static_cast<TypedArray<GLTFAnimation>(GLTFState::*)()>(&GLTFState::get_animations),static_cast<void(GLTFState::*)(const TypedArray<GLTFAnimation> &)>(&GLTFState::set_animations)>("animations")
            .property<static_cast<int32_t(GLTFState::*)()>(&GLTFState::get_handle_binary_image),static_cast<void(GLTFState::*)(int32_t)>(&GLTFState::set_handle_binary_image)>("handle_binary_image")
            .property<static_cast<double(GLTFState::*)()const>(&GLTFState::get_bake_fps),static_cast<void(GLTFState::*)(double)>(&GLTFState::set_bake_fps)>("bake_fps")
            .fun<static_cast<void(GLTFState::*)(const String &,bool)>(&GLTFState::add_used_extension)>("add_used_extension")
            .fun<static_cast<int32_t(GLTFState::*)(const PackedByteArray &,bool)>(&GLTFState::append_data_to_buffers)>("append_data_to_buffers")
            .fun<static_cast<int32_t(GLTFState::*)(int32_t)>(&GLTFState::get_animation_players_count)>("get_animation_players_count")
            .fun<static_cast<AnimationPlayer *(GLTFState::*)(int32_t)>(&GLTFState::get_animation_player)>("get_animation_player")
            .fun<static_cast<Node *(GLTFState::*)(int32_t)>(&GLTFState::get_scene_node)>("get_scene_node")
            .fun<static_cast<int32_t(GLTFState::*)(Node *)>(&GLTFState::get_node_index)>("get_node_index")
            .fun<static_cast<Variant(GLTFState::*)(const StringName &)>(&GLTFState::get_additional_data)>("get_additional_data")
            .fun<static_cast<void(GLTFState::*)(const StringName &,const Variant &)>(&GLTFState::set_additional_data)>("set_additional_data")
;}