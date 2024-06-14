#include <godot_cpp/classes/rd_shader_file.hpp>
#include <godot_cpp/classes/rd_shader_spirv.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDShaderFile() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDShaderFile>("RDShaderFile")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (RDShaderFile::*)() const>(&RDShaderFile::get_base_error), static_cast<void (RDShaderFile::*)(const String &)>(&RDShaderFile::set_base_error)>((new std::string("base_error"))->c_str())
			.fun<static_cast<void (RDShaderFile::*)(const Ref<RDShaderSPIRV> &, const StringName &)>(&RDShaderFile::set_bytecode)>((new std::string("set_bytecode"))->c_str())
			.fun<static_cast<Ref<RDShaderSPIRV> (RDShaderFile::*)(const StringName &) const>(&RDShaderFile::get_spirv)>((new std::string("get_spirv"))->c_str())
			.fun<static_cast<TypedArray<StringName> (RDShaderFile::*)() const>(&RDShaderFile::get_version_list)>((new std::string("get_version_list"))->c_str());
}