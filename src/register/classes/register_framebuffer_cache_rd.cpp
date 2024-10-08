
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/rd_framebuffer_pass.hpp>
#include <godot_cpp/classes/framebuffer_cache_rd.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void framebuffer_cache_rd_class_finalizer(JSRuntime *rt, JSValue val) {
	FramebufferCacheRD *framebuffer_cache_rd = static_cast<FramebufferCacheRD *>(JS_GetOpaque(val, FramebufferCacheRD::__class_id));
	if (framebuffer_cache_rd)
		FramebufferCacheRD::free(nullptr, framebuffer_cache_rd);
}

static JSClassDef framebuffer_cache_rd_class_def = {
	"FramebufferCacheRD",
	.finalizer = framebuffer_cache_rd_class_finalizer
};

static JSValue framebuffer_cache_rd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	FramebufferCacheRD *framebuffer_cache_rd_class;
	JSValue obj = JS_NewObjectClass(ctx, FramebufferCacheRD::__class_id);
	if (JS_IsException(obj))
		return obj;
	framebuffer_cache_rd_class = memnew(FramebufferCacheRD);
	if (!framebuffer_cache_rd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, framebuffer_cache_rd_class);
	return obj;
}
static JSValue framebuffer_cache_rd_class_get_cache_multipass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&FramebufferCacheRD::get_cache_multipass, FramebufferCacheRD::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry framebuffer_cache_rd_class_static_funcs[] = {
	JS_CFUNC_DEF("get_cache_multipass", 3, &framebuffer_cache_rd_class_get_cache_multipass),
};

static int js_framebuffer_cache_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&FramebufferCacheRD::__class_id);
	classes["FramebufferCacheRD"] = FramebufferCacheRD::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), FramebufferCacheRD::__class_id, &framebuffer_cache_rd_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FramebufferCacheRD::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, framebuffer_cache_rd_class_constructor, "FramebufferCacheRD", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, framebuffer_cache_rd_class_static_funcs, _countof(framebuffer_cache_rd_class_static_funcs));

	JS_SetModuleExport(ctx, m, "FramebufferCacheRD", ctor);

	return 0;
}

JSModuleDef *_js_init_framebuffer_cache_rd_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_framebuffer_cache_rd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FramebufferCacheRD");
	return m;
}

JSModuleDef *js_init_framebuffer_cache_rd_module(JSContext *ctx) {
	return _js_init_framebuffer_cache_rd_module(ctx, "godot/classes/framebuffer_cache_rd");
}

void register_framebuffer_cache_rd() {
	js_init_framebuffer_cache_rd_module(ctx);
}