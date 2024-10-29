
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/csg_shape3d.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void csg_primitive3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef csg_primitive3d_class_def = {
	"CSGPrimitive3D",
	.finalizer = csg_primitive3d_class_finalizer
};

static JSValue csg_primitive3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CSGPrimitive3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	CSGPrimitive3D *csg_primitive3d_class = memnew(CSGPrimitive3D);
	if (!csg_primitive3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, csg_primitive3d_class);	
	return obj;
}
static JSValue csg_primitive3d_class_set_flip_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CSGPrimitive3D::set_flip_faces, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue csg_primitive3d_class_get_flip_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CSGPrimitive3D::get_flip_faces, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry csg_primitive3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_flip_faces", 1, &csg_primitive3d_class_set_flip_faces),
	JS_CFUNC_DEF("get_flip_faces", 0, &csg_primitive3d_class_get_flip_faces),
};

void define_csg_primitive3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "flip_faces"),
        JS_NewCFunction(ctx, csg_primitive3d_class_get_flip_faces, "get_flip_faces", 0),
        JS_NewCFunction(ctx, csg_primitive3d_class_set_flip_faces, "set_flip_faces", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_csg_primitive3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CSGPrimitive3D::__class_id);
	classes["CSGPrimitive3D"] = CSGPrimitive3D::__class_id;
	class_id_list.insert(CSGPrimitive3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CSGPrimitive3D::__class_id, &csg_primitive3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CSGPrimitive3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, CSGShape3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CSGPrimitive3D::__class_id, proto);

	define_csg_primitive3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, csg_primitive3d_class_proto_funcs, _countof(csg_primitive3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, csg_primitive3d_class_constructor, "CSGPrimitive3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CSGPrimitive3D", ctor);

	return 0;
}

JSModuleDef *_js_init_csg_primitive3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/csg_shape3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_csg_primitive3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CSGPrimitive3D");
	return m;
}

JSModuleDef *js_init_csg_primitive3d_module(JSContext *ctx) {
	return _js_init_csg_primitive3d_module(ctx, "@godot/classes/csg_primitive3d");
}

void register_csg_primitive3d() {
	CSGPrimitive3D::__init_js_class_id();
	js_init_csg_primitive3d_module(ctx);
}