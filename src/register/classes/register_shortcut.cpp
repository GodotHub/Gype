
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void shortcut_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef shortcut_class_def = {
	"Shortcut",
	.finalizer = shortcut_class_finalizer
};

static JSValue shortcut_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Shortcut::__class_id);
	if (JS_IsException(obj))
		return obj;
	Shortcut *shortcut_class;
	if (argc == 1) {
		Variant vobj = *argv;
		shortcut_class = static_cast<Shortcut *>(static_cast<Object *>(vobj));
	} else {
		shortcut_class = memnew(Shortcut);
	}
	if (!shortcut_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, shortcut_class);	
	return obj;
}
static JSValue shortcut_class_set_events(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Shortcut::set_events, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shortcut_class_get_events(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Shortcut::get_events, ctx, this_val, argc, argv);
};
static JSValue shortcut_class_has_valid_event(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Shortcut::has_valid_event, ctx, this_val, argc, argv);
};
static JSValue shortcut_class_matches_event(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Shortcut::matches_event, ctx, this_val, argc, argv);
};
static JSValue shortcut_class_get_as_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Shortcut::get_as_text, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry shortcut_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_events", 1, &shortcut_class_set_events),
	JS_CFUNC_DEF("get_events", 0, &shortcut_class_get_events),
	JS_CFUNC_DEF("has_valid_event", 0, &shortcut_class_has_valid_event),
	JS_CFUNC_DEF("matches_event", 1, &shortcut_class_matches_event),
	JS_CFUNC_DEF("get_as_text", 0, &shortcut_class_get_as_text),
};

void define_shortcut_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "events"),
        JS_NewCFunction(ctx, shortcut_class_get_events, "get_events", 0),
        JS_NewCFunction(ctx, shortcut_class_set_events, "set_events", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_shortcut_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Shortcut::__class_id);
	classes["Shortcut"] = Shortcut::__class_id;
	class_id_list.insert(Shortcut::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Shortcut::__class_id, &shortcut_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Shortcut::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Shortcut::__class_id, proto);

	define_shortcut_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, shortcut_class_proto_funcs, _countof(shortcut_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, shortcut_class_constructor, "Shortcut", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Shortcut", ctor);

	return 0;
}

JSModuleDef *_js_init_shortcut_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_shortcut_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Shortcut");
	return m;
}

JSModuleDef *js_init_shortcut_module(JSContext *ctx) {
	return _js_init_shortcut_module(ctx, "@godot/classes/shortcut");
}

void register_shortcut() {
	Shortcut::__init_js_class_id();
	js_init_shortcut_module(ctx);
}