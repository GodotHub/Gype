
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/voxel_gi_data.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void voxel_gi_data_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef voxel_gi_data_class_def = {
	"VoxelGIData",
	.finalizer = voxel_gi_data_class_finalizer
};

static JSValue voxel_gi_data_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VoxelGIData::__class_id);
	if (JS_IsException(obj))
		return obj;
	VoxelGIData *voxel_gi_data_class = memnew(VoxelGIData);
	if (!voxel_gi_data_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, voxel_gi_data_class);	
	return obj;
}
static JSValue voxel_gi_data_class_allocate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VoxelGIData::allocate, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_get_bounds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGIData::get_bounds, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_data_class_get_octree_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGIData::get_octree_size, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_data_class_get_to_cell_xform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGIData::get_to_cell_xform, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_data_class_get_octree_cells(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGIData::get_octree_cells, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_data_class_get_data_cells(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGIData::get_data_cells, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_data_class_get_level_counts(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGIData::get_level_counts, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_data_class_set_dynamic_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VoxelGIData::set_dynamic_range, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_get_dynamic_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGIData::get_dynamic_range, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_data_class_set_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VoxelGIData::set_energy, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_get_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGIData::get_energy, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_data_class_set_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VoxelGIData::set_bias, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_get_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGIData::get_bias, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_data_class_set_normal_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VoxelGIData::set_normal_bias, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_get_normal_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGIData::get_normal_bias, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_data_class_set_propagation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VoxelGIData::set_propagation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_get_propagation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGIData::get_propagation, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_data_class_set_interior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VoxelGIData::set_interior, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_is_interior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGIData::is_interior, ctx, this_val, argc, argv);
};
static JSValue voxel_gi_data_class_set_use_two_bounces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VoxelGIData::set_use_two_bounces, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_is_using_two_bounces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VoxelGIData::is_using_two_bounces, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry voxel_gi_data_class_proto_funcs[] = {
	JS_CFUNC_DEF("allocate", 7, &voxel_gi_data_class_allocate),
	JS_CFUNC_DEF("get_bounds", 0, &voxel_gi_data_class_get_bounds),
	JS_CFUNC_DEF("get_octree_size", 0, &voxel_gi_data_class_get_octree_size),
	JS_CFUNC_DEF("get_to_cell_xform", 0, &voxel_gi_data_class_get_to_cell_xform),
	JS_CFUNC_DEF("get_octree_cells", 0, &voxel_gi_data_class_get_octree_cells),
	JS_CFUNC_DEF("get_data_cells", 0, &voxel_gi_data_class_get_data_cells),
	JS_CFUNC_DEF("get_level_counts", 0, &voxel_gi_data_class_get_level_counts),
	JS_CFUNC_DEF("set_dynamic_range", 1, &voxel_gi_data_class_set_dynamic_range),
	JS_CFUNC_DEF("get_dynamic_range", 0, &voxel_gi_data_class_get_dynamic_range),
	JS_CFUNC_DEF("set_energy", 1, &voxel_gi_data_class_set_energy),
	JS_CFUNC_DEF("get_energy", 0, &voxel_gi_data_class_get_energy),
	JS_CFUNC_DEF("set_bias", 1, &voxel_gi_data_class_set_bias),
	JS_CFUNC_DEF("get_bias", 0, &voxel_gi_data_class_get_bias),
	JS_CFUNC_DEF("set_normal_bias", 1, &voxel_gi_data_class_set_normal_bias),
	JS_CFUNC_DEF("get_normal_bias", 0, &voxel_gi_data_class_get_normal_bias),
	JS_CFUNC_DEF("set_propagation", 1, &voxel_gi_data_class_set_propagation),
	JS_CFUNC_DEF("get_propagation", 0, &voxel_gi_data_class_get_propagation),
	JS_CFUNC_DEF("set_interior", 1, &voxel_gi_data_class_set_interior),
	JS_CFUNC_DEF("is_interior", 0, &voxel_gi_data_class_is_interior),
	JS_CFUNC_DEF("set_use_two_bounces", 1, &voxel_gi_data_class_set_use_two_bounces),
	JS_CFUNC_DEF("is_using_two_bounces", 0, &voxel_gi_data_class_is_using_two_bounces),
};

void define_voxel_gi_data_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "dynamic_range"),
        JS_NewCFunction(ctx, voxel_gi_data_class_get_dynamic_range, "get_dynamic_range", 0),
        JS_NewCFunction(ctx, voxel_gi_data_class_set_dynamic_range, "set_dynamic_range", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "energy"),
        JS_NewCFunction(ctx, voxel_gi_data_class_get_energy, "get_energy", 0),
        JS_NewCFunction(ctx, voxel_gi_data_class_set_energy, "set_energy", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bias"),
        JS_NewCFunction(ctx, voxel_gi_data_class_get_bias, "get_bias", 0),
        JS_NewCFunction(ctx, voxel_gi_data_class_set_bias, "set_bias", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "normal_bias"),
        JS_NewCFunction(ctx, voxel_gi_data_class_get_normal_bias, "get_normal_bias", 0),
        JS_NewCFunction(ctx, voxel_gi_data_class_set_normal_bias, "set_normal_bias", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "propagation"),
        JS_NewCFunction(ctx, voxel_gi_data_class_get_propagation, "get_propagation", 0),
        JS_NewCFunction(ctx, voxel_gi_data_class_set_propagation, "set_propagation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "use_two_bounces"),
        JS_NewCFunction(ctx, voxel_gi_data_class_is_using_two_bounces, "is_using_two_bounces", 0),
        JS_NewCFunction(ctx, voxel_gi_data_class_set_use_two_bounces, "set_use_two_bounces", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "interior"),
        JS_NewCFunction(ctx, voxel_gi_data_class_is_interior, "is_interior", 0),
        JS_NewCFunction(ctx, voxel_gi_data_class_set_interior, "set_interior", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_voxel_gi_data_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VoxelGIData::__class_id);
	classes["VoxelGIData"] = VoxelGIData::__class_id;
	class_id_list.insert(VoxelGIData::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VoxelGIData::__class_id, &voxel_gi_data_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VoxelGIData::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VoxelGIData::__class_id, proto);

	define_voxel_gi_data_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, voxel_gi_data_class_proto_funcs, _countof(voxel_gi_data_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, voxel_gi_data_class_constructor, "VoxelGIData", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VoxelGIData", ctor);

	return 0;
}

JSModuleDef *_js_init_voxel_gi_data_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_voxel_gi_data_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VoxelGIData");
	return m;
}

JSModuleDef *js_init_voxel_gi_data_module(JSContext *ctx) {
	return _js_init_voxel_gi_data_module(ctx, "@godot/classes/voxel_gi_data");
}

void register_voxel_gi_data() {
	VoxelGIData::__init_js_class_id();
	js_init_voxel_gi_data_module(ctx);
}