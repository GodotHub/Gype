#include <godot_cpp/classes/xml_parser.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_XMLParser() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<XMLParser>("XMLParser")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<Error(XMLParser::*)()>(&XMLParser::read)>("read")
            .fun<static_cast<XMLParser::NodeType(XMLParser::*)()>(&XMLParser::get_node_type)>("get_node_type")
            .fun<static_cast<String(XMLParser::*)()const>(&XMLParser::get_node_name)>("get_node_name")
            .fun<static_cast<String(XMLParser::*)()const>(&XMLParser::get_node_data)>("get_node_data")
            .fun<static_cast<uint64_t(XMLParser::*)()const>(&XMLParser::get_node_offset)>("get_node_offset")
            .fun<static_cast<int32_t(XMLParser::*)()const>(&XMLParser::get_attribute_count)>("get_attribute_count")
            .fun<static_cast<String(XMLParser::*)(int32_t)const>(&XMLParser::get_attribute_name)>("get_attribute_name")
            .fun<static_cast<String(XMLParser::*)(int32_t)const>(&XMLParser::get_attribute_value)>("get_attribute_value")
            .fun<static_cast<bool(XMLParser::*)(const String &)const>(&XMLParser::has_attribute)>("has_attribute")
            .fun<static_cast<String(XMLParser::*)(const String &)const>(&XMLParser::get_named_attribute_value)>("get_named_attribute_value")
            .fun<static_cast<String(XMLParser::*)(const String &)const>(&XMLParser::get_named_attribute_value_safe)>("get_named_attribute_value_safe")
            .fun<static_cast<bool(XMLParser::*)()const>(&XMLParser::is_empty)>("is_empty")
            .fun<static_cast<int32_t(XMLParser::*)()const>(&XMLParser::get_current_line)>("get_current_line")
            .fun<static_cast<void(XMLParser::*)()>(&XMLParser::skip_section)>("skip_section")
            .fun<static_cast<Error(XMLParser::*)(uint64_t)>(&XMLParser::seek)>("seek")
            .fun<static_cast<Error(XMLParser::*)(const String &)>(&XMLParser::open)>("open")
            .fun<static_cast<Error(XMLParser::*)(const PackedByteArray &)>(&XMLParser::open_buffer)>("open_buffer")
;    qjs::Value _NodeType = context->newObject();
    _NodeType["NODE_NONE"] = XMLParser::NodeType::NODE_NONE;
    _NodeType["NODE_ELEMENT"] = XMLParser::NodeType::NODE_ELEMENT;
    _NodeType["NODE_ELEMENT_END"] = XMLParser::NodeType::NODE_ELEMENT_END;
    _NodeType["NODE_TEXT"] = XMLParser::NodeType::NODE_TEXT;
    _NodeType["NODE_COMMENT"] = XMLParser::NodeType::NODE_COMMENT;
    _NodeType["NODE_CDATA"] = XMLParser::NodeType::NODE_CDATA;
    _NodeType["NODE_UNKNOWN"] = XMLParser::NodeType::NODE_UNKNOWN;
    _module.add("NodeType", std::move(_NodeType));
}