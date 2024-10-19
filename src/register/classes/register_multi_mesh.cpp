
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/multi_mesh.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void multi_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef multi_mesh_class_def = {
	"MultiMesh",
	.finalizer = multi_mesh_class_finalizer
};

static JSValue multi_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MultiMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	MultiMesh *multi_mesh_class = memnew(MultiMesh);
	if (!multi_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, multi_mesh_class);	
	return obj;
}
static JSValue multi_mesh_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiMesh::set_mesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multi_mesh_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMesh::get_mesh, ctx, this_val, argc, argv);
};
static JSValue multi_mesh_class_set_use_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiMesh::set_use_colors, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multi_mesh_class_is_using_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMesh::is_using_colors, ctx, this_val, argc, argv);
};
static JSValue multi_mesh_class_set_use_custom_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiMesh::set_use_custom_data, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multi_mesh_class_is_using_custom_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMesh::is_using_custom_data, ctx, this_val, argc, argv);
};
static JSValue multi_mesh_class_set_transform_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiMesh::set_transform_format, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multi_mesh_class_get_transform_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMesh::get_transform_format, ctx, this_val, argc, argv);
};
static JSValue multi_mesh_class_set_instance_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiMesh::set_instance_count, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multi_mesh_class_get_instance_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMesh::get_instance_count, ctx, this_val, argc, argv);
};
static JSValue multi_mesh_class_set_visible_instance_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiMesh::set_visible_instance_count, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multi_mesh_class_get_visible_instance_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMesh::get_visible_instance_count, ctx, this_val, argc, argv);
};
static JSValue multi_mesh_class_set_instance_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiMesh::set_instance_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multi_mesh_class_set_instance_transform_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiMesh::set_instance_transform_2d, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multi_mesh_class_get_instance_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMesh::get_instance_transform, ctx, this_val, argc, argv);
};
static JSValue multi_mesh_class_get_instance_transform_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMesh::get_instance_transform_2d, ctx, this_val, argc, argv);
};
static JSValue multi_mesh_class_set_instance_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiMesh::set_instance_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multi_mesh_class_get_instance_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMesh::get_instance_color, ctx, this_val, argc, argv);
};
static JSValue multi_mesh_class_set_instance_custom_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiMesh::set_instance_custom_data, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multi_mesh_class_get_instance_custom_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMesh::get_instance_custom_data, ctx, this_val, argc, argv);
};
static JSValue multi_mesh_class_set_custom_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiMesh::set_custom_aabb, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multi_mesh_class_get_custom_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMesh::get_custom_aabb, ctx, this_val, argc, argv);
};
static JSValue multi_mesh_class_get_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMesh::get_aabb, ctx, this_val, argc, argv);
};
static JSValue multi_mesh_class_get_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiMesh::get_buffer, ctx, this_val, argc, argv);
};
static JSValue multi_mesh_class_set_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiMesh::set_buffer, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry multi_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mesh", 1, &multi_mesh_class_set_mesh),
	JS_CFUNC_DEF("get_mesh", 0, &multi_mesh_class_get_mesh),
	JS_CFUNC_DEF("set_use_colors", 1, &multi_mesh_class_set_use_colors),
	JS_CFUNC_DEF("is_using_colors", 0, &multi_mesh_class_is_using_colors),
	JS_CFUNC_DEF("set_use_custom_data", 1, &multi_mesh_class_set_use_custom_data),
	JS_CFUNC_DEF("is_using_custom_data", 0, &multi_mesh_class_is_using_custom_data),
	JS_CFUNC_DEF("set_transform_format", 1, &multi_mesh_class_set_transform_format),
	JS_CFUNC_DEF("get_transform_format", 0, &multi_mesh_class_get_transform_format),
	JS_CFUNC_DEF("set_instance_count", 1, &multi_mesh_class_set_instance_count),
	JS_CFUNC_DEF("get_instance_count", 0, &multi_mesh_class_get_instance_count),
	JS_CFUNC_DEF("set_visible_instance_count", 1, &multi_mesh_class_set_visible_instance_count),
	JS_CFUNC_DEF("get_visible_instance_count", 0, &multi_mesh_class_get_visible_instance_count),
	JS_CFUNC_DEF("set_instance_transform", 2, &multi_mesh_class_set_instance_transform),
	JS_CFUNC_DEF("set_instance_transform_2d", 2, &multi_mesh_class_set_instance_transform_2d),
	JS_CFUNC_DEF("get_instance_transform", 1, &multi_mesh_class_get_instance_transform),
	JS_CFUNC_DEF("get_instance_transform_2d", 1, &multi_mesh_class_get_instance_transform_2d),
	JS_CFUNC_DEF("set_instance_color", 2, &multi_mesh_class_set_instance_color),
	JS_CFUNC_DEF("get_instance_color", 1, &multi_mesh_class_get_instance_color),
	JS_CFUNC_DEF("set_instance_custom_data", 2, &multi_mesh_class_set_instance_custom_data),
	JS_CFUNC_DEF("get_instance_custom_data", 1, &multi_mesh_class_get_instance_custom_data),
	JS_CFUNC_DEF("set_custom_aabb", 1, &multi_mesh_class_set_custom_aabb),
	JS_CFUNC_DEF("get_custom_aabb", 0, &multi_mesh_class_get_custom_aabb),
	JS_CFUNC_DEF("get_aabb", 0, &multi_mesh_class_get_aabb),
	JS_CFUNC_DEF("get_buffer", 0, &multi_mesh_class_get_buffer),
	JS_CFUNC_DEF("set_buffer", 1, &multi_mesh_class_set_buffer),
};

