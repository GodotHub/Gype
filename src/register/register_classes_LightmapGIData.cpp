#include <godot_cpp/classes/lightmap_gi_data.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/rect2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_LightmapGIData() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<LightmapGIData>("LightmapGIData")
			.constructor<>()
			.property<&LightmapGIData::get_lightmap_textures, &LightmapGIData::set_lightmap_textures>("lightmap_textures")
			.property<&LightmapGIData::is_using_spherical_harmonics, &LightmapGIData::set_uses_spherical_harmonics>("uses_spherical_harmonics")
			.property<&LightmapGIData::get_light_texture, &LightmapGIData::set_light_texture>("light_texture")
			.fun<static_cast<void (LightmapGIData::*)(const NodePath &, const Rect2 &, int32_t, int32_t)>(&LightmapGIData::add_user)>("add_user")
			.fun<static_cast<int32_t (LightmapGIData::*)() const>(&LightmapGIData::get_user_count)>("get_user_count")
			.fun<static_cast<NodePath (LightmapGIData::*)(int32_t) const>(&LightmapGIData::get_user_path)>("get_user_path")
			.fun<static_cast<void (LightmapGIData::*)()>(&LightmapGIData::clear_users)>("clear_users");
}