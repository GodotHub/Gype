
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gd_extension.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gd_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	GDExtension *gd_extension = static_cast<GDExtension *>(JS_GetOpaque(val, GDExtension::__class_id));
	if (gd_extension)
		memdelete(gd_extension);
}

static JSClassDef gd_extension_class_def = {
	"GDExtension",
	.finalizer = gd_extension_class_finalizer
};

static JSValue gd_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GDExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	GDExtension *gd_extension_class = memnew(GDExtension);
	if (!gd_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gd_extension_class);	
	return obj;
}
static JSValue gd_extension_class_is_library_open(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GDExtension::is_library_open, ctx, this_val, argc, argv);
};
static JSValue gd_extension_class_get_minimum_library_initialization_level(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GDExtension::get_minimum_library_initialization_level, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry gd_extension_class_proto_funcs[] = {
	JS_CFUNC_DEF("is_library_open", 0, &gd_extension_class_is_library_open),
	JS_CFUNC_DEF("get_minimum_library_initialization_level", 0, &gd_extension_class_get_minimum_library_initialization_level),
};

void define_gd_extension_property(JSContext *ctx, JSValue obj) {
}

static int js_gd_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GDExtension::__class_id);
	classes["GDExtension"] = GDExtension::__class_id;
	class_id_list.insert(GDExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GDExtension::__class_id, &gd_extension_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GDExtension::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GDExtension::__class_id, proto);

	define_gd_extension_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gd_extension_class_proto_funcs, _countof(gd_extension_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gd_extension_class_constructor, "GDExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GDExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_gd_extension_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gd_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GDExtension");
	return m;
}

JSModuleDef *js_init_gd_extension_module(JSContext *ctx) {
	return _js_init_gd_extension_module(ctx, "godot/classes/gd_extension");
}

void register_gd_extension() {
	GDExtension::__init_js_class_id();
	js_init_gd_extension_module(ctx);
}