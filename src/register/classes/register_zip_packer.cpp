
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/zip_packer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void zip_packer_class_finalizer(JSRuntime *rt, JSValue val) {
	ZIPPacker *zip_packer = static_cast<ZIPPacker *>(JS_GetOpaque(val, ZIPPacker::__class_id));
	if (zip_packer)
		ZIPPacker::free(nullptr, zip_packer);
}

static JSClassDef zip_packer_class_def = {
	"ZIPPacker",
	.finalizer = zip_packer_class_finalizer
};

static JSValue zip_packer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ZIPPacker *zip_packer_class;
	JSValue obj = JS_NewObjectClass(ctx, ZIPPacker::__class_id);
	if (JS_IsException(obj))
		return obj;
	zip_packer_class = memnew(ZIPPacker);
	if (!zip_packer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, zip_packer_class);
	return obj;
}
static JSValue zip_packer_class_open(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPPacker::open, ZIPPacker::__class_id, ctx, this_val, argv);
};
static JSValue zip_packer_class_start_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPPacker::start_file, ZIPPacker::__class_id, ctx, this_val, argv);
};
static JSValue zip_packer_class_write_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPPacker::write_file, ZIPPacker::__class_id, ctx, this_val, argv);
};
static JSValue zip_packer_class_close_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPPacker::close_file, ZIPPacker::__class_id, ctx, this_val, argv);
};
static JSValue zip_packer_class_close(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPPacker::close, ZIPPacker::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry zip_packer_class_proto_funcs[] = {
	JS_CFUNC_DEF("open", 2, &zip_packer_class_open),
	JS_CFUNC_DEF("start_file", 1, &zip_packer_class_start_file),
	JS_CFUNC_DEF("write_file", 1, &zip_packer_class_write_file),
	JS_CFUNC_DEF("close_file", 0, &zip_packer_class_close_file),
	JS_CFUNC_DEF("close", 0, &zip_packer_class_close),
};

static int js_zip_packer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ZIPPacker::__class_id);
	classes["ZIPPacker"] = ZIPPacker::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ZIPPacker::__class_id, &zip_packer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ZIPPacker::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, zip_packer_class_proto_funcs, _countof(zip_packer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, zip_packer_class_constructor, "ZIPPacker", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ZIPPacker", ctor);

	return 0;
}

JSModuleDef *_js_init_zip_packer_module(JSContext *ctx, const char *module_name) {
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
	js_init_zip_packer_module(ctx);
}