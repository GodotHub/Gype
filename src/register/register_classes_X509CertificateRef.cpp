#include "register/register_classes.h"
#include <godot_cpp/classes/x509_certificate.hpp>

using namespace godot;

void register_classes_X509CertificateRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<X509Certificate>>("X509CertificateRef").constructor<X509Certificate *>();
}