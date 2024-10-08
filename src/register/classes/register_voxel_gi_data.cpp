
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/voxel_gi_data.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void voxel_gi_data_class_finalizer(JSRuntime *rt, JSValue val) {
	VoxelGIData *voxel_gi_data = static_cast<VoxelGIData *>(JS_GetOpaque(val, VoxelGIData::__class_id));
	if (voxel_gi_data)
		VoxelGIData::free(nullptr, voxel_gi_data);
}

static JSClassDef voxel_gi_data_class_def = {
	"VoxelGIData",
	.finalizer = voxel_gi_data_class_finalizer
};

static JSValue voxel_gi_data_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VoxelGIData *voxel_gi_data_class;
	JSValue obj = JS_NewObjectClass(ctx, VoxelGIData::__class_id);
	if (JS_IsException(obj))
		return obj;
	voxel_gi_data_class = memnew(VoxelGIData);
	if (!voxel_gi_data_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, voxel_gi_data_class);
	return obj;
}
static JSValue voxel_gi_data_class_allocate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VoxelGIData::allocate, VoxelGIData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_get_bounds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VoxelGIData::get_bounds, VoxelGIData::__class_id, ctx, this_val, argv);
};
static JSValue voxel_gi_data_class_get_octree_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VoxelGIData::get_octree_size, VoxelGIData::__class_id, ctx, this_val, argv);
};
static JSValue voxel_gi_data_class_get_to_cell_xform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VoxelGIData::get_to_cell_xform, VoxelGIData::__class_id, ctx, this_val, argv);
};
static JSValue voxel_gi_data_class_get_octree_cells(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VoxelGIData::get_octree_cells, VoxelGIData::__class_id, ctx, this_val, argv);
};
static JSValue voxel_gi_data_class_get_data_cells(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VoxelGIData::get_data_cells, VoxelGIData::__class_id, ctx, this_val, argv);
};
static JSValue voxel_gi_data_class_get_level_counts(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VoxelGIData::get_level_counts, VoxelGIData::__class_id, ctx, this_val, argv);
};
static JSValue voxel_gi_data_class_set_dynamic_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VoxelGIData::set_dynamic_range, VoxelGIData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_get_dynamic_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VoxelGIData::get_dynamic_range, VoxelGIData::__class_id, ctx, this_val, argv);
};
static JSValue voxel_gi_data_class_set_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VoxelGIData::set_energy, VoxelGIData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_get_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VoxelGIData::get_energy, VoxelGIData::__class_id, ctx, this_val, argv);
};
static JSValue voxel_gi_data_class_set_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VoxelGIData::set_bias, VoxelGIData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_get_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VoxelGIData::get_bias, VoxelGIData::__class_id, ctx, this_val, argv);
};
static JSValue voxel_gi_data_class_set_normal_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VoxelGIData::set_normal_bias, VoxelGIData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_get_normal_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VoxelGIData::get_normal_bias, VoxelGIData::__class_id, ctx, this_val, argv);
};
static JSValue voxel_gi_data_class_set_propagation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VoxelGIData::set_propagation, VoxelGIData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_get_propagation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VoxelGIData::get_propagation, VoxelGIData::__class_id, ctx, this_val, argv);
};
static JSValue voxel_gi_data_class_set_interior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VoxelGIData::set_interior, VoxelGIData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_is_interior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VoxelGIData::is_interior, VoxelGIData::__class_id, ctx, this_val, argv);
};
static JSValue voxel_gi_data_class_set_use_two_bounces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VoxelGIData::set_use_two_bounces, VoxelGIData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue voxel_gi_data_class_is_using_two_bounces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VoxelGIData::is_using_two_bounces, VoxelGIData::__class_id, ctx, this_val, argv);
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

static int js_voxel_gi_data_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VoxelGIData::__class_id);
	classes["VoxelGIData"] = VoxelGIData::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VoxelGIData::__class_id, &voxel_gi_data_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VoxelGIData::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, voxel_gi_data_class_proto_funcs, _countof(voxel_gi_data_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, voxel_gi_data_class_constructor, "VoxelGIData", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VoxelGIData", ctor);

	return 0;
}

JSModuleDef *_js_init_voxel_gi_data_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_voxel_gi_data_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VoxelGIData");
	return m;
}

JSModuleDef *js_init_voxel_gi_data_module(JSContext *ctx) {
	return _js_init_voxel_gi_data_module(ctx, "godot/classes/voxel_gi_data");
}

void register_voxel_gi_data() {
	js_init_voxel_gi_data_module(ctx);
}