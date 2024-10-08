
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/split_container.hpp>
#include <godot_cpp/classes/v_split_container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void v_split_container_class_finalizer(JSRuntime *rt, JSValue val) {
	VSplitContainer *v_split_container = static_cast<VSplitContainer *>(JS_GetOpaque(val, VSplitContainer::__class_id));
	if (v_split_container)
		VSplitContainer::free(nullptr, v_split_container);
}

static JSClassDef v_split_container_class_def = {
	"VSplitContainer",
	.finalizer = v_split_container_class_finalizer
};

static JSValue v_split_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VSplitContainer *v_split_container_class;
	JSValue obj = JS_NewObjectClass(ctx, VSplitContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	v_split_container_class = memnew(VSplitContainer);
	if (!v_split_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, v_split_container_class);
	return obj;
}

static int js_v_split_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VSplitContainer::__class_id);
	classes["VSplitContainer"] = VSplitContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VSplitContainer::__class_id, &v_split_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SplitContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VSplitContainer::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, v_split_container_class_constructor, "VSplitContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VSplitContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_v_split_container_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_v_split_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VSplitContainer");
	return m;
}

JSModuleDef *js_init_v_split_container_module(JSContext *ctx) {
	return _js_init_v_split_container_module(ctx, "godot/classes/v_split_container");
}

void register_v_split_container() {
	js_init_v_split_container_module(ctx);
}