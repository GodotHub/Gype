#include <godot_cpp/classes/project_settings.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_ProjectSettings() {
	qjs::Value js_singleton = context->newObject();
    ProjectSettings *singleton = ProjectSettings::get_singleton();
    js_singleton.add("has_setting", [singleton](const String & name)->bool{return singleton->has_setting(name);});
    js_singleton.add("set_setting", [singleton](const String & name,const Variant & value)->void{singleton->set_setting(name,value);});
    js_singleton.add("get_setting", [singleton](const String & name,const Variant & default_value)->Variant{return singleton->get_setting(name,default_value);});
    js_singleton.add("get_setting_with_override", [singleton](const StringName & name)->Variant{return singleton->get_setting_with_override(name);});
    js_singleton.add("get_global_class_list", [singleton]()->TypedArray<Dictionary>{return singleton->get_global_class_list();});
    js_singleton.add("set_order", [singleton](const String & name,int32_t position)->void{singleton->set_order(name,position);});
    js_singleton.add("get_order", [singleton](const String & name)->int64_t{return singleton->get_order(name);});
    js_singleton.add("set_initial_value", [singleton](const String & name,const Variant & value)->void{singleton->set_initial_value(name,value);});
    js_singleton.add("set_as_basic", [singleton](const String & name,bool basic)->void{singleton->set_as_basic(name,basic);});
    js_singleton.add("set_as_internal", [singleton](const String & name,bool internal)->void{singleton->set_as_internal(name,internal);});
    js_singleton.add("add_property_info", [singleton](const Dictionary & hint)->void{singleton->add_property_info(hint);});
    js_singleton.add("set_restart_if_changed", [singleton](const String & name,bool restart)->void{singleton->set_restart_if_changed(name,restart);});
    js_singleton.add("clear", [singleton](const String & name)->void{singleton->clear(name);});
    js_singleton.add("localize_path", [singleton](const String & path)->String{return singleton->localize_path(path);});
    js_singleton.add("globalize_path", [singleton](const String & path)->String{return singleton->globalize_path(path);});
    js_singleton.add("save", [singleton]()->Error{return singleton->save();});
    js_singleton.add("load_resource_pack", [singleton](const String & pack,bool replace_files,int32_t offset)->bool{return singleton->load_resource_pack(pack,replace_files,offset);});
    js_singleton.add("save_custom", [singleton](const String & file)->Error{return singleton->save_custom(file);});
    context->global()["ProjectSettings"] = js_singleton;

}