
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/marker2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void marker2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef marker2d_class_def = {
	"Marker2D",
	.finalizer = marker2d_class_finalizer
};

static JSValue marker2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Marker2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	Marker2D *marker2d_class = memnew(Marker2D);
	if (!marker2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, marker2d_class);	
	return obj;
}
static JSValue marker2d_class_set_gizmo_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Marker2D::set_gizmo_extents, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue marker2d_class_get_gizmo_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Marker2D::get_gizmo_extents, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry marker2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_gizmo_extents", 1, &marker2d_class_set_gizmo_extents),
	JS_CFUNC_DEF("get_gizmo_extents", 0, &marker2d_class_get_gizmo_extents),
};

void define_marker2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gizmo_extents"),
        JS_NewCFunction(ctx, marker2d_class_get_gizmo_extents, "get_gizmo_extents", 0),
        JS_NewCFunction(ctx, marker2d_class_set_gizmo_extents, "set_gizmo_extents", 1),
        JS_PROP_GETSET
    );
}

static int js_marker2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Marker2D::__class_id);
	classes["Marker2D"] = Marker2D::__class_id;
	class_id_list.insert(Marker2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Marker2D::__class_id, &marker2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Marker2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Marker2D::__class_id, proto);

	define_marker2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, marker2d_class_proto_funcs, _countof(marker2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, marker2d_class_constructor, "Marker2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Marker2D", ctor);

	return 0;
}

JSModuleDef *_js_init_marker2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_marker2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Marker2D");
	return m;
}

JSModuleDef *js_init_marker2d_module(JSContext *ctx) {
	return _js_init_marker2d_module(ctx, "godot/classes/marker2d");
}

void register_marker2d() {
	Marker2D::__init_js_class_id();
	js_init_marker2d_module(ctx);
}