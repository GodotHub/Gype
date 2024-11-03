
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rd_attachment_format.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_attachment_format_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef rd_attachment_format_class_def = {
	"RDAttachmentFormat",
	.finalizer = rd_attachment_format_class_finalizer
};

static JSValue rd_attachment_format_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RDAttachmentFormat::__class_id);
	if (JS_IsException(obj))
		return obj;

	RDAttachmentFormat *rd_attachment_format_class;
	if (argc == 1) 
		rd_attachment_format_class = static_cast<RDAttachmentFormat *>(Variant(*argv).operator Object *());
	else 
		rd_attachment_format_class = memnew(RDAttachmentFormat);
	if (!rd_attachment_format_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, rd_attachment_format_class);
	return obj;
}
static JSValue rd_attachment_format_class_set_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDAttachmentFormat::set_format, ctx, this_val, argc, argv);
};
static JSValue rd_attachment_format_class_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDAttachmentFormat::get_format, ctx, this_val, argc, argv);
};
static JSValue rd_attachment_format_class_set_samples(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDAttachmentFormat::set_samples, ctx, this_val, argc, argv);
};
static JSValue rd_attachment_format_class_get_samples(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDAttachmentFormat::get_samples, ctx, this_val, argc, argv);
};
static JSValue rd_attachment_format_class_set_usage_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDAttachmentFormat::set_usage_flags, ctx, this_val, argc, argv);
};
static JSValue rd_attachment_format_class_get_usage_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDAttachmentFormat::get_usage_flags, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry rd_attachment_format_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_format", 1, &rd_attachment_format_class_set_format),
	JS_CFUNC_DEF("get_format", 0, &rd_attachment_format_class_get_format),
	JS_CFUNC_DEF("set_samples", 1, &rd_attachment_format_class_set_samples),
	JS_CFUNC_DEF("get_samples", 0, &rd_attachment_format_class_get_samples),
	JS_CFUNC_DEF("set_usage_flags", 1, &rd_attachment_format_class_set_usage_flags),
	JS_CFUNC_DEF("get_usage_flags", 0, &rd_attachment_format_class_get_usage_flags),
};

static void define_rd_attachment_format_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "format"),
        JS_NewCFunction(ctx, rd_attachment_format_class_get_format, "get_format", 0),
        JS_NewCFunction(ctx, rd_attachment_format_class_set_format, "set_format", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "samples"),
        JS_NewCFunction(ctx, rd_attachment_format_class_get_samples, "get_samples", 0),
        JS_NewCFunction(ctx, rd_attachment_format_class_set_samples, "set_samples", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "usage_flags"),
        JS_NewCFunction(ctx, rd_attachment_format_class_get_usage_flags, "get_usage_flags", 0),
        JS_NewCFunction(ctx, rd_attachment_format_class_set_usage_flags, "set_usage_flags", 1),
        JS_PROP_GETSET
    );
	
}

static void define_rd_attachment_format_enum(JSContext *ctx, JSValue proto) {
}

static int js_rd_attachment_format_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["RDAttachmentFormat"] = RDAttachmentFormat::__class_id;
	class_id_list.insert(RDAttachmentFormat::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RDAttachmentFormat::__class_id, &rd_attachment_format_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RDAttachmentFormat::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDAttachmentFormat::__class_id, proto);

	define_rd_attachment_format_property(ctx, proto);
	define_rd_attachment_format_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_attachment_format_class_proto_funcs, _countof(rd_attachment_format_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, rd_attachment_format_class_constructor, "RDAttachmentFormat", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "RDAttachmentFormat", ctor);
	constructors[RDAttachmentFormat::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_rd_attachment_format_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_attachment_format_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDAttachmentFormat");
	return m;
}

JSModuleDef *js_init_rd_attachment_format_module(JSContext *ctx) {
	return _js_init_rd_attachment_format_module(ctx, "@godot/classes/rd_attachment_format");
}

void register_rd_attachment_format() {
	RDAttachmentFormat::__init_js_class_id();
	js_init_rd_attachment_format_module(ctx);
}