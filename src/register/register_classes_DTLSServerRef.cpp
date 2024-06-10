#include "register/register_classes.h"
#include <godot_cpp/classes/dtls_server.hpp>

using namespace godot;

void register_classes_DTLSServerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<DTLSServer>>("DTLSServerRef").constructor<DTLSServer *>();
}