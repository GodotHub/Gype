#include <godot_cpp/classes/portable_compressed_texture2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PortableCompressedTexture2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PortableCompressedTexture2D>("PortableCompressedTexture2D")
            .constructor<>()
            .base<Texture2D>()
            .property<static_cast<Vector2(PortableCompressedTexture2D::*)()const>(&PortableCompressedTexture2D::get_size_override),static_cast<void(PortableCompressedTexture2D::*)(const Vector2 &)>(&PortableCompressedTexture2D::set_size_override)>("size_override")
            .property<static_cast<bool(PortableCompressedTexture2D::*)()const>(&PortableCompressedTexture2D::is_keeping_compressed_buffer),static_cast<void(PortableCompressedTexture2D::*)(bool)>(&PortableCompressedTexture2D::set_keep_compressed_buffer)>("keep_compressed_buffer")
            .fun<static_cast<void(PortableCompressedTexture2D::*)(const Ref<Image> &,PortableCompressedTexture2D::CompressionMode,bool,double)>(&PortableCompressedTexture2D::create_from_image)>("create_from_image")
            .fun<static_cast<Image::Format(PortableCompressedTexture2D::*)()const>(&PortableCompressedTexture2D::get_format)>("get_format")
            .fun<static_cast<PortableCompressedTexture2D::CompressionMode(PortableCompressedTexture2D::*)()const>(&PortableCompressedTexture2D::get_compression_mode)>("get_compression_mode")
            .static_fun<static_cast<void(*)(bool)>(&PortableCompressedTexture2D::set_keep_all_compressed_buffers)>("set_keep_all_compressed_buffers")
            .static_fun<static_cast<bool(*)()>(&PortableCompressedTexture2D::is_keeping_all_compressed_buffers)>("is_keeping_all_compressed_buffers")
;    qjs::Value _CompressionMode = context->newObject();
    _CompressionMode["COMPRESSION_MODE_LOSSLESS"] = PortableCompressedTexture2D::CompressionMode::COMPRESSION_MODE_LOSSLESS;
    _CompressionMode["COMPRESSION_MODE_LOSSY"] = PortableCompressedTexture2D::CompressionMode::COMPRESSION_MODE_LOSSY;
    _CompressionMode["COMPRESSION_MODE_BASIS_UNIVERSAL"] = PortableCompressedTexture2D::CompressionMode::COMPRESSION_MODE_BASIS_UNIVERSAL;
    _CompressionMode["COMPRESSION_MODE_S3TC"] = PortableCompressedTexture2D::CompressionMode::COMPRESSION_MODE_S3TC;
    _CompressionMode["COMPRESSION_MODE_ETC2"] = PortableCompressedTexture2D::CompressionMode::COMPRESSION_MODE_ETC2;
    _CompressionMode["COMPRESSION_MODE_BPTC"] = PortableCompressedTexture2D::CompressionMode::COMPRESSION_MODE_BPTC;
    _module.add("CompressionMode", std::move(_CompressionMode));
}