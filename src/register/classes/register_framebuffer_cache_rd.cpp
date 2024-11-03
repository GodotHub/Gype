
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/rd_framebuffer_pass.hpp>
#include <godot_cpp/classes/framebuffer_cache_rd.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void framebuffer_cache_rd_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef framebuffer_cache_rd_class_def = {
	"FramebufferCacheRD",
	.finalizer = framebuffer_cache_rd_class_finalizer
};

static JSValue framebuffer_cache_rd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, FramebufferCacheRD::__class_id);
	if (JS_IsException(obj))
		return obj;

	FramebufferCacheRD *framebuffer_cache_rd_class;
	if (argc == 1) 
		framebuffer_cache_rd_class = static_cast<FramebufferCacheRD *>(Variant(*argv).operator Object *());
	else 
		framebuffer_cache_rd_class = memnew(FramebufferCacheRD);
	if (!framebuffer_cache_rd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, framebuffer_cache_rd_class);
	return obj;
}
static JSValue framebuffer_cache_rd_class_get_cache_multipass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FramebufferCacheRD::get_cache_multipass, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry framebuffer_cache_rd_class_static_funcs[] = {
	JS_CFUNC_DEF("get_cache_multipass", 3, &framebuffer_cache_rd_class_get_cache_multipass),
};

static void define_framebuffer_cache_rd_property(JSContext *ctx, JSValue proto) {
	
}

static void define_framebuffer_cache_rd_enum(JSContext *ctx, JSValue proto) {
}

static int js_framebuffer_cache_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["FramebufferCacheRD"] = FramebufferCacheRD::__class_id;
	class_id_list.insert(FramebufferCacheRD::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), FramebufferCacheRD::__class_id, &framebuffer_cache_rd_class_def);

	JSValue proto = JS_NewObjectClass(ctx, FramebufferCacheRD::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FramebufferCacheRD::__class_id, proto);

	define_framebuffer_cache_rd_property(ctx, proto);
	define_framebuffer_cache_rd_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, framebuffer_cache_rd_class_constructor, "FramebufferCacheRD", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, framebuffer_cache_rd_class_static_funcs, _countof(framebuffer_cache_rd_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "FramebufferCacheRD", ctor);
	constructors[FramebufferCacheRD::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_framebuffer_cache_rd_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/godot_object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_framebuffer_cache_rd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FramebufferCacheRD");
	return m;
}

JSModuleDef *js_init_framebuffer_cache_rd_module(JSContext *ctx) {
	return _js_init_framebuffer_cache_rd_module(ctx, "@godot/classes/framebuffer_cache_rd");
}

void register_framebuffer_cache_rd() {
	FramebufferCacheRD::__init_js_class_id();
	js_init_framebuffer_cache_rd_module(ctx);
}