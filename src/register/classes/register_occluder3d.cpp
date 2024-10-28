
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void occluder3d_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef occluder3d_class_def = {
	"Occluder3D",
	.finalizer = occluder3d_class_finalizer
};

static JSValue occluder3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Occluder3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	Occluder3D *occluder3d_class = memnew(Occluder3D);
	if (!occluder3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, occluder3d_class);
	return obj;
}
static JSValue occluder3d_class_get_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Occluder3D::get_vertices, ctx, this_val, argc, argv);
};
static JSValue occluder3d_class_get_indices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Occluder3D::get_indices, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry occluder3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_vertices", 0, &occluder3d_class_get_vertices),
	JS_CFUNC_DEF("get_indices", 0, &occluder3d_class_get_indices),
};

void define_occluder3d_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_occluder3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Occluder3D::__class_id);
	classes["Occluder3D"] = Occluder3D::__class_id;
	class_id_list.insert(Occluder3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Occluder3D::__class_id, &occluder3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Occluder3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Occluder3D::__class_id, proto);

	define_occluder3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, occluder3d_class_proto_funcs, _countof(occluder3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, occluder3d_class_constructor, "Occluder3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Occluder3D", ctor);

	return 0;
}

JSModuleDef *_js_init_occluder3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_occluder3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Occluder3D");
	return m;
}

JSModuleDef *js_init_occluder3d_module(JSContext *ctx) {
	return _js_init_occluder3d_module(ctx, "godot/classes/occluder3d");
}

void register_occluder3d() {
	Occluder3D::__init_js_class_id();
	js_init_occluder3d_module(ctx);
}