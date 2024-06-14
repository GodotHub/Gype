
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/text_server_manager.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_TextServerManager() {
	qjs::Value js_singleton = context->newObject();
	TextServerManager *singleton = TextServerManager::get_singleton();
	js_singleton.add((new std::string("add_interface"))->c_str(), [singleton](const Ref<TextServer> &interface) -> void { singleton->add_interface(interface); });
	js_singleton.add((new std::string("get_interface_count"))->c_str(), [singleton]() -> int64_t { return singleton->get_interface_count(); });
	js_singleton.add((new std::string("remove_interface"))->c_str(), [singleton](const Ref<TextServer> &interface) -> void { singleton->remove_interface(interface); });
	js_singleton.add((new std::string("get_interface"))->c_str(), [singleton](int32_t idx) -> Ref<TextServer> { return singleton->get_interface(idx); });
	js_singleton.add((new std::string("get_interfaces"))->c_str(), [singleton]() -> TypedArray<Dictionary> { return singleton->get_interfaces(); });
	js_singleton.add((new std::string("find_interface"))->c_str(), [singleton](const String &name) -> Ref<TextServer> { return singleton->find_interface(name); });
	js_singleton.add((new std::string("set_primary_interface"))->c_str(), [singleton](const Ref<TextServer> &index) -> void { singleton->set_primary_interface(index); });
	js_singleton.add((new std::string("get_primary_interface"))->c_str(), [singleton]() -> Ref<TextServer> { return singleton->get_primary_interface(); });
	context->global()[(new std::string("TextServerManager"))->c_str()] = js_singleton;
}