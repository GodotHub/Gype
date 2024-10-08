
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void file_access_class_finalizer(JSRuntime *rt, JSValue val) {
	FileAccess *file_access = static_cast<FileAccess *>(JS_GetOpaque(val, FileAccess::__class_id));
	if (file_access)
		FileAccess::free(nullptr, file_access);
}

static JSClassDef file_access_class_def = {
	"FileAccess",
	.finalizer = file_access_class_finalizer
};

static JSValue file_access_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	FileAccess *file_access_class;
	JSValue obj = JS_NewObjectClass(ctx, FileAccess::__class_id);
	if (JS_IsException(obj))
		return obj;
	file_access_class = memnew(FileAccess);
	if (!file_access_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, file_access_class);
	return obj;
}
static JSValue file_access_class_resize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&FileAccess::resize, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_flush(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::flush, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_get_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_path, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_path_absolute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_path_absolute, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_is_open(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::is_open, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_seek(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::seek, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_seek_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::seek_end, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_position, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_length, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_eof_reached(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::eof_reached, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_8, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_16, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_32, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_64, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_float(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_float, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_double(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_double, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_real(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_real, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(static_cast<PackedByteArray(FileAccess::*)(int64_t) const>(&FileAccess::get_buffer), FileAccess::__class_id, ctx, this_val, argv);
};
	
static JSValue file_access_class_get_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_line, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_csv_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_csv_line, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_as_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_as_text, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_is_big_endian(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::is_big_endian, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_set_big_endian(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::set_big_endian, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_get_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_error, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_var(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileAccess::get_var, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_store_8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::store_8, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_store_16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::store_16, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_store_32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::store_32, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_store_64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::store_64, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_store_float(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::store_float, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_store_double(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::store_double, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_store_real(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::store_real, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_store_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(static_cast<void(FileAccess::*)(const PackedByteArray &)>(&FileAccess::store_buffer), FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_store_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::store_line, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_store_csv_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::store_csv_line, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_store_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::store_string, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_store_var(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::store_var, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_store_pascal_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::store_pascal_string, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_get_pascal_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&FileAccess::get_pascal_string, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_close(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileAccess::close, FileAccess::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_access_class_open(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::open, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_open_encrypted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::open_encrypted, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_open_encrypted_with_pass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::open_encrypted_with_pass, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_open_compressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::open_compressed, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_open_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::get_open_error, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_file_as_bytes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::get_file_as_bytes, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_file_as_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::get_file_as_string, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_md5(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::get_md5, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_sha256(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::get_sha256, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_file_exists(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::file_exists, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_modified_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::get_modified_time, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_unix_permissions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::get_unix_permissions, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_set_unix_permissions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::set_unix_permissions, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_hidden_attribute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::get_hidden_attribute, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_set_hidden_attribute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::set_hidden_attribute, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_set_read_only_attribute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::set_read_only_attribute, FileAccess::__class_id, ctx, this_val, argv);
};
static JSValue file_access_class_get_read_only_attribute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FileAccess::get_read_only_attribute, FileAccess::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry file_access_class_proto_funcs[] = {
	JS_CFUNC_DEF("resize", 1, &file_access_class_resize),
	JS_CFUNC_DEF("flush", 0, &file_access_class_flush),
	JS_CFUNC_DEF("get_path", 0, &file_access_class_get_path),
	JS_CFUNC_DEF("get_path_absolute", 0, &file_access_class_get_path_absolute),
	JS_CFUNC_DEF("is_open", 0, &file_access_class_is_open),
	JS_CFUNC_DEF("seek", 1, &file_access_class_seek),
	JS_CFUNC_DEF("seek_end", 1, &file_access_class_seek_end),
	JS_CFUNC_DEF("get_position", 0, &file_access_class_get_position),
	JS_CFUNC_DEF("get_length", 0, &file_access_class_get_length),
	JS_CFUNC_DEF("eof_reached", 0, &file_access_class_eof_reached),
	JS_CFUNC_DEF("get_8", 0, &file_access_class_get_8),
	JS_CFUNC_DEF("get_16", 0, &file_access_class_get_16),
	JS_CFUNC_DEF("get_32", 0, &file_access_class_get_32),
	JS_CFUNC_DEF("get_64", 0, &file_access_class_get_64),
	JS_CFUNC_DEF("get_float", 0, &file_access_class_get_float),
	JS_CFUNC_DEF("get_double", 0, &file_access_class_get_double),
	JS_CFUNC_DEF("get_real", 0, &file_access_class_get_real),
	JS_CFUNC_DEF("get_buffer", 1, &file_access_class_get_buffer),
	JS_CFUNC_DEF("get_line", 0, &file_access_class_get_line),
	JS_CFUNC_DEF("get_csv_line", 1, &file_access_class_get_csv_line),
	JS_CFUNC_DEF("get_as_text", 1, &file_access_class_get_as_text),
	JS_CFUNC_DEF("is_big_endian", 0, &file_access_class_is_big_endian),
	JS_CFUNC_DEF("set_big_endian", 1, &file_access_class_set_big_endian),
	JS_CFUNC_DEF("get_error", 0, &file_access_class_get_error),
	JS_CFUNC_DEF("get_var", 1, &file_access_class_get_var),
	JS_CFUNC_DEF("store_8", 1, &file_access_class_store_8),
	JS_CFUNC_DEF("store_16", 1, &file_access_class_store_16),
	JS_CFUNC_DEF("store_32", 1, &file_access_class_store_32),
	JS_CFUNC_DEF("store_64", 1, &file_access_class_store_64),
	JS_CFUNC_DEF("store_float", 1, &file_access_class_store_float),
	JS_CFUNC_DEF("store_double", 1, &file_access_class_store_double),
	JS_CFUNC_DEF("store_real", 1, &file_access_class_store_real),
	JS_CFUNC_DEF("store_buffer", 1, &file_access_class_store_buffer),
	JS_CFUNC_DEF("store_line", 1, &file_access_class_store_line),
	JS_CFUNC_DEF("store_csv_line", 2, &file_access_class_store_csv_line),
	JS_CFUNC_DEF("store_string", 1, &file_access_class_store_string),
	JS_CFUNC_DEF("store_var", 2, &file_access_class_store_var),
	JS_CFUNC_DEF("store_pascal_string", 1, &file_access_class_store_pascal_string),
	JS_CFUNC_DEF("get_pascal_string", 0, &file_access_class_get_pascal_string),
	JS_CFUNC_DEF("close", 0, &file_access_class_close),
};
static const JSCFunctionListEntry file_access_class_static_funcs[] = {
	JS_CFUNC_DEF("open", 2, &file_access_class_open),
	JS_CFUNC_DEF("open_encrypted", 3, &file_access_class_open_encrypted),
	JS_CFUNC_DEF("open_encrypted_with_pass", 3, &file_access_class_open_encrypted_with_pass),
	JS_CFUNC_DEF("open_compressed", 3, &file_access_class_open_compressed),
	JS_CFUNC_DEF("get_open_error", 0, &file_access_class_get_open_error),
	JS_CFUNC_DEF("get_file_as_bytes", 1, &file_access_class_get_file_as_bytes),
	JS_CFUNC_DEF("get_file_as_string", 1, &file_access_class_get_file_as_string),
	JS_CFUNC_DEF("get_md5", 1, &file_access_class_get_md5),
	JS_CFUNC_DEF("get_sha256", 1, &file_access_class_get_sha256),
	JS_CFUNC_DEF("file_exists", 1, &file_access_class_file_exists),
	JS_CFUNC_DEF("get_modified_time", 1, &file_access_class_get_modified_time),
	JS_CFUNC_DEF("get_unix_permissions", 1, &file_access_class_get_unix_permissions),
	JS_CFUNC_DEF("set_unix_permissions", 2, &file_access_class_set_unix_permissions),
	JS_CFUNC_DEF("get_hidden_attribute", 1, &file_access_class_get_hidden_attribute),
	JS_CFUNC_DEF("set_hidden_attribute", 2, &file_access_class_set_hidden_attribute),
	JS_CFUNC_DEF("set_read_only_attribute", 2, &file_access_class_set_read_only_attribute),
	JS_CFUNC_DEF("get_read_only_attribute", 1, &file_access_class_get_read_only_attribute),
};

static int js_file_access_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&FileAccess::__class_id);
	classes["FileAccess"] = FileAccess::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), FileAccess::__class_id, &file_access_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FileAccess::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, file_access_class_proto_funcs, _countof(file_access_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, file_access_class_constructor, "FileAccess", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, file_access_class_static_funcs, _countof(file_access_class_static_funcs));

	JS_SetModuleExport(ctx, m, "FileAccess", ctor);

	return 0;
}

JSModuleDef *_js_init_file_access_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_file_access_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FileAccess");
	return m;
}

JSModuleDef *js_init_file_access_module(JSContext *ctx) {
	return _js_init_file_access_module(ctx, "godot/classes/file_access");
}

void register_file_access() {
	js_init_file_access_module(ctx);
}