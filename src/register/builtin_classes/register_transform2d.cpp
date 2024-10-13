
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/transform2d.hpp>

using namespace godot;

static void transform2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Transform2D *transform2d = static_cast<Transform2D *>(JS_GetOpaque(val, Transform2D::__class_id));
	if (transform2d)
		memfree(transform2d);
}

static JSClassDef transform2d_class_def = {
	"Transform2D",
	.finalizer = transform2d_class_finalizer
};

static JSValue transform2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Transform2D *transform2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Transform2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	transform2d_class = memnew(Transform2D);
	if (!transform2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, transform2d_class);
	return obj;
}

void define_transform2d_property(JSContext *ctx, JSValue obj) {
}

static int js_transform2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Transform2D::__class_id);
	classes["Transform2D"] = Transform2D::__class_id;
	class_id_list.insert(Transform2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Transform2D::__class_id, &transform2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Transform2D::__class_id, proto);
	define_transform2d_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, transform2d_class_constructor, "Transform2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Transform2D", ctor);

	return 0;
}

JSModuleDef *_js_init_transform2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_transform2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Transform2D");
	return m;
}

JSModuleDef *js_init_transform2d_module(JSContext *ctx) {
	return _js_init_transform2d_module(ctx, "godot/classes/transform2d");
}

void register_transform2d() {
	Transform2D::__init_js_class_id();
	js_init_transform2d_module(ctx);
}