
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/classes/box_occluder3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void box_occluder3d_class_finalizer(JSRuntime *rt, JSValue val) {
	BoxOccluder3D *box_occluder3d = static_cast<BoxOccluder3D *>(JS_GetOpaque(val, BoxOccluder3D::__class_id));
	if (box_occluder3d)
		memdelete(box_occluder3d);
}

static JSClassDef box_occluder3d_class_def = {
	"BoxOccluder3D",
	.finalizer = box_occluder3d_class_finalizer
};

static JSValue box_occluder3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, BoxOccluder3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	BoxOccluder3D *box_occluder3d_class;
	if (argc == 1) 
		box_occluder3d_class = static_cast<BoxOccluder3D *>(Variant(*argv).operator Object *());
	else 
		box_occluder3d_class = memnew(BoxOccluder3D);
	if (!box_occluder3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, box_occluder3d_class);
	return obj;
}
static JSValue box_occluder3d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&BoxOccluder3D::set_size, ctx, this_val, argc, argv);
};
static JSValue box_occluder3d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BoxOccluder3D::get_size, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry box_occluder3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &box_occluder3d_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &box_occluder3d_class_get_size),
};

static void define_box_occluder3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, box_occluder3d_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, box_occluder3d_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
	
}

static void define_box_occluder3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_box_occluder3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["BoxOccluder3D"] = BoxOccluder3D::__class_id;
	class_id_list.insert(BoxOccluder3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), BoxOccluder3D::__class_id, &box_occluder3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, BoxOccluder3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Occluder3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, BoxOccluder3D::__class_id, proto);

	define_box_occluder3d_property(ctx, proto);
	define_box_occluder3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, box_occluder3d_class_proto_funcs, _countof(box_occluder3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, box_occluder3d_class_constructor, "BoxOccluder3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "BoxOccluder3D", ctor);
	constructors[BoxOccluder3D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_box_occluder3d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/occluder3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_box_occluder3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "BoxOccluder3D");
	return m;
}

JSModuleDef *js_init_box_occluder3d_module(JSContext *ctx) {
	return _js_init_box_occluder3d_module(ctx, "@godot/classes/box_occluder3d");
}

void register_box_occluder3d() {
	BoxOccluder3D::__init_js_class_id();
	js_init_box_occluder3d_module(ctx);
}