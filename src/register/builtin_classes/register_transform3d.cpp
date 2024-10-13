
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/transform3d.hpp>

using namespace godot;

static void transform3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Transform3D *transform3d = static_cast<Transform3D *>(JS_GetOpaque(val, Transform3D::__class_id));
	if (transform3d)
		memfree(transform3d);
}

static JSClassDef transform3d_class_def = {
	"Transform3D",
	.finalizer = transform3d_class_finalizer
};

static JSValue transform3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Transform3D *transform3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Transform3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	transform3d_class = memnew(Transform3D);
	if (!transform3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, transform3d_class);
	return obj;
}

void define_transform3d_property(JSContext *ctx, JSValue obj) {
}

static int js_transform3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Transform3D::__class_id);
	classes["Transform3D"] = Transform3D::__class_id;
	class_id_list.insert(Transform3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Transform3D::__class_id, &transform3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Transform3D::__class_id, proto);
	define_transform3d_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, transform3d_class_constructor, "Transform3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Transform3D", ctor);

	return 0;
}

JSModuleDef *_js_init_transform3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_transform3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Transform3D");
	return m;
}

JSModuleDef *js_init_transform3d_module(JSContext *ctx) {
	return _js_init_transform3d_module(ctx, "godot/classes/transform3d");
}

void register_transform3d() {
	Transform3D::__init_js_class_id();
	js_init_transform3d_module(ctx);
}