#include <godot_cpp/classes/gltf_buffer_view.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_GLTFBufferView() {
	qjs::Context::Module &_module = _General;
	_module.class_<GLTFBufferView>("GLTFBufferView")
			.constructor<>()
			.property<&GLTFBufferView::get_buffer, &GLTFBufferView::set_buffer>("buffer")
			.property<&GLTFBufferView::get_byte_offset, &GLTFBufferView::set_byte_offset>("byte_offset")
			.property<&GLTFBufferView::get_byte_length, &GLTFBufferView::set_byte_length>("byte_length")
			.property<&GLTFBufferView::get_byte_stride, &GLTFBufferView::set_byte_stride>("byte_stride")
			.property<&GLTFBufferView::get_indices, &GLTFBufferView::set_indices>("indices");
}