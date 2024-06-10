#include "register/register_classes.h"
#include <godot_cpp/classes/zip_reader.hpp>

using namespace godot;

void register_classes_ZIPReaderRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ZIPReader>>("ZIPReaderRef").constructor<ZIPReader *>();
}