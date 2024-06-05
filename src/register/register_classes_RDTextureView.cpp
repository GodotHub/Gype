#include <godot_cpp/classes/rd_texture_view.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_RDTextureView() {
	qjs::Context::Module &_module = _General;
	_module.class_<RDTextureView>("RDTextureView")
			.constructor<>()
			.property<&RDTextureView::get_format_override, &RDTextureView::set_format_override>("format_override")
			.property<&RDTextureView::get_swizzle_r, &RDTextureView::set_swizzle_r>("swizzle_r")
			.property<&RDTextureView::get_swizzle_g, &RDTextureView::set_swizzle_g>("swizzle_g")
			.property<&RDTextureView::get_swizzle_b, &RDTextureView::set_swizzle_b>("swizzle_b")
			.property<&RDTextureView::get_swizzle_a, &RDTextureView::set_swizzle_a>("swizzle_a");
}