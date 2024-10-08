
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/ribbon_trail_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void ribbon_trail_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	RibbonTrailMesh *ribbon_trail_mesh = static_cast<RibbonTrailMesh *>(JS_GetOpaque(val, RibbonTrailMesh::__class_id));
	if (ribbon_trail_mesh)
		RibbonTrailMesh::free(nullptr, ribbon_trail_mesh);
}

static JSClassDef ribbon_trail_mesh_class_def = {
	"RibbonTrailMesh",
	.finalizer = ribbon_trail_mesh_class_finalizer
};

static JSValue ribbon_trail_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RibbonTrailMesh *ribbon_trail_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, RibbonTrailMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	ribbon_trail_mesh_class = memnew(RibbonTrailMesh);
	if (!ribbon_trail_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, ribbon_trail_mesh_class);
	return obj;
}
static JSValue ribbon_trail_mesh_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RibbonTrailMesh::set_size, RibbonTrailMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ribbon_trail_mesh_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RibbonTrailMesh::get_size, RibbonTrailMesh::__class_id, ctx, this_val, argv);
};
static JSValue ribbon_trail_mesh_class_set_sections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RibbonTrailMesh::set_sections, RibbonTrailMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ribbon_trail_mesh_class_get_sections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RibbonTrailMesh::get_sections, RibbonTrailMesh::__class_id, ctx, this_val, argv);
};
static JSValue ribbon_trail_mesh_class_set_section_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RibbonTrailMesh::set_section_length, RibbonTrailMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ribbon_trail_mesh_class_get_section_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RibbonTrailMesh::get_section_length, RibbonTrailMesh::__class_id, ctx, this_val, argv);
};
static JSValue ribbon_trail_mesh_class_set_section_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RibbonTrailMesh::set_section_segments, RibbonTrailMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ribbon_trail_mesh_class_get_section_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RibbonTrailMesh::get_section_segments, RibbonTrailMesh::__class_id, ctx, this_val, argv);
};
static JSValue ribbon_trail_mesh_class_set_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RibbonTrailMesh::set_curve, RibbonTrailMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ribbon_trail_mesh_class_get_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RibbonTrailMesh::get_curve, RibbonTrailMesh::__class_id, ctx, this_val, argv);
};
static JSValue ribbon_trail_mesh_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RibbonTrailMesh::set_shape, RibbonTrailMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ribbon_trail_mesh_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RibbonTrailMesh::get_shape, RibbonTrailMesh::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry ribbon_trail_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &ribbon_trail_mesh_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &ribbon_trail_mesh_class_get_size),
	JS_CFUNC_DEF("set_sections", 1, &ribbon_trail_mesh_class_set_sections),
	JS_CFUNC_DEF("get_sections", 0, &ribbon_trail_mesh_class_get_sections),
	JS_CFUNC_DEF("set_section_length", 1, &ribbon_trail_mesh_class_set_section_length),
	JS_CFUNC_DEF("get_section_length", 0, &ribbon_trail_mesh_class_get_section_length),
	JS_CFUNC_DEF("set_section_segments", 1, &ribbon_trail_mesh_class_set_section_segments),
	JS_CFUNC_DEF("get_section_segments", 0, &ribbon_trail_mesh_class_get_section_segments),
	JS_CFUNC_DEF("set_curve", 1, &ribbon_trail_mesh_class_set_curve),
	JS_CFUNC_DEF("get_curve", 0, &ribbon_trail_mesh_class_get_curve),
	JS_CFUNC_DEF("set_shape", 1, &ribbon_trail_mesh_class_set_shape),
	JS_CFUNC_DEF("get_shape", 0, &ribbon_trail_mesh_class_get_shape),
};

static int js_ribbon_trail_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RibbonTrailMesh::__class_id);
	classes["RibbonTrailMesh"] = RibbonTrailMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RibbonTrailMesh::__class_id, &ribbon_trail_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RibbonTrailMesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, ribbon_trail_mesh_class_proto_funcs, _countof(ribbon_trail_mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, ribbon_trail_mesh_class_constructor, "RibbonTrailMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RibbonTrailMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_ribbon_trail_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_ribbon_trail_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RibbonTrailMesh");
	return m;
}

JSModuleDef *js_init_ribbon_trail_mesh_module(JSContext *ctx) {
	return _js_init_ribbon_trail_mesh_module(ctx, "godot/classes/ribbon_trail_mesh");
}

void register_ribbon_trail_mesh() {
	js_init_ribbon_trail_mesh_module(ctx);
}