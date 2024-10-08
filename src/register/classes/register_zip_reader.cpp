
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/zip_reader.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void zip_reader_class_finalizer(JSRuntime *rt, JSValue val) {
	ZIPReader *zip_reader = static_cast<ZIPReader *>(JS_GetOpaque(val, ZIPReader::__class_id));
	if (zip_reader)
		ZIPReader::free(nullptr, zip_reader);
}

static JSClassDef zip_reader_class_def = {
	"ZIPReader",
	.finalizer = zip_reader_class_finalizer
};

static JSValue zip_reader_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ZIPReader *zip_reader_class;
	JSValue obj = JS_NewObjectClass(ctx, ZIPReader::__class_id);
	if (JS_IsException(obj))
		return obj;
	zip_reader_class = memnew(ZIPReader);
	if (!zip_reader_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, zip_reader_class);
	return obj;
}
static JSValue zip_reader_class_open(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPReader::open, ZIPReader::__class_id, ctx, this_val, argv);
};
static JSValue zip_reader_class_close(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPReader::close, ZIPReader::__class_id, ctx, this_val, argv);
};
static JSValue zip_reader_class_get_files(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPReader::get_files, ZIPReader::__class_id, ctx, this_val, argv);
};
static JSValue zip_reader_class_read_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPReader::read_file, ZIPReader::__class_id, ctx, this_val, argv);
};
static JSValue zip_reader_class_file_exists(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPReader::file_exists, ZIPReader::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry zip_reader_class_proto_funcs[] = {
	JS_CFUNC_DEF("open", 1, &zip_reader_class_open),
	JS_CFUNC_DEF("close", 0, &zip_reader_class_close),
	JS_CFUNC_DEF("get_files", 0, &zip_reader_class_get_files),
	JS_CFUNC_DEF("read_file", 2, &zip_reader_class_read_file),
	JS_CFUNC_DEF("file_exists", 2, &zip_reader_class_file_exists),
};

static int js_zip_reader_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ZIPReader::__class_id);
	classes["ZIPReader"] = ZIPReader::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ZIPReader::__class_id, &zip_reader_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ZIPReader::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, zip_reader_class_proto_funcs, _countof(zip_reader_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, zip_reader_class_constructor, "ZIPReader", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ZIPReader", ctor);

	return 0;
}

JSModuleDef *_js_init_zip_reader_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_zip_reader_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ZIPReader");
	return m;
}

JSModuleDef *js_init_zip_reader_module(JSContext *ctx) {
	return _js_init_zip_reader_module(ctx, "godot/classes/zip_reader");
}

void register_zip_reader() {
	js_init_zip_reader_module(ctx);
}