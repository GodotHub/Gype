
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/cubemap_array.hpp>
#include <godot_cpp/classes/image_texture_layered.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void cubemap_array_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef cubemap_array_class_def = {
	"CubemapArray",
	.finalizer = cubemap_array_class_finalizer
};

static JSValue cubemap_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CubemapArray::__class_id);
	if (JS_IsException(obj))
		return obj;

	CubemapArray *cubemap_array_class;
	if (argc == 1) 
		cubemap_array_class = static_cast<CubemapArray *>(static_cast<Object *>(Variant(*argv)));
	else 
		cubemap_array_class = memnew(CubemapArray);
	if (!cubemap_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, cubemap_array_class);	
	return obj;
}
static JSValue cubemap_array_class_create_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CubemapArray::create_placeholder, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry cubemap_array_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_placeholder", 0, &cubemap_array_class_create_placeholder),
};

static void define_cubemap_array_property(JSContext *ctx, JSValue proto) {
	
}

static void define_cubemap_array_enum(JSContext *ctx, JSValue proto) {
}

static int js_cubemap_array_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CubemapArray::__class_id);
	classes["CubemapArray"] = CubemapArray::__class_id;
	class_id_list.insert(CubemapArray::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CubemapArray::__class_id, &cubemap_array_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CubemapArray::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ImageTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CubemapArray::__class_id, proto);

	define_cubemap_array_property(ctx, proto);
	define_cubemap_array_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, cubemap_array_class_proto_funcs, _countof(cubemap_array_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, cubemap_array_class_constructor, "CubemapArray", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CubemapArray", ctor);

	return 0;
}

JSModuleDef *_js_init_cubemap_array_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/image_texture_layered';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_cubemap_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CubemapArray");
	return m;
}

JSModuleDef *js_init_cubemap_array_module(JSContext *ctx) {
	return _js_init_cubemap_array_module(ctx, "@godot/classes/cubemap_array");
}

void register_cubemap_array() {
	CubemapArray::__init_js_class_id();
	js_init_cubemap_array_module(ctx);
}