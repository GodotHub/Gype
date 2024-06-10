#include "register/register_classes.h"
#include <godot_cpp/classes/xml_parser.hpp>

using namespace godot;

void register_classes_XMLParserRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<XMLParser>>("XMLParserRef").constructor<XMLParser *>();
}