
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/world_boundary_shape3d.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void world_boundary_shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	WorldBoundaryShape3D *world_boundary_shape3d = static_cast<WorldBoundaryShape3D *>(JS_GetOpaque(val, WorldBoundaryShape3D::__class_id));
	if (world_boundary_shape3d)
		memdelete(world_boundary_shape3d);
}

static JSClassDef world_boundary_shape3d_class_def = {
	"WorldBoundaryShape3D",
	.finalizer = world_boundary_shape3d_class_finalizer
};

static JSValue world_boundary_shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, WorldBoundaryShape3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	WorldBoundaryShape3D *world_boundary_shape3d_class = memnew(WorldBoundaryShape3D);
	if (!world_boundary_shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, world_boundary_shape3d_class);	
	return obj;
}
static JSValue world_boundary_shape3d_class_set_plane(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WorldBoundaryShape3D::set_plane, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue world_boundary_shape3d_class_get_plane(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WorldBoundaryShape3D::get_plane, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry world_boundary_shape3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_plane", 1, &world_boundary_shape3d_class_set_plane),
	JS_CFUNC_DEF("get_plane", 0, &world_boundary_shape3d_class_get_plane),
};

void define_world_boundary_shape3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "plane"),
        JS_NewCFunction(ctx, world_boundary_shape3d_class_get_plane, "get_plane", 0),
        JS_NewCFunction(ctx, world_boundary_shape3d_class_set_plane, "set_plane", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_world_boundary_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&WorldBoundaryShape3D::__class_id);
	classes["WorldBoundaryShape3D"] = WorldBoundaryShape3D::__class_id;
	class_id_list.insert(WorldBoundaryShape3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), WorldBoundaryShape3D::__class_id, &world_boundary_shape3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, WorldBoundaryShape3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Shape3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WorldBoundaryShape3D::__class_id, proto);

	define_world_boundary_shape3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, world_boundary_shape3d_class_proto_funcs, _countof(world_boundary_shape3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, world_boundary_shape3d_class_constructor, "WorldBoundaryShape3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "WorldBoundaryShape3D", ctor);

	return 0;
}

JSModuleDef *_js_init_world_boundary_shape3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/shape3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_world_boundary_shape3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "WorldBoundaryShape3D");
	return m;
}

JSModuleDef *js_init_world_boundary_shape3d_module(JSContext *ctx) {
	return _js_init_world_boundary_shape3d_module(ctx, "godot/classes/world_boundary_shape3d");
}

void register_world_boundary_shape3d() {
	WorldBoundaryShape3D::__init_js_class_id();
	js_init_world_boundary_shape3d_module(ctx);
}