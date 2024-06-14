
#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_FileAccess() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<FileAccess>("FileAccess")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<bool (FileAccess::*)() const>(&FileAccess::is_big_endian), static_cast<void (FileAccess::*)(bool)>(&FileAccess::set_big_endian)>((new std::string("big_endian"))->c_str())
			.static_fun<static_cast<Ref<FileAccess> (*)(const String &, FileAccess::ModeFlags)>(&FileAccess::open)>((new std::string("open"))->c_str())
			.static_fun<static_cast<Ref<FileAccess> (*)(const String &, FileAccess::ModeFlags, const PackedByteArray &)>(&FileAccess::open_encrypted)>((new std::string("open_encrypted"))->c_str())
			.static_fun<static_cast<Ref<FileAccess> (*)(const String &, FileAccess::ModeFlags, const String &)>(&FileAccess::open_encrypted_with_pass)>((new std::string("open_encrypted_with_pass"))->c_str())
			.static_fun<static_cast<Ref<FileAccess> (*)(const String &, FileAccess::ModeFlags, FileAccess::CompressionMode)>(&FileAccess::open_compressed)>((new std::string("open_compressed"))->c_str())
			.static_fun<static_cast<Error (*)()>(&FileAccess::get_open_error)>((new std::string("get_open_error"))->c_str())
			.static_fun<static_cast<PackedByteArray (*)(const String &)>(&FileAccess::get_file_as_bytes)>((new std::string("get_file_as_bytes"))->c_str())
			.static_fun<static_cast<String (*)(const String &)>(&FileAccess::get_file_as_string)>((new std::string("get_file_as_string"))->c_str())
			.fun<static_cast<Error (FileAccess::*)(int64_t)>(&FileAccess::resize)>((new std::string("resize"))->c_str())
			.fun<static_cast<void (FileAccess::*)()>(&FileAccess::flush)>((new std::string("flush"))->c_str())
			.fun<static_cast<String (FileAccess::*)() const>(&FileAccess::get_path)>((new std::string("get_path"))->c_str())
			.fun<static_cast<String (FileAccess::*)() const>(&FileAccess::get_path_absolute)>((new std::string("get_path_absolute"))->c_str())
			.fun<static_cast<bool (FileAccess::*)() const>(&FileAccess::is_open)>((new std::string("is_open"))->c_str())
			.fun<static_cast<void (FileAccess::*)(uint64_t)>(&FileAccess::seek)>((new std::string("seek"))->c_str())
			.fun<static_cast<void (FileAccess::*)(int64_t)>(&FileAccess::seek_end)>((new std::string("seek_end"))->c_str())
			.fun<static_cast<uint64_t (FileAccess::*)() const>(&FileAccess::get_position)>((new std::string("get_position"))->c_str())
			.fun<static_cast<uint64_t (FileAccess::*)() const>(&FileAccess::get_length)>((new std::string("get_length"))->c_str())
			.fun<static_cast<bool (FileAccess::*)() const>(&FileAccess::eof_reached)>((new std::string("eof_reached"))->c_str())
			.fun<static_cast<uint8_t (FileAccess::*)() const>(&FileAccess::get_8)>((new std::string("get_8"))->c_str())
			.fun<static_cast<uint16_t (FileAccess::*)() const>(&FileAccess::get_16)>((new std::string("get_16"))->c_str())
			.fun<static_cast<uint32_t (FileAccess::*)() const>(&FileAccess::get_32)>((new std::string("get_32"))->c_str())
			.fun<static_cast<uint64_t (FileAccess::*)() const>(&FileAccess::get_64)>((new std::string("get_64"))->c_str())
			.fun<static_cast<double (FileAccess::*)() const>(&FileAccess::get_float)>((new std::string("get_float"))->c_str())
			.fun<static_cast<double (FileAccess::*)() const>(&FileAccess::get_double)>((new std::string("get_double"))->c_str())
			.fun<static_cast<double (FileAccess::*)() const>(&FileAccess::get_real)>((new std::string("get_real"))->c_str())
			.fun<static_cast<PackedByteArray (FileAccess::*)(int64_t) const>(&FileAccess::get_buffer)>((new std::string("get_buffer"))->c_str())
			.fun<static_cast<String (FileAccess::*)() const>(&FileAccess::get_line)>((new std::string("get_line"))->c_str())
			.fun<static_cast<PackedStringArray (FileAccess::*)(const String &) const>(&FileAccess::get_csv_line)>((new std::string("get_csv_line"))->c_str())
			.fun<static_cast<String (FileAccess::*)(bool) const>(&FileAccess::get_as_text)>((new std::string("get_as_text"))->c_str())
			.static_fun<static_cast<String (*)(const String &)>(&FileAccess::get_md5)>((new std::string("get_md5"))->c_str())
			.static_fun<static_cast<String (*)(const String &)>(&FileAccess::get_sha256)>((new std::string("get_sha256"))->c_str())
			.fun<static_cast<Error (FileAccess::*)() const>(&FileAccess::get_error)>((new std::string("get_error"))->c_str())
			.fun<static_cast<Variant (FileAccess::*)(bool) const>(&FileAccess::get_var)>((new std::string("get_var"))->c_str())
			.fun<static_cast<void (FileAccess::*)(uint8_t)>(&FileAccess::store_8)>((new std::string("store_8"))->c_str())
			.fun<static_cast<void (FileAccess::*)(uint16_t)>(&FileAccess::store_16)>((new std::string("store_16"))->c_str())
			.fun<static_cast<void (FileAccess::*)(uint32_t)>(&FileAccess::store_32)>((new std::string("store_32"))->c_str())
			.fun<static_cast<void (FileAccess::*)(uint64_t)>(&FileAccess::store_64)>((new std::string("store_64"))->c_str())
			.fun<static_cast<void (FileAccess::*)(double)>(&FileAccess::store_float)>((new std::string("store_float"))->c_str())
			.fun<static_cast<void (FileAccess::*)(double)>(&FileAccess::store_double)>((new std::string("store_double"))->c_str())
			.fun<static_cast<void (FileAccess::*)(double)>(&FileAccess::store_real)>((new std::string("store_real"))->c_str())
			.fun<static_cast<void (FileAccess::*)(const PackedByteArray &)>(&FileAccess::store_buffer)>((new std::string("store_buffer"))->c_str())
			.fun<static_cast<void (FileAccess::*)(const String &)>(&FileAccess::store_line)>((new std::string("store_line"))->c_str())
			.fun<static_cast<void (FileAccess::*)(const PackedStringArray &, const String &)>(&FileAccess::store_csv_line)>((new std::string("store_csv_line"))->c_str())
			.fun<static_cast<void (FileAccess::*)(const String &)>(&FileAccess::store_string)>((new std::string("store_string"))->c_str())
			.fun<static_cast<void (FileAccess::*)(const Variant &, bool)>(&FileAccess::store_var)>((new std::string("store_var"))->c_str())
			.fun<static_cast<void (FileAccess::*)(const String &)>(&FileAccess::store_pascal_string)>((new std::string("store_pascal_string"))->c_str())
			.fun<static_cast<String (FileAccess::*)()>(&FileAccess::get_pascal_string)>((new std::string("get_pascal_string"))->c_str())
			.fun<static_cast<void (FileAccess::*)()>(&FileAccess::close)>((new std::string("close"))->c_str())
			.static_fun<static_cast<bool (*)(const String &)>(&FileAccess::file_exists)>((new std::string("file_exists"))->c_str())
			.static_fun<static_cast<uint64_t (*)(const String &)>(&FileAccess::get_modified_time)>((new std::string("get_modified_time"))->c_str())
			.static_fun<static_cast<BitField<FileAccess::UnixPermissionFlags> (*)(const String &)>(&FileAccess::get_unix_permissions)>((new std::string("get_unix_permissions"))->c_str())
			.static_fun<static_cast<Error (*)(const String &, BitField<FileAccess::UnixPermissionFlags>)>(&FileAccess::set_unix_permissions)>((new std::string("set_unix_permissions"))->c_str())
			.static_fun<static_cast<bool (*)(const String &)>(&FileAccess::get_hidden_attribute)>((new std::string("get_hidden_attribute"))->c_str())
			.static_fun<static_cast<Error (*)(const String &, bool)>(&FileAccess::set_hidden_attribute)>((new std::string("set_hidden_attribute"))->c_str())
			.static_fun<static_cast<Error (*)(const String &, bool)>(&FileAccess::set_read_only_attribute)>((new std::string("set_read_only_attribute"))->c_str())
			.static_fun<static_cast<bool (*)(const String &)>(&FileAccess::get_read_only_attribute)>((new std::string("get_read_only_attribute"))->c_str());
	qjs::Value _ModeFlags = context->newObject();
	_ModeFlags[(new std::string("READ"))->c_str()] = FileAccess::ModeFlags::READ;
	_ModeFlags[(new std::string("WRITE"))->c_str()] = FileAccess::ModeFlags::WRITE;
	_ModeFlags[(new std::string("READ_WRITE"))->c_str()] = FileAccess::ModeFlags::READ_WRITE;
	_ModeFlags[(new std::string("WRITE_READ"))->c_str()] = FileAccess::ModeFlags::WRITE_READ;
	_module.add("ModeFlags", std::move(_ModeFlags));
	qjs::Value _CompressionMode = context->newObject();
	_CompressionMode[(new std::string("COMPRESSION_FASTLZ"))->c_str()] = FileAccess::CompressionMode::COMPRESSION_FASTLZ;
	_CompressionMode[(new std::string("COMPRESSION_DEFLATE"))->c_str()] = FileAccess::CompressionMode::COMPRESSION_DEFLATE;
	_CompressionMode[(new std::string("COMPRESSION_ZSTD"))->c_str()] = FileAccess::CompressionMode::COMPRESSION_ZSTD;
	_CompressionMode[(new std::string("COMPRESSION_GZIP"))->c_str()] = FileAccess::CompressionMode::COMPRESSION_GZIP;
	_CompressionMode[(new std::string("COMPRESSION_BROTLI"))->c_str()] = FileAccess::CompressionMode::COMPRESSION_BROTLI;
	_module.add("CompressionMode", std::move(_CompressionMode));
	qjs::Value _UnixPermissionFlags = context->newObject();
	_UnixPermissionFlags[(new std::string("UNIX_READ_OWNER"))->c_str()] = FileAccess::UnixPermissionFlags::UNIX_READ_OWNER;
	_UnixPermissionFlags[(new std::string("UNIX_WRITE_OWNER"))->c_str()] = FileAccess::UnixPermissionFlags::UNIX_WRITE_OWNER;
	_UnixPermissionFlags[(new std::string("UNIX_EXECUTE_OWNER"))->c_str()] = FileAccess::UnixPermissionFlags::UNIX_EXECUTE_OWNER;
	_UnixPermissionFlags[(new std::string("UNIX_READ_GROUP"))->c_str()] = FileAccess::UnixPermissionFlags::UNIX_READ_GROUP;
	_UnixPermissionFlags[(new std::string("UNIX_WRITE_GROUP"))->c_str()] = FileAccess::UnixPermissionFlags::UNIX_WRITE_GROUP;
	_UnixPermissionFlags[(new std::string("UNIX_EXECUTE_GROUP"))->c_str()] = FileAccess::UnixPermissionFlags::UNIX_EXECUTE_GROUP;
	_UnixPermissionFlags[(new std::string("UNIX_READ_OTHER"))->c_str()] = FileAccess::UnixPermissionFlags::UNIX_READ_OTHER;
	_UnixPermissionFlags[(new std::string("UNIX_WRITE_OTHER"))->c_str()] = FileAccess::UnixPermissionFlags::UNIX_WRITE_OTHER;
	_UnixPermissionFlags[(new std::string("UNIX_EXECUTE_OTHER"))->c_str()] = FileAccess::UnixPermissionFlags::UNIX_EXECUTE_OTHER;
	_UnixPermissionFlags[(new std::string("UNIX_SET_USER_ID"))->c_str()] = FileAccess::UnixPermissionFlags::UNIX_SET_USER_ID;
	_UnixPermissionFlags[(new std::string("UNIX_SET_GROUP_ID"))->c_str()] = FileAccess::UnixPermissionFlags::UNIX_SET_GROUP_ID;
	_UnixPermissionFlags[(new std::string("UNIX_RESTRICTED_DELETE"))->c_str()] = FileAccess::UnixPermissionFlags::UNIX_RESTRICTED_DELETE;
	_module.add("UnixPermissionFlags", std::move(_UnixPermissionFlags));
}