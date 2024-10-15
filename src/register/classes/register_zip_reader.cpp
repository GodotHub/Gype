
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/zip_reader.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void zip_reader_class_finalizer(JSRuntime *rt, JSValue val) {
	ZIPReader *zip_reader = static_cast<ZIPReader *>(JS_GetOpaque(val, ZIPReader::__class_id));
	if (zip_reader)
		memdelete(zip_reader);
}

static JSClassDef zip_reader_class_def = {
	"ZIPReader",
	.finalizer = zip_reader_class_finalizer
};

static JSValue zip_reader_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ZIPReader::__class_id);
	if (JS_IsException(obj))
		return obj;
	ZIPReader *zip_reader_class = memnew(ZIPReader);
	if (!zip_reader_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, zip_reader_class);	
	return obj;
}
static JSValue zip_reader_class_open(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPReader::open, ctx, this_val, argc, argv);
};
static JSValue zip_reader_class_close(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPReader::close, ctx, this_val, argc, argv);
};
static JSValue zip_reader_class_get_files(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPReader::get_files, ctx, this_val, argc, argv);
};
static JSValue zip_reader_class_read_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPReader::read_file, ctx, this_val, argc, argv);
};
static JSValue zip_reader_class_file_exists(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ZIPReader::file_exists, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry zip_reader_class_proto_funcs[] = {
	JS_CFUNC_DEF("open", 1, &zip_reader_class_open),
	JS_CFUNC_DEF("close", 0, &zip_reader_class_close),
	JS_CFUNC_DEF("get_files", 0, &zip_reader_class_get_files),
	JS_CFUNC_DEF("read_file", 2, &zip_reader_class_read_file),
	JS_CFUNC_DEF("file_exists", 2, &zip_reader_class_file_exists),
};

void define_zip_reader_property(JSContext *ctx, JSValue obj) {
}

static int js_zip_reader_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ZIPReader::__class_id);
	classes["ZIPReader"] = ZIPReader::__class_id;
	class_id_list.insert(ZIPReader::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ZIPReader::__class_id, &zip_reader_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ZIPReader::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ZIPReader::__class_id, proto);

	define_zip_reader_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, zip_reader_class_proto_funcs, _countof(zip_reader_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, zip_reader_class_constructor, "ZIPReader", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ZIPReader", ctor);

	return 0;
}

JSModuleDef *_js_init_zip_reader_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	ZIPReader::__init_js_class_id();
	js_init_zip_reader_module(ctx);
}