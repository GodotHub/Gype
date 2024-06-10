#include "register/register_classes.h"
#include <godot_cpp/classes/segment_shape2d.hpp>

using namespace godot;

void register_classes_SegmentShape2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SegmentShape2D>>("SegmentShape2DRef").constructor<SegmentShape2D *>();
}