
#include <godot_cpp/variant/dictionary.hpp>

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_Dictionary() {
	qjs::Context::Module &_Variant = get_Variant_module();
	_Variant.class_<Dictionary>("Dictionary")
			.constructor<>()
			.constructor<const Dictionary &>("Dictionary_1")
			.fun<static_cast<int64_t (Dictionary::*)() const>(&Dictionary::size)>("size")
			.fun<static_cast<bool (Dictionary::*)() const>(&Dictionary::is_empty)>("is_empty")
			.fun<static_cast<void (Dictionary::*)()>(&Dictionary::clear)>("clear")
			.fun<static_cast<void (Dictionary::*)(const Dictionary &, bool)>(&Dictionary::merge)>("merge")
			.fun<static_cast<Dictionary (Dictionary::*)(const Dictionary &, bool) const>(&Dictionary::merged)>("merged")
			.fun<static_cast<bool (Dictionary::*)(const Variant &) const>(&Dictionary::has)>("has")
			.fun<static_cast<bool (Dictionary::*)(const Array &) const>(&Dictionary::has_all)>("has_all")
			.fun<static_cast<Variant (Dictionary::*)(const Variant &) const>(&Dictionary::find_key)>("find_key")
			.fun<static_cast<bool (Dictionary::*)(const Variant &)>(&Dictionary::erase)>("erase")
			.fun<static_cast<int64_t (Dictionary::*)() const>(&Dictionary::hash)>("hash")
			.fun<static_cast<Array (Dictionary::*)() const>(&Dictionary::keys)>("keys")
			.fun<static_cast<Array (Dictionary::*)() const>(&Dictionary::values)>("values")
			.fun<static_cast<Dictionary (Dictionary::*)(bool) const>(&Dictionary::duplicate)>("duplicate")
			.fun<static_cast<Variant (Dictionary::*)(const Variant &, const Variant &) const>(&Dictionary::get)>("get")
			.fun<static_cast<Variant (Dictionary::*)(const Variant &, const Variant &)>(&Dictionary::get_or_add)>("get_or_add")
			.fun<static_cast<void (Dictionary::*)()>(&Dictionary::make_read_only)>("make_read_only")
			.fun<static_cast<bool (Dictionary::*)() const>(&Dictionary::is_read_only)>("is_read_only");
}