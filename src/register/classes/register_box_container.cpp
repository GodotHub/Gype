
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/box_container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void box_container_class_finalizer(JSRuntime *rt, JSValue val) {
	BoxContainer *box_container = static_cast<BoxContainer *>(JS_GetOpaque(val, BoxContainer::__class_id));
	if (box_container)
		BoxContainer::free(nullptr, box_container);
}

static JSClassDef box_container_class_def = {
	"BoxContainer",
	.finalizer = box_container_class_finalizer
};

static JSValue box_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	BoxContainer *box_container_class;
	JSValue obj = JS_NewObjectClass(ctx, BoxContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	box_container_class = memnew(BoxContainer);
	if (!box_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, box_container_class);
	return obj;
}
static JSValue box_container_class_add_spacer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&BoxContainer::add_spacer, BoxContainer::__class_id, ctx, this_val, argv);
};
static JSValue box_container_class_set_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BoxContainer::set_alignment, BoxContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue box_container_class_get_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BoxContainer::get_alignment, BoxContainer::__class_id, ctx, this_val, argv);
};
static JSValue box_container_class_set_vertical(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BoxContainer::set_vertical, BoxContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue box_container_class_is_vertical(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BoxContainer::is_vertical, BoxContainer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry box_container_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_spacer", 1, &box_container_class_add_spacer),
	JS_CFUNC_DEF("set_alignment", 1, &box_container_class_set_alignment),
	JS_CFUNC_DEF("get_alignment", 0, &box_container_class_get_alignment),
	JS_CFUNC_DEF("set_vertical", 1, &box_container_class_set_vertical),
	JS_CFUNC_DEF("is_vertical", 0, &box_container_class_is_vertical),
};

static int js_box_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&BoxContainer::__class_id);
	classes["BoxContainer"] = BoxContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), BoxContainer::__class_id, &box_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, BoxContainer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, box_container_class_proto_funcs, _countof(box_container_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, box_container_class_constructor, "BoxContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "BoxContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_box_container_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_box_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "BoxContainer");
	return m;
}

JSModuleDef *js_init_box_container_module(JSContext *ctx) {
	return _js_init_box_container_module(ctx, "godot/classes/box_container");
}

void register_box_container() {
	js_init_box_container_module(ctx);
}