
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/grid_container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void grid_container_class_finalizer(JSRuntime *rt, JSValue val) {
	GridContainer *grid_container = static_cast<GridContainer *>(JS_GetOpaque(val, GridContainer::__class_id));
	if (grid_container)
		GridContainer::free(nullptr, grid_container);
}

static JSClassDef grid_container_class_def = {
	"GridContainer",
	.finalizer = grid_container_class_finalizer
};

static JSValue grid_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GridContainer *grid_container_class;
	JSValue obj = JS_NewObjectClass(ctx, GridContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	grid_container_class = memnew(GridContainer);
	if (!grid_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, grid_container_class);
	return obj;
}
static JSValue grid_container_class_set_columns(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GridContainer::set_columns, GridContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue grid_container_class_get_columns(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GridContainer::get_columns, GridContainer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry grid_container_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_columns", 1, &grid_container_class_set_columns),
	JS_CFUNC_DEF("get_columns", 0, &grid_container_class_get_columns),
};

static int js_grid_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GridContainer::__class_id);
	classes["GridContainer"] = GridContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GridContainer::__class_id, &grid_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GridContainer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, grid_container_class_proto_funcs, _countof(grid_container_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, grid_container_class_constructor, "GridContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GridContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_grid_container_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_grid_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GridContainer");
	return m;
}

JSModuleDef *js_init_grid_container_module(JSContext *ctx) {
	return _js_init_grid_container_module(ctx, "godot/classes/grid_container");
}

void register_grid_container() {
	js_init_grid_container_module(ctx);
}