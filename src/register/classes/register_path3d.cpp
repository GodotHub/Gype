
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/curve3d.hpp>
#include <godot_cpp/classes/path3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void path3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Path3D *path3d = static_cast<Path3D *>(JS_GetOpaque(val, Path3D::__class_id));
	if (path3d)
		Path3D::free(nullptr, path3d);
}

static JSClassDef path3d_class_def = {
	"Path3D",
	.finalizer = path3d_class_finalizer
};

static JSValue path3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Path3D *path3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Path3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	path3d_class = memnew(Path3D);
	if (!path3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, path3d_class);
	return obj;
}
static JSValue path3d_class_set_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Path3D::set_curve, Path3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path3d_class_get_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Path3D::get_curve, Path3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry path3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_curve", 1, &path3d_class_set_curve),
	JS_CFUNC_DEF("get_curve", 0, &path3d_class_get_curve),
};

static int js_path3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Path3D::__class_id);
	classes["Path3D"] = Path3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Path3D::__class_id, &path3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Path3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, path3d_class_proto_funcs, _countof(path3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, path3d_class_constructor, "Path3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Path3D", ctor);

	return 0;
}

JSModuleDef *_js_init_path3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_path3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Path3D");
	return m;
}

JSModuleDef *js_init_path3d_module(JSContext *ctx) {
	return _js_init_path3d_module(ctx, "godot/classes/path3d");
}

void register_path3d() {
	js_init_path3d_module(ctx);
}