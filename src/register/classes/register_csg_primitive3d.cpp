
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/csg_shape3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void csg_primitive3d_class_finalizer(JSRuntime *rt, JSValue val) {
	CSGPrimitive3D *csg_primitive3d = static_cast<CSGPrimitive3D *>(JS_GetOpaque(val, CSGPrimitive3D::__class_id));
	if (csg_primitive3d)
		CSGPrimitive3D::free(nullptr, csg_primitive3d);
}

static JSClassDef csg_primitive3d_class_def = {
	"CSGPrimitive3D",
	.finalizer = csg_primitive3d_class_finalizer
};

static JSValue csg_primitive3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CSGPrimitive3D *csg_primitive3d_class;
	JSValue obj = JS_NewObjectClass(ctx, CSGPrimitive3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	csg_primitive3d_class = memnew(CSGPrimitive3D);
	if (!csg_primitive3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, csg_primitive3d_class);
	return obj;
}
static JSValue csg_primitive3d_class_set_flip_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CSGPrimitive3D::set_flip_faces, CSGPrimitive3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue csg_primitive3d_class_get_flip_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CSGPrimitive3D::get_flip_faces, CSGPrimitive3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry csg_primitive3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_flip_faces", 1, &csg_primitive3d_class_set_flip_faces),
	JS_CFUNC_DEF("get_flip_faces", 0, &csg_primitive3d_class_get_flip_faces),
};

static int js_csg_primitive3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CSGPrimitive3D::__class_id);
	classes["CSGPrimitive3D"] = CSGPrimitive3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CSGPrimitive3D::__class_id, &csg_primitive3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CSGShape3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CSGPrimitive3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, csg_primitive3d_class_proto_funcs, _countof(csg_primitive3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, csg_primitive3d_class_constructor, "CSGPrimitive3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CSGPrimitive3D", ctor);

	return 0;
}

JSModuleDef *_js_init_csg_primitive3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_csg_primitive3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CSGPrimitive3D");
	return m;
}

JSModuleDef *js_init_csg_primitive3d_module(JSContext *ctx) {
	return _js_init_csg_primitive3d_module(ctx, "godot/classes/csg_primitive3d");
}

void register_csg_primitive3d() {
	js_init_csg_primitive3d_module(ctx);
}