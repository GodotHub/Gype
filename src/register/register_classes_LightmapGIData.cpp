
#include <godot_cpp/classes/lightmap_gi_data.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_LightmapGIData() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<LightmapGIData>("LightmapGIData")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<TypedArray<TextureLayered> (LightmapGIData::*)() const>(&LightmapGIData::get_lightmap_textures), static_cast<void (LightmapGIData::*)(const TypedArray<TextureLayered> &)>(&LightmapGIData::set_lightmap_textures)>((new std::string("lightmap_textures"))->c_str())
			.property<static_cast<bool (LightmapGIData::*)() const>(&LightmapGIData::is_using_spherical_harmonics), static_cast<void (LightmapGIData::*)(bool)>(&LightmapGIData::set_uses_spherical_harmonics)>((new std::string("uses_spherical_harmonics"))->c_str())
			.property<static_cast<Ref<TextureLayered> (LightmapGIData::*)() const>(&LightmapGIData::get_light_texture), static_cast<void (LightmapGIData::*)(const Ref<TextureLayered> &)>(&LightmapGIData::set_light_texture)>((new std::string("light_texture"))->c_str())
			.fun<static_cast<void (LightmapGIData::*)(const NodePath &, const Rect2 &, int32_t, int32_t)>(&LightmapGIData::add_user)>((new std::string("add_user"))->c_str())
			.fun<static_cast<int32_t (LightmapGIData::*)() const>(&LightmapGIData::get_user_count)>((new std::string("get_user_count"))->c_str())
			.fun<static_cast<NodePath (LightmapGIData::*)(int32_t) const>(&LightmapGIData::get_user_path)>((new std::string("get_user_path"))->c_str())
			.fun<static_cast<void (LightmapGIData::*)()>(&LightmapGIData::clear_users)>((new std::string("clear_users"))->c_str());
}