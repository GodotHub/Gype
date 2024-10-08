
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/rd_vertex_attribute.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void rd_vertex_attribute_class_finalizer(JSRuntime *rt, JSValue val) {
	RDVertexAttribute *rd_vertex_attribute = static_cast<RDVertexAttribute *>(JS_GetOpaque(val, RDVertexAttribute::__class_id));
	if (rd_vertex_attribute)
		RDVertexAttribute::free(nullptr, rd_vertex_attribute);
}

static JSClassDef rd_vertex_attribute_class_def = {
	"RDVertexAttribute",
	.finalizer = rd_vertex_attribute_class_finalizer
};

static JSValue rd_vertex_attribute_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDVertexAttribute *rd_vertex_attribute_class;
	JSValue obj = JS_NewObjectClass(ctx, RDVertexAttribute::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_vertex_attribute_class = memnew(RDVertexAttribute);
	if (!rd_vertex_attribute_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_vertex_attribute_class);
	return obj;
}
static JSValue rd_vertex_attribute_class_set_location(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDVertexAttribute::set_location, RDVertexAttribute::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_vertex_attribute_class_get_location(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDVertexAttribute::get_location, RDVertexAttribute::__class_id, ctx, this_val, argv);
};
static JSValue rd_vertex_attribute_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDVertexAttribute::set_offset, RDVertexAttribute::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_vertex_attribute_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDVertexAttribute::get_offset, RDVertexAttribute::__class_id, ctx, this_val, argv);
};
static JSValue rd_vertex_attribute_class_set_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDVertexAttribute::set_format, RDVertexAttribute::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_vertex_attribute_class_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDVertexAttribute::get_format, RDVertexAttribute::__class_id, ctx, this_val, argv);
};
static JSValue rd_vertex_attribute_class_set_stride(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDVertexAttribute::set_stride, RDVertexAttribute::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_vertex_attribute_class_get_stride(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDVertexAttribute::get_stride, RDVertexAttribute::__class_id, ctx, this_val, argv);
};
static JSValue rd_vertex_attribute_class_set_frequency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDVertexAttribute::set_frequency, RDVertexAttribute::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_vertex_attribute_class_get_frequency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDVertexAttribute::get_frequency, RDVertexAttribute::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rd_vertex_attribute_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_location", 1, &rd_vertex_attribute_class_set_location),
	JS_CFUNC_DEF("get_location", 0, &rd_vertex_attribute_class_get_location),
	JS_CFUNC_DEF("set_offset", 1, &rd_vertex_attribute_class_set_offset),
	JS_CFUNC_DEF("get_offset", 0, &rd_vertex_attribute_class_get_offset),
	JS_CFUNC_DEF("set_format", 1, &rd_vertex_attribute_class_set_format),
	JS_CFUNC_DEF("get_format", 0, &rd_vertex_attribute_class_get_format),
	JS_CFUNC_DEF("set_stride", 1, &rd_vertex_attribute_class_set_stride),
	JS_CFUNC_DEF("get_stride", 0, &rd_vertex_attribute_class_get_stride),
	JS_CFUNC_DEF("set_frequency", 1, &rd_vertex_attribute_class_set_frequency),
	JS_CFUNC_DEF("get_frequency", 0, &rd_vertex_attribute_class_get_frequency),
};

static int js_rd_vertex_attribute_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDVertexAttribute::__class_id);
	classes["RDVertexAttribute"] = RDVertexAttribute::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDVertexAttribute::__class_id, &rd_vertex_attribute_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDVertexAttribute::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_vertex_attribute_class_proto_funcs, _countof(rd_vertex_attribute_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_vertex_attribute_class_constructor, "RDVertexAttribute", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDVertexAttribute", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_vertex_attribute_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_vertex_attribute_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDVertexAttribute");
	return m;
}

JSModuleDef *js_init_rd_vertex_attribute_module(JSContext *ctx) {
	return _js_init_rd_vertex_attribute_module(ctx, "godot/classes/rd_vertex_attribute");
}

void register_rd_vertex_attribute() {
	js_init_rd_vertex_attribute_module(ctx);
}