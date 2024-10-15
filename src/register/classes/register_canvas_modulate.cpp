
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/canvas_modulate.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void canvas_modulate_class_finalizer(JSRuntime *rt, JSValue val) {
	CanvasModulate *canvas_modulate = static_cast<CanvasModulate *>(JS_GetOpaque(val, CanvasModulate::__class_id));
	if (canvas_modulate)
		memdelete(canvas_modulate);
}

static JSClassDef canvas_modulate_class_def = {
	"CanvasModulate",
	.finalizer = canvas_modulate_class_finalizer
};

static JSValue canvas_modulate_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CanvasModulate::__class_id);
	if (JS_IsException(obj))
		return obj;
	CanvasModulate *canvas_modulate_class = memnew(CanvasModulate);
	if (!canvas_modulate_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, canvas_modulate_class);	
	return obj;
}
static JSValue canvas_modulate_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasModulate::set_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_modulate_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasModulate::get_color, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry canvas_modulate_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_color", 1, &canvas_modulate_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &canvas_modulate_class_get_color),
};

void define_canvas_modulate_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color"),
        JS_NewCFunction(ctx, canvas_modulate_class_get_color, "get_color", 0),
        JS_NewCFunction(ctx, canvas_modulate_class_set_color, "set_color", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_canvas_modulate_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CanvasModulate::__class_id);
	classes["CanvasModulate"] = CanvasModulate::__class_id;
	class_id_list.insert(CanvasModulate::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CanvasModulate::__class_id, &canvas_modulate_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CanvasModulate::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CanvasModulate::__class_id, proto);

	define_canvas_modulate_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, canvas_modulate_class_proto_funcs, _countof(canvas_modulate_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, canvas_modulate_class_constructor, "CanvasModulate", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CanvasModulate", ctor);

	return 0;
}

JSModuleDef *_js_init_canvas_modulate_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	CanvasModulate::__init_js_class_id();
	js_init_canvas_modulate_module(ctx);
}