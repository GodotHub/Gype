#include "register/register_classes.h"
#include <godot_cpp/classes/crypto_key.hpp>

using namespace godot;

void register_classes_CryptoKeyRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CryptoKey>>("CryptoKeyRef").constructor<CryptoKey *>();
}