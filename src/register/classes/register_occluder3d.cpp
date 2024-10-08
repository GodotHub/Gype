
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void occluder3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Occluder3D *occluder3d = static_cast<Occluder3D *>(JS_GetOpaque(val, Occluder3D::__class_id));
	if (occluder3d)
		Occluder3D::free(nullptr, occluder3d);
}

static JSClassDef occluder3d_class_def = {
	"Occluder3D",
	.finalizer = occluder3d_class_finalizer
};

static JSValue occluder3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Occluder3D *occluder3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Occluder3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	occluder3d_class = memnew(Occluder3D);
	if (!occluder3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, occluder3d_class);
	return obj;
}
static JSValue occluder3d_class_get_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Occluder3D::get_vertices, Occluder3D::__class_id, ctx, this_val, argv);
};
static JSValue occluder3d_class_get_indices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Occluder3D::get_indices, Occluder3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry occluder3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_vertices", 0, &occluder3d_class_get_vertices),
	JS_CFUNC_DEF("get_indices", 0, &occluder3d_class_get_indices),
};

static int js_occluder3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Occluder3D::__class_id);
	classes["Occluder3D"] = Occluder3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Occluder3D::__class_id, &occluder3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Occluder3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, occluder3d_class_proto_funcs, _countof(occluder3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, occluder3d_class_constructor, "Occluder3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Occluder3D", ctor);

	return 0;
}

JSModuleDef *_js_init_occluder3d_module(JSContext *ctx, const char *module_name) {
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
	js_init_occluder3d_module(ctx);
}