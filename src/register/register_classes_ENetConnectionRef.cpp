#include "register/register_classes.h"
#include <godot_cpp/classes/e_net_connection.hpp>

using namespace godot;

void register_classes_ENetConnectionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ENetConnection>>("ENetConnectionRef").constructor<ENetConnection *>();
}