
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/pck_packer.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void pck_packer_class_finalizer(JSRuntime *rt, JSValue val) {
	PCKPacker *pck_packer = static_cast<PCKPacker *>(JS_GetOpaque(val, PCKPacker::__class_id));
	if (pck_packer)
		PCKPacker::free(nullptr, pck_packer);
}

static JSClassDef pck_packer_class_def = {
	"PCKPacker",
	.finalizer = pck_packer_class_finalizer
};

static JSValue pck_packer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PCKPacker *pck_packer_class;
	JSValue obj = JS_NewObjectClass(ctx, PCKPacker::__class_id);
	if (JS_IsException(obj))
		return obj;
	pck_packer_class = memnew(PCKPacker);
	if (!pck_packer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, pck_packer_class);
	return obj;
}
static JSValue pck_packer_class_pck_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PCKPacker::pck_start, PCKPacker::__class_id, ctx, this_val, argv);
};
static JSValue pck_packer_class_add_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PCKPacker::add_file, PCKPacker::__class_id, ctx, this_val, argv);
};
static JSValue pck_packer_class_flush(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PCKPacker::flush, PCKPacker::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry pck_packer_class_proto_funcs[] = {
	JS_CFUNC_DEF("pck_start", 4, &pck_packer_class_pck_start),
	JS_CFUNC_DEF("add_file", 3, &pck_packer_class_add_file),
	JS_CFUNC_DEF("flush", 1, &pck_packer_class_flush),
};

static int js_pck_packer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PCKPacker::__class_id);
	classes["PCKPacker"] = PCKPacker::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PCKPacker::__class_id, &pck_packer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PCKPacker::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, pck_packer_class_proto_funcs, _countof(pck_packer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, pck_packer_class_constructor, "PCKPacker", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PCKPacker", ctor);

	return 0;
}

JSModuleDef *_js_init_pck_packer_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_pck_packer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PCKPacker");
	return m;
}

JSModuleDef *js_init_pck_packer_module(JSContext *ctx) {
	return _js_init_pck_packer_module(ctx, "godot/classes/pck_packer");
}

void register_pck_packer() {
	js_init_pck_packer_module(ctx);
}