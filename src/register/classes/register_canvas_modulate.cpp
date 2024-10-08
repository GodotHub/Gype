
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/canvas_modulate.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void canvas_modulate_class_finalizer(JSRuntime *rt, JSValue val) {
	CanvasModulate *canvas_modulate = static_cast<CanvasModulate *>(JS_GetOpaque(val, CanvasModulate::__class_id));
	if (canvas_modulate)
		CanvasModulate::free(nullptr, canvas_modulate);
}

static JSClassDef canvas_modulate_class_def = {
	"CanvasModulate",
	.finalizer = canvas_modulate_class_finalizer
};

static JSValue canvas_modulate_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CanvasModulate *canvas_modulate_class;
	JSValue obj = JS_NewObjectClass(ctx, CanvasModulate::__class_id);
	if (JS_IsException(obj))
		return obj;
	canvas_modulate_class = memnew(CanvasModulate);
	if (!canvas_modulate_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, canvas_modulate_class);
	return obj;
}
static JSValue canvas_modulate_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CanvasModulate::set_color, CanvasModulate::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_modulate_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasModulate::get_color, CanvasModulate::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry canvas_modulate_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_color", 1, &canvas_modulate_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &canvas_modulate_class_get_color),
};

static int js_canvas_modulate_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CanvasModulate::__class_id);
	classes["CanvasModulate"] = CanvasModulate::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CanvasModulate::__class_id, &canvas_modulate_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CanvasModulate::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, canvas_modulate_class_proto_funcs, _countof(canvas_modulate_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, canvas_modulate_class_constructor, "CanvasModulate", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CanvasModulate", ctor);

	return 0;
}

JSModuleDef *_js_init_canvas_modulate_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_canvas_modulate_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CanvasModulate");
	return m;
}

JSModuleDef *js_init_canvas_modulate_module(JSContext *ctx) {
	return _js_init_canvas_modulate_module(ctx, "godot/classes/canvas_modulate");
}

void register_canvas_modulate() {
	js_init_canvas_modulate_module(ctx);
}