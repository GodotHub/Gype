
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/spot_light3d.hpp>
#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void spot_light3d_class_finalizer(JSRuntime *rt, JSValue val) {
	SpotLight3D *spot_light3d = static_cast<SpotLight3D *>(JS_GetOpaque(val, SpotLight3D::__class_id));
	if (spot_light3d)
		SpotLight3D::free(nullptr, spot_light3d);
}

static JSClassDef spot_light3d_class_def = {
	"SpotLight3D",
	.finalizer = spot_light3d_class_finalizer
};

static JSValue spot_light3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SpotLight3D *spot_light3d_class;
	JSValue obj = JS_NewObjectClass(ctx, SpotLight3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	spot_light3d_class = memnew(SpotLight3D);
	if (!spot_light3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, spot_light3d_class);
	return obj;
}

static int js_spot_light3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SpotLight3D::__class_id);
	classes["SpotLight3D"] = SpotLight3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SpotLight3D::__class_id, &spot_light3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Light3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SpotLight3D::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, spot_light3d_class_constructor, "SpotLight3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SpotLight3D", ctor);

	return 0;
}

JSModuleDef *_js_init_spot_light3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_spot_light3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SpotLight3D");
	return m;
}

JSModuleDef *js_init_spot_light3d_module(JSContext *ctx) {
	return _js_init_spot_light3d_module(ctx, "godot/classes/spot_light3d");
}

void register_spot_light3d() {
	js_init_spot_light3d_module(ctx);
}