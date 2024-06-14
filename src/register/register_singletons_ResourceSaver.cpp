#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/resource_format_saver.hpp>
#include <godot_cpp/classes/resource_saver.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_ResourceSaver() {
	qjs::Value js_singleton = context->newObject();
	ResourceSaver *singleton = ResourceSaver::get_singleton();
	js_singleton.add((new std::string("save"))->c_str(), [singleton](const Ref<Resource> &resource, const String &path, BitField<ResourceSaver::SaverFlags> flags) -> Error { return singleton->save(resource, path, flags); });
	js_singleton.add((new std::string("get_recognized_extensions"))->c_str(), [singleton](const Ref<Resource> &type) -> PackedStringArray { return singleton->get_recognized_extensions(type); });
	js_singleton.add((new std::string("add_resource_format_saver"))->c_str(), [singleton](const Ref<ResourceFormatSaver> &format_saver, bool at_front) -> void { singleton->add_resource_format_saver(format_saver, at_front); });
	js_singleton.add((new std::string("remove_resource_format_saver"))->c_str(), [singleton](const Ref<ResourceFormatSaver> &format_saver) -> void { singleton->remove_resource_format_saver(format_saver); });
	context->global()[(new std::string("ResourceSaver"))->c_str()] = js_singleton;

	qjs::Value _SaverFlags = context->newObject();
	_SaverFlags[(new std::string("FLAG_NONE"))->c_str()] = ResourceSaver::SaverFlags::FLAG_NONE;
	_SaverFlags[(new std::string("FLAG_RELATIVE_PATHS"))->c_str()] = ResourceSaver::SaverFlags::FLAG_RELATIVE_PATHS;
	_SaverFlags[(new std::string("FLAG_BUNDLE_RESOURCES"))->c_str()] = ResourceSaver::SaverFlags::FLAG_BUNDLE_RESOURCES;
	_SaverFlags[(new std::string("FLAG_CHANGE_PATH"))->c_str()] = ResourceSaver::SaverFlags::FLAG_CHANGE_PATH;
	_SaverFlags[(new std::string("FLAG_OMIT_EDITOR_PROPERTIES"))->c_str()] = ResourceSaver::SaverFlags::FLAG_OMIT_EDITOR_PROPERTIES;
	_SaverFlags[(new std::string("FLAG_SAVE_BIG_ENDIAN"))->c_str()] = ResourceSaver::SaverFlags::FLAG_SAVE_BIG_ENDIAN;
	_SaverFlags[(new std::string("FLAG_COMPRESS"))->c_str()] = ResourceSaver::SaverFlags::FLAG_COMPRESS;
	_SaverFlags[(new std::string("FLAG_REPLACE_SUBRESOURCE_PATHS"))->c_str()] = ResourceSaver::SaverFlags::FLAG_REPLACE_SUBRESOURCE_PATHS;
	js_singleton[(new std::string("SaverFlags"))->c_str()] = _SaverFlags;
}