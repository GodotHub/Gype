
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/split_container.hpp>
#include <godot_cpp/classes/v_split_container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void v_split_container_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef v_split_container_class_def = {
	"VSplitContainer",
	.finalizer = v_split_container_class_finalizer
};

static JSValue v_split_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VSplitContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	VSplitContainer *v_split_container_class = memnew(VSplitContainer);
	if (!v_split_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, v_split_container_class);
	return obj;
}

void define_v_split_container_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_v_split_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VSplitContainer::__class_id);
	classes["VSplitContainer"] = VSplitContainer::__class_id;
	class_id_list.insert(VSplitContainer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VSplitContainer::__class_id, &v_split_container_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VSplitContainer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, SplitContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VSplitContainer::__class_id, proto);

	define_v_split_container_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, v_split_container_class_constructor, "VSplitContainer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VSplitContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_v_split_container_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/split_container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	VSplitContainer::__init_js_class_id();
	js_init_v_split_container_module(ctx);
}