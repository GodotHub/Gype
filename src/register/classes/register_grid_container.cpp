
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/grid_container.hpp>
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
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue grid_container_class_set_columns(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GridContainer::set_columns, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue grid_container_class_get_columns(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GridContainer::get_columns, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry grid_container_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_columns", 1, &grid_container_class_set_columns),
	JS_CFUNC_DEF("get_columns", 0, &grid_container_class_get_columns),
};

void define_grid_container_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "columns"),
        JS_NewCFunction(ctx, grid_container_class_get_columns, "get_columns", 0),
        JS_NewCFunction(ctx, grid_container_class_set_columns, "set_columns", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_grid_container_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GridContainer::__class_id);
	classes["GridContainer"] = GridContainer::__class_id;
	class_id_list.insert(GridContainer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GridContainer::__class_id, &grid_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GridContainer::__class_id, proto);
	define_grid_container_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, grid_container_class_proto_funcs, _countof(grid_container_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, grid_container_class_constructor, "GridContainer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GridContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_grid_container_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	GridContainer::__init_js_class_id();
	js_init_grid_container_module(ctx);
}