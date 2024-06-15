#include <godot_cpp/classes/text_server_manager.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_TextServerManager() {
	qjs::Value js_singleton = context->newObject();
    TextServerManager *singleton = TextServerManager::get_singleton();
    js_singleton.add("add_interface", [singleton](const Ref<TextServer> & interface)->void{singleton->add_interface(interface);});
    js_singleton.add("get_interface_count", [singleton]()->int64_t{return singleton->get_interface_count();});
    js_singleton.add("remove_interface", [singleton](const Ref<TextServer> & interface)->void{singleton->remove_interface(interface);});
    js_singleton.add("get_interface", [singleton](int32_t idx)->Ref<TextServer>{return singleton->get_interface(idx);});
    js_singleton.add("get_interfaces", [singleton]()->TypedArray<Dictionary>{return singleton->get_interfaces();});
    js_singleton.add("find_interface", [singleton](const String & name)->Ref<TextServer>{return singleton->find_interface(name);});
    js_singleton.add("set_primary_interface", [singleton](const Ref<TextServer> & index)->void{singleton->set_primary_interface(index);});
    js_singleton.add("get_primary_interface", [singleton]()->Ref<TextServer>{return singleton->get_primary_interface();});
    context->global()["TextServerManager"] = js_singleton;

}