void define_multi_mesh_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "transform_format"),
        JS_NewCFunction(ctx, multi_mesh_class_get_transform_format, "get_transform_format", 0),
        JS_NewCFunction(ctx, multi_mesh_class_set_transform_format, "set_transform_format", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "use_colors"),
        JS_NewCFunction(ctx, multi_mesh_class_is_using_colors, "is_using_colors", 0),
        JS_NewCFunction(ctx, multi_mesh_class_set_use_colors, "set_use_colors", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "use_custom_data"),
        JS_NewCFunction(ctx, multi_mesh_class_is_using_custom_data, "is_using_custom_data", 0),
        JS_NewCFunction(ctx, multi_mesh_class_set_use_custom_data, "set_use_custom_data", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "custom_aabb"),
        JS_NewCFunction(ctx, multi_mesh_class_get_custom_aabb, "get_custom_aabb", 0),
        JS_NewCFunction(ctx, multi_mesh_class_set_custom_aabb, "set_custom_aabb", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "instance_count"),
        JS_NewCFunction(ctx, multi_mesh_class_get_instance_count, "get_instance_count", 0),
        JS_NewCFunction(ctx, multi_mesh_class_set_instance_count, "set_instance_count", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "visible_instance_count"),
        JS_NewCFunction(ctx, multi_mesh_class_get_visible_instance_count, "get_visible_instance_count", 0),
        JS_NewCFunction(ctx, multi_mesh_class_set_visible_instance_count, "set_visible_instance_count", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "mesh"),
        JS_NewCFunction(ctx, multi_mesh_class_get_mesh, "get_mesh", 0),
        JS_NewCFunction(ctx, multi_mesh_class_set_mesh, "set_mesh", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "buffer"),
        JS_NewCFunction(ctx, multi_mesh_class_get_buffer, "get_buffer", 0),
        JS_NewCFunction(ctx, multi_mesh_class_set_buffer, "set_buffer", 1),
        JS_PROP_GETSET
    );
}

static int js_multi_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&MultiMesh::__class_id);
	classes["MultiMesh"] = MultiMesh::__class_id;
	class_id_list.insert(MultiMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MultiMesh::__class_id, &multi_mesh_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MultiMesh::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MultiMesh::__class_id, proto);

	define_multi_mesh_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, multi_mesh_class_proto_funcs, _countof(multi_mesh_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, multi_mesh_class_constructor, "MultiMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MultiMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_multi_mesh_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_multi_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MultiMesh");
	return m;
}

JSModuleDef *js_init_multi_mesh_module(JSContext *ctx) {
	return _js_init_multi_mesh_module(ctx, "godot/classes/multi_mesh");
}

void register_multi_mesh() {
	MultiMesh::__init_js_class_id();
	js_init_multi_mesh_module(ctx);
}