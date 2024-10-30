
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/classes/placeholder_texture_layered.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void placeholder_texture_layered_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef placeholder_texture_layered_class_def = {
	"PlaceholderTextureLayered",
	.finalizer = placeholder_texture_layered_class_finalizer
};

static JSValue placeholder_texture_layered_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PlaceholderTextureLayered::__class_id);
	if (JS_IsException(obj))
		return obj;
	PlaceholderTextureLayered *placeholder_texture_layered_class;
	if (argc == 1) {
		Variant vobj = *argv;
		placeholder_texture_layered_class = static_cast<PlaceholderTextureLayered *>(static_cast<Object *>(vobj));
	} else {
		placeholder_texture_layered_class = memnew(PlaceholderTextureLayered);
	}
	if (!placeholder_texture_layered_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, placeholder_texture_layered_class);	
	return obj;
}
static JSValue placeholder_texture_layered_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PlaceholderTextureLayered::set_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue placeholder_texture_layered_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PlaceholderTextureLayered::get_size, ctx, this_val, argc, argv);
};
static JSValue placeholder_texture_layered_class_set_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PlaceholderTextureLayered::set_layers, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry placeholder_texture_layered_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &placeholder_texture_layered_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &placeholder_texture_layered_class_get_size),
	JS_CFUNC_DEF("set_layers", 1, &placeholder_texture_layered_class_set_layers),
};

void define_placeholder_texture_layered_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, placeholder_texture_layered_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, placeholder_texture_layered_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "layers"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, placeholder_texture_layered_class_set_layers, "set_layers", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_placeholder_texture_layered_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PlaceholderTextureLayered::__class_id);
	classes["PlaceholderTextureLayered"] = PlaceholderTextureLayered::__class_id;
	class_id_list.insert(PlaceholderTextureLayered::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PlaceholderTextureLayered::__class_id, &placeholder_texture_layered_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PlaceholderTextureLayered::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, TextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaceholderTextureLayered::__class_id, proto);

	define_placeholder_texture_layered_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, placeholder_texture_layered_class_proto_funcs, _countof(placeholder_texture_layered_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, placeholder_texture_layered_class_constructor, "PlaceholderTextureLayered", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PlaceholderTextureLayered", ctor);

	return 0;
}

JSModuleDef *_js_init_placeholder_texture_layered_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/texture_layered';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_placeholder_texture_layered_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaceholderTextureLayered");
	return m;
}

JSModuleDef *js_init_placeholder_texture_layered_module(JSContext *ctx) {
	return _js_init_placeholder_texture_layered_module(ctx, "@godot/classes/placeholder_texture_layered");
}

void register_placeholder_texture_layered() {
	PlaceholderTextureLayered::__init_js_class_id();
	js_init_placeholder_texture_layered_module(ctx);
}