
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/xml_parser.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XMLParser() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<XMLParser>("XMLParser")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Error (XMLParser::*)()>(&XMLParser::read)>((new std::string("read"))->c_str())
			.fun<static_cast<XMLParser::NodeType (XMLParser::*)()>(&XMLParser::get_node_type)>((new std::string("get_node_type"))->c_str())
			.fun<static_cast<String (XMLParser::*)() const>(&XMLParser::get_node_name)>((new std::string("get_node_name"))->c_str())
			.fun<static_cast<String (XMLParser::*)() const>(&XMLParser::get_node_data)>((new std::string("get_node_data"))->c_str())
			.fun<static_cast<uint64_t (XMLParser::*)() const>(&XMLParser::get_node_offset)>((new std::string("get_node_offset"))->c_str())
			.fun<static_cast<int32_t (XMLParser::*)() const>(&XMLParser::get_attribute_count)>((new std::string("get_attribute_count"))->c_str())
			.fun<static_cast<String (XMLParser::*)(int32_t) const>(&XMLParser::get_attribute_name)>((new std::string("get_attribute_name"))->c_str())
			.fun<static_cast<String (XMLParser::*)(int32_t) const>(&XMLParser::get_attribute_value)>((new std::string("get_attribute_value"))->c_str())
			.fun<static_cast<bool (XMLParser::*)(const String &) const>(&XMLParser::has_attribute)>((new std::string("has_attribute"))->c_str())
			.fun<static_cast<String (XMLParser::*)(const String &) const>(&XMLParser::get_named_attribute_value)>((new std::string("get_named_attribute_value"))->c_str())
			.fun<static_cast<String (XMLParser::*)(const String &) const>(&XMLParser::get_named_attribute_value_safe)>((new std::string("get_named_attribute_value_safe"))->c_str())
			.fun<static_cast<bool (XMLParser::*)() const>(&XMLParser::is_empty)>((new std::string("is_empty"))->c_str())
			.fun<static_cast<int32_t (XMLParser::*)() const>(&XMLParser::get_current_line)>((new std::string("get_current_line"))->c_str())
			.fun<static_cast<void (XMLParser::*)()>(&XMLParser::skip_section)>((new std::string("skip_section"))->c_str())
			.fun<static_cast<Error (XMLParser::*)(uint64_t)>(&XMLParser::seek)>((new std::string("seek"))->c_str())
			.fun<static_cast<Error (XMLParser::*)(const String &)>(&XMLParser::open)>((new std::string("open"))->c_str())
			.fun<static_cast<Error (XMLParser::*)(const PackedByteArray &)>(&XMLParser::open_buffer)>((new std::string("open_buffer"))->c_str());
	qjs::Value _NodeType = context->newObject();
	_NodeType[(new std::string("NODE_NONE"))->c_str()] = XMLParser::NodeType::NODE_NONE;
	_NodeType[(new std::string("NODE_ELEMENT"))->c_str()] = XMLParser::NodeType::NODE_ELEMENT;
	_NodeType[(new std::string("NODE_ELEMENT_END"))->c_str()] = XMLParser::NodeType::NODE_ELEMENT_END;
	_NodeType[(new std::string("NODE_TEXT"))->c_str()] = XMLParser::NodeType::NODE_TEXT;
	_NodeType[(new std::string("NODE_COMMENT"))->c_str()] = XMLParser::NodeType::NODE_COMMENT;
	_NodeType[(new std::string("NODE_CDATA"))->c_str()] = XMLParser::NodeType::NODE_CDATA;
	_NodeType[(new std::string("NODE_UNKNOWN"))->c_str()] = XMLParser::NodeType::NODE_UNKNOWN;
	_module.add("NodeType", std::move(_NodeType));
}