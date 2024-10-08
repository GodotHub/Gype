
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void container_class_finalizer(JSRuntime *rt, JSValue val) {
	Container *container = static_cast<Container *>(JS_GetOpaque(val, Container::__class_id));
	if (container)
		Container::free(nullptr, container);
}

static JSClassDef container_class_def = {
	"Container",
	.finalizer = container_class_finalizer
};

static JSValue container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Container *container_class;
	JSValue obj = JS_NewObjectClass(ctx, Container::__class_id);
	if (JS_IsException(obj))
		return obj;
	container_class = memnew(Container);
	if (!container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, container_class);
	return obj;
}
static JSValue container_class_queue_sort(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Container::queue_sort, Container::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue container_class_fit_child_in_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Container::fit_child_in_rect, Container::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry container_class_proto_funcs[] = {
	JS_CFUNC_DEF("queue_sort", 0, &container_class_queue_sort),
	JS_CFUNC_DEF("fit_child_in_rect", 2, &container_class_fit_child_in_rect),
};

static int js_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Container::__class_id);
	classes["Container"] = Container::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Container::__class_id, &container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Container::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, container_class_proto_funcs, _countof(container_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, container_class_constructor, "Container", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Container", ctor);

	return 0;
}

JSModuleDef *_js_init_container_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Container");
	return m;
}

JSModuleDef *js_init_container_module(JSContext *ctx) {
	return _js_init_container_module(ctx, "godot/classes/container");
}

void register_container() {
	js_init_container_module(ctx);
}