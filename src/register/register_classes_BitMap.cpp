#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/bit_map.hpp>

using namespace godot;

void register_classes_BitMap() {
    qjs::Context::Module &_module = _General;
    _module.class_<BitMap>("BitMap")
           .constructor<>()
		    .fun<static_cast<void(BitMap::*)(const Vector2i &)>(&BitMap::create)>("create")
		    .fun<static_cast<void(BitMap::*)(const Ref<Image> &,double)>(&BitMap::create_from_image_alpha)>("create_from_image_alpha")
		    .fun<static_cast<void(BitMap::*)(const Vector2i &,bool)>(&BitMap::set_bitv)>("set_bitv")
		    .fun<static_cast<void(BitMap::*)(int32_t,int32_t,bool)>(&BitMap::set_bit)>("set_bit")
		    .fun<static_cast<bool(BitMap::*)(const Vector2i &)const>(&BitMap::get_bitv)>("get_bitv")
		    .fun<static_cast<bool(BitMap::*)(int32_t,int32_t)const>(&BitMap::get_bit)>("get_bit")
		    .fun<static_cast<void(BitMap::*)(const Rect2i &,bool)>(&BitMap::set_bit_rect)>("set_bit_rect")
		    .fun<static_cast<int32_t(BitMap::*)()const>(&BitMap::get_true_bit_count)>("get_true_bit_count")
		    .fun<static_cast<Vector2i(BitMap::*)()const>(&BitMap::get_size)>("get_size")
		    .fun<static_cast<void(BitMap::*)(const Vector2i &)>(&BitMap::resize)>("resize")
		    .fun<static_cast<void(BitMap::*)(int32_t,const Rect2i &)>(&BitMap::grow_mask)>("grow_mask")
		    .fun<static_cast<Ref<Image>(BitMap::*)()const>(&BitMap::convert_to_image)>("convert_to_image")
		    .fun<static_cast<TypedArray<PackedVector2Array>(BitMap::*)(const Rect2i &,double)const>(&BitMap::opaque_to_polygons)>("opaque_to_polygons")
;}