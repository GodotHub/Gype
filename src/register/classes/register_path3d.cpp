
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/curve3d.hpp>
#include <godot_cpp/classes/path3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void path3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef path3d_class_def = {
	"Path3D",
	.finalizer = path3d_class_finalizer
};

static JSValue path3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Path3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	Path3D *path3d_class;
	if (argc == 1) 
		path3d_class = static_cast<Path3D *>(static_cast<Object *>(Variant(*argv)));
	else 
		path3d_class = memnew(Path3D);
	if (!path3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, path3d_class);	
	return obj;
}
static JSValue path3d_class_set_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Path3D::set_curve, ctx, this_val, argc, argv);
};
static JSValue path3d_class_get_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Path3D::get_curve, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry path3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_curve", 1, &path3d_class_set_curve),
	JS_CFUNC_DEF("get_curve", 0, &path3d_class_get_curve),
};
static JSValue path3d_class_get_curve_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	Path3D *opaque = reinterpret_cast<Path3D *>(JS_GetOpaque(this_val, Path3D::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "curve_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "curve_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "curve_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_path3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "curve"),
        JS_NewCFunction(ctx, path3d_class_get_curve, "get_curve", 0),
        JS_NewCFunction(ctx, path3d_class_set_curve, "set_curve", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "curve_changed"),
		JS_NewCFunction(ctx, path3d_class_get_curve_changed_signal, "get_curve_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_path3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_path3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Path3D::__class_id);
	classes["Path3D"] = Path3D::__class_id;
	class_id_list.insert(Path3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Path3D::__class_id, &path3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Path3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Path3D::__class_id, proto);

	define_path3d_property(ctx, proto);
	define_path3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, path3d_class_proto_funcs, _countof(path3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, path3d_class_constructor, "Path3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Path3D", ctor);

	return 0;
}

JSModuleDef *_js_init_path3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_path3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Path3D");
	return m;
}

JSModuleDef *js_init_path3d_module(JSContext *ctx) {
	return _js_init_path3d_module(ctx, "@godot/classes/path3d");
}

void register_path3d() {
	Path3D::__init_js_class_id();
	js_init_path3d_module(ctx);
}