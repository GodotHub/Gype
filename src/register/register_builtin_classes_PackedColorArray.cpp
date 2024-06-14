
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>

#include "qjspp.hpp"
#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_PackedColorArray() {
	qjs::Context::Module &_Variant = get_Variant_module();
	_Variant.class_<PackedColorArray>("PackedColorArray")
			.constructor<>()
			.constructor<const PackedColorArray &>("PackedColorArray_1")
			.constructor<const Array &>("PackedColorArray_2")

			.fun<static_cast<int64_t (PackedColorArray::*)() const>(&PackedColorArray::size)>("size")
			.fun<static_cast<bool (PackedColorArray::*)() const>(&PackedColorArray::is_empty)>("is_empty")
			.fun<static_cast<void (PackedColorArray::*)(int64_t, const Color &)>(&PackedColorArray::set)>("set")
			.fun<static_cast<bool (PackedColorArray::*)(const Color &)>(&PackedColorArray::push_back)>("push_back")
			.fun<static_cast<bool (PackedColorArray::*)(const Color &)>(&PackedColorArray::append)>("append")
			.fun<static_cast<void (PackedColorArray::*)(const PackedColorArray &)>(&PackedColorArray::append_array)>("append_array")
			.fun<static_cast<void (PackedColorArray::*)(int64_t)>(&PackedColorArray::remove_at)>("remove_at")
			.fun<static_cast<int64_t (PackedColorArray::*)(int64_t, const Color &)>(&PackedColorArray::insert)>("insert")
			.fun<static_cast<void (PackedColorArray::*)(const Color &)>(&PackedColorArray::fill)>("fill")
			.fun<static_cast<int64_t (PackedColorArray::*)(int64_t)>(&PackedColorArray::resize)>("resize")
			.fun<static_cast<void (PackedColorArray::*)()>(&PackedColorArray::clear)>("clear")
			.fun<static_cast<bool (PackedColorArray::*)(const Color &) const>(&PackedColorArray::has)>("has")
			.fun<static_cast<void (PackedColorArray::*)()>(&PackedColorArray::reverse)>("reverse")
			.fun<static_cast<PackedColorArray (PackedColorArray::*)(int64_t, int64_t) const>(&PackedColorArray::slice)>("slice")
			.fun<static_cast<PackedByteArray (PackedColorArray::*)() const>(&PackedColorArray::to_byte_array)>("to_byte_array")
			.fun<static_cast<void (PackedColorArray::*)()>(&PackedColorArray::sort)>("sort")
			.fun<static_cast<int64_t (PackedColorArray::*)(const Color &, bool)>(&PackedColorArray::bsearch)>("bsearch")
			.fun<static_cast<PackedColorArray (PackedColorArray::*)()>(&PackedColorArray::duplicate)>("duplicate")
			.fun<static_cast<int64_t (PackedColorArray::*)(const Color &, int64_t) const>(&PackedColorArray::find)>("find")
			.fun<static_cast<int64_t (PackedColorArray::*)(const Color &, int64_t) const>(&PackedColorArray::rfind)>("rfind")
			.fun<static_cast<int64_t (PackedColorArray::*)(const Color &) const>(&PackedColorArray::count)>("count");
}