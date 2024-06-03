#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/zip_packer.hpp>

using namespace godot;

void register_classes_ZIPPacker() {
    qjs::Context::Module &_module = _General;
    _module.class_<ZIPPacker>("ZIPPacker")
           .constructor<>()
		    .fun<static_cast<Error(ZIPPacker::*)(const String &,ZIPPacker::ZipAppend)>(&ZIPPacker::open)>("open")
		    .fun<static_cast<Error(ZIPPacker::*)(const String &)>(&ZIPPacker::start_file)>("start_file")
		    .fun<static_cast<Error(ZIPPacker::*)(const PackedByteArray &)>(&ZIPPacker::write_file)>("write_file")
		    .fun<static_cast<Error(ZIPPacker::*)()>(&ZIPPacker::close_file)>("close_file")
		    .fun<static_cast<Error(ZIPPacker::*)()>(&ZIPPacker::close)>("close")
;}