
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/config_file.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void config_file_class_finalizer(JSRuntime *rt, JSValue val) {
	ConfigFile *config_file = static_cast<ConfigFile *>(JS_GetOpaque(val, ConfigFile::__class_id));
	if (config_file)
		ConfigFile::free(nullptr, config_file);
}

static JSClassDef config_file_class_def = {
	"ConfigFile",
	.finalizer = config_file_class_finalizer
};

static JSValue config_file_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ConfigFile *config_file_class;
	JSValue obj = JS_NewObjectClass(ctx, ConfigFile::__class_id);
	if (JS_IsException(obj))
		return obj;
	config_file_class = memnew(ConfigFile);
	if (!config_file_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, config_file_class);
	return obj;
}
static JSValue config_file_class_set_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ConfigFile::set_value, ConfigFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue config_file_class_get_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ConfigFile::get_value, ConfigFile::__class_id, ctx, this_val, argv);
};
static JSValue config_file_class_has_section(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ConfigFile::has_section, ConfigFile::__class_id, ctx, this_val, argv);
};
static JSValue config_file_class_has_section_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ConfigFile::has_section_key, ConfigFile::__class_id, ctx, this_val, argv);
};
static JSValue config_file_class_get_sections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ConfigFile::get_sections, ConfigFile::__class_id, ctx, this_val, argv);
};
static JSValue config_file_class_get_section_keys(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ConfigFile::get_section_keys, ConfigFile::__class_id, ctx, this_val, argv);
};
static JSValue config_file_class_erase_section(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ConfigFile::erase_section, ConfigFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue config_file_class_erase_section_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ConfigFile::erase_section_key, ConfigFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue config_file_class_load(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ConfigFile::load, ConfigFile::__class_id, ctx, this_val, argv);
};
static JSValue config_file_class_parse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ConfigFile::parse, ConfigFile::__class_id, ctx, this_val, argv);
};
static JSValue config_file_class_save(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ConfigFile::save, ConfigFile::__class_id, ctx, this_val, argv);
};
static JSValue config_file_class_encode_to_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ConfigFile::encode_to_text, ConfigFile::__class_id, ctx, this_val, argv);
};
static JSValue config_file_class_load_encrypted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ConfigFile::load_encrypted, ConfigFile::__class_id, ctx, this_val, argv);
};
static JSValue config_file_class_load_encrypted_pass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ConfigFile::load_encrypted_pass, ConfigFile::__class_id, ctx, this_val, argv);
};
static JSValue config_file_class_save_encrypted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ConfigFile::save_encrypted, ConfigFile::__class_id, ctx, this_val, argv);
};
static JSValue config_file_class_save_encrypted_pass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ConfigFile::save_encrypted_pass, ConfigFile::__class_id, ctx, this_val, argv);
};
static JSValue config_file_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ConfigFile::clear, ConfigFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry config_file_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_value", 3, &config_file_class_set_value),
	JS_CFUNC_DEF("get_value", 3, &config_file_class_get_value),
	JS_CFUNC_DEF("has_section", 1, &config_file_class_has_section),
	JS_CFUNC_DEF("has_section_key", 2, &config_file_class_has_section_key),
	JS_CFUNC_DEF("get_sections", 0, &config_file_class_get_sections),
	JS_CFUNC_DEF("get_section_keys", 1, &config_file_class_get_section_keys),
	JS_CFUNC_DEF("erase_section", 1, &config_file_class_erase_section),
	JS_CFUNC_DEF("erase_section_key", 2, &config_file_class_erase_section_key),
	JS_CFUNC_DEF("load", 1, &config_file_class_load),
	JS_CFUNC_DEF("parse", 1, &config_file_class_parse),
	JS_CFUNC_DEF("save", 1, &config_file_class_save),
	JS_CFUNC_DEF("encode_to_text", 0, &config_file_class_encode_to_text),
	JS_CFUNC_DEF("load_encrypted", 2, &config_file_class_load_encrypted),
	JS_CFUNC_DEF("load_encrypted_pass", 2, &config_file_class_load_encrypted_pass),
	JS_CFUNC_DEF("save_encrypted", 2, &config_file_class_save_encrypted),
	JS_CFUNC_DEF("save_encrypted_pass", 2, &config_file_class_save_encrypted_pass),
	JS_CFUNC_DEF("clear", 0, &config_file_class_clear),
};

static int js_config_file_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ConfigFile::__class_id);
	classes["ConfigFile"] = ConfigFile::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ConfigFile::__class_id, &config_file_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ConfigFile::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, config_file_class_proto_funcs, _countof(config_file_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, config_file_class_constructor, "ConfigFile", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ConfigFile", ctor);

	return 0;
}

JSModuleDef *_js_init_config_file_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_config_file_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ConfigFile");
	return m;
}

JSModuleDef *js_init_config_file_module(JSContext *ctx) {
	return _js_init_config_file_module(ctx, "godot/classes/config_file");
}

void register_config_file() {
	js_init_config_file_module(ctx);
}