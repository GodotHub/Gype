
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_vector4_array.hpp>

#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/vector4.hpp>

#include "qjspp.hpp"
#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_PackedVector4Array() {
	qjs::Context::Module &_Variant = get_Variant_module();
	_Variant.class_<PackedVector4Array>("PackedVector4Array")
			.constructor<>()
			.constructor<const PackedVector4Array &>("PackedVector4Array_1")
			.constructor<const Array &>("PackedVector4Array_2")

			.fun<static_cast<int64_t (PackedVector4Array::*)() const>(&PackedVector4Array::size)>("size")
			.fun<static_cast<bool (PackedVector4Array::*)() const>(&PackedVector4Array::is_empty)>("is_empty")
			.fun<static_cast<void (PackedVector4Array::*)(int64_t, const Vector4 &)>(&PackedVector4Array::set)>("set")
			.fun<static_cast<bool (PackedVector4Array::*)(const Vector4 &)>(&PackedVector4Array::push_back)>("push_back")
			.fun<static_cast<bool (PackedVector4Array::*)(const Vector4 &)>(&PackedVector4Array::append)>("append")
			.fun<static_cast<void (PackedVector4Array::*)(const PackedVector4Array &)>(&PackedVector4Array::append_array)>("append_array")
			.fun<static_cast<void (PackedVector4Array::*)(int64_t)>(&PackedVector4Array::remove_at)>("remove_at")
			.fun<static_cast<int64_t (PackedVector4Array::*)(int64_t, const Vector4 &)>(&PackedVector4Array::insert)>("insert")
			.fun<static_cast<void (PackedVector4Array::*)(const Vector4 &)>(&PackedVector4Array::fill)>("fill")
			.fun<static_cast<int64_t (PackedVector4Array::*)(int64_t)>(&PackedVector4Array::resize)>("resize")
			.fun<static_cast<void (PackedVector4Array::*)()>(&PackedVector4Array::clear)>("clear")
			.fun<static_cast<bool (PackedVector4Array::*)(const Vector4 &) const>(&PackedVector4Array::has)>("has")
			.fun<static_cast<void (PackedVector4Array::*)()>(&PackedVector4Array::reverse)>("reverse")
			.fun<static_cast<PackedVector4Array (PackedVector4Array::*)(int64_t, int64_t) const>(&PackedVector4Array::slice)>("slice")
			.fun<static_cast<PackedByteArray (PackedVector4Array::*)() const>(&PackedVector4Array::to_byte_array)>("to_byte_array")
			.fun<static_cast<void (PackedVector4Array::*)()>(&PackedVector4Array::sort)>("sort")
			.fun<static_cast<int64_t (PackedVector4Array::*)(const Vector4 &, bool)>(&PackedVector4Array::bsearch)>("bsearch")
			.fun<static_cast<PackedVector4Array (PackedVector4Array::*)()>(&PackedVector4Array::duplicate)>("duplicate")
			.fun<static_cast<int64_t (PackedVector4Array::*)(const Vector4 &, int64_t) const>(&PackedVector4Array::find)>("find")
			.fun<static_cast<int64_t (PackedVector4Array::*)(const Vector4 &, int64_t) const>(&PackedVector4Array::rfind)>("rfind")
			.fun<static_cast<int64_t (PackedVector4Array::*)(const Vector4 &) const>(&PackedVector4Array::count)>("count");
}