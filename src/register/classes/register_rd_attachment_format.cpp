
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rd_attachment_format.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void rd_attachment_format_class_finalizer(JSRuntime *rt, JSValue val) {
	RDAttachmentFormat *rd_attachment_format = static_cast<RDAttachmentFormat *>(JS_GetOpaque(val, RDAttachmentFormat::__class_id));
	if (rd_attachment_format)
		RDAttachmentFormat::free(nullptr, rd_attachment_format);
}

static JSClassDef rd_attachment_format_class_def = {
	"RDAttachmentFormat",
	.finalizer = rd_attachment_format_class_finalizer
};

static JSValue rd_attachment_format_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDAttachmentFormat *rd_attachment_format_class;
	JSValue obj = JS_NewObjectClass(ctx, RDAttachmentFormat::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_attachment_format_class = memnew(RDAttachmentFormat);
	if (!rd_attachment_format_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_attachment_format_class);
	return obj;
}
static JSValue rd_attachment_format_class_set_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDAttachmentFormat::set_format, RDAttachmentFormat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_attachment_format_class_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDAttachmentFormat::get_format, RDAttachmentFormat::__class_id, ctx, this_val, argv);
};
static JSValue rd_attachment_format_class_set_samples(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDAttachmentFormat::set_samples, RDAttachmentFormat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_attachment_format_class_get_samples(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDAttachmentFormat::get_samples, RDAttachmentFormat::__class_id, ctx, this_val, argv);
};
static JSValue rd_attachment_format_class_set_usage_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDAttachmentFormat::set_usage_flags, RDAttachmentFormat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_attachment_format_class_get_usage_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDAttachmentFormat::get_usage_flags, RDAttachmentFormat::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rd_attachment_format_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_format", 1, &rd_attachment_format_class_set_format),
	JS_CFUNC_DEF("get_format", 0, &rd_attachment_format_class_get_format),
	JS_CFUNC_DEF("set_samples", 1, &rd_attachment_format_class_set_samples),
	JS_CFUNC_DEF("get_samples", 0, &rd_attachment_format_class_get_samples),
	JS_CFUNC_DEF("set_usage_flags", 1, &rd_attachment_format_class_set_usage_flags),
	JS_CFUNC_DEF("get_usage_flags", 0, &rd_attachment_format_class_get_usage_flags),
};

static int js_rd_attachment_format_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDAttachmentFormat::__class_id);
	classes["RDAttachmentFormat"] = RDAttachmentFormat::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDAttachmentFormat::__class_id, &rd_attachment_format_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDAttachmentFormat::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_attachment_format_class_proto_funcs, _countof(rd_attachment_format_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_attachment_format_class_constructor, "RDAttachmentFormat", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDAttachmentFormat", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_attachment_format_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_attachment_format_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDAttachmentFormat");
	return m;
}

JSModuleDef *js_init_rd_attachment_format_module(JSContext *ctx) {
	return _js_init_rd_attachment_format_module(ctx, "godot/classes/rd_attachment_format");
}

void register_rd_attachment_format() {
	js_init_rd_attachment_format_module(ctx);
}