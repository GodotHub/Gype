
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_map.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void input_map_class_finalizer(JSRuntime *rt, JSValue val) {
	InputMap *input_map = static_cast<InputMap *>(JS_GetOpaque(val, InputMap::__class_id));
	if (input_map)
		InputMap::free(nullptr, input_map);
}

static JSClassDef input_map_class_def = {
	"InputMap",
	.finalizer = input_map_class_finalizer
};

static JSValue input_map_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputMap *input_map_class;
	JSValue obj = JS_NewObjectClass(ctx, InputMap::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_map_class = InputMap::get_singleton();
	if (!input_map_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_map_class);
	return obj;
}
static JSValue input_map_class_has_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputMap::has_action, InputMap::__class_id, ctx, this_val, argv);
};
static JSValue input_map_class_get_actions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&InputMap::get_actions, InputMap::__class_id, ctx, this_val, argv);
};
static JSValue input_map_class_add_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputMap::add_action, InputMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_map_class_erase_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputMap::erase_action, InputMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_map_class_action_set_deadzone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputMap::action_set_deadzone, InputMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_map_class_action_get_deadzone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&InputMap::action_get_deadzone, InputMap::__class_id, ctx, this_val, argv);
};
static JSValue input_map_class_action_add_event(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputMap::action_add_event, InputMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_map_class_action_has_event(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&InputMap::action_has_event, InputMap::__class_id, ctx, this_val, argv);
};
static JSValue input_map_class_action_erase_event(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputMap::action_erase_event, InputMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_map_class_action_erase_events(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputMap::action_erase_events, InputMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_map_class_action_get_events(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&InputMap::action_get_events, InputMap::__class_id, ctx, this_val, argv);
};
static JSValue input_map_class_event_is_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputMap::event_is_action, InputMap::__class_id, ctx, this_val, argv);
};
static JSValue input_map_class_load_from_project_settings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputMap::load_from_project_settings, InputMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry input_map_class_proto_funcs[] = {
	JS_CFUNC_DEF("has_action", 1, &input_map_class_has_action),
	JS_CFUNC_DEF("get_actions", 0, &input_map_class_get_actions),
	JS_CFUNC_DEF("add_action", 2, &input_map_class_add_action),
	JS_CFUNC_DEF("erase_action", 1, &input_map_class_erase_action),
	JS_CFUNC_DEF("action_set_deadzone", 2, &input_map_class_action_set_deadzone),
	JS_CFUNC_DEF("action_get_deadzone", 1, &input_map_class_action_get_deadzone),
	JS_CFUNC_DEF("action_add_event", 2, &input_map_class_action_add_event),
	JS_CFUNC_DEF("action_has_event", 2, &input_map_class_action_has_event),
	JS_CFUNC_DEF("action_erase_event", 2, &input_map_class_action_erase_event),
	JS_CFUNC_DEF("action_erase_events", 1, &input_map_class_action_erase_events),
	JS_CFUNC_DEF("action_get_events", 1, &input_map_class_action_get_events),
	JS_CFUNC_DEF("event_is_action", 3, &input_map_class_event_is_action),
	JS_CFUNC_DEF("load_from_project_settings", 0, &input_map_class_load_from_project_settings),
};

static int js_input_map_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputMap::__class_id);
	classes["InputMap"] = InputMap::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputMap::__class_id, &input_map_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputMap::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_map_class_proto_funcs, _countof(input_map_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_map_class_constructor, "InputMap", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputMap", ctor);

	return 0;
}

JSModuleDef *_js_init_input_map_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_map_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputMap");
	return m;
}

JSModuleDef *js_init_input_map_module(JSContext *ctx) {
	return _js_init_input_map_module(ctx, "godot/classes/input_map");
}

void register_input_map() {
	js_init_input_map_module(ctx);
}