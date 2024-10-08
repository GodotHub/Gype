
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rd_uniform.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void rd_uniform_class_finalizer(JSRuntime *rt, JSValue val) {
	RDUniform *rd_uniform = static_cast<RDUniform *>(JS_GetOpaque(val, RDUniform::__class_id));
	if (rd_uniform)
		RDUniform::free(nullptr, rd_uniform);
}

static JSClassDef rd_uniform_class_def = {
	"RDUniform",
	.finalizer = rd_uniform_class_finalizer
};

static JSValue rd_uniform_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDUniform *rd_uniform_class;
	JSValue obj = JS_NewObjectClass(ctx, RDUniform::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_uniform_class = memnew(RDUniform);
	if (!rd_uniform_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_uniform_class);
	return obj;
}
static JSValue rd_uniform_class_set_uniform_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDUniform::set_uniform_type, RDUniform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_uniform_class_get_uniform_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDUniform::get_uniform_type, RDUniform::__class_id, ctx, this_val, argv);
};
static JSValue rd_uniform_class_set_binding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDUniform::set_binding, RDUniform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_uniform_class_get_binding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDUniform::get_binding, RDUniform::__class_id, ctx, this_val, argv);
};
static JSValue rd_uniform_class_add_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDUniform::add_id, RDUniform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_uniform_class_clear_ids(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDUniform::clear_ids, RDUniform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_uniform_class_get_ids(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDUniform::get_ids, RDUniform::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rd_uniform_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_uniform_type", 1, &rd_uniform_class_set_uniform_type),
	JS_CFUNC_DEF("get_uniform_type", 0, &rd_uniform_class_get_uniform_type),
	JS_CFUNC_DEF("set_binding", 1, &rd_uniform_class_set_binding),
	JS_CFUNC_DEF("get_binding", 0, &rd_uniform_class_get_binding),
	JS_CFUNC_DEF("add_id", 1, &rd_uniform_class_add_id),
	JS_CFUNC_DEF("clear_ids", 0, &rd_uniform_class_clear_ids),
	JS_CFUNC_DEF("get_ids", 0, &rd_uniform_class_get_ids),
};

static int js_rd_uniform_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDUniform::__class_id);
	classes["RDUniform"] = RDUniform::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDUniform::__class_id, &rd_uniform_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDUniform::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_uniform_class_proto_funcs, _countof(rd_uniform_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_uniform_class_constructor, "RDUniform", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDUniform", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_uniform_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_uniform_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDUniform");
	return m;
}

JSModuleDef *js_init_rd_uniform_module(JSContext *ctx) {
	return _js_init_rd_uniform_module(ctx, "godot/classes/rd_uniform");
}

void register_rd_uniform() {
	js_init_rd_uniform_module(ctx);
}