
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/render_data_rd.hpp>
#include <godot_cpp/classes/render_data.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void render_data_rd_class_finalizer(JSRuntime *rt, JSValue val) {
	RenderDataRD *render_data_rd = static_cast<RenderDataRD *>(JS_GetOpaque(val, RenderDataRD::__class_id));
	if (render_data_rd)
		RenderDataRD::free(nullptr, render_data_rd);
}

static JSClassDef render_data_rd_class_def = {
	"RenderDataRD",
	.finalizer = render_data_rd_class_finalizer
};

static JSValue render_data_rd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RenderDataRD *render_data_rd_class;
	JSValue obj = JS_NewObjectClass(ctx, RenderDataRD::__class_id);
	if (JS_IsException(obj))
		return obj;
	render_data_rd_class = memnew(RenderDataRD);
	if (!render_data_rd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, render_data_rd_class);
	return obj;
}

static int js_render_data_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RenderDataRD::__class_id);
	classes["RenderDataRD"] = RenderDataRD::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RenderDataRD::__class_id, &render_data_rd_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RenderData::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RenderDataRD::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, render_data_rd_class_constructor, "RenderDataRD", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RenderDataRD", ctor);

	return 0;
}

JSModuleDef *_js_init_render_data_rd_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_render_data_rd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RenderDataRD");
	return m;
}

JSModuleDef *js_init_render_data_rd_module(JSContext *ctx) {
	return _js_init_render_data_rd_module(ctx, "godot/classes/render_data_rd");
}

void register_render_data_rd() {
	js_init_render_data_rd_module(ctx);
}