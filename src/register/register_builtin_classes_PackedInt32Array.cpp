
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>

#include <godot_cpp/variant/packed_byte_array.hpp>

#include "qjspp.hpp"
#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_PackedInt32Array() {
	qjs::Context::Module &_Variant = get_Variant_module();
	_Variant.class_<PackedInt32Array>("PackedInt32Array")
			.constructor<>()
			.constructor<const PackedInt32Array &>("PackedInt32Array_1")
			.constructor<const Array &>("PackedInt32Array_2")

			.fun<static_cast<int64_t (PackedInt32Array::*)() const>(&PackedInt32Array::size)>("size")
			.fun<static_cast<bool (PackedInt32Array::*)() const>(&PackedInt32Array::is_empty)>("is_empty")
			.fun<static_cast<void (PackedInt32Array::*)(int64_t, int64_t)>(&PackedInt32Array::set)>("set")
			.fun<static_cast<bool (PackedInt32Array::*)(int64_t)>(&PackedInt32Array::push_back)>("push_back")
			.fun<static_cast<bool (PackedInt32Array::*)(int64_t)>(&PackedInt32Array::append)>("append")
			.fun<static_cast<void (PackedInt32Array::*)(const PackedInt32Array &)>(&PackedInt32Array::append_array)>("append_array")
			.fun<static_cast<void (PackedInt32Array::*)(int64_t)>(&PackedInt32Array::remove_at)>("remove_at")
			.fun<static_cast<int64_t (PackedInt32Array::*)(int64_t, int64_t)>(&PackedInt32Array::insert)>("insert")
			.fun<static_cast<void (PackedInt32Array::*)(int64_t)>(&PackedInt32Array::fill)>("fill")
			.fun<static_cast<int64_t (PackedInt32Array::*)(int64_t)>(&PackedInt32Array::resize)>("resize")
			.fun<static_cast<void (PackedInt32Array::*)()>(&PackedInt32Array::clear)>("clear")
			.fun<static_cast<bool (PackedInt32Array::*)(int64_t) const>(&PackedInt32Array::has)>("has")
			.fun<static_cast<void (PackedInt32Array::*)()>(&PackedInt32Array::reverse)>("reverse")
			.fun<static_cast<PackedInt32Array (PackedInt32Array::*)(int64_t, int64_t) const>(&PackedInt32Array::slice)>("slice")
			.fun<static_cast<PackedByteArray (PackedInt32Array::*)() const>(&PackedInt32Array::to_byte_array)>("to_byte_array")
			.fun<static_cast<void (PackedInt32Array::*)()>(&PackedInt32Array::sort)>("sort")
			.fun<static_cast<int64_t (PackedInt32Array::*)(int64_t, bool)>(&PackedInt32Array::bsearch)>("bsearch")
			.fun<static_cast<PackedInt32Array (PackedInt32Array::*)()>(&PackedInt32Array::duplicate)>("duplicate")
			.fun<static_cast<int64_t (PackedInt32Array::*)(int64_t, int64_t) const>(&PackedInt32Array::find)>("find")
			.fun<static_cast<int64_t (PackedInt32Array::*)(int64_t, int64_t) const>(&PackedInt32Array::rfind)>("rfind")
			.fun<static_cast<int64_t (PackedInt32Array::*)(int64_t) const>(&PackedInt32Array::count)>("count");
}