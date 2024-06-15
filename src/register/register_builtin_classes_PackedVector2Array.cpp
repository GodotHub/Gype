
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <stdint.h>

#include "qjspp.hpp"
#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_PackedVector2Array() {
	qjs::Context::Module &_Variant = get_Variant_module();
	_Variant.class_<PackedVector2Array>("PackedVector2Array")
			.constructor<>()
			.constructor<const PackedVector2Array &>("PackedVector2Array_1")
			.constructor<const Array &>("PackedVector2Array_2")

			.fun<static_cast<int64_t (PackedVector2Array::*)() const>(&PackedVector2Array::size)>("size")
			.fun<static_cast<bool (PackedVector2Array::*)() const>(&PackedVector2Array::is_empty)>("is_empty")
			.fun<static_cast<void (PackedVector2Array::*)(int64_t, const Vector2 &)>(&PackedVector2Array::set)>("set")
			.fun<static_cast<bool (PackedVector2Array::*)(const Vector2 &)>(&PackedVector2Array::push_back)>("push_back")
			.fun<static_cast<bool (PackedVector2Array::*)(const Vector2 &)>(&PackedVector2Array::append)>("append")
			.fun<static_cast<void (PackedVector2Array::*)(const PackedVector2Array &)>(&PackedVector2Array::append_array)>("append_array")
			.fun<static_cast<void (PackedVector2Array::*)(int64_t)>(&PackedVector2Array::remove_at)>("remove_at")
			.fun<static_cast<int64_t (PackedVector2Array::*)(int64_t, const Vector2 &)>(&PackedVector2Array::insert)>("insert")
			.fun<static_cast<void (PackedVector2Array::*)(const Vector2 &)>(&PackedVector2Array::fill)>("fill")
			.fun<static_cast<int64_t (PackedVector2Array::*)(int64_t)>(&PackedVector2Array::resize)>("resize")
			.fun<static_cast<void (PackedVector2Array::*)()>(&PackedVector2Array::clear)>("clear")
			.fun<static_cast<bool (PackedVector2Array::*)(const Vector2 &) const>(&PackedVector2Array::has)>("has")
			.fun<static_cast<void (PackedVector2Array::*)()>(&PackedVector2Array::reverse)>("reverse")
			.fun<static_cast<PackedVector2Array (PackedVector2Array::*)(int64_t, int64_t) const>(&PackedVector2Array::slice)>("slice")
			.fun<static_cast<PackedByteArray (PackedVector2Array::*)() const>(&PackedVector2Array::to_byte_array)>("to_byte_array")
			.fun<static_cast<void (PackedVector2Array::*)()>(&PackedVector2Array::sort)>("sort")
			.fun<static_cast<int64_t (PackedVector2Array::*)(const Vector2 &, bool)>(&PackedVector2Array::bsearch)>("bsearch")
			.fun<static_cast<PackedVector2Array (PackedVector2Array::*)()>(&PackedVector2Array::duplicate)>("duplicate")
			.fun<static_cast<int64_t (PackedVector2Array::*)(const Vector2 &, int64_t) const>(&PackedVector2Array::find)>("find")
			.fun<static_cast<int64_t (PackedVector2Array::*)(const Vector2 &, int64_t) const>(&PackedVector2Array::rfind)>("rfind")
			.fun<static_cast<int64_t (PackedVector2Array::*)(const Vector2 &) const>(&PackedVector2Array::count)>("count");
}