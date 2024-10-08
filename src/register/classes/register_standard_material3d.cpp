
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/base_material3d.hpp>
#include <godot_cpp/classes/standard_material3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void standard_material3d_class_finalizer(JSRuntime *rt, JSValue val) {
	StandardMaterial3D *standard_material3d = static_cast<StandardMaterial3D *>(JS_GetOpaque(val, StandardMaterial3D::__class_id));
	if (standard_material3d)
		StandardMaterial3D::free(nullptr, standard_material3d);
}

static JSClassDef standard_material3d_class_def = {
	"StandardMaterial3D",
	.finalizer = standard_material3d_class_finalizer
};

static JSValue standard_material3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	StandardMaterial3D *standard_material3d_class;
	JSValue obj = JS_NewObjectClass(ctx, StandardMaterial3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	standard_material3d_class = memnew(StandardMaterial3D);
	if (!standard_material3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, standard_material3d_class);
	return obj;
}

static int js_standard_material3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&StandardMaterial3D::__class_id);
	classes["StandardMaterial3D"] = StandardMaterial3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), StandardMaterial3D::__class_id, &standard_material3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, BaseMaterial3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StandardMaterial3D::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, standard_material3d_class_constructor, "StandardMaterial3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "StandardMaterial3D", ctor);

	return 0;
}

JSModuleDef *_js_init_standard_material3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_standard_material3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StandardMaterial3D");
	return m;
}

JSModuleDef *js_init_standard_material3d_module(JSContext *ctx) {
	return _js_init_standard_material3d_module(ctx, "godot/classes/standard_material3d");
}

void register_standard_material3d() {
	js_init_standard_material3d_module(ctx);
}