
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/render_data.hpp>
#include <godot_cpp/classes/render_data_rd.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void render_data_rd_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef render_data_rd_class_def = {
	"RenderDataRD",
	.finalizer = render_data_rd_class_finalizer
};

static JSValue render_data_rd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RenderDataRD::__class_id);
	if (JS_IsException(obj))
		return obj;

	RenderDataRD *render_data_rd_class;
	if (argc == 1) 
		render_data_rd_class = static_cast<RenderDataRD *>(static_cast<Object *>(Variant(*argv)));
	else 
		render_data_rd_class = memnew(RenderDataRD);
	if (!render_data_rd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, render_data_rd_class);	
	return obj;
}

static void define_render_data_rd_property(JSContext *ctx, JSValue proto) {
	
}

static void define_render_data_rd_enum(JSContext *ctx, JSValue proto) {
}

static int js_render_data_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&RenderDataRD::__class_id);
	classes["RenderDataRD"] = RenderDataRD::__class_id;
	class_id_list.insert(RenderDataRD::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RenderDataRD::__class_id, &render_data_rd_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RenderDataRD::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RenderData::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RenderDataRD::__class_id, proto);

	define_render_data_rd_property(ctx, proto);
	define_render_data_rd_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, render_data_rd_class_constructor, "RenderDataRD", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RenderDataRD", ctor);

	return 0;
}

JSModuleDef *_js_init_render_data_rd_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/render_data';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_render_data_rd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RenderDataRD");
	return m;
}

JSModuleDef *js_init_render_data_rd_module(JSContext *ctx) {
	return _js_init_render_data_rd_module(ctx, "@godot/classes/render_data_rd");
}

void register_render_data_rd() {
	RenderDataRD::__init_js_class_id();
	js_init_render_data_rd_module(ctx);
}