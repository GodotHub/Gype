
#include <godot_cpp/classes/bit_map.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_BitMap() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<BitMap>("BitMap")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<void (BitMap::*)(const Vector2i &)>(&BitMap::create)>((new std::string("create"))->c_str())
			.fun<static_cast<void (BitMap::*)(const Ref<Image> &, double)>(&BitMap::create_from_image_alpha)>((new std::string("create_from_image_alpha"))->c_str())
			.fun<static_cast<void (BitMap::*)(const Vector2i &, bool)>(&BitMap::set_bitv)>((new std::string("set_bitv"))->c_str())
			.fun<static_cast<void (BitMap::*)(int32_t, int32_t, bool)>(&BitMap::set_bit)>((new std::string("set_bit"))->c_str())
			.fun<static_cast<bool (BitMap::*)(const Vector2i &) const>(&BitMap::get_bitv)>((new std::string("get_bitv"))->c_str())
			.fun<static_cast<bool (BitMap::*)(int32_t, int32_t) const>(&BitMap::get_bit)>((new std::string("get_bit"))->c_str())
			.fun<static_cast<void (BitMap::*)(const Rect2i &, bool)>(&BitMap::set_bit_rect)>((new std::string("set_bit_rect"))->c_str())
			.fun<static_cast<int32_t (BitMap::*)() const>(&BitMap::get_true_bit_count)>((new std::string("get_true_bit_count"))->c_str())
			.fun<static_cast<Vector2i (BitMap::*)() const>(&BitMap::get_size)>((new std::string("get_size"))->c_str())
			.fun<static_cast<void (BitMap::*)(const Vector2i &)>(&BitMap::resize)>((new std::string("resize"))->c_str())
			.fun<static_cast<void (BitMap::*)(int32_t, const Rect2i &)>(&BitMap::grow_mask)>((new std::string("grow_mask"))->c_str())
			.fun<static_cast<Ref<Image> (BitMap::*)() const>(&BitMap::convert_to_image)>((new std::string("convert_to_image"))->c_str())
			.fun<static_cast<TypedArray<PackedVector2Array> (BitMap::*)(const Rect2i &, double) const>(&BitMap::opaque_to_polygons)>((new std::string("opaque_to_polygons"))->c_str());
}