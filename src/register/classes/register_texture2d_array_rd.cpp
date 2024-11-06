
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture_layered_rd.hpp>
#include <godot_cpp/classes/texture2d_array_rd.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void texture2d_array_rd_class_finalizer(JSRuntime *rt, JSValue val) {
	Texture2DArrayRD *texture2d_array_rd = static_cast<Texture2DArrayRD *>(JS_GetOpaque(val, Texture2DArrayRD::__class_id));
	if (texture2d_array_rd)
		memdelete(texture2d_array_rd);
}

static JSClassDef texture2d_array_rd_class_def = {
	"Texture2DArrayRD",
	.finalizer = texture2d_array_rd_class_finalizer
};

static JSValue texture2d_array_rd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Texture2DArrayRD::__class_id);
	if (JS_IsException(obj))
		return obj;

	Texture2DArrayRD *texture2d_array_rd_class;
	if (argc == 1) 
		texture2d_array_rd_class = static_cast<Texture2DArrayRD *>(Variant(*argv).operator Object *());
	else 
		texture2d_array_rd_class = memnew(Texture2DArrayRD);
	if (!texture2d_array_rd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, texture2d_array_rd_class);
	return obj;
}

static void define_texture2d_array_rd_property(JSContext *ctx, JSValue proto) {
	
}

static void define_texture2d_array_rd_enum(JSContext *ctx, JSValue proto) {
}

static int js_texture2d_array_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Texture2DArrayRD"] = Texture2DArrayRD::__class_id;
	class_id_list.insert(Texture2DArrayRD::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Texture2DArrayRD::__class_id, &texture2d_array_rd_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Texture2DArrayRD::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, TextureLayeredRD::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Texture2DArrayRD::__class_id, proto);

	define_texture2d_array_rd_property(ctx, proto);
	define_texture2d_array_rd_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, texture2d_array_rd_class_constructor, "Texture2DArrayRD", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "Texture2DArrayRD", ctor);
	constructors[Texture2DArrayRD::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_texture2d_array_rd_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/texture_layered_rd';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture2d_array_rd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Texture2DArrayRD");
	return m;
}

JSModuleDef *js_init_texture2d_array_rd_module(JSContext *ctx) {
	return _js_init_texture2d_array_rd_module(ctx, "@godot/classes/texture2d_array_rd");
}

void register_texture2d_array_rd() {
	Texture2DArrayRD::__init_js_class_id();
	js_init_texture2d_array_rd_module(ctx);
}