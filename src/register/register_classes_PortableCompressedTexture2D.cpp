#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/portable_compressed_texture2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PortableCompressedTexture2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PortableCompressedTexture2D>("PortableCompressedTexture2D")
			.constructor<>()
			.base<Texture2D>()
			.property<static_cast<Vector2 (PortableCompressedTexture2D::*)() const>(&PortableCompressedTexture2D::get_size_override), static_cast<void (PortableCompressedTexture2D::*)(const Vector2 &)>(&PortableCompressedTexture2D::set_size_override)>((new std::string("size_override"))->c_str())
			.property<static_cast<bool (PortableCompressedTexture2D::*)() const>(&PortableCompressedTexture2D::is_keeping_compressed_buffer), static_cast<void (PortableCompressedTexture2D::*)(bool)>(&PortableCompressedTexture2D::set_keep_compressed_buffer)>((new std::string("keep_compressed_buffer"))->c_str())
			.fun<static_cast<void (PortableCompressedTexture2D::*)(const Ref<Image> &, PortableCompressedTexture2D::CompressionMode, bool, double)>(&PortableCompressedTexture2D::create_from_image)>((new std::string("create_from_image"))->c_str())
			.fun<static_cast<Image::Format (PortableCompressedTexture2D::*)() const>(&PortableCompressedTexture2D::get_format)>((new std::string("get_format"))->c_str())
			.fun<static_cast<PortableCompressedTexture2D::CompressionMode (PortableCompressedTexture2D::*)() const>(&PortableCompressedTexture2D::get_compression_mode)>((new std::string("get_compression_mode"))->c_str())
			.static_fun<static_cast<void (*)(bool)>(&PortableCompressedTexture2D::set_keep_all_compressed_buffers)>((new std::string("set_keep_all_compressed_buffers"))->c_str())
			.static_fun<static_cast<bool (*)()>(&PortableCompressedTexture2D::is_keeping_all_compressed_buffers)>((new std::string("is_keeping_all_compressed_buffers"))->c_str());
	qjs::Value _CompressionMode = context->newObject();
	_CompressionMode[(new std::string("COMPRESSION_MODE_LOSSLESS"))->c_str()] = PortableCompressedTexture2D::CompressionMode::COMPRESSION_MODE_LOSSLESS;
	_CompressionMode[(new std::string("COMPRESSION_MODE_LOSSY"))->c_str()] = PortableCompressedTexture2D::CompressionMode::COMPRESSION_MODE_LOSSY;
	_CompressionMode[(new std::string("COMPRESSION_MODE_BASIS_UNIVERSAL"))->c_str()] = PortableCompressedTexture2D::CompressionMode::COMPRESSION_MODE_BASIS_UNIVERSAL;
	_CompressionMode[(new std::string("COMPRESSION_MODE_S3TC"))->c_str()] = PortableCompressedTexture2D::CompressionMode::COMPRESSION_MODE_S3TC;
	_CompressionMode[(new std::string("COMPRESSION_MODE_ETC2"))->c_str()] = PortableCompressedTexture2D::CompressionMode::COMPRESSION_MODE_ETC2;
	_CompressionMode[(new std::string("COMPRESSION_MODE_BPTC"))->c_str()] = PortableCompressedTexture2D::CompressionMode::COMPRESSION_MODE_BPTC;
	_module.add("CompressionMode", std::move(_CompressionMode));
}