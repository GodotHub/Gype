
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/projection.hpp>

using namespace godot;

static void projection_class_finalizer(JSRuntime *rt, JSValue val) {
	Projection *projection = static_cast<Projection *>(JS_GetOpaque(val, Projection::__class_id));
	if (projection)
		memfree(projection);
}

static JSClassDef projection_class_def = {
	"Projection",
	.finalizer = projection_class_finalizer
};

static JSValue projection_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Projection *projection_class;
	JSValue obj = JS_NewObjectClass(ctx, Projection::__class_id);
	if (JS_IsException(obj))
		return obj;
	projection_class = memnew(Projection);
	if (!projection_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, projection_class);
	return obj;
}

void define_projection_property(JSContext *ctx, JSValue obj) {
}

static int js_projection_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Projection::__class_id);
	classes["Projection"] = Projection::__class_id;
	class_id_list.insert(Projection::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Projection::__class_id, &projection_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Projection::__class_id, proto);
	define_projection_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, projection_class_constructor, "Projection", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Projection", ctor);

	return 0;
}

JSModuleDef *_js_init_projection_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_projection_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Projection");
	return m;
}

JSModuleDef *js_init_projection_module(JSContext *ctx) {
	return _js_init_projection_module(ctx, "godot/classes/projection");
}

void register_projection() {
	Projection::__init_js_class_id();
	js_init_projection_module(ctx);
}