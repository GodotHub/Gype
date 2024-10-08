
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/classes/box_shape3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void box_shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	BoxShape3D *box_shape3d = static_cast<BoxShape3D *>(JS_GetOpaque(val, BoxShape3D::__class_id));
	if (box_shape3d)
		BoxShape3D::free(nullptr, box_shape3d);
}

static JSClassDef box_shape3d_class_def = {
	"BoxShape3D",
	.finalizer = box_shape3d_class_finalizer
};

static JSValue box_shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	BoxShape3D *box_shape3d_class;
	JSValue obj = JS_NewObjectClass(ctx, BoxShape3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	box_shape3d_class = memnew(BoxShape3D);
	if (!box_shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, box_shape3d_class);
	return obj;
}
static JSValue box_shape3d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BoxShape3D::set_size, BoxShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue box_shape3d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BoxShape3D::get_size, BoxShape3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry box_shape3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &box_shape3d_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &box_shape3d_class_get_size),
};

static int js_box_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&BoxShape3D::__class_id);
	classes["BoxShape3D"] = BoxShape3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), BoxShape3D::__class_id, &box_shape3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Shape3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, BoxShape3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, box_shape3d_class_proto_funcs, _countof(box_shape3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, box_shape3d_class_constructor, "BoxShape3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "BoxShape3D", ctor);

	return 0;
}

JSModuleDef *_js_init_box_shape3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_box_shape3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "BoxShape3D");
	return m;
}

JSModuleDef *js_init_box_shape3d_module(JSContext *ctx) {
	return _js_init_box_shape3d_module(ctx, "godot/classes/box_shape3d");
}

void register_box_shape3d() {
	js_init_box_shape3d_module(ctx);
}