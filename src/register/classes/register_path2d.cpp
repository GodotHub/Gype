
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/path2d.hpp>
#include <godot_cpp/classes/curve2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void path2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Path2D *path2d = static_cast<Path2D *>(JS_GetOpaque(val, Path2D::__class_id));
	if (path2d)
		Path2D::free(nullptr, path2d);
}

static JSClassDef path2d_class_def = {
	"Path2D",
	.finalizer = path2d_class_finalizer
};

static JSValue path2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Path2D *path2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Path2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	path2d_class = memnew(Path2D);
	if (!path2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, path2d_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue path2d_class_set_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Path2D::set_curve, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue path2d_class_get_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Path2D::get_curve, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry path2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_curve", 1, &path2d_class_set_curve),
	JS_CFUNC_DEF("get_curve", 0, &path2d_class_get_curve),
};

void define_path2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "curve"),
        JS_NewCFunction(ctx, path2d_class_get_curve, "get_curve", 0),
        JS_NewCFunction(ctx, path2d_class_set_curve, "set_curve", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_path2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Path2D::__class_id);
	classes["Path2D"] = Path2D::__class_id;
	class_id_list.insert(Path2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Path2D::__class_id, &path2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Path2D::__class_id, proto);
	define_path2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, path2d_class_proto_funcs, _countof(path2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, path2d_class_constructor, "Path2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Path2D", ctor);

	return 0;
}

JSModuleDef *_js_init_path2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_path2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Path2D");
	return m;
}

JSModuleDef *js_init_path2d_module(JSContext *ctx) {
	return _js_init_path2d_module(ctx, "godot/classes/path2d");
}

void register_path2d() {
	Path2D::__init_js_class_id();
	js_init_path2d_module(ctx);
}