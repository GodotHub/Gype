#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/portable_compressed_texture2d.hpp>
#include <godot_cpp/classes/ref.hpp>


#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_PortableCompressedTexture2D() {
	qjs::Context::Module &_module = _General;
	_module.class_<PortableCompressedTexture2D>("PortableCompressedTexture2D")
			.constructor<>()
			.property<&PortableCompressedTexture2D::get_size_override, &PortableCompressedTexture2D::set_size_override>("size_override")
			.property<&PortableCompressedTexture2D::is_keeping_compressed_buffer, &PortableCompressedTexture2D::set_keep_compressed_buffer>("keep_compressed_buffer")
			.fun<static_cast<void (PortableCompressedTexture2D::*)(const Ref<Image> &, PortableCompressedTexture2D::CompressionMode, bool, double)>(&PortableCompressedTexture2D::create_from_image)>("create_from_image")
			.fun<static_cast<Image::Format (PortableCompressedTexture2D::*)() const>(&PortableCompressedTexture2D::get_format)>("get_format")
			.fun<static_cast<PortableCompressedTexture2D::CompressionMode (PortableCompressedTexture2D::*)() const>(&PortableCompressedTexture2D::get_compression_mode)>("get_compression_mode")
			.static_fun<&PortableCompressedTexture2D::set_keep_all_compressed_buffers>("set_keep_all_compressed_buffers")
			.static_fun<&PortableCompressedTexture2D::is_keeping_all_compressed_buffers>("is_keeping_all_compressed_buffers");
}