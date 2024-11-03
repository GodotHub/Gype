
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/pck_packer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void pck_packer_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef pck_packer_class_def = {
	"PCKPacker",
	.finalizer = pck_packer_class_finalizer
};

static JSValue pck_packer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PCKPacker::__class_id);
	if (JS_IsException(obj))
		return obj;

	PCKPacker *pck_packer_class;
	if (argc == 1) 
		pck_packer_class = static_cast<PCKPacker *>(Variant(*argv).operator Object *());
	else 
		pck_packer_class = memnew(PCKPacker);
	if (!pck_packer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, pck_packer_class);
	return obj;
}
static JSValue pck_packer_class_pck_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PCKPacker::pck_start, ctx, this_val, argc, argv);
};
static JSValue pck_packer_class_add_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PCKPacker::add_file, ctx, this_val, argc, argv);
};
static JSValue pck_packer_class_flush(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PCKPacker::flush, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry pck_packer_class_proto_funcs[] = {
	JS_CFUNC_DEF("pck_start", 4, &pck_packer_class_pck_start),
	JS_CFUNC_DEF("add_file", 3, &pck_packer_class_add_file),
	JS_CFUNC_DEF("flush", 1, &pck_packer_class_flush),
};

static void define_pck_packer_property(JSContext *ctx, JSValue proto) {
	
}

static void define_pck_packer_enum(JSContext *ctx, JSValue proto) {
}

static int js_pck_packer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PCKPacker"] = PCKPacker::__class_id;
	class_id_list.insert(PCKPacker::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PCKPacker::__class_id, &pck_packer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PCKPacker::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PCKPacker::__class_id, proto);

	define_pck_packer_property(ctx, proto);
	define_pck_packer_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, pck_packer_class_proto_funcs, _countof(pck_packer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, pck_packer_class_constructor, "PCKPacker", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "PCKPacker", ctor);
	constructors[PCKPacker::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_pck_packer_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_pck_packer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PCKPacker");
	return m;
}

JSModuleDef *js_init_pck_packer_module(JSContext *ctx) {
	return _js_init_pck_packer_module(ctx, "@godot/classes/pck_packer");
}

void register_pck_packer() {
	PCKPacker::__init_js_class_id();
	js_init_pck_packer_module(ctx);
}