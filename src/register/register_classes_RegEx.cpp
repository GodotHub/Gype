#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/reg_ex.hpp>

using namespace godot;

void register_classes_RegEx() {
    qjs::Context::Module &_module = _General;
    _module.class_<RegEx>("RegEx")
           .constructor<>()
            .static_fun<RegEx::create_from_string>("create_from_string")
		    .fun<static_cast<void(RegEx::*)()>(&RegEx::clear)>("clear")
		    .fun<static_cast<Error(RegEx::*)(const String &)>(&RegEx::compile)>("compile")
		    .fun<static_cast<Ref<RegExMatch>(RegEx::*)(const String &,int32_t,int32_t)const>(&RegEx::search)>("search")
		    .fun<static_cast<TypedArray<RegExMatch>(RegEx::*)(const String &,int32_t,int32_t)const>(&RegEx::search_all)>("search_all")
		    .fun<static_cast<String(RegEx::*)(const String &,const String &,bool,int32_t,int32_t)const>(&RegEx::sub)>("sub")
		    .fun<static_cast<bool(RegEx::*)()const>(&RegEx::is_valid)>("is_valid")
		    .fun<static_cast<String(RegEx::*)()const>(&RegEx::get_pattern)>("get_pattern")
		    .fun<static_cast<int32_t(RegEx::*)()const>(&RegEx::get_group_count)>("get_group_count")
		    .fun<static_cast<PackedStringArray(RegEx::*)()const>(&RegEx::get_names)>("get_names")
;}