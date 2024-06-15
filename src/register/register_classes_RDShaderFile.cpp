#include <godot_cpp/classes/rd_shader_file.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/rd_shader_spirv.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RDShaderFile() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RDShaderFile>("RDShaderFile")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<String(RDShaderFile::*)()const>(&RDShaderFile::get_base_error),static_cast<void(RDShaderFile::*)(const String &)>(&RDShaderFile::set_base_error)>("base_error")
            .fun<static_cast<void(RDShaderFile::*)(const Ref<RDShaderSPIRV> &,const StringName &)>(&RDShaderFile::set_bytecode)>("set_bytecode")
            .fun<static_cast<Ref<RDShaderSPIRV>(RDShaderFile::*)(const StringName &)const>(&RDShaderFile::get_spirv)>("get_spirv")
            .fun<static_cast<TypedArray<StringName>(RDShaderFile::*)()const>(&RDShaderFile::get_version_list)>("get_version_list")
;}