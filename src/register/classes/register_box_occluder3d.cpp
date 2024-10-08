
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/box_occluder3d.hpp>
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void box_occluder3d_class_finalizer(JSRuntime *rt, JSValue val) {
	BoxOccluder3D *box_occluder3d = static_cast<BoxOccluder3D *>(JS_GetOpaque(val, BoxOccluder3D::__class_id));
	if (box_occluder3d)
		BoxOccluder3D::free(nullptr, box_occluder3d);
}

static JSClassDef box_occluder3d_class_def = {
	"BoxOccluder3D",
	.finalizer = box_occluder3d_class_finalizer
};

static JSValue box_occluder3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	BoxOccluder3D *box_occluder3d_class;
	JSValue obj = JS_NewObjectClass(ctx, BoxOccluder3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	box_occluder3d_class = memnew(BoxOccluder3D);
	if (!box_occluder3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, box_occluder3d_class);
	return obj;
}
static JSValue box_occluder3d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BoxOccluder3D::set_size, BoxOccluder3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue box_occluder3d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BoxOccluder3D::get_size, BoxOccluder3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry box_occluder3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &box_occluder3d_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &box_occluder3d_class_get_size),
};

static int js_box_occluder3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&BoxOccluder3D::__class_id);
	classes["BoxOccluder3D"] = BoxOccluder3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), BoxOccluder3D::__class_id, &box_occluder3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Occluder3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, BoxOccluder3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, box_occluder3d_class_proto_funcs, _countof(box_occluder3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, box_occluder3d_class_constructor, "BoxOccluder3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "BoxOccluder3D", ctor);

	return 0;
}

JSModuleDef *_js_init_box_occluder3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_box_occluder3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "BoxOccluder3D");
	return m;
}

JSModuleDef *js_init_box_occluder3d_module(JSContext *ctx) {
	return _js_init_box_occluder3d_module(ctx, "godot/classes/box_occluder3d");
}

void register_box_occluder3d() {
	js_init_box_occluder3d_module(ctx);
}