#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_FileAccess() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<FileAccess>("FileAccess")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<bool(FileAccess::*)()const>(&FileAccess::is_big_endian),static_cast<void(FileAccess::*)(bool)>(&FileAccess::set_big_endian)>("big_endian")
            .static_fun<static_cast<Ref<FileAccess>(*)(const String &,FileAccess::ModeFlags)>(&FileAccess::open)>("open")
            .static_fun<static_cast<Ref<FileAccess>(*)(const String &,FileAccess::ModeFlags,const PackedByteArray &)>(&FileAccess::open_encrypted)>("open_encrypted")
            .static_fun<static_cast<Ref<FileAccess>(*)(const String &,FileAccess::ModeFlags,const String &)>(&FileAccess::open_encrypted_with_pass)>("open_encrypted_with_pass")
            .static_fun<static_cast<Ref<FileAccess>(*)(const String &,FileAccess::ModeFlags,FileAccess::CompressionMode)>(&FileAccess::open_compressed)>("open_compressed")
            .static_fun<static_cast<Error(*)()>(&FileAccess::get_open_error)>("get_open_error")
            .static_fun<static_cast<PackedByteArray(*)(const String &)>(&FileAccess::get_file_as_bytes)>("get_file_as_bytes")
            .static_fun<static_cast<String(*)(const String &)>(&FileAccess::get_file_as_string)>("get_file_as_string")
            .fun<static_cast<Error(FileAccess::*)(int64_t)>(&FileAccess::resize)>("resize")
            .fun<static_cast<void(FileAccess::*)()>(&FileAccess::flush)>("flush")
            .fun<static_cast<String(FileAccess::*)()const>(&FileAccess::get_path)>("get_path")
            .fun<static_cast<String(FileAccess::*)()const>(&FileAccess::get_path_absolute)>("get_path_absolute")
            .fun<static_cast<bool(FileAccess::*)()const>(&FileAccess::is_open)>("is_open")
            .fun<static_cast<void(FileAccess::*)(uint64_t)>(&FileAccess::seek)>("seek")
            .fun<static_cast<void(FileAccess::*)(int64_t)>(&FileAccess::seek_end)>("seek_end")
            .fun<static_cast<uint64_t(FileAccess::*)()const>(&FileAccess::get_position)>("get_position")
            .fun<static_cast<uint64_t(FileAccess::*)()const>(&FileAccess::get_length)>("get_length")
            .fun<static_cast<bool(FileAccess::*)()const>(&FileAccess::eof_reached)>("eof_reached")
            .fun<static_cast<uint8_t(FileAccess::*)()const>(&FileAccess::get_8)>("get_8")
            .fun<static_cast<uint16_t(FileAccess::*)()const>(&FileAccess::get_16)>("get_16")
            .fun<static_cast<uint32_t(FileAccess::*)()const>(&FileAccess::get_32)>("get_32")
            .fun<static_cast<uint64_t(FileAccess::*)()const>(&FileAccess::get_64)>("get_64")
            .fun<static_cast<double(FileAccess::*)()const>(&FileAccess::get_float)>("get_float")
            .fun<static_cast<double(FileAccess::*)()const>(&FileAccess::get_double)>("get_double")
            .fun<static_cast<double(FileAccess::*)()const>(&FileAccess::get_real)>("get_real")
            .fun<static_cast<PackedByteArray(FileAccess::*)(int64_t)const>(&FileAccess::get_buffer)>("get_buffer")
            .fun<static_cast<String(FileAccess::*)()const>(&FileAccess::get_line)>("get_line")
            .fun<static_cast<PackedStringArray(FileAccess::*)(const String &)const>(&FileAccess::get_csv_line)>("get_csv_line")
            .fun<static_cast<String(FileAccess::*)(bool)const>(&FileAccess::get_as_text)>("get_as_text")
            .static_fun<static_cast<String(*)(const String &)>(&FileAccess::get_md5)>("get_md5")
            .static_fun<static_cast<String(*)(const String &)>(&FileAccess::get_sha256)>("get_sha256")
            .fun<static_cast<Error(FileAccess::*)()const>(&FileAccess::get_error)>("get_error")
            .fun<static_cast<Variant(FileAccess::*)(bool)const>(&FileAccess::get_var)>("get_var")
            .fun<static_cast<void(FileAccess::*)(uint8_t)>(&FileAccess::store_8)>("store_8")
            .fun<static_cast<void(FileAccess::*)(uint16_t)>(&FileAccess::store_16)>("store_16")
            .fun<static_cast<void(FileAccess::*)(uint32_t)>(&FileAccess::store_32)>("store_32")
            .fun<static_cast<void(FileAccess::*)(uint64_t)>(&FileAccess::store_64)>("store_64")
            .fun<static_cast<void(FileAccess::*)(double)>(&FileAccess::store_float)>("store_float")
            .fun<static_cast<void(FileAccess::*)(double)>(&FileAccess::store_double)>("store_double")
            .fun<static_cast<void(FileAccess::*)(double)>(&FileAccess::store_real)>("store_real")
            .fun<static_cast<void(FileAccess::*)(const PackedByteArray &)>(&FileAccess::store_buffer)>("store_buffer")
            .fun<static_cast<void(FileAccess::*)(const String &)>(&FileAccess::store_line)>("store_line")
            .fun<static_cast<void(FileAccess::*)(const PackedStringArray &,const String &)>(&FileAccess::store_csv_line)>("store_csv_line")
            .fun<static_cast<void(FileAccess::*)(const String &)>(&FileAccess::store_string)>("store_string")
            .fun<static_cast<void(FileAccess::*)(const Variant &,bool)>(&FileAccess::store_var)>("store_var")
            .fun<static_cast<void(FileAccess::*)(const String &)>(&FileAccess::store_pascal_string)>("store_pascal_string")
            .fun<static_cast<String(FileAccess::*)()>(&FileAccess::get_pascal_string)>("get_pascal_string")
            .fun<static_cast<void(FileAccess::*)()>(&FileAccess::close)>("close")
            .static_fun<static_cast<bool(*)(const String &)>(&FileAccess::file_exists)>("file_exists")
            .static_fun<static_cast<uint64_t(*)(const String &)>(&FileAccess::get_modified_time)>("get_modified_time")
            .static_fun<static_cast<BitField<FileAccess::UnixPermissionFlags>(*)(const String &)>(&FileAccess::get_unix_permissions)>("get_unix_permissions")
            .static_fun<static_cast<Error(*)(const String &,BitField<FileAccess::UnixPermissionFlags>)>(&FileAccess::set_unix_permissions)>("set_unix_permissions")
            .static_fun<static_cast<bool(*)(const String &)>(&FileAccess::get_hidden_attribute)>("get_hidden_attribute")
            .static_fun<static_cast<Error(*)(const String &,bool)>(&FileAccess::set_hidden_attribute)>("set_hidden_attribute")
            .static_fun<static_cast<Error(*)(const String &,bool)>(&FileAccess::set_read_only_attribute)>("set_read_only_attribute")
            .static_fun<static_cast<bool(*)(const String &)>(&FileAccess::get_read_only_attribute)>("get_read_only_attribute")
