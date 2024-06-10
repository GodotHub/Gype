#include "register/register_classes.h"
#include <godot_cpp/classes/udp_server.hpp>

using namespace godot;

void register_classes_UDPServerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<UDPServer>>("UDPServerRef").constructor<UDPServer *>();
}