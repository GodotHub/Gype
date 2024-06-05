
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_PackedInt64Array() {
	_Variant.class_<PackedInt64Array>("PackedInt64Array")
			.constructor<>()
			.constructor<const PackedInt64Array &>("PackedInt64Array_1")
			.constructor<const Array &>("PackedInt64Array_2")

			.fun<static_cast<int64_t (PackedInt64Array::*)() const>(&PackedInt64Array::size)>("size")
			.fun<static_cast<bool (PackedInt64Array::*)() const>(&PackedInt64Array::is_empty)>("is_empty")
			.fun<static_cast<void (PackedInt64Array::*)(int64_t, int64_t)>(&PackedInt64Array::set)>("set")
			.fun<static_cast<bool (PackedInt64Array::*)(int64_t)>(&PackedInt64Array::push_back)>("push_back")
			.fun<static_cast<bool (PackedInt64Array::*)(int64_t)>(&PackedInt64Array::append)>("append")
			.fun<static_cast<void (PackedInt64Array::*)(const PackedInt64Array &)>(&PackedInt64Array::append_array)>("append_array")
			.fun<static_cast<void (PackedInt64Array::*)(int64_t)>(&PackedInt64Array::remove_at)>("remove_at")
			.fun<static_cast<int64_t (PackedInt64Array::*)(int64_t, int64_t)>(&PackedInt64Array::insert)>("insert")
			.fun<static_cast<void (PackedInt64Array::*)(int64_t)>(&PackedInt64Array::fill)>("fill")
			.fun<static_cast<int64_t (PackedInt64Array::*)(int64_t)>(&PackedInt64Array::resize)>("resize")
			.fun<static_cast<void (PackedInt64Array::*)()>(&PackedInt64Array::clear)>("clear")
			.fun<static_cast<bool (PackedInt64Array::*)(int64_t) const>(&PackedInt64Array::has)>("has")
			.fun<static_cast<void (PackedInt64Array::*)()>(&PackedInt64Array::reverse)>("reverse")
			.fun<static_cast<PackedInt64Array (PackedInt64Array::*)(int64_t, int64_t) const>(&PackedInt64Array::slice)>("slice")
			.fun<static_cast<PackedByteArray (PackedInt64Array::*)() const>(&PackedInt64Array::to_byte_array)>("to_byte_array")
			.fun<static_cast<void (PackedInt64Array::*)()>(&PackedInt64Array::sort)>("sort")
			.fun<static_cast<int64_t (PackedInt64Array::*)(int64_t, bool)>(&PackedInt64Array::bsearch)>("bsearch")
			.fun<static_cast<PackedInt64Array (PackedInt64Array::*)()>(&PackedInt64Array::duplicate)>("duplicate")
			.fun<static_cast<int64_t (PackedInt64Array::*)(int64_t, int64_t) const>(&PackedInt64Array::find)>("find")
			.fun<static_cast<int64_t (PackedInt64Array::*)(int64_t, int64_t) const>(&PackedInt64Array::rfind)>("rfind")
			.fun<static_cast<int64_t (PackedInt64Array::*)(int64_t) const>(&PackedInt64Array::count)>("count");
}