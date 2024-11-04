
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/sphere_shape3d.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void sphere_shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	SphereShape3D *sphere_shape3d = static_cast<SphereShape3D *>(JS_GetOpaque(val, SphereShape3D::__class_id));
	if (sphere_shape3d)
		memdelete(sphere_shape3d);
}

static JSClassDef sphere_shape3d_class_def = {
	"SphereShape3D",
	.finalizer = sphere_shape3d_class_finalizer
};

static JSValue sphere_shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SphereShape3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	SphereShape3D *sphere_shape3d_class;
	if (argc == 1) 
		sphere_shape3d_class = static_cast<SphereShape3D *>(Variant(*argv).operator Object *());
	else 
		sphere_shape3d_class = memnew(SphereShape3D);
	if (!sphere_shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, sphere_shape3d_class);
	return obj;
}
static JSValue sphere_shape3d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SphereShape3D::set_radius, ctx, this_val, argc, argv);
};
static JSValue sphere_shape3d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SphereShape3D::get_radius, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry sphere_shape3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &sphere_shape3d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &sphere_shape3d_class_get_radius),
};

static void define_sphere_shape3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "radius"),
        JS_NewCFunction(ctx, sphere_shape3d_class_get_radius, "get_radius", 0),
        JS_NewCFunction(ctx, sphere_shape3d_class_set_radius, "set_radius", 1),
        JS_PROP_GETSET
    );
	
}

static void define_sphere_shape3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_sphere_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["SphereShape3D"] = SphereShape3D::__class_id;
	class_id_list.insert(SphereShape3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SphereShape3D::__class_id, &sphere_shape3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SphereShape3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Shape3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SphereShape3D::__class_id, proto);

	define_sphere_shape3d_property(ctx, proto);
	define_sphere_shape3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, sphere_shape3d_class_proto_funcs, _countof(sphere_shape3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, sphere_shape3d_class_constructor, "SphereShape3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "SphereShape3D", ctor);
	constructors[SphereShape3D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_sphere_shape3d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/shape3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sphere_shape3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SphereShape3D");
	return m;
}

JSModuleDef *js_init_sphere_shape3d_module(JSContext *ctx) {
	return _js_init_sphere_shape3d_module(ctx, "@godot/classes/sphere_shape3d");
}

void register_sphere_shape3d() {
	SphereShape3D::__init_js_class_id();
	js_init_sphere_shape3d_module(ctx);
}