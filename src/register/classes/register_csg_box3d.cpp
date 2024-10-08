
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/csg_box3d.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void csg_box3d_class_finalizer(JSRuntime *rt, JSValue val) {
	CSGBox3D *csg_box3d = static_cast<CSGBox3D *>(JS_GetOpaque(val, CSGBox3D::__class_id));
	if (csg_box3d)
		CSGBox3D::free(nullptr, csg_box3d);
}

static JSClassDef csg_box3d_class_def = {
	"CSGBox3D",
	.finalizer = csg_box3d_class_finalizer
};

static JSValue csg_box3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CSGBox3D *csg_box3d_class;
	JSValue obj = JS_NewObjectClass(ctx, CSGBox3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	csg_box3d_class = memnew(CSGBox3D);
	if (!csg_box3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, csg_box3d_class);
	return obj;
}
static JSValue csg_box3d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGBox3D::set_size, CSGBox3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_box3d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGBox3D::get_size, CSGBox3D::__class_id, ctx, this_val, argv);
};
static JSValue csg_box3d_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGBox3D::set_material, CSGBox3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_box3d_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CSGBox3D::get_material, CSGBox3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry csg_box3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &csg_box3d_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &csg_box3d_class_get_size),
	JS_CFUNC_DEF("set_material", 1, &csg_box3d_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &csg_box3d_class_get_material),
};

static int js_csg_box3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CSGBox3D::__class_id);
	classes["CSGBox3D"] = CSGBox3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CSGBox3D::__class_id, &csg_box3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CSGPrimitive3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CSGBox3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, csg_box3d_class_proto_funcs, _countof(csg_box3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, csg_box3d_class_constructor, "CSGBox3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CSGBox3D", ctor);

	return 0;
}

JSModuleDef *_js_init_csg_box3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_csg_box3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CSGBox3D");
	return m;
}

JSModuleDef *js_init_csg_box3d_module(JSContext *ctx) {
	return _js_init_csg_box3d_module(ctx, "godot/classes/csg_box3d");
}

void register_csg_box3d() {
	js_init_csg_box3d_module(ctx);
}