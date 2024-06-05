
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_PackedVector3Array() {
	_Variant.class_<PackedVector3Array>("PackedVector3Array")
			.constructor<>()
			.constructor<const PackedVector3Array &>("PackedVector3Array_1")
			.constructor<const Array &>("PackedVector3Array_2")

			.fun<static_cast<int64_t (PackedVector3Array::*)() const>(&PackedVector3Array::size)>("size")
			.fun<static_cast<bool (PackedVector3Array::*)() const>(&PackedVector3Array::is_empty)>("is_empty")
			.fun<static_cast<void (PackedVector3Array::*)(int64_t, const Vector3 &)>(&PackedVector3Array::set)>("set")
			.fun<static_cast<bool (PackedVector3Array::*)(const Vector3 &)>(&PackedVector3Array::push_back)>("push_back")
			.fun<static_cast<bool (PackedVector3Array::*)(const Vector3 &)>(&PackedVector3Array::append)>("append")
			.fun<static_cast<void (PackedVector3Array::*)(const PackedVector3Array &)>(&PackedVector3Array::append_array)>("append_array")
			.fun<static_cast<void (PackedVector3Array::*)(int64_t)>(&PackedVector3Array::remove_at)>("remove_at")
			.fun<static_cast<int64_t (PackedVector3Array::*)(int64_t, const Vector3 &)>(&PackedVector3Array::insert)>("insert")
			.fun<static_cast<void (PackedVector3Array::*)(const Vector3 &)>(&PackedVector3Array::fill)>("fill")
			.fun<static_cast<int64_t (PackedVector3Array::*)(int64_t)>(&PackedVector3Array::resize)>("resize")
			.fun<static_cast<void (PackedVector3Array::*)()>(&PackedVector3Array::clear)>("clear")
			.fun<static_cast<bool (PackedVector3Array::*)(const Vector3 &) const>(&PackedVector3Array::has)>("has")
			.fun<static_cast<void (PackedVector3Array::*)()>(&PackedVector3Array::reverse)>("reverse")
			.fun<static_cast<PackedVector3Array (PackedVector3Array::*)(int64_t, int64_t) const>(&PackedVector3Array::slice)>("slice")
			.fun<static_cast<PackedByteArray (PackedVector3Array::*)() const>(&PackedVector3Array::to_byte_array)>("to_byte_array")
			.fun<static_cast<void (PackedVector3Array::*)()>(&PackedVector3Array::sort)>("sort")
			.fun<static_cast<int64_t (PackedVector3Array::*)(const Vector3 &, bool)>(&PackedVector3Array::bsearch)>("bsearch")
			.fun<static_cast<PackedVector3Array (PackedVector3Array::*)()>(&PackedVector3Array::duplicate)>("duplicate")
			.fun<static_cast<int64_t (PackedVector3Array::*)(const Vector3 &, int64_t) const>(&PackedVector3Array::find)>("find")
			.fun<static_cast<int64_t (PackedVector3Array::*)(const Vector3 &, int64_t) const>(&PackedVector3Array::rfind)>("rfind")
			.fun<static_cast<int64_t (PackedVector3Array::*)(const Vector3 &) const>(&PackedVector3Array::count)>("count");
}