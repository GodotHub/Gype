
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_float64_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_PackedByteArray() {
	get_Variant_module().class_<PackedByteArray>("PackedByteArray").constructor<>().constructor<const PackedByteArray &>("PackedByteArray_1").constructor<const Array &>("PackedByteArray_2")

			.fun<static_cast<int64_t (PackedByteArray::*)() const>(&PackedByteArray::size)>("size")
			.fun<static_cast<bool (PackedByteArray::*)() const>(&PackedByteArray::is_empty)>("is_empty")
			.fun<static_cast<void (PackedByteArray::*)(int64_t, int64_t)>(&PackedByteArray::set)>("set")
			.fun<static_cast<bool (PackedByteArray::*)(int64_t)>(&PackedByteArray::push_back)>("push_back")
			.fun<static_cast<bool (PackedByteArray::*)(int64_t)>(&PackedByteArray::append)>("append")
			.fun<static_cast<void (PackedByteArray::*)(const PackedByteArray &)>(&PackedByteArray::append_array)>("append_array")
			.fun<static_cast<void (PackedByteArray::*)(int64_t)>(&PackedByteArray::remove_at)>("remove_at")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t, int64_t)>(&PackedByteArray::insert)>("insert")
			.fun<static_cast<void (PackedByteArray::*)(int64_t)>(&PackedByteArray::fill)>("fill")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t)>(&PackedByteArray::resize)>("resize")
			.fun<static_cast<void (PackedByteArray::*)()>(&PackedByteArray::clear)>("clear")
			.fun<static_cast<bool (PackedByteArray::*)(int64_t) const>(&PackedByteArray::has)>("has")
			.fun<static_cast<void (PackedByteArray::*)()>(&PackedByteArray::reverse)>("reverse")
			.fun<static_cast<PackedByteArray (PackedByteArray::*)(int64_t, int64_t) const>(&PackedByteArray::slice)>("slice")
			.fun<static_cast<void (PackedByteArray::*)()>(&PackedByteArray::sort)>("sort")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t, bool)>(&PackedByteArray::bsearch)>("bsearch")
			.fun<static_cast<PackedByteArray (PackedByteArray::*)()>(&PackedByteArray::duplicate)>("duplicate")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t, int64_t) const>(&PackedByteArray::find)>("find")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t, int64_t) const>(&PackedByteArray::rfind)>("rfind")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t) const>(&PackedByteArray::count)>("count")
			.fun<static_cast<String (PackedByteArray::*)() const>(&PackedByteArray::get_string_from_ascii)>("get_string_from_ascii")
			.fun<static_cast<String (PackedByteArray::*)() const>(&PackedByteArray::get_string_from_utf8)>("get_string_from_utf8")
			.fun<static_cast<String (PackedByteArray::*)() const>(&PackedByteArray::get_string_from_utf16)>("get_string_from_utf16")
			.fun<static_cast<String (PackedByteArray::*)() const>(&PackedByteArray::get_string_from_utf32)>("get_string_from_utf32")
			.fun<static_cast<String (PackedByteArray::*)() const>(&PackedByteArray::get_string_from_wchar)>("get_string_from_wchar")
			.fun<static_cast<String (PackedByteArray::*)() const>(&PackedByteArray::hex_encode)>("hex_encode")
			.fun<static_cast<PackedByteArray (PackedByteArray::*)(int64_t) const>(&PackedByteArray::compress)>("compress")
			.fun<static_cast<PackedByteArray (PackedByteArray::*)(int64_t, int64_t) const>(&PackedByteArray::decompress)>("decompress")
			.fun<static_cast<PackedByteArray (PackedByteArray::*)(int64_t, int64_t) const>(&PackedByteArray::decompress_dynamic)>("decompress_dynamic")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t) const>(&PackedByteArray::decode_u8)>("decode_u8")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t) const>(&PackedByteArray::decode_s8)>("decode_s8")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t) const>(&PackedByteArray::decode_u16)>("decode_u16")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t) const>(&PackedByteArray::decode_s16)>("decode_s16")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t) const>(&PackedByteArray::decode_u32)>("decode_u32")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t) const>(&PackedByteArray::decode_s32)>("decode_s32")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t) const>(&PackedByteArray::decode_u64)>("decode_u64")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t) const>(&PackedByteArray::decode_s64)>("decode_s64")
			.fun<static_cast<double (PackedByteArray::*)(int64_t) const>(&PackedByteArray::decode_half)>("decode_half")
			.fun<static_cast<double (PackedByteArray::*)(int64_t) const>(&PackedByteArray::decode_float)>("decode_float")
			.fun<static_cast<double (PackedByteArray::*)(int64_t) const>(&PackedByteArray::decode_double)>("decode_double")
			.fun<static_cast<bool (PackedByteArray::*)(int64_t, bool) const>(&PackedByteArray::has_encoded_var)>("has_encoded_var")
			.fun<static_cast<Variant (PackedByteArray::*)(int64_t, bool) const>(&PackedByteArray::decode_var)>("decode_var")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t, bool) const>(&PackedByteArray::decode_var_size)>("decode_var_size")
			.fun<static_cast<PackedInt32Array (PackedByteArray::*)() const>(&PackedByteArray::to_int32_array)>("to_int32_array")
			.fun<static_cast<PackedInt64Array (PackedByteArray::*)() const>(&PackedByteArray::to_int64_array)>("to_int64_array")
			.fun<static_cast<PackedFloat32Array (PackedByteArray::*)() const>(&PackedByteArray::to_float32_array)>("to_float32_array")
			.fun<static_cast<PackedFloat64Array (PackedByteArray::*)() const>(&PackedByteArray::to_float64_array)>("to_float64_array")
			.fun<static_cast<void (PackedByteArray::*)(int64_t, int64_t)>(&PackedByteArray::encode_u8)>("encode_u8")
			.fun<static_cast<void (PackedByteArray::*)(int64_t, int64_t)>(&PackedByteArray::encode_s8)>("encode_s8")
			.fun<static_cast<void (PackedByteArray::*)(int64_t, int64_t)>(&PackedByteArray::encode_u16)>("encode_u16")
			.fun<static_cast<void (PackedByteArray::*)(int64_t, int64_t)>(&PackedByteArray::encode_s16)>("encode_s16")
			.fun<static_cast<void (PackedByteArray::*)(int64_t, int64_t)>(&PackedByteArray::encode_u32)>("encode_u32")
			.fun<static_cast<void (PackedByteArray::*)(int64_t, int64_t)>(&PackedByteArray::encode_s32)>("encode_s32")
			.fun<static_cast<void (PackedByteArray::*)(int64_t, int64_t)>(&PackedByteArray::encode_u64)>("encode_u64")
			.fun<static_cast<void (PackedByteArray::*)(int64_t, int64_t)>(&PackedByteArray::encode_s64)>("encode_s64")
			.fun<static_cast<void (PackedByteArray::*)(int64_t, double)>(&PackedByteArray::encode_half)>("encode_half")
			.fun<static_cast<void (PackedByteArray::*)(int64_t, double)>(&PackedByteArray::encode_float)>("encode_float")
			.fun<static_cast<void (PackedByteArray::*)(int64_t, double)>(&PackedByteArray::encode_double)>("encode_double")
			.fun<static_cast<int64_t (PackedByteArray::*)(int64_t, const Variant &, bool)>(&PackedByteArray::encode_var)>("encode_var");
}