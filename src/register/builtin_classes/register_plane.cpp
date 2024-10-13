
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/plane.hpp>

using namespace godot;

static void plane_class_finalizer(JSRuntime *rt, JSValue val) {
	Plane *plane = static_cast<Plane *>(JS_GetOpaque(val, Plane::__class_id));
	if (plane)
		memfree(plane);
}

static JSClassDef plane_class_def = {
	"Plane",
	.finalizer = plane_class_finalizer
};

static JSValue plane_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Plane *plane_class;
	JSValue obj = JS_NewObjectClass(ctx, Plane::__class_id);
	if (JS_IsException(obj))
		return obj;
	plane_class = memnew(Plane);
	if (!plane_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, plane_class);
	return obj;
}

void define_plane_property(JSContext *ctx, JSValue obj) {
}

static int js_plane_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Plane::__class_id);
	classes["Plane"] = Plane::__class_id;
	class_id_list.insert(Plane::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Plane::__class_id, &plane_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Plane::__class_id, proto);
	define_plane_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, plane_class_constructor, "Plane", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Plane", ctor);

	return 0;
}

JSModuleDef *_js_init_plane_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_plane_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Plane");
	return m;
}

JSModuleDef *js_init_plane_module(JSContext *ctx) {
	return _js_init_plane_module(ctx, "godot/classes/plane");
}

void register_plane() {
	Plane::__init_js_class_id();
	js_init_plane_module(ctx);
}