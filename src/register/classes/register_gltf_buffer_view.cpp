
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/gltf_buffer_view.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void gltf_buffer_view_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFBufferView *gltf_buffer_view = static_cast<GLTFBufferView *>(JS_GetOpaque(val, GLTFBufferView::__class_id));
	if (gltf_buffer_view)
		GLTFBufferView::free(nullptr, gltf_buffer_view);
}

static JSClassDef gltf_buffer_view_class_def = {
	"GLTFBufferView",
	.finalizer = gltf_buffer_view_class_finalizer
};

static JSValue gltf_buffer_view_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GLTFBufferView *gltf_buffer_view_class;
	JSValue obj = JS_NewObjectClass(ctx, GLTFBufferView::__class_id);
	if (JS_IsException(obj))
		return obj;
	gltf_buffer_view_class = memnew(GLTFBufferView);
	if (!gltf_buffer_view_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gltf_buffer_view_class);
	return obj;
}
static JSValue gltf_buffer_view_class_load_buffer_view_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFBufferView::load_buffer_view_data, GLTFBufferView::__class_id, ctx, this_val, argv);
};
static JSValue gltf_buffer_view_class_get_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFBufferView::get_buffer, GLTFBufferView::__class_id, ctx, this_val, argv);
};
static JSValue gltf_buffer_view_class_set_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFBufferView::set_buffer, GLTFBufferView::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_buffer_view_class_get_byte_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFBufferView::get_byte_offset, GLTFBufferView::__class_id, ctx, this_val, argv);
};
static JSValue gltf_buffer_view_class_set_byte_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFBufferView::set_byte_offset, GLTFBufferView::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_buffer_view_class_get_byte_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFBufferView::get_byte_length, GLTFBufferView::__class_id, ctx, this_val, argv);
};
static JSValue gltf_buffer_view_class_set_byte_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFBufferView::set_byte_length, GLTFBufferView::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_buffer_view_class_get_byte_stride(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFBufferView::get_byte_stride, GLTFBufferView::__class_id, ctx, this_val, argv);
};
static JSValue gltf_buffer_view_class_set_byte_stride(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFBufferView::set_byte_stride, GLTFBufferView::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_buffer_view_class_get_indices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFBufferView::get_indices, GLTFBufferView::__class_id, ctx, this_val, argv);
};
static JSValue gltf_buffer_view_class_set_indices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFBufferView::set_indices, GLTFBufferView::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_buffer_view_class_get_vertex_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFBufferView::get_vertex_attributes, GLTFBufferView::__class_id, ctx, this_val, argv);
};
static JSValue gltf_buffer_view_class_set_vertex_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFBufferView::set_vertex_attributes, GLTFBufferView::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry gltf_buffer_view_class_proto_funcs[] = {
	JS_CFUNC_DEF("load_buffer_view_data", 1, &gltf_buffer_view_class_load_buffer_view_data),
	JS_CFUNC_DEF("get_buffer", 0, &gltf_buffer_view_class_get_buffer),
	JS_CFUNC_DEF("set_buffer", 1, &gltf_buffer_view_class_set_buffer),
	JS_CFUNC_DEF("get_byte_offset", 0, &gltf_buffer_view_class_get_byte_offset),
	JS_CFUNC_DEF("set_byte_offset", 1, &gltf_buffer_view_class_set_byte_offset),
	JS_CFUNC_DEF("get_byte_length", 0, &gltf_buffer_view_class_get_byte_length),
	JS_CFUNC_DEF("set_byte_length", 1, &gltf_buffer_view_class_set_byte_length),
	JS_CFUNC_DEF("get_byte_stride", 0, &gltf_buffer_view_class_get_byte_stride),
	JS_CFUNC_DEF("set_byte_stride", 1, &gltf_buffer_view_class_set_byte_stride),
	JS_CFUNC_DEF("get_indices", 0, &gltf_buffer_view_class_get_indices),
	JS_CFUNC_DEF("set_indices", 1, &gltf_buffer_view_class_set_indices),
	JS_CFUNC_DEF("get_vertex_attributes", 0, &gltf_buffer_view_class_get_vertex_attributes),
	JS_CFUNC_DEF("set_vertex_attributes", 1, &gltf_buffer_view_class_set_vertex_attributes),
};

static int js_gltf_buffer_view_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GLTFBufferView::__class_id);
	classes["GLTFBufferView"] = GLTFBufferView::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GLTFBufferView::__class_id, &gltf_buffer_view_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFBufferView::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_buffer_view_class_proto_funcs, _countof(gltf_buffer_view_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gltf_buffer_view_class_constructor, "GLTFBufferView", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GLTFBufferView", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_buffer_view_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_buffer_view_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFBufferView");
	return m;
}

JSModuleDef *js_init_gltf_buffer_view_module(JSContext *ctx) {
	return _js_init_gltf_buffer_view_module(ctx, "godot/classes/gltf_buffer_view");
}

void register_gltf_buffer_view() {
	js_init_gltf_buffer_view_module(ctx);
}