
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rd_texture_format.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_texture_format_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef rd_texture_format_class_def = {
	"RDTextureFormat",
	.finalizer = rd_texture_format_class_finalizer
};

static JSValue rd_texture_format_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RDTextureFormat::__class_id);
	if (JS_IsException(obj))
		return obj;

	RDTextureFormat *rd_texture_format_class;
	if (argc == 1) 
		rd_texture_format_class = static_cast<RDTextureFormat *>(Variant(*argv).operator Object *());
	else 
		rd_texture_format_class = memnew(RDTextureFormat);
	if (!rd_texture_format_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, rd_texture_format_class);
	return obj;
}
static JSValue rd_texture_format_class_set_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDTextureFormat::set_format, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDTextureFormat::get_format, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_set_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDTextureFormat::set_width, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_get_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDTextureFormat::get_width, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDTextureFormat::set_height, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDTextureFormat::get_height, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_set_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDTextureFormat::set_depth, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_get_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDTextureFormat::get_depth, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_set_array_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDTextureFormat::set_array_layers, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_get_array_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDTextureFormat::get_array_layers, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_set_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDTextureFormat::set_mipmaps, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_get_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDTextureFormat::get_mipmaps, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_set_texture_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDTextureFormat::set_texture_type, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_get_texture_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDTextureFormat::get_texture_type, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_set_samples(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDTextureFormat::set_samples, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_get_samples(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDTextureFormat::get_samples, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_set_usage_bits(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDTextureFormat::set_usage_bits, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_get_usage_bits(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDTextureFormat::get_usage_bits, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_add_shareable_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDTextureFormat::add_shareable_format, ctx, this_val, argc, argv);
};
static JSValue rd_texture_format_class_remove_shareable_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDTextureFormat::remove_shareable_format, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry rd_texture_format_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_format", 1, &rd_texture_format_class_set_format),
	JS_CFUNC_DEF("get_format", 0, &rd_texture_format_class_get_format),
	JS_CFUNC_DEF("set_width", 1, &rd_texture_format_class_set_width),
	JS_CFUNC_DEF("get_width", 0, &rd_texture_format_class_get_width),
	JS_CFUNC_DEF("set_height", 1, &rd_texture_format_class_set_height),
	JS_CFUNC_DEF("get_height", 0, &rd_texture_format_class_get_height),
	JS_CFUNC_DEF("set_depth", 1, &rd_texture_format_class_set_depth),
	JS_CFUNC_DEF("get_depth", 0, &rd_texture_format_class_get_depth),
	JS_CFUNC_DEF("set_array_layers", 1, &rd_texture_format_class_set_array_layers),
	JS_CFUNC_DEF("get_array_layers", 0, &rd_texture_format_class_get_array_layers),
	JS_CFUNC_DEF("set_mipmaps", 1, &rd_texture_format_class_set_mipmaps),
	JS_CFUNC_DEF("get_mipmaps", 0, &rd_texture_format_class_get_mipmaps),
	JS_CFUNC_DEF("set_texture_type", 1, &rd_texture_format_class_set_texture_type),
	JS_CFUNC_DEF("get_texture_type", 0, &rd_texture_format_class_get_texture_type),
	JS_CFUNC_DEF("set_samples", 1, &rd_texture_format_class_set_samples),
	JS_CFUNC_DEF("get_samples", 0, &rd_texture_format_class_get_samples),
	JS_CFUNC_DEF("set_usage_bits", 1, &rd_texture_format_class_set_usage_bits),
	JS_CFUNC_DEF("get_usage_bits", 0, &rd_texture_format_class_get_usage_bits),
	JS_CFUNC_DEF("add_shareable_format", 1, &rd_texture_format_class_add_shareable_format),
	JS_CFUNC_DEF("remove_shareable_format", 1, &rd_texture_format_class_remove_shareable_format),
};

static void define_rd_texture_format_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "format"),
        JS_NewCFunction(ctx, rd_texture_format_class_get_format, "get_format", 0),
        JS_NewCFunction(ctx, rd_texture_format_class_set_format, "set_format", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "width"),
        JS_NewCFunction(ctx, rd_texture_format_class_get_width, "get_width", 0),
        JS_NewCFunction(ctx, rd_texture_format_class_set_width, "set_width", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "height"),
        JS_NewCFunction(ctx, rd_texture_format_class_get_height, "get_height", 0),
        JS_NewCFunction(ctx, rd_texture_format_class_set_height, "set_height", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "depth"),
        JS_NewCFunction(ctx, rd_texture_format_class_get_depth, "get_depth", 0),
        JS_NewCFunction(ctx, rd_texture_format_class_set_depth, "set_depth", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "array_layers"),
        JS_NewCFunction(ctx, rd_texture_format_class_get_array_layers, "get_array_layers", 0),
        JS_NewCFunction(ctx, rd_texture_format_class_set_array_layers, "set_array_layers", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mipmaps"),
        JS_NewCFunction(ctx, rd_texture_format_class_get_mipmaps, "get_mipmaps", 0),
        JS_NewCFunction(ctx, rd_texture_format_class_set_mipmaps, "set_mipmaps", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "texture_type"),
        JS_NewCFunction(ctx, rd_texture_format_class_get_texture_type, "get_texture_type", 0),
        JS_NewCFunction(ctx, rd_texture_format_class_set_texture_type, "set_texture_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "samples"),
        JS_NewCFunction(ctx, rd_texture_format_class_get_samples, "get_samples", 0),
        JS_NewCFunction(ctx, rd_texture_format_class_set_samples, "set_samples", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "usage_bits"),
        JS_NewCFunction(ctx, rd_texture_format_class_get_usage_bits, "get_usage_bits", 0),
        JS_NewCFunction(ctx, rd_texture_format_class_set_usage_bits, "set_usage_bits", 1),
        JS_PROP_GETSET
    );
	
}

static void define_rd_texture_format_enum(JSContext *ctx, JSValue proto) {
}

static int js_rd_texture_format_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["RDTextureFormat"] = RDTextureFormat::__class_id;
	class_id_list.insert(RDTextureFormat::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RDTextureFormat::__class_id, &rd_texture_format_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RDTextureFormat::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDTextureFormat::__class_id, proto);

	define_rd_texture_format_property(ctx, proto);
	define_rd_texture_format_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_texture_format_class_proto_funcs, _countof(rd_texture_format_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, rd_texture_format_class_constructor, "RDTextureFormat", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "RDTextureFormat", ctor);
	constructors[RDTextureFormat::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_rd_texture_format_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_texture_format_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDTextureFormat");
	return m;
}

JSModuleDef *js_init_rd_texture_format_module(JSContext *ctx) {
	return _js_init_rd_texture_format_module(ctx, "@godot/classes/rd_texture_format");
}

void register_rd_texture_format() {
	RDTextureFormat::__init_js_class_id();
	js_init_rd_texture_format_module(ctx);
}