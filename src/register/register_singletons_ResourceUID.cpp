#include <godot_cpp/classes/resource_uid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_ResourceUID() {
	qjs::Value js_singleton = context->newObject();
    ResourceUID *singleton = ResourceUID::get_singleton();
    js_singleton.add("id_to_text", [singleton](int64_t id)->String{return singleton->id_to_text(id);});
    js_singleton.add("text_to_id", [singleton](const String & text_id)->int64_t{return singleton->text_to_id(text_id);});
    js_singleton.add("create_id", [singleton]()->int64_t{return singleton->create_id();});
    js_singleton.add("has_id", [singleton](int64_t id)->bool{return singleton->has_id(id);});
    js_singleton.add("add_id", [singleton](int64_t id,const String & path)->void{singleton->add_id(id,path);});
    js_singleton.add("set_id", [singleton](int64_t id,const String & path)->void{singleton->set_id(id,path);});
    js_singleton.add("get_id_path", [singleton](int64_t id)->String{return singleton->get_id_path(id);});
    js_singleton.add("remove_id", [singleton](int64_t id)->void{singleton->remove_id(id);});
    context->global()["ResourceUID"] = js_singleton;

}