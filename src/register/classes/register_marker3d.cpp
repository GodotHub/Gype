
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/marker3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void marker3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef marker3d_class_def = {
	"Marker3D",
	.finalizer = marker3d_class_finalizer
};

static JSValue marker3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Marker3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	Marker3D *marker3d_class;
	if (argc == 1) {
		Variant vobj = *argv;
		marker3d_class = static_cast<Marker3D *>(static_cast<Object *>(vobj));
	} else {
		marker3d_class = memnew(Marker3D);
	}
	if (!marker3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, marker3d_class);	
	return obj;
}
static JSValue marker3d_class_set_gizmo_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Marker3D::set_gizmo_extents, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue marker3d_class_get_gizmo_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Marker3D::get_gizmo_extents, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry marker3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_gizmo_extents", 1, &marker3d_class_set_gizmo_extents),
	JS_CFUNC_DEF("get_gizmo_extents", 0, &marker3d_class_get_gizmo_extents),
};

void define_marker3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gizmo_extents"),
        JS_NewCFunction(ctx, marker3d_class_get_gizmo_extents, "get_gizmo_extents", 0),
        JS_NewCFunction(ctx, marker3d_class_set_gizmo_extents, "set_gizmo_extents", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_marker3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Marker3D::__class_id);
	classes["Marker3D"] = Marker3D::__class_id;
	class_id_list.insert(Marker3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Marker3D::__class_id, &marker3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Marker3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Marker3D::__class_id, proto);

	define_marker3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, marker3d_class_proto_funcs, _countof(marker3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, marker3d_class_constructor, "Marker3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Marker3D", ctor);

	return 0;
}

JSModuleDef *_js_init_marker3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_marker3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Marker3D");
	return m;
}

JSModuleDef *js_init_marker3d_module(JSContext *ctx) {
	return _js_init_marker3d_module(ctx, "@godot/classes/marker3d");
}

void register_marker3d() {
	Marker3D::__init_js_class_id();
	js_init_marker3d_module(ctx);
}