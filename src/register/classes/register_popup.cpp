
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/popup.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void popup_class_finalizer(JSRuntime *rt, JSValue val) {
	Popup *popup = static_cast<Popup *>(JS_GetOpaque(val, Popup::__class_id));
	if (popup)
		memdelete(popup);
}

static JSClassDef popup_class_def = {
	"Popup",
	.finalizer = popup_class_finalizer
};

static JSValue popup_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Popup::__class_id);
	if (JS_IsException(obj))
		return obj;
	Popup *popup_class = memnew(Popup);
	if (!popup_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, popup_class);	
	return obj;
}

void define_popup_property(JSContext *ctx, JSValue obj) {
}

static int js_popup_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Popup::__class_id);
	classes["Popup"] = Popup::__class_id;
	class_id_list.insert(Popup::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Popup::__class_id, &popup_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Popup::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Window::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Popup::__class_id, proto);

	define_popup_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, popup_class_constructor, "Popup", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Popup", ctor);

	return 0;
}

JSModuleDef *_js_init_popup_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/window';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_popup_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Popup");
	return m;
}

JSModuleDef *js_init_popup_module(JSContext *ctx) {
	return _js_init_popup_module(ctx, "godot/classes/popup");
}

void register_popup() {
	Popup::__init_js_class_id();
	js_init_popup_module(ctx);
}