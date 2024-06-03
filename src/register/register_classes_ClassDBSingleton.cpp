#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/class_db_singleton.hpp>

using namespace godot;

void register_classes_ClassDBSingleton() {
    qjs::Context::Module &_module = _General;
    _module.class_<ClassDBSingleton>("ClassDBSingleton")
           .constructor<>()
		    .fun<static_cast<PackedStringArray(ClassDBSingleton::*)()const>(&ClassDBSingleton::get_class_list)>("get_class_list")
		    .fun<static_cast<PackedStringArray(ClassDBSingleton::*)(const StringName &)const>(&ClassDBSingleton::get_inheriters_from_class)>("get_inheriters_from_class")
		    .fun<static_cast<StringName(ClassDBSingleton::*)(const StringName &)const>(&ClassDBSingleton::get_parent_class)>("get_parent_class")
		    .fun<static_cast<bool(ClassDBSingleton::*)(const StringName &)const>(&ClassDBSingleton::class_exists)>("class_exists")
		    .fun<static_cast<bool(ClassDBSingleton::*)(const StringName &,const StringName &)const>(&ClassDBSingleton::is_parent_class)>("is_parent_class")
		    .fun<static_cast<bool(ClassDBSingleton::*)(const StringName &)const>(&ClassDBSingleton::can_instantiate)>("can_instantiate")
		    .fun<static_cast<Variant(ClassDBSingleton::*)(const StringName &)const>(&ClassDBSingleton::instantiate)>("instantiate")
		    .fun<static_cast<bool(ClassDBSingleton::*)(const StringName &,const StringName &)const>(&ClassDBSingleton::class_has_signal)>("class_has_signal")
		    .fun<static_cast<Dictionary(ClassDBSingleton::*)(const StringName &,const StringName &)const>(&ClassDBSingleton::class_get_signal)>("class_get_signal")
		    .fun<static_cast<TypedArray<Dictionary>(ClassDBSingleton::*)(const StringName &,bool)const>(&ClassDBSingleton::class_get_signal_list)>("class_get_signal_list")
		    .fun<static_cast<TypedArray<Dictionary>(ClassDBSingleton::*)(const StringName &,bool)const>(&ClassDBSingleton::class_get_property_list)>("class_get_property_list")
		    .fun<static_cast<Variant(ClassDBSingleton::*)(Object *,const StringName &)const>(&ClassDBSingleton::class_get_property)>("class_get_property")
		    .fun<static_cast<Error(ClassDBSingleton::*)(Object *,const StringName &,const Variant &)const>(&ClassDBSingleton::class_set_property)>("class_set_property")
		    .fun<static_cast<bool(ClassDBSingleton::*)(const StringName &,const StringName &,bool)const>(&ClassDBSingleton::class_has_method)>("class_has_method")
		    .fun<static_cast<TypedArray<Dictionary>(ClassDBSingleton::*)(const StringName &,bool)const>(&ClassDBSingleton::class_get_method_list)>("class_get_method_list")
		    .fun<static_cast<PackedStringArray(ClassDBSingleton::*)(const StringName &,bool)const>(&ClassDBSingleton::class_get_integer_constant_list)>("class_get_integer_constant_list")
		    .fun<static_cast<bool(ClassDBSingleton::*)(const StringName &,const StringName &)const>(&ClassDBSingleton::class_has_integer_constant)>("class_has_integer_constant")
		    .fun<static_cast<int64_t(ClassDBSingleton::*)(const StringName &,const StringName &)const>(&ClassDBSingleton::class_get_integer_constant)>("class_get_integer_constant")
		    .fun<static_cast<bool(ClassDBSingleton::*)(const StringName &,const StringName &,bool)const>(&ClassDBSingleton::class_has_enum)>("class_has_enum")
		    .fun<static_cast<PackedStringArray(ClassDBSingleton::*)(const StringName &,bool)const>(&ClassDBSingleton::class_get_enum_list)>("class_get_enum_list")
		    .fun<static_cast<PackedStringArray(ClassDBSingleton::*)(const StringName &,const StringName &,bool)const>(&ClassDBSingleton::class_get_enum_constants)>("class_get_enum_constants")
		    .fun<static_cast<StringName(ClassDBSingleton::*)(const StringName &,const StringName &,bool)const>(&ClassDBSingleton::class_get_integer_constant_enum)>("class_get_integer_constant_enum")
		    .fun<static_cast<bool(ClassDBSingleton::*)(const StringName &)const>(&ClassDBSingleton::is_class_enabled)>("is_class_enabled")
;}