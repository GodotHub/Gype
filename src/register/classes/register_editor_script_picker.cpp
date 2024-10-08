
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_resource_picker.hpp>
#include <godot_cpp/classes/editor_script_picker.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_script_picker_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorScriptPicker *editor_script_picker = static_cast<EditorScriptPicker *>(JS_GetOpaque(val, EditorScriptPicker::__class_id));
	if (editor_script_picker)
		EditorScriptPicker::free(nullptr, editor_script_picker);
}

static JSClassDef editor_script_picker_class_def = {
	"EditorScriptPicker",
	.finalizer = editor_script_picker_class_finalizer
};

static JSValue editor_script_picker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorScriptPicker *editor_script_picker_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorScriptPicker::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_script_picker_class = memnew(EditorScriptPicker);
	if (!editor_script_picker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_script_picker_class);
	return obj;
}
static JSValue editor_script_picker_class_set_script_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorScriptPicker::set_script_owner, EditorScriptPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_script_picker_class_get_script_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorScriptPicker::get_script_owner, EditorScriptPicker::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry editor_script_picker_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_script_owner", 1, &editor_script_picker_class_set_script_owner),
	JS_CFUNC_DEF("get_script_owner", 0, &editor_script_picker_class_get_script_owner),
};

static int js_editor_script_picker_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorScriptPicker::__class_id);
	classes["EditorScriptPicker"] = EditorScriptPicker::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorScriptPicker::__class_id, &editor_script_picker_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, EditorResourcePicker::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorScriptPicker::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_script_picker_class_proto_funcs, _countof(editor_script_picker_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_script_picker_class_constructor, "EditorScriptPicker", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorScriptPicker", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_script_picker_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_script_picker_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorScriptPicker");
	return m;
}

JSModuleDef *js_init_editor_script_picker_module(JSContext *ctx) {
	return _js_init_editor_script_picker_module(ctx, "godot/classes/editor_script_picker");
}

void register_editor_script_picker() {
	js_init_editor_script_picker_module(ctx);
}