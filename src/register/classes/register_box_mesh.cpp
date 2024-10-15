
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/box_mesh.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void box_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	BoxMesh *box_mesh = static_cast<BoxMesh *>(JS_GetOpaque(val, BoxMesh::__class_id));
	if (box_mesh)
		memdelete(box_mesh);
}

static JSClassDef box_mesh_class_def = {
	"BoxMesh",
	.finalizer = box_mesh_class_finalizer
};

static JSValue box_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, BoxMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	BoxMesh *box_mesh_class = memnew(BoxMesh);
	if (!box_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, box_mesh_class);	
	return obj;
}
static JSValue box_mesh_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BoxMesh::set_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue box_mesh_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BoxMesh::get_size, ctx, this_val, argc, argv);
};
static JSValue box_mesh_class_set_subdivide_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BoxMesh::set_subdivide_width, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue box_mesh_class_get_subdivide_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BoxMesh::get_subdivide_width, ctx, this_val, argc, argv);
};
static JSValue box_mesh_class_set_subdivide_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BoxMesh::set_subdivide_height, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue box_mesh_class_get_subdivide_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BoxMesh::get_subdivide_height, ctx, this_val, argc, argv);
};
static JSValue box_mesh_class_set_subdivide_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BoxMesh::set_subdivide_depth, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue box_mesh_class_get_subdivide_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BoxMesh::get_subdivide_depth, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry box_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &box_mesh_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &box_mesh_class_get_size),
	JS_CFUNC_DEF("set_subdivide_width", 1, &box_mesh_class_set_subdivide_width),
	JS_CFUNC_DEF("get_subdivide_width", 0, &box_mesh_class_get_subdivide_width),
	JS_CFUNC_DEF("set_subdivide_height", 1, &box_mesh_class_set_subdivide_height),
	JS_CFUNC_DEF("get_subdivide_height", 0, &box_mesh_class_get_subdivide_height),
	JS_CFUNC_DEF("set_subdivide_depth", 1, &box_mesh_class_set_subdivide_depth),
	JS_CFUNC_DEF("get_subdivide_depth", 0, &box_mesh_class_get_subdivide_depth),
};

void define_box_mesh_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, box_mesh_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, box_mesh_class_set_size, "set_size", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "subdivide_width"),
        JS_NewCFunction(ctx, box_mesh_class_get_subdivide_width, "get_subdivide_width", 0),
        JS_NewCFunction(ctx, box_mesh_class_set_subdivide_width, "set_subdivide_width", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "subdivide_height"),
        JS_NewCFunction(ctx, box_mesh_class_get_subdivide_height, "get_subdivide_height", 0),
        JS_NewCFunction(ctx, box_mesh_class_set_subdivide_height, "set_subdivide_height", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "subdivide_depth"),
        JS_NewCFunction(ctx, box_mesh_class_get_subdivide_depth, "get_subdivide_depth", 0),
        JS_NewCFunction(ctx, box_mesh_class_set_subdivide_depth, "set_subdivide_depth", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_box_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&BoxMesh::__class_id);
	classes["BoxMesh"] = BoxMesh::__class_id;
	class_id_list.insert(BoxMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), BoxMesh::__class_id, &box_mesh_class_def);

	JSValue proto = JS_NewObjectClass(ctx, BoxMesh::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, BoxMesh::__class_id, proto);

	define_box_mesh_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, box_mesh_class_proto_funcs, _countof(box_mesh_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, box_mesh_class_constructor, "BoxMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "BoxMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_box_mesh_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/primitive_mesh';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_box_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "BoxMesh");
	return m;
}

JSModuleDef *js_init_box_mesh_module(JSContext *ctx) {
	return _js_init_box_mesh_module(ctx, "godot/classes/box_mesh");
}

void register_box_mesh() {
	BoxMesh::__init_js_class_id();
	js_init_box_mesh_module(ctx);
}