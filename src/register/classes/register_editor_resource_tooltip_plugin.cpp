
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/editor_resource_tooltip_plugin.hpp>
#include <godot_cpp/classes/texture_rect.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_resource_tooltip_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorResourceTooltipPlugin *editor_resource_tooltip_plugin = static_cast<EditorResourceTooltipPlugin *>(JS_GetOpaque(val, EditorResourceTooltipPlugin::__class_id));
	if (editor_resource_tooltip_plugin)
		EditorResourceTooltipPlugin::free(nullptr, editor_resource_tooltip_plugin);
}

static JSClassDef editor_resource_tooltip_plugin_class_def = {
	"EditorResourceTooltipPlugin",
	.finalizer = editor_resource_tooltip_plugin_class_finalizer
};

static JSValue editor_resource_tooltip_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorResourceTooltipPlugin *editor_resource_tooltip_plugin_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorResourceTooltipPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_resource_tooltip_plugin_class = memnew(EditorResourceTooltipPlugin);
	if (!editor_resource_tooltip_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_resource_tooltip_plugin_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue editor_resource_tooltip_plugin_class_request_thumbnail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&EditorResourceTooltipPlugin::request_thumbnail, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry editor_resource_tooltip_plugin_class_proto_funcs[] = {
	JS_CFUNC_DEF("request_thumbnail", 2, &editor_resource_tooltip_plugin_class_request_thumbnail),
};

void define_editor_resource_tooltip_plugin_property(JSContext *ctx, JSValue obj) {
}

static int js_editor_resource_tooltip_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EditorResourceTooltipPlugin::__class_id);
	classes["EditorResourceTooltipPlugin"] = EditorResourceTooltipPlugin::__class_id;
	class_id_list.insert(EditorResourceTooltipPlugin::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorResourceTooltipPlugin::__class_id, &editor_resource_tooltip_plugin_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorResourceTooltipPlugin::__class_id, proto);
	define_editor_resource_tooltip_plugin_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_resource_tooltip_plugin_class_proto_funcs, _countof(editor_resource_tooltip_plugin_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_resource_tooltip_plugin_class_constructor, "EditorResourceTooltipPlugin", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorResourceTooltipPlugin", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_resource_tooltip_plugin_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_resource_tooltip_plugin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorResourceTooltipPlugin");
	return m;
}

JSModuleDef *js_init_editor_resource_tooltip_plugin_module(JSContext *ctx) {
	return _js_init_editor_resource_tooltip_plugin_module(ctx, "godot/classes/editor_resource_tooltip_plugin");
}

void register_editor_resource_tooltip_plugin() {
	EditorResourceTooltipPlugin::__init_js_class_id();
	js_init_editor_resource_tooltip_plugin_module(ctx);
}