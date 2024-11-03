
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/image_texture_layered.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture2d_array.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void texture2d_array_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef texture2d_array_class_def = {
	"Texture2DArray",
	.finalizer = texture2d_array_class_finalizer
};

static JSValue texture2d_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Texture2DArray::__class_id);
	if (JS_IsException(obj))
		return obj;

	Texture2DArray *texture2d_array_class;
	if (argc == 1) 
		texture2d_array_class = static_cast<Texture2DArray *>(Variant(*argv).operator Object *());
	else 
		texture2d_array_class = memnew(Texture2DArray);
	if (!texture2d_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, texture2d_array_class);
	return obj;
}
static JSValue texture2d_array_class_create_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Texture2DArray::create_placeholder, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry texture2d_array_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_placeholder", 0, &texture2d_array_class_create_placeholder),
};

static void define_texture2d_array_property(JSContext *ctx, JSValue proto) {
	
}

static void define_texture2d_array_enum(JSContext *ctx, JSValue proto) {
}

static int js_texture2d_array_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Texture2DArray"] = Texture2DArray::__class_id;
	class_id_list.insert(Texture2DArray::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Texture2DArray::__class_id, &texture2d_array_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Texture2DArray::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ImageTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Texture2DArray::__class_id, proto);

	define_texture2d_array_property(ctx, proto);
	define_texture2d_array_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture2d_array_class_proto_funcs, _countof(texture2d_array_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, texture2d_array_class_constructor, "Texture2DArray", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "Texture2DArray", ctor);
	constructors[Texture2DArray::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_texture2d_array_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/image_texture_layered';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture2d_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Texture2DArray");
	return m;
}

JSModuleDef *js_init_texture2d_array_module(JSContext *ctx) {
	return _js_init_texture2d_array_module(ctx, "@godot/classes/texture2d_array");
}

void register_texture2d_array() {
	Texture2DArray::__init_js_class_id();
	js_init_texture2d_array_module(ctx);
}