
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/sphere_shape3d.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void sphere_shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	SphereShape3D *sphere_shape3d = static_cast<SphereShape3D *>(JS_GetOpaque(val, SphereShape3D::__class_id));
	if (sphere_shape3d)
		SphereShape3D::free(nullptr, sphere_shape3d);
}

static JSClassDef sphere_shape3d_class_def = {
	"SphereShape3D",
	.finalizer = sphere_shape3d_class_finalizer
};

static JSValue sphere_shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SphereShape3D *sphere_shape3d_class;
	JSValue obj = JS_NewObjectClass(ctx, SphereShape3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	sphere_shape3d_class = memnew(SphereShape3D);
	if (!sphere_shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, sphere_shape3d_class);
	return obj;
}
static JSValue sphere_shape3d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SphereShape3D::set_radius, SphereShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sphere_shape3d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SphereShape3D::get_radius, SphereShape3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry sphere_shape3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &sphere_shape3d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &sphere_shape3d_class_get_radius),
};

static int js_sphere_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SphereShape3D::__class_id);
	classes["SphereShape3D"] = SphereShape3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SphereShape3D::__class_id, &sphere_shape3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Shape3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SphereShape3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, sphere_shape3d_class_proto_funcs, _countof(sphere_shape3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, sphere_shape3d_class_constructor, "SphereShape3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SphereShape3D", ctor);

	return 0;
}

JSModuleDef *_js_init_sphere_shape3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sphere_shape3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SphereShape3D");
	return m;
}

JSModuleDef *js_init_sphere_shape3d_module(JSContext *ctx) {
	return _js_init_sphere_shape3d_module(ctx, "godot/classes/sphere_shape3d");
}

void register_sphere_shape3d() {
	js_init_sphere_shape3d_module(ctx);
}