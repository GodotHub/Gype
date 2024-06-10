#include "register/register_classes.h"
#include <godot_cpp/classes/tcp_server.hpp>

using namespace godot;

void register_classes_TCPServerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TCPServer>>("TCPServerRef").constructor<TCPServer *>();
}