#include <godot_cpp/classes/class_db_singleton.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_ClassDBSingleton() {
	qjs::Value js_singleton = context->newObject();
    ClassDBSingleton *singleton = ClassDBSingleton::get_singleton();
    js_singleton.add("get_class_list", [singleton]()->PackedStringArray{return singleton->get_class_list();});
    js_singleton.add("get_inheriters_from_class", [singleton](const StringName & _class)->PackedStringArray{return singleton->get_inheriters_from_class(_class);});
    js_singleton.add("get_parent_class", [singleton](const StringName & _class)->StringName{return singleton->get_parent_class(_class);});
    js_singleton.add("class_exists", [singleton](const StringName & _class)->bool{return singleton->class_exists(_class);});
    js_singleton.add("is_parent_class", [singleton](const StringName & _class,const StringName & inherits)->bool{return singleton->is_parent_class(_class,inherits);});
    js_singleton.add("can_instantiate", [singleton](const StringName & _class)->bool{return singleton->can_instantiate(_class);});
    js_singleton.add("instantiate", [singleton](const StringName & _class)->Variant{return singleton->instantiate(_class);});
    js_singleton.add("class_has_signal", [singleton](const StringName & _class,const StringName & signal)->bool{return singleton->class_has_signal(_class,signal);});
    js_singleton.add("class_get_signal", [singleton](const StringName & _class,const StringName & signal)->Dictionary{return singleton->class_get_signal(_class,signal);});
    js_singleton.add("class_get_signal_list", [singleton](const StringName & _class,bool no_inheritance)->TypedArray<Dictionary>{return singleton->class_get_signal_list(_class,no_inheritance);});
    js_singleton.add("class_get_property_list", [singleton](const StringName & _class,bool no_inheritance)->TypedArray<Dictionary>{return singleton->class_get_property_list(_class,no_inheritance);});
    js_singleton.add("class_get_property", [singleton](Object * object,const StringName & property)->Variant{return singleton->class_get_property(object,property);});
    js_singleton.add("class_set_property", [singleton](Object * object,const StringName & property,const Variant & value)->Error{return singleton->class_set_property(object,property,value);});
    js_singleton.add("class_get_property_default_value", [singleton](const StringName & _class,const StringName & property)->Variant{return singleton->class_get_property_default_value(_class,property);});
    js_singleton.add("class_has_method", [singleton](const StringName & _class,const StringName & method,bool no_inheritance)->bool{return singleton->class_has_method(_class,method,no_inheritance);});
    js_singleton.add("class_get_method_argument_count", [singleton](const StringName & _class,const StringName & method,bool no_inheritance)->int64_t{return singleton->class_get_method_argument_count(_class,method,no_inheritance);});
    js_singleton.add("class_get_method_list", [singleton](const StringName & _class,bool no_inheritance)->TypedArray<Dictionary>{return singleton->class_get_method_list(_class,no_inheritance);});
    js_singleton.add("class_get_integer_constant_list", [singleton](const StringName & _class,bool no_inheritance)->PackedStringArray{return singleton->class_get_integer_constant_list(_class,no_inheritance);});
    js_singleton.add("class_has_integer_constant", [singleton](const StringName & _class,const StringName & name)->bool{return singleton->class_has_integer_constant(_class,name);});
    js_singleton.add("class_get_integer_constant", [singleton](const StringName & _class,const StringName & name)->int64_t{return singleton->class_get_integer_constant(_class,name);});
    js_singleton.add("class_has_enum", [singleton](const StringName & _class,const StringName & name,bool no_inheritance)->bool{return singleton->class_has_enum(_class,name,no_inheritance);});
    js_singleton.add("class_get_enum_list", [singleton](const StringName & _class,bool no_inheritance)->PackedStringArray{return singleton->class_get_enum_list(_class,no_inheritance);});
    js_singleton.add("class_get_enum_constants", [singleton](const StringName & _class,const StringName & _enum,bool no_inheritance)->PackedStringArray{return singleton->class_get_enum_constants(_class,_enum,no_inheritance);});
    js_singleton.add("class_get_integer_constant_enum", [singleton](const StringName & _class,const StringName & name,bool no_inheritance)->StringName{return singleton->class_get_integer_constant_enum(_class,name,no_inheritance);});
    js_singleton.add("is_class_enum_bitfield", [singleton](const StringName & _class,const StringName & _enum,bool no_inheritance)->bool{return singleton->is_class_enum_bitfield(_class,_enum,no_inheritance);});
    js_singleton.add("is_class_enabled", [singleton](const StringName & _class)->bool{return singleton->is_class_enabled(_class);});
    context->global()["ClassDBSingleton"] = js_singleton;

}