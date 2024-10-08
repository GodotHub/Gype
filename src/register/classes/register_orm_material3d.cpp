
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/base_material3d.hpp>
#include <godot_cpp/classes/orm_material3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void orm_material3d_class_finalizer(JSRuntime *rt, JSValue val) {
	ORMMaterial3D *orm_material3d = static_cast<ORMMaterial3D *>(JS_GetOpaque(val, ORMMaterial3D::__class_id));
	if (orm_material3d)
		ORMMaterial3D::free(nullptr, orm_material3d);
}

static JSClassDef orm_material3d_class_def = {
	"ORMMaterial3D",
	.finalizer = orm_material3d_class_finalizer
};

static JSValue orm_material3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ORMMaterial3D *orm_material3d_class;
	JSValue obj = JS_NewObjectClass(ctx, ORMMaterial3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	orm_material3d_class = memnew(ORMMaterial3D);
	if (!orm_material3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, orm_material3d_class);
	return obj;
}

static int js_orm_material3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ORMMaterial3D::__class_id);
	classes["ORMMaterial3D"] = ORMMaterial3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ORMMaterial3D::__class_id, &orm_material3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, BaseMaterial3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ORMMaterial3D::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, orm_material3d_class_constructor, "ORMMaterial3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ORMMaterial3D", ctor);

	return 0;
}

JSModuleDef *_js_init_orm_material3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_orm_material3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ORMMaterial3D");
	return m;
}

JSModuleDef *js_init_orm_material3d_module(JSContext *ctx) {
	return _js_init_orm_material3d_module(ctx, "godot/classes/orm_material3d");
}

void register_orm_material3d() {
	js_init_orm_material3d_module(ctx);
}