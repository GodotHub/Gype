
#include <godot_cpp/classes/resource_uid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_ResourceUID() {
	qjs::Value js_singleton = context->newObject();
	ResourceUID *singleton = ResourceUID::get_singleton();
	js_singleton.add((new std::string("id_to_text"))->c_str(), [singleton](int64_t id) -> String { return singleton->id_to_text(id); });
	js_singleton.add((new std::string("text_to_id"))->c_str(), [singleton](const String &text_id) -> int64_t { return singleton->text_to_id(text_id); });
	js_singleton.add((new std::string("create_id"))->c_str(), [singleton]() -> int64_t { return singleton->create_id(); });
	js_singleton.add((new std::string("has_id"))->c_str(), [singleton](int64_t id) -> bool { return singleton->has_id(id); });
	js_singleton.add((new std::string("add_id"))->c_str(), [singleton](int64_t id, const String &path) -> void { singleton->add_id(id, path); });
	js_singleton.add((new std::string("set_id"))->c_str(), [singleton](int64_t id, const String &path) -> void { singleton->set_id(id, path); });
	js_singleton.add((new std::string("get_id_path"))->c_str(), [singleton](int64_t id) -> String { return singleton->get_id_path(id); });
	js_singleton.add((new std::string("remove_id"))->c_str(), [singleton](int64_t id) -> void { singleton->remove_id(id); });
	context->global()[(new std::string("ResourceUID"))->c_str()] = js_singleton;
}