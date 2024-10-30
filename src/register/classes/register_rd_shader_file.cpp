
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/rd_shader_file.hpp>
#include <godot_cpp/classes/rd_shader_spirv.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_shader_file_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef rd_shader_file_class_def = {
	"RDShaderFile",
	.finalizer = rd_shader_file_class_finalizer
};

static JSValue rd_shader_file_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RDShaderFile::__class_id);
	if (JS_IsException(obj))
		return obj;
	RDShaderFile *rd_shader_file_class;
	if (argc == 1) {
		Variant vobj = *argv;
		rd_shader_file_class = static_cast<RDShaderFile *>(static_cast<Object *>(vobj));
	} else {
		rd_shader_file_class = memnew(RDShaderFile);
	}
	if (!rd_shader_file_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, rd_shader_file_class);	
	return obj;
}
static JSValue rd_shader_file_class_set_bytecode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RDShaderFile::set_bytecode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rd_shader_file_class_get_spirv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDShaderFile::get_spirv, ctx, this_val, argc, argv);
};
static JSValue rd_shader_file_class_get_version_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDShaderFile::get_version_list, ctx, this_val, argc, argv);
};
static JSValue rd_shader_file_class_set_base_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RDShaderFile::set_base_error, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rd_shader_file_class_get_base_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDShaderFile::get_base_error, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry rd_shader_file_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_bytecode", 2, &rd_shader_file_class_set_bytecode),
	JS_CFUNC_DEF("get_spirv", 1, &rd_shader_file_class_get_spirv),
	JS_CFUNC_DEF("get_version_list", 0, &rd_shader_file_class_get_version_list),
	JS_CFUNC_DEF("set_base_error", 1, &rd_shader_file_class_set_base_error),
	JS_CFUNC_DEF("get_base_error", 0, &rd_shader_file_class_get_base_error),
};

void define_rd_shader_file_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "base_error"),
        JS_NewCFunction(ctx, rd_shader_file_class_get_base_error, "get_base_error", 0),
        JS_NewCFunction(ctx, rd_shader_file_class_set_base_error, "set_base_error", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_rd_shader_file_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&RDShaderFile::__class_id);
	classes["RDShaderFile"] = RDShaderFile::__class_id;
	class_id_list.insert(RDShaderFile::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RDShaderFile::__class_id, &rd_shader_file_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RDShaderFile::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDShaderFile::__class_id, proto);

	define_rd_shader_file_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_shader_file_class_proto_funcs, _countof(rd_shader_file_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, rd_shader_file_class_constructor, "RDShaderFile", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RDShaderFile", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_shader_file_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_shader_file_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDShaderFile");
	return m;
}

JSModuleDef *js_init_rd_shader_file_module(JSContext *ctx) {
	return _js_init_rd_shader_file_module(ctx, "@godot/classes/rd_shader_file");
}

void register_rd_shader_file() {
	RDShaderFile::__init_js_class_id();
	js_init_rd_shader_file_module(ctx);
}