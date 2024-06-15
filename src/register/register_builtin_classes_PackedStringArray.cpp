
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "qjspp.hpp"
#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_PackedStringArray() {
	qjs::Context::Module &_Variant = get_Variant_module();
	_Variant.class_<PackedStringArray>("PackedStringArray")
			.constructor<>()
			.constructor<const PackedStringArray &>("PackedStringArray_1")
			.constructor<const Array &>("PackedStringArray_2")

			.fun<static_cast<int64_t (PackedStringArray::*)() const>(&PackedStringArray::size)>("size")
			.fun<static_cast<bool (PackedStringArray::*)() const>(&PackedStringArray::is_empty)>("is_empty")
			.fun<static_cast<void (PackedStringArray::*)(int64_t, const String &)>(&PackedStringArray::set)>("set")
			.fun<static_cast<bool (PackedStringArray::*)(const String &)>(&PackedStringArray::push_back)>("push_back")
			.fun<static_cast<bool (PackedStringArray::*)(const String &)>(&PackedStringArray::append)>("append")
			.fun<static_cast<void (PackedStringArray::*)(const PackedStringArray &)>(&PackedStringArray::append_array)>("append_array")
			.fun<static_cast<void (PackedStringArray::*)(int64_t)>(&PackedStringArray::remove_at)>("remove_at")
			.fun<static_cast<int64_t (PackedStringArray::*)(int64_t, const String &)>(&PackedStringArray::insert)>("insert")
			.fun<static_cast<void (PackedStringArray::*)(const String &)>(&PackedStringArray::fill)>("fill")
			.fun<static_cast<int64_t (PackedStringArray::*)(int64_t)>(&PackedStringArray::resize)>("resize")
			.fun<static_cast<void (PackedStringArray::*)()>(&PackedStringArray::clear)>("clear")
			.fun<static_cast<bool (PackedStringArray::*)(const String &) const>(&PackedStringArray::has)>("has")
			.fun<static_cast<void (PackedStringArray::*)()>(&PackedStringArray::reverse)>("reverse")
			.fun<static_cast<PackedStringArray (PackedStringArray::*)(int64_t, int64_t) const>(&PackedStringArray::slice)>("slice")
			.fun<static_cast<PackedByteArray (PackedStringArray::*)() const>(&PackedStringArray::to_byte_array)>("to_byte_array")
			.fun<static_cast<void (PackedStringArray::*)()>(&PackedStringArray::sort)>("sort")
			.fun<static_cast<int64_t (PackedStringArray::*)(const String &, bool)>(&PackedStringArray::bsearch)>("bsearch")
			.fun<static_cast<PackedStringArray (PackedStringArray::*)()>(&PackedStringArray::duplicate)>("duplicate")
			.fun<static_cast<int64_t (PackedStringArray::*)(const String &, int64_t) const>(&PackedStringArray::find)>("find")
			.fun<static_cast<int64_t (PackedStringArray::*)(const String &, int64_t) const>(&PackedStringArray::rfind)>("rfind")
			.fun<static_cast<int64_t (PackedStringArray::*)(const String &) const>(&PackedStringArray::count)>("count");
}