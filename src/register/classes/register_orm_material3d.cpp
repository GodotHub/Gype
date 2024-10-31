
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/orm_material3d.hpp>
#include <godot_cpp/classes/base_material3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void orm_material3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef orm_material3d_class_def = {
	"ORMMaterial3D",
	.finalizer = orm_material3d_class_finalizer
};

static JSValue orm_material3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ORMMaterial3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	ORMMaterial3D *orm_material3d_class;
	if (argc == 1) 
		orm_material3d_class = static_cast<ORMMaterial3D *>(static_cast<Object *>(Variant(*argv)));
	else 
		orm_material3d_class = memnew(ORMMaterial3D);
	if (!orm_material3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, orm_material3d_class);	
	return obj;
}

static void define_orm_material3d_property(JSContext *ctx, JSValue proto) {
	
}

static void define_orm_material3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_orm_material3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ORMMaterial3D::__class_id);
	classes["ORMMaterial3D"] = ORMMaterial3D::__class_id;
	class_id_list.insert(ORMMaterial3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ORMMaterial3D::__class_id, &orm_material3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ORMMaterial3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, BaseMaterial3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ORMMaterial3D::__class_id, proto);

	define_orm_material3d_property(ctx, proto);
	define_orm_material3d_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, orm_material3d_class_constructor, "ORMMaterial3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ORMMaterial3D", ctor);

	return 0;
}

JSModuleDef *_js_init_orm_material3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/base_material3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_orm_material3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ORMMaterial3D");
	return m;
}

JSModuleDef *js_init_orm_material3d_module(JSContext *ctx) {
	return _js_init_orm_material3d_module(ctx, "@godot/classes/orm_material3d");
}

void register_orm_material3d() {
	ORMMaterial3D::__init_js_class_id();
	js_init_orm_material3d_module(ctx);
}