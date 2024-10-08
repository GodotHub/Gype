
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/gltf_document.hpp>
#include <godot_cpp/classes/gltf_document_extension.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_document_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFDocument *gltf_document = static_cast<GLTFDocument *>(JS_GetOpaque(val, GLTFDocument::__class_id));
	if (gltf_document)
		GLTFDocument::free(nullptr, gltf_document);
}

static JSClassDef gltf_document_class_def = {
	"GLTFDocument",
	.finalizer = gltf_document_class_finalizer
};

static JSValue gltf_document_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GLTFDocument *gltf_document_class;
	JSValue obj = JS_NewObjectClass(ctx, GLTFDocument::__class_id);
	if (JS_IsException(obj))
		return obj;
	gltf_document_class = memnew(GLTFDocument);
	if (!gltf_document_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gltf_document_class);
	return obj;
}
static JSValue gltf_document_class_set_image_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFDocument::set_image_format, GLTFDocument::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_document_class_get_image_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFDocument::get_image_format, GLTFDocument::__class_id, ctx, this_val, argv);
};
static JSValue gltf_document_class_set_lossy_quality(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFDocument::set_lossy_quality, GLTFDocument::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_document_class_get_lossy_quality(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFDocument::get_lossy_quality, GLTFDocument::__class_id, ctx, this_val, argv);
};
static JSValue gltf_document_class_set_root_node_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFDocument::set_root_node_mode, GLTFDocument::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_document_class_get_root_node_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFDocument::get_root_node_mode, GLTFDocument::__class_id, ctx, this_val, argv);
};
static JSValue gltf_document_class_append_from_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFDocument::append_from_file, GLTFDocument::__class_id, ctx, this_val, argv);
};
static JSValue gltf_document_class_append_from_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFDocument::append_from_buffer, GLTFDocument::__class_id, ctx, this_val, argv);
};
static JSValue gltf_document_class_append_from_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFDocument::append_from_scene, GLTFDocument::__class_id, ctx, this_val, argv);
};
static JSValue gltf_document_class_generate_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFDocument::generate_scene, GLTFDocument::__class_id, ctx, this_val, argv);
};
static JSValue gltf_document_class_generate_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFDocument::generate_buffer, GLTFDocument::__class_id, ctx, this_val, argv);
};
static JSValue gltf_document_class_write_to_filesystem(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFDocument::write_to_filesystem, GLTFDocument::__class_id, ctx, this_val, argv);
};
static JSValue gltf_document_class_register_gltf_document_extension(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_static_method_no_ret(&GLTFDocument::register_gltf_document_extension, GLTFDocument::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_document_class_unregister_gltf_document_extension(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_static_method_no_ret(&GLTFDocument::unregister_gltf_document_extension, GLTFDocument::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry gltf_document_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_image_format", 1, &gltf_document_class_set_image_format),
	JS_CFUNC_DEF("get_image_format", 0, &gltf_document_class_get_image_format),
	JS_CFUNC_DEF("set_lossy_quality", 1, &gltf_document_class_set_lossy_quality),
	JS_CFUNC_DEF("get_lossy_quality", 0, &gltf_document_class_get_lossy_quality),
	JS_CFUNC_DEF("set_root_node_mode", 1, &gltf_document_class_set_root_node_mode),
	JS_CFUNC_DEF("get_root_node_mode", 0, &gltf_document_class_get_root_node_mode),
	JS_CFUNC_DEF("append_from_file", 4, &gltf_document_class_append_from_file),
	JS_CFUNC_DEF("append_from_buffer", 4, &gltf_document_class_append_from_buffer),
	JS_CFUNC_DEF("append_from_scene", 3, &gltf_document_class_append_from_scene),
	JS_CFUNC_DEF("generate_scene", 4, &gltf_document_class_generate_scene),
	JS_CFUNC_DEF("generate_buffer", 1, &gltf_document_class_generate_buffer),
	JS_CFUNC_DEF("write_to_filesystem", 2, &gltf_document_class_write_to_filesystem),
};
static const JSCFunctionListEntry gltf_document_class_static_funcs[] = {
	JS_CFUNC_DEF("register_gltf_document_extension", 2, &gltf_document_class_register_gltf_document_extension),
	JS_CFUNC_DEF("unregister_gltf_document_extension", 1, &gltf_document_class_unregister_gltf_document_extension),
};

static int js_gltf_document_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GLTFDocument::__class_id);
	classes["GLTFDocument"] = GLTFDocument::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GLTFDocument::__class_id, &gltf_document_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFDocument::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_document_class_proto_funcs, _countof(gltf_document_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gltf_document_class_constructor, "GLTFDocument", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, gltf_document_class_static_funcs, _countof(gltf_document_class_static_funcs));

	JS_SetModuleExport(ctx, m, "GLTFDocument", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_document_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_document_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFDocument");
	return m;
}

JSModuleDef *js_init_gltf_document_module(JSContext *ctx) {
	return _js_init_gltf_document_module(ctx, "godot/classes/gltf_document");
}

void register_gltf_document() {
	js_init_gltf_document_module(ctx);
}