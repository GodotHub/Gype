
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/classes/voxel_gi.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/voxel_gi_data.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void voxel_gi_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef voxel_gi_class_def = {
	"VoxelGI",
	.finalizer = voxel_gi_class_finalizer
};

static JSValue voxel_gi_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VoxelGI::__class_id);
	if (JS_IsException(obj))
		return obj;

	VoxelGI *voxel_gi_class;
	if (argc == 1) 
		voxel_gi_class = static_cast<VoxelGI *>(Variant(*argv).operator Object *());
	else 
		voxel_gi_class = memnew(VoxelGI);
	if (!voxel_gi_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, voxel_gi_class);
	return obj;
}
static JSValue voxel_gi_class_set_probe_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VoxelGI::set_probe_data, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_class_get_probe_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGI::get_probe_data, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_class_set_subdiv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VoxelGI::set_subdiv, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_class_get_subdiv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGI::get_subdiv, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VoxelGI::set_size, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGI::get_size, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_class_set_camera_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VoxelGI::set_camera_attributes, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_class_get_camera_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGI::get_camera_attributes, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_class_bake(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VoxelGI::bake, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_class_debug_bake(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VoxelGI::debug_bake, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry voxel_gi_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_probe_data", 1, &voxel_gi_class_set_probe_data),
	JS_CFUNC_DEF("get_probe_data", 0, &voxel_gi_class_get_probe_data),
	JS_CFUNC_DEF("set_subdiv", 1, &voxel_gi_class_set_subdiv),
	JS_CFUNC_DEF("get_subdiv", 0, &voxel_gi_class_get_subdiv),
	JS_CFUNC_DEF("set_size", 1, &voxel_gi_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &voxel_gi_class_get_size),
	JS_CFUNC_DEF("set_camera_attributes", 1, &voxel_gi_class_set_camera_attributes),
	JS_CFUNC_DEF("get_camera_attributes", 0, &voxel_gi_class_get_camera_attributes),
	JS_CFUNC_DEF("bake", 2, &voxel_gi_class_bake),
	JS_CFUNC_DEF("debug_bake", 0, &voxel_gi_class_debug_bake),
};

static void define_voxel_gi_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "subdiv"),
        JS_NewCFunction(ctx, voxel_gi_class_get_subdiv, "get_subdiv", 0),
        JS_NewCFunction(ctx, voxel_gi_class_set_subdiv, "set_subdiv", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, voxel_gi_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, voxel_gi_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "camera_attributes"),
        JS_NewCFunction(ctx, voxel_gi_class_get_camera_attributes, "get_camera_attributes", 0),
        JS_NewCFunction(ctx, voxel_gi_class_set_camera_attributes, "set_camera_attributes", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "data"),
        JS_NewCFunction(ctx, voxel_gi_class_get_probe_data, "get_probe_data", 0),
        JS_NewCFunction(ctx, voxel_gi_class_set_probe_data, "set_probe_data", 1),
        JS_PROP_GETSET
    );
	
}

static void define_voxel_gi_enum(JSContext *ctx, JSValue proto) {
	JSValue Subdiv_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Subdiv_obj, "SUBDIV_64", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Subdiv_obj, "SUBDIV_128", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Subdiv_obj, "SUBDIV_256", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Subdiv_obj, "SUBDIV_512", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Subdiv_obj, "SUBDIV_MAX", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "Subdiv", Subdiv_obj);
}

static int js_voxel_gi_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["VoxelGI"] = VoxelGI::__class_id;
	class_id_list.insert(VoxelGI::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VoxelGI::__class_id, &voxel_gi_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VoxelGI::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VoxelGI::__class_id, proto);

	define_voxel_gi_property(ctx, proto);
	define_voxel_gi_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, voxel_gi_class_proto_funcs, _countof(voxel_gi_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, voxel_gi_class_constructor, "VoxelGI", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VoxelGI", ctor);

	return 0;
}

JSModuleDef *_js_init_voxel_gi_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/visual_instance3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_voxel_gi_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VoxelGI");
	return m;
}

JSModuleDef *js_init_voxel_gi_module(JSContext *ctx) {
	return _js_init_voxel_gi_module(ctx, "@godot/classes/voxel_gi");
}

void register_voxel_gi() {
	VoxelGI::__init_js_class_id();
	js_init_voxel_gi_module(ctx);
}