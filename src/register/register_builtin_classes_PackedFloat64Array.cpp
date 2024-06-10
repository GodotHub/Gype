
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_float64_array.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_PackedFloat64Array() {
	get_Variant_module().class_<PackedFloat64Array>("PackedFloat64Array").constructor<>().constructor<const PackedFloat64Array &>("PackedFloat64Array_1").constructor<const Array &>("PackedFloat64Array_2")

			.fun<static_cast<int64_t (PackedFloat64Array::*)() const>(&PackedFloat64Array::size)>("size")
			.fun<static_cast<bool (PackedFloat64Array::*)() const>(&PackedFloat64Array::is_empty)>("is_empty")
			.fun<static_cast<void (PackedFloat64Array::*)(int64_t, double)>(&PackedFloat64Array::set)>("set")
			.fun<static_cast<bool (PackedFloat64Array::*)(double)>(&PackedFloat64Array::push_back)>("push_back")
			.fun<static_cast<bool (PackedFloat64Array::*)(double)>(&PackedFloat64Array::append)>("append")
			.fun<static_cast<void (PackedFloat64Array::*)(const PackedFloat64Array &)>(&PackedFloat64Array::append_array)>("append_array")
			.fun<static_cast<void (PackedFloat64Array::*)(int64_t)>(&PackedFloat64Array::remove_at)>("remove_at")
			.fun<static_cast<int64_t (PackedFloat64Array::*)(int64_t, double)>(&PackedFloat64Array::insert)>("insert")
			.fun<static_cast<void (PackedFloat64Array::*)(double)>(&PackedFloat64Array::fill)>("fill")
			.fun<static_cast<int64_t (PackedFloat64Array::*)(int64_t)>(&PackedFloat64Array::resize)>("resize")
			.fun<static_cast<void (PackedFloat64Array::*)()>(&PackedFloat64Array::clear)>("clear")
			.fun<static_cast<bool (PackedFloat64Array::*)(double) const>(&PackedFloat64Array::has)>("has")
			.fun<static_cast<void (PackedFloat64Array::*)()>(&PackedFloat64Array::reverse)>("reverse")
			.fun<static_cast<PackedFloat64Array (PackedFloat64Array::*)(int64_t, int64_t) const>(&PackedFloat64Array::slice)>("slice")
			.fun<static_cast<PackedByteArray (PackedFloat64Array::*)() const>(&PackedFloat64Array::to_byte_array)>("to_byte_array")
			.fun<static_cast<void (PackedFloat64Array::*)()>(&PackedFloat64Array::sort)>("sort")
			.fun<static_cast<int64_t (PackedFloat64Array::*)(double, bool)>(&PackedFloat64Array::bsearch)>("bsearch")
			.fun<static_cast<PackedFloat64Array (PackedFloat64Array::*)()>(&PackedFloat64Array::duplicate)>("duplicate")
			.fun<static_cast<int64_t (PackedFloat64Array::*)(double, int64_t) const>(&PackedFloat64Array::find)>("find")
			.fun<static_cast<int64_t (PackedFloat64Array::*)(double, int64_t) const>(&PackedFloat64Array::rfind)>("rfind")
			.fun<static_cast<int64_t (PackedFloat64Array::*)(double) const>(&PackedFloat64Array::count)>("count");
}