
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/gltf_document.hpp>
#include <godot_cpp/classes/gltf_document_extension.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_document_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFDocument *gltf_document = static_cast<GLTFDocument *>(JS_GetOpaque(val, GLTFDocument::__class_id));
	if (gltf_document)
		memdelete(gltf_document);
}

static JSClassDef gltf_document_class_def = {
	"GLTFDocument",
	.finalizer = gltf_document_class_finalizer
};

static JSValue gltf_document_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GLTFDocument::__class_id);
	if (JS_IsException(obj))
		return obj;

	GLTFDocument *gltf_document_class;
	if (argc == 1) 
		gltf_document_class = static_cast<GLTFDocument *>(Variant(*argv).operator Object *());
	else 
		gltf_document_class = memnew(GLTFDocument);
	if (!gltf_document_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gltf_document_class);
	return obj;
}
static JSValue gltf_document_class_set_image_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFDocument::set_image_format, ctx, this_val, argc, argv);
};
static JSValue gltf_document_class_get_image_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFDocument::get_image_format, ctx, this_val, argc, argv);
};
static JSValue gltf_document_class_set_lossy_quality(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFDocument::set_lossy_quality, ctx, this_val, argc, argv);
};
static JSValue gltf_document_class_get_lossy_quality(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFDocument::get_lossy_quality, ctx, this_val, argc, argv);
};
static JSValue gltf_document_class_set_root_node_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFDocument::set_root_node_mode, ctx, this_val, argc, argv);
};
static JSValue gltf_document_class_get_root_node_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFDocument::get_root_node_mode, ctx, this_val, argc, argv);
};
static JSValue gltf_document_class_append_from_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFDocument::append_from_file, ctx, this_val, argc, argv);
};
static JSValue gltf_document_class_append_from_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFDocument::append_from_buffer, ctx, this_val, argc, argv);
};
static JSValue gltf_document_class_append_from_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFDocument::append_from_scene, ctx, this_val, argc, argv);
};
static JSValue gltf_document_class_generate_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFDocument::generate_scene, ctx, this_val, argc, argv);
};
static JSValue gltf_document_class_generate_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFDocument::generate_buffer, ctx, this_val, argc, argv);
};
static JSValue gltf_document_class_write_to_filesystem(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFDocument::write_to_filesystem, ctx, this_val, argc, argv);
};
static JSValue gltf_document_class_register_gltf_document_extension(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    return call_builtin_static_method_no_ret(&GLTFDocument::register_gltf_document_extension, ctx, this_val, argc, argv);
};
static JSValue gltf_document_class_unregister_gltf_document_extension(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    return call_builtin_static_method_no_ret(&GLTFDocument::unregister_gltf_document_extension, ctx, this_val, argc, argv);
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

static void define_gltf_document_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "image_format"),
        JS_NewCFunction(ctx, gltf_document_class_get_image_format, "get_image_format", 0),
        JS_NewCFunction(ctx, gltf_document_class_set_image_format, "set_image_format", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "lossy_quality"),
        JS_NewCFunction(ctx, gltf_document_class_get_lossy_quality, "get_lossy_quality", 0),
        JS_NewCFunction(ctx, gltf_document_class_set_lossy_quality, "set_lossy_quality", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "root_node_mode"),
        JS_NewCFunction(ctx, gltf_document_class_get_root_node_mode, "get_root_node_mode", 0),
        JS_NewCFunction(ctx, gltf_document_class_set_root_node_mode, "set_root_node_mode", 1),
        JS_PROP_GETSET
    );
	
}

static void define_gltf_document_enum(JSContext *ctx, JSValue proto) {
	JSValue RootNodeMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, RootNodeMode_obj, "ROOT_NODE_MODE_SINGLE_ROOT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, RootNodeMode_obj, "ROOT_NODE_MODE_KEEP_ROOT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, RootNodeMode_obj, "ROOT_NODE_MODE_MULTI_ROOT", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "RootNodeMode", RootNodeMode_obj);
}

static int js_gltf_document_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["GLTFDocument"] = GLTFDocument::__class_id;
	class_id_list.insert(GLTFDocument::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFDocument::__class_id, &gltf_document_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GLTFDocument::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFDocument::__class_id, proto);

	define_gltf_document_property(ctx, proto);
	define_gltf_document_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_document_class_proto_funcs, _countof(gltf_document_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gltf_document_class_constructor, "GLTFDocument", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, gltf_document_class_static_funcs, _countof(gltf_document_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "GLTFDocument", ctor);
	constructors[GLTFDocument::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_gltf_document_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_document_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFDocument");
	return m;
}

JSModuleDef *js_init_gltf_document_module(JSContext *ctx) {
	return _js_init_gltf_document_module(ctx, "@godot/classes/gltf_document");
}

void register_gltf_document() {
	GLTFDocument::__init_js_class_id();
	js_init_gltf_document_module(ctx);
}