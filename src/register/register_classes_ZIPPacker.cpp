#include <godot_cpp/classes/zip_packer.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ZIPPacker() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<ZIPPacker>("ZIPPacker")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<Error(ZIPPacker::*)(const String &,ZIPPacker::ZipAppend)>(&ZIPPacker::open)>("open")
            .fun<static_cast<Error(ZIPPacker::*)(const String &)>(&ZIPPacker::start_file)>("start_file")
            .fun<static_cast<Error(ZIPPacker::*)(const PackedByteArray &)>(&ZIPPacker::write_file)>("write_file")
            .fun<static_cast<Error(ZIPPacker::*)()>(&ZIPPacker::close_file)>("close_file")
            .fun<static_cast<Error(ZIPPacker::*)()>(&ZIPPacker::close)>("close")
;    qjs::Value _ZipAppend = context->newObject();
    _ZipAppend["APPEND_CREATE"] = ZIPPacker::ZipAppend::APPEND_CREATE;
    _ZipAppend["APPEND_CREATEAFTER"] = ZIPPacker::ZipAppend::APPEND_CREATEAFTER;
    _ZipAppend["APPEND_ADDINZIP"] = ZIPPacker::ZipAppend::APPEND_ADDINZIP;
    _module.add("ZipAppend", std::move(_ZipAppend));
}