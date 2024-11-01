
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/classes/quad_occluder3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void quad_occluder3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef quad_occluder3d_class_def = {
	"QuadOccluder3D",
	.finalizer = quad_occluder3d_class_finalizer
};

static JSValue quad_occluder3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, QuadOccluder3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	QuadOccluder3D *quad_occluder3d_class;
	if (argc == 1) 
		quad_occluder3d_class = static_cast<QuadOccluder3D *>(Variant(*argv).operator Object *());
	else 
		quad_occluder3d_class = memnew(QuadOccluder3D);
	if (!quad_occluder3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, quad_occluder3d_class);
	return obj;
}
static JSValue quad_occluder3d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&QuadOccluder3D::set_size, ctx, this_val, argc, argv);
};
static JSValue quad_occluder3d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&QuadOccluder3D::get_size, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry quad_occluder3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &quad_occluder3d_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &quad_occluder3d_class_get_size),
};

static void define_quad_occluder3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, quad_occluder3d_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, quad_occluder3d_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
	
}

static void define_quad_occluder3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_quad_occluder3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["QuadOccluder3D"] = QuadOccluder3D::__class_id;
	class_id_list.insert(QuadOccluder3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), QuadOccluder3D::__class_id, &quad_occluder3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, QuadOccluder3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Occluder3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, QuadOccluder3D::__class_id, proto);

	define_quad_occluder3d_property(ctx, proto);
	define_quad_occluder3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, quad_occluder3d_class_proto_funcs, _countof(quad_occluder3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, quad_occluder3d_class_constructor, "QuadOccluder3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "QuadOccluder3D", ctor);

	return 0;
}

JSModuleDef *_js_init_quad_occluder3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/occluder3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_quad_occluder3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "QuadOccluder3D");
	return m;
}

JSModuleDef *js_init_quad_occluder3d_module(JSContext *ctx) {
	return _js_init_quad_occluder3d_module(ctx, "@godot/classes/quad_occluder3d");
}

void register_quad_occluder3d() {
	QuadOccluder3D::__init_js_class_id();
	js_init_quad_occluder3d_module(ctx);
}