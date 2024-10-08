
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/gltf_accessor.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_accessor_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFAccessor *gltf_accessor = static_cast<GLTFAccessor *>(JS_GetOpaque(val, GLTFAccessor::__class_id));
	if (gltf_accessor)
		GLTFAccessor::free(nullptr, gltf_accessor);
}

static JSClassDef gltf_accessor_class_def = {
	"GLTFAccessor",
	.finalizer = gltf_accessor_class_finalizer
};

static JSValue gltf_accessor_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GLTFAccessor *gltf_accessor_class;
	JSValue obj = JS_NewObjectClass(ctx, GLTFAccessor::__class_id);
	if (JS_IsException(obj))
		return obj;
	gltf_accessor_class = memnew(GLTFAccessor);
	if (!gltf_accessor_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gltf_accessor_class);
	return obj;
}
static JSValue gltf_accessor_class_get_buffer_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_buffer_view, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_buffer_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_buffer_view, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_byte_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_byte_offset, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_byte_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_byte_offset, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_component_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_component_type, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_component_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_component_type, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_normalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_normalized, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_normalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_normalized, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_count, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_count, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_accessor_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_accessor_type, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_accessor_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_accessor_type, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_type, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_type, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_min, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_min, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_max, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_max, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_sparse_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_sparse_count, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_sparse_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_sparse_count, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_sparse_indices_buffer_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_sparse_indices_buffer_view, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_sparse_indices_buffer_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_sparse_indices_buffer_view, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_sparse_indices_byte_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_sparse_indices_byte_offset, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_sparse_indices_byte_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_sparse_indices_byte_offset, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_sparse_indices_component_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_sparse_indices_component_type, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_sparse_indices_component_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_sparse_indices_component_type, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_sparse_values_buffer_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_sparse_values_buffer_view, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_sparse_values_buffer_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_sparse_values_buffer_view, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_sparse_values_byte_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFAccessor::get_sparse_values_byte_offset, GLTFAccessor::__class_id, ctx, this_val, argv);
};
static JSValue gltf_accessor_class_set_sparse_values_byte_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFAccessor::set_sparse_values_byte_offset, GLTFAccessor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry gltf_accessor_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_buffer_view", 0, &gltf_accessor_class_get_buffer_view),
	JS_CFUNC_DEF("set_buffer_view", 1, &gltf_accessor_class_set_buffer_view),
	JS_CFUNC_DEF("get_byte_offset", 0, &gltf_accessor_class_get_byte_offset),
	JS_CFUNC_DEF("set_byte_offset", 1, &gltf_accessor_class_set_byte_offset),
	JS_CFUNC_DEF("get_component_type", 0, &gltf_accessor_class_get_component_type),
	JS_CFUNC_DEF("set_component_type", 1, &gltf_accessor_class_set_component_type),
	JS_CFUNC_DEF("get_normalized", 0, &gltf_accessor_class_get_normalized),
	JS_CFUNC_DEF("set_normalized", 1, &gltf_accessor_class_set_normalized),
	JS_CFUNC_DEF("get_count", 0, &gltf_accessor_class_get_count),
	JS_CFUNC_DEF("set_count", 1, &gltf_accessor_class_set_count),
	JS_CFUNC_DEF("get_accessor_type", 0, &gltf_accessor_class_get_accessor_type),
	JS_CFUNC_DEF("set_accessor_type", 1, &gltf_accessor_class_set_accessor_type),
	JS_CFUNC_DEF("get_type", 0, &gltf_accessor_class_get_type),
	JS_CFUNC_DEF("set_type", 1, &gltf_accessor_class_set_type),
	JS_CFUNC_DEF("get_min", 0, &gltf_accessor_class_get_min),
	JS_CFUNC_DEF("set_min", 1, &gltf_accessor_class_set_min),
	JS_CFUNC_DEF("get_max", 0, &gltf_accessor_class_get_max),
	JS_CFUNC_DEF("set_max", 1, &gltf_accessor_class_set_max),
	JS_CFUNC_DEF("get_sparse_count", 0, &gltf_accessor_class_get_sparse_count),
	JS_CFUNC_DEF("set_sparse_count", 1, &gltf_accessor_class_set_sparse_count),
	JS_CFUNC_DEF("get_sparse_indices_buffer_view", 0, &gltf_accessor_class_get_sparse_indices_buffer_view),
	JS_CFUNC_DEF("set_sparse_indices_buffer_view", 1, &gltf_accessor_class_set_sparse_indices_buffer_view),
	JS_CFUNC_DEF("get_sparse_indices_byte_offset", 0, &gltf_accessor_class_get_sparse_indices_byte_offset),
	JS_CFUNC_DEF("set_sparse_indices_byte_offset", 1, &gltf_accessor_class_set_sparse_indices_byte_offset),
	JS_CFUNC_DEF("get_sparse_indices_component_type", 0, &gltf_accessor_class_get_sparse_indices_component_type),
	JS_CFUNC_DEF("set_sparse_indices_component_type", 1, &gltf_accessor_class_set_sparse_indices_component_type),
	JS_CFUNC_DEF("get_sparse_values_buffer_view", 0, &gltf_accessor_class_get_sparse_values_buffer_view),
	JS_CFUNC_DEF("set_sparse_values_buffer_view", 1, &gltf_accessor_class_set_sparse_values_buffer_view),
	JS_CFUNC_DEF("get_sparse_values_byte_offset", 0, &gltf_accessor_class_get_sparse_values_byte_offset),
	JS_CFUNC_DEF("set_sparse_values_byte_offset", 1, &gltf_accessor_class_set_sparse_values_byte_offset),
};

static int js_gltf_accessor_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GLTFAccessor::__class_id);
	classes["GLTFAccessor"] = GLTFAccessor::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GLTFAccessor::__class_id, &gltf_accessor_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFAccessor::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_accessor_class_proto_funcs, _countof(gltf_accessor_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gltf_accessor_class_constructor, "GLTFAccessor", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GLTFAccessor", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_accessor_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_accessor_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFAccessor");
	return m;
}

JSModuleDef *js_init_gltf_accessor_module(JSContext *ctx) {
	return _js_init_gltf_accessor_module(ctx, "godot/classes/gltf_accessor");
}

void register_gltf_accessor() {
	js_init_gltf_accessor_module(ctx);
}