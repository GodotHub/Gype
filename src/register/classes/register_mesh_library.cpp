
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/mesh_library.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void mesh_library_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef mesh_library_class_def = {
	"MeshLibrary",
	.finalizer = mesh_library_class_finalizer
};

static JSValue mesh_library_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MeshLibrary::__class_id);
	if (JS_IsException(obj))
		return obj;

	MeshLibrary *mesh_library_class;
	if (argc == 1) 
		mesh_library_class = static_cast<MeshLibrary *>(Variant(*argv).operator Object *());
	else 
		mesh_library_class = memnew(MeshLibrary);
	if (!mesh_library_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, mesh_library_class);
	return obj;
}
static JSValue mesh_library_class_create_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshLibrary::create_item, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_set_item_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshLibrary::set_item_name, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_set_item_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshLibrary::set_item_mesh, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_set_item_mesh_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshLibrary::set_item_mesh_transform, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_set_item_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshLibrary::set_item_navigation_mesh, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_set_item_navigation_mesh_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshLibrary::set_item_navigation_mesh_transform, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_set_item_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshLibrary::set_item_navigation_layers, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_set_item_shapes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshLibrary::set_item_shapes, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_set_item_preview(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshLibrary::set_item_preview, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_get_item_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshLibrary::get_item_name, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_get_item_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshLibrary::get_item_mesh, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_get_item_mesh_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshLibrary::get_item_mesh_transform, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_get_item_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshLibrary::get_item_navigation_mesh, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_get_item_navigation_mesh_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshLibrary::get_item_navigation_mesh_transform, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_get_item_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshLibrary::get_item_navigation_layers, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_get_item_shapes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshLibrary::get_item_shapes, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_get_item_preview(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshLibrary::get_item_preview, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_remove_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshLibrary::remove_item, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_find_item_by_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshLibrary::find_item_by_name, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshLibrary::clear, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_get_item_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshLibrary::get_item_list, ctx, this_val, argc, argv);
};
static JSValue mesh_library_class_get_last_unused_item_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshLibrary::get_last_unused_item_id, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry mesh_library_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_item", 1, &mesh_library_class_create_item),
	JS_CFUNC_DEF("set_item_name", 2, &mesh_library_class_set_item_name),
	JS_CFUNC_DEF("set_item_mesh", 2, &mesh_library_class_set_item_mesh),
	JS_CFUNC_DEF("set_item_mesh_transform", 2, &mesh_library_class_set_item_mesh_transform),
	JS_CFUNC_DEF("set_item_navigation_mesh", 2, &mesh_library_class_set_item_navigation_mesh),
	JS_CFUNC_DEF("set_item_navigation_mesh_transform", 2, &mesh_library_class_set_item_navigation_mesh_transform),
	JS_CFUNC_DEF("set_item_navigation_layers", 2, &mesh_library_class_set_item_navigation_layers),
	JS_CFUNC_DEF("set_item_shapes", 2, &mesh_library_class_set_item_shapes),
	JS_CFUNC_DEF("set_item_preview", 2, &mesh_library_class_set_item_preview),
	JS_CFUNC_DEF("get_item_name", 1, &mesh_library_class_get_item_name),
	JS_CFUNC_DEF("get_item_mesh", 1, &mesh_library_class_get_item_mesh),
	JS_CFUNC_DEF("get_item_mesh_transform", 1, &mesh_library_class_get_item_mesh_transform),
	JS_CFUNC_DEF("get_item_navigation_mesh", 1, &mesh_library_class_get_item_navigation_mesh),
	JS_CFUNC_DEF("get_item_navigation_mesh_transform", 1, &mesh_library_class_get_item_navigation_mesh_transform),
	JS_CFUNC_DEF("get_item_navigation_layers", 1, &mesh_library_class_get_item_navigation_layers),
	JS_CFUNC_DEF("get_item_shapes", 1, &mesh_library_class_get_item_shapes),
	JS_CFUNC_DEF("get_item_preview", 1, &mesh_library_class_get_item_preview),
	JS_CFUNC_DEF("remove_item", 1, &mesh_library_class_remove_item),
	JS_CFUNC_DEF("find_item_by_name", 1, &mesh_library_class_find_item_by_name),
	JS_CFUNC_DEF("clear", 0, &mesh_library_class_clear),
	JS_CFUNC_DEF("get_item_list", 0, &mesh_library_class_get_item_list),
	JS_CFUNC_DEF("get_last_unused_item_id", 0, &mesh_library_class_get_last_unused_item_id),
};

static void define_mesh_library_property(JSContext *ctx, JSValue proto) {
	
}

static void define_mesh_library_enum(JSContext *ctx, JSValue proto) {
}

static int js_mesh_library_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["MeshLibrary"] = MeshLibrary::__class_id;
	class_id_list.insert(MeshLibrary::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MeshLibrary::__class_id, &mesh_library_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MeshLibrary::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MeshLibrary::__class_id, proto);

	define_mesh_library_property(ctx, proto);
	define_mesh_library_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, mesh_library_class_proto_funcs, _countof(mesh_library_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, mesh_library_class_constructor, "MeshLibrary", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MeshLibrary", ctor);

	return 0;
}

JSModuleDef *_js_init_mesh_library_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_mesh_library_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MeshLibrary");
	return m;
}

JSModuleDef *js_init_mesh_library_module(JSContext *ctx) {
	return _js_init_mesh_library_module(ctx, "@godot/classes/mesh_library");
}

void register_mesh_library() {
	MeshLibrary::__init_js_class_id();
	js_init_mesh_library_module(ctx);
}