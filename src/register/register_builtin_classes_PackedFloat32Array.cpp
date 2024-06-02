#include "register/register_builtin_classes.h"
#include "register/utils.h"

using namespace godot;

void register_builtin_classes_PackedFloat32Array() {
	_Variant.class_<PackedFloat32Array>("PackedFloat32Array")
            .constructor<>()
            .constructor<const PackedFloat32Array &>("PackedFloat32Array_1")
            .constructor<const Array &>("PackedFloat32Array_2")

			.fun<static_cast<int64_t(PackedFloat32Array::*)()const>(&PackedFloat32Array::size)>("size")
			.fun<static_cast<bool(PackedFloat32Array::*)()const>(&PackedFloat32Array::is_empty)>("is_empty")
			.fun<static_cast<void(PackedFloat32Array::*)(int64_t,double)>(&PackedFloat32Array::set)>("set")
			.fun<static_cast<bool(PackedFloat32Array::*)(double)>(&PackedFloat32Array::push_back)>("push_back")
			.fun<static_cast<bool(PackedFloat32Array::*)(double)>(&PackedFloat32Array::append)>("append")
			.fun<static_cast<void(PackedFloat32Array::*)(const PackedFloat32Array &)>(&PackedFloat32Array::append_array)>("append_array")
			.fun<static_cast<void(PackedFloat32Array::*)(int64_t)>(&PackedFloat32Array::remove_at)>("remove_at")
			.fun<static_cast<int64_t(PackedFloat32Array::*)(int64_t,double)>(&PackedFloat32Array::insert)>("insert")
			.fun<static_cast<void(PackedFloat32Array::*)(double)>(&PackedFloat32Array::fill)>("fill")
			.fun<static_cast<int64_t(PackedFloat32Array::*)(int64_t)>(&PackedFloat32Array::resize)>("resize")
			.fun<static_cast<void(PackedFloat32Array::*)()>(&PackedFloat32Array::clear)>("clear")
			.fun<static_cast<bool(PackedFloat32Array::*)(double)const>(&PackedFloat32Array::has)>("has")
			.fun<static_cast<void(PackedFloat32Array::*)()>(&PackedFloat32Array::reverse)>("reverse")
			.fun<static_cast<PackedFloat32Array(PackedFloat32Array::*)(int64_t,int64_t)const>(&PackedFloat32Array::slice)>("slice")
			.fun<static_cast<PackedByteArray(PackedFloat32Array::*)()const>(&PackedFloat32Array::to_byte_array)>("to_byte_array")
			.fun<static_cast<void(PackedFloat32Array::*)()>(&PackedFloat32Array::sort)>("sort")
			.fun<static_cast<int64_t(PackedFloat32Array::*)(double,bool)>(&PackedFloat32Array::bsearch)>("bsearch")
			.fun<static_cast<PackedFloat32Array(PackedFloat32Array::*)()>(&PackedFloat32Array::duplicate)>("duplicate")
			.fun<static_cast<int64_t(PackedFloat32Array::*)(double,int64_t)const>(&PackedFloat32Array::find)>("find")
			.fun<static_cast<int64_t(PackedFloat32Array::*)(double,int64_t)const>(&PackedFloat32Array::rfind)>("rfind")
			.fun<static_cast<int64_t(PackedFloat32Array::*)(double)const>(&PackedFloat32Array::count)>("count");
}