;    qjs::Value _ModeFlags = context->newObject();
    _ModeFlags["READ"] = FileAccess::ModeFlags::READ;
    _ModeFlags["WRITE"] = FileAccess::ModeFlags::WRITE;
    _ModeFlags["READ_WRITE"] = FileAccess::ModeFlags::READ_WRITE;
    _ModeFlags["WRITE_READ"] = FileAccess::ModeFlags::WRITE_READ;
    _module.add("ModeFlags", std::move(_ModeFlags));
    qjs::Value _CompressionMode = context->newObject();
    _CompressionMode["COMPRESSION_FASTLZ"] = FileAccess::CompressionMode::COMPRESSION_FASTLZ;
    _CompressionMode["COMPRESSION_DEFLATE"] = FileAccess::CompressionMode::COMPRESSION_DEFLATE;
    _CompressionMode["COMPRESSION_ZSTD"] = FileAccess::CompressionMode::COMPRESSION_ZSTD;
    _CompressionMode["COMPRESSION_GZIP"] = FileAccess::CompressionMode::COMPRESSION_GZIP;
    _CompressionMode["COMPRESSION_BROTLI"] = FileAccess::CompressionMode::COMPRESSION_BROTLI;
    _module.add("CompressionMode", std::move(_CompressionMode));
    qjs::Value _UnixPermissionFlags = context->newObject();
    _UnixPermissionFlags["UNIX_READ_OWNER"] = FileAccess::UnixPermissionFlags::UNIX_READ_OWNER;
    _UnixPermissionFlags["UNIX_WRITE_OWNER"] = FileAccess::UnixPermissionFlags::UNIX_WRITE_OWNER;
    _UnixPermissionFlags["UNIX_EXECUTE_OWNER"] = FileAccess::UnixPermissionFlags::UNIX_EXECUTE_OWNER;
    _UnixPermissionFlags["UNIX_READ_GROUP"] = FileAccess::UnixPermissionFlags::UNIX_READ_GROUP;
    _UnixPermissionFlags["UNIX_WRITE_GROUP"] = FileAccess::UnixPermissionFlags::UNIX_WRITE_GROUP;
    _UnixPermissionFlags["UNIX_EXECUTE_GROUP"] = FileAccess::UnixPermissionFlags::UNIX_EXECUTE_GROUP;
    _UnixPermissionFlags["UNIX_READ_OTHER"] = FileAccess::UnixPermissionFlags::UNIX_READ_OTHER;
    _UnixPermissionFlags["UNIX_WRITE_OTHER"] = FileAccess::UnixPermissionFlags::UNIX_WRITE_OTHER;
    _UnixPermissionFlags["UNIX_EXECUTE_OTHER"] = FileAccess::UnixPermissionFlags::UNIX_EXECUTE_OTHER;
    _UnixPermissionFlags["UNIX_SET_USER_ID"] = FileAccess::UnixPermissionFlags::UNIX_SET_USER_ID;
    _UnixPermissionFlags["UNIX_SET_GROUP_ID"] = FileAccess::UnixPermissionFlags::UNIX_SET_GROUP_ID;
    _UnixPermissionFlags["UNIX_RESTRICTED_DELETE"] = FileAccess::UnixPermissionFlags::UNIX_RESTRICTED_DELETE;
    _module.add("UnixPermissionFlags", std::move(_UnixPermissionFlags));
}