#include "register/register_classes.h"
#include <godot_cpp/classes/xr_pose.hpp>

using namespace godot;

void register_classes_XRPoseRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<XRPose>>("XRPoseRef").constructor<XRPose *>();
}