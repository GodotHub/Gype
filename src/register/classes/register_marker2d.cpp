
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/marker2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void marker2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Marker2D *marker2d = static_cast<Marker2D *>(JS_GetOpaque(val, Marker2D::__class_id));
	if (marker2d)
		Marker2D::free(nullptr, marker2d);
}

static JSClassDef marker2d_class_def = {
	"Marker2D",
	.finalizer = marker2d_class_finalizer
};

static JSValue marker2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Marker2D *marker2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Marker2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	marker2d_class = memnew(Marker2D);
	if (!marker2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, marker2d_class);
	return obj;
}
static JSValue marker2d_class_set_gizmo_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Marker2D::set_gizmo_extents, Marker2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue marker2d_class_get_gizmo_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Marker2D::get_gizmo_extents, Marker2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry marker2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_gizmo_extents", 1, &marker2d_class_set_gizmo_extents),
	JS_CFUNC_DEF("get_gizmo_extents", 0, &marker2d_class_get_gizmo_extents),
};

static int js_marker2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Marker2D::__class_id);
	classes["Marker2D"] = Marker2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Marker2D::__class_id, &marker2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Marker2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, marker2d_class_proto_funcs, _countof(marker2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, marker2d_class_constructor, "Marker2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Marker2D", ctor);

	return 0;
}

JSModuleDef *_js_init_marker2d_module(JSContext *ctx, const char *module_name) {
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
	js_init_marker2d_module(ctx);
}