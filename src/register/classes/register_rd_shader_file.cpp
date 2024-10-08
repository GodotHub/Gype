
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/rd_shader_file.hpp>
#include <godot_cpp/classes/rd_shader_spirv.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_shader_file_class_finalizer(JSRuntime *rt, JSValue val) {
	RDShaderFile *rd_shader_file = static_cast<RDShaderFile *>(JS_GetOpaque(val, RDShaderFile::__class_id));
	if (rd_shader_file)
		RDShaderFile::free(nullptr, rd_shader_file);
}

static JSClassDef rd_shader_file_class_def = {
	"RDShaderFile",
	.finalizer = rd_shader_file_class_finalizer
};

static JSValue rd_shader_file_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDShaderFile *rd_shader_file_class;
	JSValue obj = JS_NewObjectClass(ctx, RDShaderFile::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_shader_file_class = memnew(RDShaderFile);
	if (!rd_shader_file_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_shader_file_class);
	return obj;
}
static JSValue rd_shader_file_class_set_bytecode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDShaderFile::set_bytecode, RDShaderFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_shader_file_class_get_spirv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDShaderFile::get_spirv, RDShaderFile::__class_id, ctx, this_val, argv);
};
static JSValue rd_shader_file_class_get_version_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDShaderFile::get_version_list, RDShaderFile::__class_id, ctx, this_val, argv);
};
static JSValue rd_shader_file_class_set_base_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDShaderFile::set_base_error, RDShaderFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_shader_file_class_get_base_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDShaderFile::get_base_error, RDShaderFile::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rd_shader_file_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_bytecode", 2, &rd_shader_file_class_set_bytecode),
	JS_CFUNC_DEF("get_spirv", 1, &rd_shader_file_class_get_spirv),
	JS_CFUNC_DEF("get_version_list", 0, &rd_shader_file_class_get_version_list),
	JS_CFUNC_DEF("set_base_error", 1, &rd_shader_file_class_set_base_error),
	JS_CFUNC_DEF("get_base_error", 0, &rd_shader_file_class_get_base_error),
};

static int js_rd_shader_file_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDShaderFile::__class_id);
	classes["RDShaderFile"] = RDShaderFile::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDShaderFile::__class_id, &rd_shader_file_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDShaderFile::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_shader_file_class_proto_funcs, _countof(rd_shader_file_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_shader_file_class_constructor, "RDShaderFile", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDShaderFile", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_shader_file_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_shader_file_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDShaderFile");
	return m;
}

JSModuleDef *js_init_rd_shader_file_module(JSContext *ctx) {
	return _js_init_rd_shader_file_module(ctx, "godot/classes/rd_shader_file");
}

void register_rd_shader_file() {
	js_init_rd_shader_file_module(ctx);
}