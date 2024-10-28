
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/zip_packer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void zip_packer_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef zip_packer_class_def = {
	"ZIPPacker",
	.finalizer = zip_packer_class_finalizer
};

static JSValue zip_packer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ZIPPacker::__class_id);
	if (JS_IsException(obj))
		return obj;
	ZIPPacker *zip_packer_class = memnew(ZIPPacker);
	if (!zip_packer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, zip_packer_class);
	return obj;
}
static JSValue zip_packer_class_open(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ZIPPacker::open, ctx, this_val, argc, argv);
};
static JSValue zip_packer_class_start_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ZIPPacker::start_file, ctx, this_val, argc, argv);
};
static JSValue zip_packer_class_write_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ZIPPacker::write_file, ctx, this_val, argc, argv);
};
static JSValue zip_packer_class_close_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ZIPPacker::close_file, ctx, this_val, argc, argv);
};
static JSValue zip_packer_class_close(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ZIPPacker::close, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry zip_packer_class_proto_funcs[] = {
	JS_CFUNC_DEF("open", 2, &zip_packer_class_open),
	JS_CFUNC_DEF("start_file", 1, &zip_packer_class_start_file),
	JS_CFUNC_DEF("write_file", 1, &zip_packer_class_write_file),
	JS_CFUNC_DEF("close_file", 0, &zip_packer_class_close_file),
	JS_CFUNC_DEF("close", 0, &zip_packer_class_close),
};

void define_zip_packer_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue ZipAppend_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, ZipAppend_obj, "APPEND_CREATE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, ZipAppend_obj, "APPEND_CREATEAFTER", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, ZipAppend_obj, "APPEND_ADDINZIP", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "ZipAppend", ZipAppend_obj);
}

static int js_zip_packer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ZIPPacker::__class_id);
	classes["ZIPPacker"] = ZIPPacker::__class_id;
	class_id_list.insert(ZIPPacker::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ZIPPacker::__class_id, &zip_packer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ZIPPacker::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ZIPPacker::__class_id, proto);

	define_zip_packer_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, zip_packer_class_proto_funcs, _countof(zip_packer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, zip_packer_class_constructor, "ZIPPacker", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ZIPPacker", ctor);

	return 0;
}

JSModuleDef *_js_init_zip_packer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_zip_packer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ZIPPacker");
	return m;
}

JSModuleDef *js_init_zip_packer_module(JSContext *ctx) {
	return _js_init_zip_packer_module(ctx, "godot/classes/zip_packer");
}

void register_zip_packer() {
	ZIPPacker::__init_js_class_id();
	js_init_zip_packer_module(ctx);
}