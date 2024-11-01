
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/config_file.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void config_file_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef config_file_class_def = {
	"ConfigFile",
	.finalizer = config_file_class_finalizer
};

static JSValue config_file_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ConfigFile::__class_id);
	if (JS_IsException(obj))
		return obj;

	ConfigFile *config_file_class;
	if (argc == 1) 
		config_file_class = static_cast<ConfigFile *>(Variant(*argv).operator Object *());
	else 
		config_file_class = memnew(ConfigFile);
	if (!config_file_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, config_file_class);
	return obj;
}
static JSValue config_file_class_set_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ConfigFile::set_value, ctx, this_val, argc, argv);
};
static JSValue config_file_class_get_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ConfigFile::get_value, ctx, this_val, argc, argv);
};
static JSValue config_file_class_has_section(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ConfigFile::has_section, ctx, this_val, argc, argv);
};
static JSValue config_file_class_has_section_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ConfigFile::has_section_key, ctx, this_val, argc, argv);
};
static JSValue config_file_class_get_sections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ConfigFile::get_sections, ctx, this_val, argc, argv);
};
static JSValue config_file_class_get_section_keys(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ConfigFile::get_section_keys, ctx, this_val, argc, argv);
};
static JSValue config_file_class_erase_section(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ConfigFile::erase_section, ctx, this_val, argc, argv);
};
static JSValue config_file_class_erase_section_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ConfigFile::erase_section_key, ctx, this_val, argc, argv);
};
static JSValue config_file_class_load(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ConfigFile::load, ctx, this_val, argc, argv);
};
static JSValue config_file_class_parse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ConfigFile::parse, ctx, this_val, argc, argv);
};
static JSValue config_file_class_save(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ConfigFile::save, ctx, this_val, argc, argv);
};
static JSValue config_file_class_encode_to_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ConfigFile::encode_to_text, ctx, this_val, argc, argv);
};
static JSValue config_file_class_load_encrypted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ConfigFile::load_encrypted, ctx, this_val, argc, argv);
};
static JSValue config_file_class_load_encrypted_pass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ConfigFile::load_encrypted_pass, ctx, this_val, argc, argv);
};
static JSValue config_file_class_save_encrypted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ConfigFile::save_encrypted, ctx, this_val, argc, argv);
};
static JSValue config_file_class_save_encrypted_pass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ConfigFile::save_encrypted_pass, ctx, this_val, argc, argv);
};
static JSValue config_file_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ConfigFile::clear, ctx, this_val, argc, argv);
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

static void define_config_file_property(JSContext *ctx, JSValue proto) {
	
}

static void define_config_file_enum(JSContext *ctx, JSValue proto) {
}

static int js_config_file_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ConfigFile"] = ConfigFile::__class_id;
	class_id_list.insert(ConfigFile::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ConfigFile::__class_id, &config_file_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ConfigFile::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ConfigFile::__class_id, proto);

	define_config_file_property(ctx, proto);
	define_config_file_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, config_file_class_proto_funcs, _countof(config_file_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, config_file_class_constructor, "ConfigFile", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ConfigFile", ctor);

	return 0;
}

JSModuleDef *_js_init_config_file_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_config_file_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ConfigFile");
	return m;
}

JSModuleDef *js_init_config_file_module(JSContext *ctx) {
	return _js_init_config_file_module(ctx, "@godot/classes/config_file");
}

void register_config_file() {
	ConfigFile::__init_js_class_id();
	js_init_config_file_module(ctx);
}