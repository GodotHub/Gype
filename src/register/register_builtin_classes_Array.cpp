#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_float64_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_Array() {
	_Variant.class_<Array>("Array")
			.constructor<>()
			.constructor<const Array &>("Array_1")
			.constructor<const Array &, int64_t, const StringName &, const Variant &>("Array_2")
			.constructor<const PackedByteArray &>("Array_3")
			.constructor<const PackedInt32Array &>("Array_4")
			.constructor<const PackedInt64Array &>("Array_5")
			.constructor<const PackedFloat32Array &>("Array_6")
			.constructor<const PackedFloat64Array &>("Array_7")
			.constructor<const PackedStringArray &>("Array_8")
			.constructor<const PackedVector2Array &>("Array_9")
			.constructor<const PackedVector3Array &>("Array_10")
			.constructor<const PackedColorArray &>("Array_11")

			.fun<static_cast<int64_t (Array::*)() const>(&Array::size)>("size")
			.fun<static_cast<bool (Array::*)() const>(&Array::is_empty)>("is_empty")
			.fun<static_cast<void (Array::*)()>(&Array::clear)>("clear")
			.fun<static_cast<int64_t (Array::*)() const>(&Array::hash)>("hash")
			.fun<static_cast<void (Array::*)(const Array &)>(&Array::assign)>("assign")
			.fun<static_cast<void (Array::*)(const Variant &)>(&Array::push_back)>("push_back")
			.fun<static_cast<void (Array::*)(const Variant &)>(&Array::push_front)>("push_front")
			.fun<static_cast<void (Array::*)(const Variant &)>(&Array::append)>("append")
			.fun<static_cast<void (Array::*)(const Array &)>(&Array::append_array)>("append_array")
			.fun<static_cast<int64_t (Array::*)(int64_t)>(&Array::resize)>("resize")
			.fun<static_cast<int64_t (Array::*)(int64_t, const Variant &)>(&Array::insert)>("insert")
			.fun<static_cast<void (Array::*)(int64_t)>(&Array::remove_at)>("remove_at")
			.fun<static_cast<void (Array::*)(const Variant &)>(&Array::fill)>("fill")
			.fun<static_cast<void (Array::*)(const Variant &)>(&Array::erase)>("erase")
			.fun<static_cast<Variant (Array::*)() const>(&Array::front)>("front")
			.fun<static_cast<Variant (Array::*)() const>(&Array::back)>("back")
			.fun<static_cast<Variant (Array::*)() const>(&Array::pick_random)>("pick_random")
			.fun<static_cast<int64_t (Array::*)(const Variant &, int64_t) const>(&Array::find)>("find")
			.fun<static_cast<int64_t (Array::*)(const Variant &, int64_t) const>(&Array::rfind)>("rfind")
			.fun<static_cast<int64_t (Array::*)(const Variant &) const>(&Array::count)>("count")
			.fun<static_cast<bool (Array::*)(const Variant &) const>(&Array::has)>("has")
			.fun<static_cast<Variant (Array::*)()>(&Array::pop_back)>("pop_back")
			.fun<static_cast<Variant (Array::*)()>(&Array::pop_front)>("pop_front")
			.fun<static_cast<Variant (Array::*)(int64_t)>(&Array::pop_at)>("pop_at")
			.fun<static_cast<void (Array::*)()>(&Array::sort)>("sort")
			.fun<static_cast<void (Array::*)(const Callable &)>(&Array::sort_custom)>("sort_custom")
			.fun<static_cast<void (Array::*)()>(&Array::shuffle)>("shuffle")
			.fun<static_cast<int64_t (Array::*)(const Variant &, bool) const>(&Array::bsearch)>("bsearch")
			.fun<static_cast<int64_t (Array::*)(const Variant &, const Callable &, bool) const>(&Array::bsearch_custom)>("bsearch_custom")
			.fun<static_cast<void (Array::*)()>(&Array::reverse)>("reverse")
			.fun<static_cast<Array (Array::*)(bool) const>(&Array::duplicate)>("duplicate")
			.fun<static_cast<Array (Array::*)(int64_t, int64_t, int64_t, bool) const>(&Array::slice)>("slice")
			.fun<static_cast<Array (Array::*)(const Callable &) const>(&Array::filter)>("filter")
			.fun<static_cast<Array (Array::*)(const Callable &) const>(&Array::map)>("map")
			.fun<static_cast<Variant (Array::*)(const Callable &, const Variant &) const>(&Array::reduce)>("reduce")
			.fun<static_cast<bool (Array::*)(const Callable &) const>(&Array::any)>("any")
			.fun<static_cast<bool (Array::*)(const Callable &) const>(&Array::all)>("all")
			.fun<static_cast<Variant (Array::*)() const>(&Array::max)>("max")
			.fun<static_cast<Variant (Array::*)() const>(&Array::min)>("min")
			.fun<static_cast<bool (Array::*)() const>(&Array::is_typed)>("is_typed")
			.fun<static_cast<bool (Array::*)(const Array &) const>(&Array::is_same_typed)>("is_same_typed")
			.fun<static_cast<int64_t (Array::*)() const>(&Array::get_typed_builtin)>("get_typed_builtin")
			.fun<static_cast<StringName (Array::*)() const>(&Array::get_typed_class_name)>("get_typed_class_name")
			.fun<static_cast<Variant (Array::*)() const>(&Array::get_typed_script)>("get_typed_script")
			.fun<static_cast<void (Array::*)()>(&Array::make_read_only)>("make_read_only")
			.fun<static_cast<bool (Array::*)() const>(&Array::is_read_only)>("is_read_only");
}