
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/rid.hpp>

using namespace godot;

static void rid_class_finalizer(JSRuntime *rt, JSValue val) {
	RID *rid = static_cast<RID *>(JS_GetOpaque(val, RID::__class_id));
	if (rid)
		memfree(rid);
}

static JSClassDef rid_class_def = {
	"RID",
	.finalizer = rid_class_finalizer
};

static JSValue rid_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RID *rid_class;
	JSValue obj = JS_NewObjectClass(ctx, RID::__class_id);
	if (JS_IsException(obj))
		return obj;
	rid_class = memnew(RID);
	if (!rid_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rid_class);
	return obj;
}

void define_rid_property(JSContext *ctx, JSValue obj) {
}

static int js_rid_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&RID::__class_id);
	classes["RID"] = RID::__class_id;
	class_id_list.insert(RID::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RID::__class_id, &rid_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, RID::__class_id, proto);
	define_rid_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, rid_class_constructor, "RID", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RID", ctor);

	return 0;
}

JSModuleDef *_js_init_rid_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rid_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RID");
	return m;
}

JSModuleDef *js_init_rid_module(JSContext *ctx) {
	return _js_init_rid_module(ctx, "godot/classes/rid");
}

void register_rid() {
	RID::__init_js_class_id();
	js_init_rid_module(ctx);
}