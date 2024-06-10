#include "register/register_classes.h"
#include <godot_cpp/classes/web_rtc_data_channel.hpp>

using namespace godot;

void register_classes_WebRTCDataChannelRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<WebRTCDataChannel>>("WebRTCDataChannelRef").constructor<WebRTCDataChannel *>();
}