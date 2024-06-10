#include "register/register_classes.h"
#include <godot_cpp/classes/crypto.hpp>

using namespace godot;

void register_classes_CryptoRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Crypto>>("CryptoRef").constructor<Crypto *>();
}