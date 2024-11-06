
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/multiplayer_api_extension.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void multiplayer_api_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	MultiplayerAPIExtension *multiplayer_api_extension = static_cast<MultiplayerAPIExtension *>(JS_GetOpaque(val, MultiplayerAPIExtension::__class_id));
	if (multiplayer_api_extension)
		memdelete(multiplayer_api_extension);
}

static JSClassDef multiplayer_api_extension_class_def = {
	"MultiplayerAPIExtension",
	.finalizer = multiplayer_api_extension_class_finalizer
};

static JSValue multiplayer_api_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MultiplayerAPIExtension::__class_id);
	if (JS_IsException(obj))
		return obj;

	MultiplayerAPIExtension *multiplayer_api_extension_class;
	if (argc == 1) 
		multiplayer_api_extension_class = static_cast<MultiplayerAPIExtension *>(Variant(*argv).operator Object *());
	else 
		multiplayer_api_extension_class = memnew(MultiplayerAPIExtension);
	if (!multiplayer_api_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, multiplayer_api_extension_class);
	return obj;
}

static void define_multiplayer_api_extension_property(JSContext *ctx, JSValue proto) {
	
}

static void define_multiplayer_api_extension_enum(JSContext *ctx, JSValue proto) {
}

static int js_multiplayer_api_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["MultiplayerAPIExtension"] = MultiplayerAPIExtension::__class_id;
	class_id_list.insert(MultiplayerAPIExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MultiplayerAPIExtension::__class_id, &multiplayer_api_extension_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MultiplayerAPIExtension::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, MultiplayerAPI::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MultiplayerAPIExtension::__class_id, proto);

	define_multiplayer_api_extension_property(ctx, proto);
	define_multiplayer_api_extension_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, multiplayer_api_extension_class_constructor, "MultiplayerAPIExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "MultiplayerAPIExtension", ctor);
	constructors[MultiplayerAPIExtension::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_multiplayer_api_extension_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/multiplayer_api';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_multiplayer_api_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MultiplayerAPIExtension");
	return m;
}

JSModuleDef *js_init_multiplayer_api_extension_module(JSContext *ctx) {
	return _js_init_multiplayer_api_extension_module(ctx, "@godot/classes/multiplayer_api_extension");
}

void register_multiplayer_api_extension() {
	MultiplayerAPIExtension::__init_js_class_id();
	js_init_multiplayer_api_extension_module(ctx);
}