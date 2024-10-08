
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/rd_framebuffer_pass.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_framebuffer_pass_class_finalizer(JSRuntime *rt, JSValue val) {
	RDFramebufferPass *rd_framebuffer_pass = static_cast<RDFramebufferPass *>(JS_GetOpaque(val, RDFramebufferPass::__class_id));
	if (rd_framebuffer_pass)
		RDFramebufferPass::free(nullptr, rd_framebuffer_pass);
}

static JSClassDef rd_framebuffer_pass_class_def = {
	"RDFramebufferPass",
	.finalizer = rd_framebuffer_pass_class_finalizer
};

static JSValue rd_framebuffer_pass_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDFramebufferPass *rd_framebuffer_pass_class;
	JSValue obj = JS_NewObjectClass(ctx, RDFramebufferPass::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_framebuffer_pass_class = memnew(RDFramebufferPass);
	if (!rd_framebuffer_pass_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_framebuffer_pass_class);
	return obj;
}
static JSValue rd_framebuffer_pass_class_set_color_attachments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDFramebufferPass::set_color_attachments, RDFramebufferPass::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_framebuffer_pass_class_get_color_attachments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDFramebufferPass::get_color_attachments, RDFramebufferPass::__class_id, ctx, this_val, argv);
};
static JSValue rd_framebuffer_pass_class_set_input_attachments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDFramebufferPass::set_input_attachments, RDFramebufferPass::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_framebuffer_pass_class_get_input_attachments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDFramebufferPass::get_input_attachments, RDFramebufferPass::__class_id, ctx, this_val, argv);
};
static JSValue rd_framebuffer_pass_class_set_resolve_attachments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDFramebufferPass::set_resolve_attachments, RDFramebufferPass::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_framebuffer_pass_class_get_resolve_attachments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDFramebufferPass::get_resolve_attachments, RDFramebufferPass::__class_id, ctx, this_val, argv);
};
static JSValue rd_framebuffer_pass_class_set_preserve_attachments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDFramebufferPass::set_preserve_attachments, RDFramebufferPass::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_framebuffer_pass_class_get_preserve_attachments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDFramebufferPass::get_preserve_attachments, RDFramebufferPass::__class_id, ctx, this_val, argv);
};
static JSValue rd_framebuffer_pass_class_set_depth_attachment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDFramebufferPass::set_depth_attachment, RDFramebufferPass::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_framebuffer_pass_class_get_depth_attachment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDFramebufferPass::get_depth_attachment, RDFramebufferPass::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rd_framebuffer_pass_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_color_attachments", 1, &rd_framebuffer_pass_class_set_color_attachments),
	JS_CFUNC_DEF("get_color_attachments", 0, &rd_framebuffer_pass_class_get_color_attachments),
	JS_CFUNC_DEF("set_input_attachments", 1, &rd_framebuffer_pass_class_set_input_attachments),
	JS_CFUNC_DEF("get_input_attachments", 0, &rd_framebuffer_pass_class_get_input_attachments),
	JS_CFUNC_DEF("set_resolve_attachments", 1, &rd_framebuffer_pass_class_set_resolve_attachments),
	JS_CFUNC_DEF("get_resolve_attachments", 0, &rd_framebuffer_pass_class_get_resolve_attachments),
	JS_CFUNC_DEF("set_preserve_attachments", 1, &rd_framebuffer_pass_class_set_preserve_attachments),
	JS_CFUNC_DEF("get_preserve_attachments", 0, &rd_framebuffer_pass_class_get_preserve_attachments),
	JS_CFUNC_DEF("set_depth_attachment", 1, &rd_framebuffer_pass_class_set_depth_attachment),
	JS_CFUNC_DEF("get_depth_attachment", 0, &rd_framebuffer_pass_class_get_depth_attachment),
};

static int js_rd_framebuffer_pass_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDFramebufferPass::__class_id);
	classes["RDFramebufferPass"] = RDFramebufferPass::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDFramebufferPass::__class_id, &rd_framebuffer_pass_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDFramebufferPass::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_framebuffer_pass_class_proto_funcs, _countof(rd_framebuffer_pass_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_framebuffer_pass_class_constructor, "RDFramebufferPass", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDFramebufferPass", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_framebuffer_pass_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_framebuffer_pass_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDFramebufferPass");
	return m;
}

JSModuleDef *js_init_rd_framebuffer_pass_module(JSContext *ctx) {
	return _js_init_rd_framebuffer_pass_module(ctx, "godot/classes/rd_framebuffer_pass");
}

void register_rd_framebuffer_pass() {
	js_init_rd_framebuffer_pass_module(ctx);
}