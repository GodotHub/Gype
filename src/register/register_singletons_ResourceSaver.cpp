#include <godot_cpp/classes/resource_saver.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/resource_format_saver.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_ResourceSaver() {
	qjs::Value js_singleton = context->newObject();
    ResourceSaver *singleton = ResourceSaver::get_singleton();
    js_singleton.add("save", [singleton](const Ref<Resource> & resource,const String & path,BitField<ResourceSaver::SaverFlags> flags)->Error{return singleton->save(resource,path,flags);});
    js_singleton.add("get_recognized_extensions", [singleton](const Ref<Resource> & type)->PackedStringArray{return singleton->get_recognized_extensions(type);});
    js_singleton.add("add_resource_format_saver", [singleton](const Ref<ResourceFormatSaver> & format_saver,bool at_front)->void{singleton->add_resource_format_saver(format_saver,at_front);});
    js_singleton.add("remove_resource_format_saver", [singleton](const Ref<ResourceFormatSaver> & format_saver)->void{singleton->remove_resource_format_saver(format_saver);});
    context->global()["ResourceSaver"] = js_singleton;

    qjs::Value _SaverFlags = context->newObject();
    _SaverFlags["FLAG_NONE"] = ResourceSaver::SaverFlags::FLAG_NONE;
    _SaverFlags["FLAG_RELATIVE_PATHS"] = ResourceSaver::SaverFlags::FLAG_RELATIVE_PATHS;
    _SaverFlags["FLAG_BUNDLE_RESOURCES"] = ResourceSaver::SaverFlags::FLAG_BUNDLE_RESOURCES;
    _SaverFlags["FLAG_CHANGE_PATH"] = ResourceSaver::SaverFlags::FLAG_CHANGE_PATH;
    _SaverFlags["FLAG_OMIT_EDITOR_PROPERTIES"] = ResourceSaver::SaverFlags::FLAG_OMIT_EDITOR_PROPERTIES;
    _SaverFlags["FLAG_SAVE_BIG_ENDIAN"] = ResourceSaver::SaverFlags::FLAG_SAVE_BIG_ENDIAN;
    _SaverFlags["FLAG_COMPRESS"] = ResourceSaver::SaverFlags::FLAG_COMPRESS;
    _SaverFlags["FLAG_REPLACE_SUBRESOURCE_PATHS"] = ResourceSaver::SaverFlags::FLAG_REPLACE_SUBRESOURCE_PATHS;
    js_singleton["SaverFlags"] = _SaverFlags;
}