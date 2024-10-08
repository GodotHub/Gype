
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/importer_mesh_instance3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void importer_mesh_instance3d_class_finalizer(JSRuntime *rt, JSValue val) {
	ImporterMeshInstance3D *importer_mesh_instance3d = static_cast<ImporterMeshInstance3D *>(JS_GetOpaque(val, ImporterMeshInstance3D::__class_id));
	if (importer_mesh_instance3d)
		ImporterMeshInstance3D::free(nullptr, importer_mesh_instance3d);
}

static JSClassDef importer_mesh_instance3d_class_def = {
	"ImporterMeshInstance3D",
	.finalizer = importer_mesh_instance3d_class_finalizer
};

static JSValue importer_mesh_instance3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ImporterMeshInstance3D *importer_mesh_instance3d_class;
	JSValue obj = JS_NewObjectClass(ctx, ImporterMeshInstance3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	importer_mesh_instance3d_class = memnew(ImporterMeshInstance3D);
	if (!importer_mesh_instance3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, importer_mesh_instance3d_class);
	return obj;
}
static JSValue importer_mesh_instance3d_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImporterMeshInstance3D::set_mesh, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue importer_mesh_instance3d_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ImporterMeshInstance3D::get_mesh, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue importer_mesh_instance3d_class_set_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImporterMeshInstance3D::set_skin, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue importer_mesh_instance3d_class_get_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ImporterMeshInstance3D::get_skin, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue importer_mesh_instance3d_class_set_skeleton_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImporterMeshInstance3D::set_skeleton_path, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue importer_mesh_instance3d_class_get_skeleton_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ImporterMeshInstance3D::get_skeleton_path, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue importer_mesh_instance3d_class_set_layer_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImporterMeshInstance3D::set_layer_mask, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue importer_mesh_instance3d_class_get_layer_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ImporterMeshInstance3D::get_layer_mask, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue importer_mesh_instance3d_class_set_cast_shadows_setting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImporterMeshInstance3D::set_cast_shadows_setting, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue importer_mesh_instance3d_class_get_cast_shadows_setting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ImporterMeshInstance3D::get_cast_shadows_setting, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue importer_mesh_instance3d_class_set_visibility_range_end_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImporterMeshInstance3D::set_visibility_range_end_margin, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue importer_mesh_instance3d_class_get_visibility_range_end_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ImporterMeshInstance3D::get_visibility_range_end_margin, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue importer_mesh_instance3d_class_set_visibility_range_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImporterMeshInstance3D::set_visibility_range_end, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue importer_mesh_instance3d_class_get_visibility_range_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ImporterMeshInstance3D::get_visibility_range_end, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue importer_mesh_instance3d_class_set_visibility_range_begin_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImporterMeshInstance3D::set_visibility_range_begin_margin, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue importer_mesh_instance3d_class_get_visibility_range_begin_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ImporterMeshInstance3D::get_visibility_range_begin_margin, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue importer_mesh_instance3d_class_set_visibility_range_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImporterMeshInstance3D::set_visibility_range_begin, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue importer_mesh_instance3d_class_get_visibility_range_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ImporterMeshInstance3D::get_visibility_range_begin, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue importer_mesh_instance3d_class_set_visibility_range_fade_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImporterMeshInstance3D::set_visibility_range_fade_mode, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue importer_mesh_instance3d_class_get_visibility_range_fade_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ImporterMeshInstance3D::get_visibility_range_fade_mode, ImporterMeshInstance3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry importer_mesh_instance3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mesh", 1, &importer_mesh_instance3d_class_set_mesh),
	JS_CFUNC_DEF("get_mesh", 0, &importer_mesh_instance3d_class_get_mesh),
	JS_CFUNC_DEF("set_skin", 1, &importer_mesh_instance3d_class_set_skin),
	JS_CFUNC_DEF("get_skin", 0, &importer_mesh_instance3d_class_get_skin),
	JS_CFUNC_DEF("set_skeleton_path", 1, &importer_mesh_instance3d_class_set_skeleton_path),
	JS_CFUNC_DEF("get_skeleton_path", 0, &importer_mesh_instance3d_class_get_skeleton_path),
	JS_CFUNC_DEF("set_layer_mask", 1, &importer_mesh_instance3d_class_set_layer_mask),
	JS_CFUNC_DEF("get_layer_mask", 0, &importer_mesh_instance3d_class_get_layer_mask),
	JS_CFUNC_DEF("set_cast_shadows_setting", 1, &importer_mesh_instance3d_class_set_cast_shadows_setting),
	JS_CFUNC_DEF("get_cast_shadows_setting", 0, &importer_mesh_instance3d_class_get_cast_shadows_setting),
	JS_CFUNC_DEF("set_visibility_range_end_margin", 1, &importer_mesh_instance3d_class_set_visibility_range_end_margin),
	JS_CFUNC_DEF("get_visibility_range_end_margin", 0, &importer_mesh_instance3d_class_get_visibility_range_end_margin),
	JS_CFUNC_DEF("set_visibility_range_end", 1, &importer_mesh_instance3d_class_set_visibility_range_end),
	JS_CFUNC_DEF("get_visibility_range_end", 0, &importer_mesh_instance3d_class_get_visibility_range_end),
	JS_CFUNC_DEF("set_visibility_range_begin_margin", 1, &importer_mesh_instance3d_class_set_visibility_range_begin_margin),
	JS_CFUNC_DEF("get_visibility_range_begin_margin", 0, &importer_mesh_instance3d_class_get_visibility_range_begin_margin),
	JS_CFUNC_DEF("set_visibility_range_begin", 1, &importer_mesh_instance3d_class_set_visibility_range_begin),
	JS_CFUNC_DEF("get_visibility_range_begin", 0, &importer_mesh_instance3d_class_get_visibility_range_begin),
	JS_CFUNC_DEF("set_visibility_range_fade_mode", 1, &importer_mesh_instance3d_class_set_visibility_range_fade_mode),
	JS_CFUNC_DEF("get_visibility_range_fade_mode", 0, &importer_mesh_instance3d_class_get_visibility_range_fade_mode),
};

static int js_importer_mesh_instance3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ImporterMeshInstance3D::__class_id);
	classes["ImporterMeshInstance3D"] = ImporterMeshInstance3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ImporterMeshInstance3D::__class_id, &importer_mesh_instance3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ImporterMeshInstance3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, importer_mesh_instance3d_class_proto_funcs, _countof(importer_mesh_instance3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, importer_mesh_instance3d_class_constructor, "ImporterMeshInstance3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ImporterMeshInstance3D", ctor);

	return 0;
}

JSModuleDef *_js_init_importer_mesh_instance3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_importer_mesh_instance3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ImporterMeshInstance3D");
	return m;
}

JSModuleDef *js_init_importer_mesh_instance3d_module(JSContext *ctx) {
	return _js_init_importer_mesh_instance3d_module(ctx, "godot/classes/importer_mesh_instance3d");
}

void register_importer_mesh_instance3d() {
	js_init_importer_mesh_instance3d_module(ctx);
}