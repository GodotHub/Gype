
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/plane_mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void plane_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	PlaneMesh *plane_mesh = static_cast<PlaneMesh *>(JS_GetOpaque(val, PlaneMesh::__class_id));
	if (plane_mesh)
		memdelete(plane_mesh);
}

static JSClassDef plane_mesh_class_def = {
	"PlaneMesh",
	.finalizer = plane_mesh_class_finalizer
};

static JSValue plane_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PlaneMesh::__class_id);
	if (JS_IsException(obj))
		return obj;

	PlaneMesh *plane_mesh_class;
	if (argc == 1) 
		plane_mesh_class = static_cast<PlaneMesh *>(Variant(*argv).operator Object *());
	else 
		plane_mesh_class = memnew(PlaneMesh);
	if (!plane_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, plane_mesh_class);
	return obj;
}
static JSValue plane_mesh_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PlaneMesh::set_size, ctx, this_val, argc, argv);
};
static JSValue plane_mesh_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PlaneMesh::get_size, ctx, this_val, argc, argv);
};
static JSValue plane_mesh_class_set_subdivide_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PlaneMesh::set_subdivide_width, ctx, this_val, argc, argv);
};
static JSValue plane_mesh_class_get_subdivide_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PlaneMesh::get_subdivide_width, ctx, this_val, argc, argv);
};
static JSValue plane_mesh_class_set_subdivide_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PlaneMesh::set_subdivide_depth, ctx, this_val, argc, argv);
};
static JSValue plane_mesh_class_get_subdivide_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PlaneMesh::get_subdivide_depth, ctx, this_val, argc, argv);
};
static JSValue plane_mesh_class_set_center_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PlaneMesh::set_center_offset, ctx, this_val, argc, argv);
};
static JSValue plane_mesh_class_get_center_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PlaneMesh::get_center_offset, ctx, this_val, argc, argv);
};
static JSValue plane_mesh_class_set_orientation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PlaneMesh::set_orientation, ctx, this_val, argc, argv);
};
static JSValue plane_mesh_class_get_orientation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PlaneMesh::get_orientation, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry plane_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &plane_mesh_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &plane_mesh_class_get_size),
	JS_CFUNC_DEF("set_subdivide_width", 1, &plane_mesh_class_set_subdivide_width),
	JS_CFUNC_DEF("get_subdivide_width", 0, &plane_mesh_class_get_subdivide_width),
	JS_CFUNC_DEF("set_subdivide_depth", 1, &plane_mesh_class_set_subdivide_depth),
	JS_CFUNC_DEF("get_subdivide_depth", 0, &plane_mesh_class_get_subdivide_depth),
	JS_CFUNC_DEF("set_center_offset", 1, &plane_mesh_class_set_center_offset),
	JS_CFUNC_DEF("get_center_offset", 0, &plane_mesh_class_get_center_offset),
	JS_CFUNC_DEF("set_orientation", 1, &plane_mesh_class_set_orientation),
	JS_CFUNC_DEF("get_orientation", 0, &plane_mesh_class_get_orientation),
};

static void define_plane_mesh_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, plane_mesh_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, plane_mesh_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "subdivide_width"),
        JS_NewCFunction(ctx, plane_mesh_class_get_subdivide_width, "get_subdivide_width", 0),
        JS_NewCFunction(ctx, plane_mesh_class_set_subdivide_width, "set_subdivide_width", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "subdivide_depth"),
        JS_NewCFunction(ctx, plane_mesh_class_get_subdivide_depth, "get_subdivide_depth", 0),
        JS_NewCFunction(ctx, plane_mesh_class_set_subdivide_depth, "set_subdivide_depth", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "center_offset"),
        JS_NewCFunction(ctx, plane_mesh_class_get_center_offset, "get_center_offset", 0),
        JS_NewCFunction(ctx, plane_mesh_class_set_center_offset, "set_center_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "orientation"),
        JS_NewCFunction(ctx, plane_mesh_class_get_orientation, "get_orientation", 0),
        JS_NewCFunction(ctx, plane_mesh_class_set_orientation, "set_orientation", 1),
        JS_PROP_GETSET
    );
	
}

static void define_plane_mesh_enum(JSContext *ctx, JSValue proto) {
	JSValue Orientation_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Orientation_obj, "FACE_X", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Orientation_obj, "FACE_Y", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Orientation_obj, "FACE_Z", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "Orientation", Orientation_obj);
}

static int js_plane_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PlaneMesh"] = PlaneMesh::__class_id;
	class_id_list.insert(PlaneMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PlaneMesh::__class_id, &plane_mesh_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PlaneMesh::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaneMesh::__class_id, proto);

	define_plane_mesh_property(ctx, proto);
	define_plane_mesh_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, plane_mesh_class_proto_funcs, _countof(plane_mesh_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, plane_mesh_class_constructor, "PlaneMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "PlaneMesh", ctor);
	constructors[PlaneMesh::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_plane_mesh_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/primitive_mesh';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_plane_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaneMesh");
	return m;
}

JSModuleDef *js_init_plane_mesh_module(JSContext *ctx) {
	return _js_init_plane_mesh_module(ctx, "@godot/classes/plane_mesh");
}

void register_plane_mesh() {
	PlaneMesh::__init_js_class_id();
	js_init_plane_mesh_module(ctx);
}