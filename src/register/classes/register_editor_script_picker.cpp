
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/editor_resource_picker.hpp>
#include <godot_cpp/classes/editor_script_picker.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_script_picker_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_script_picker_class_def = {
	"EditorScriptPicker",
	.finalizer = editor_script_picker_class_finalizer
};

static JSValue editor_script_picker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorScriptPicker::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorScriptPicker *editor_script_picker_class;
	if (argc == 1) 
		editor_script_picker_class = static_cast<EditorScriptPicker *>(Variant(*argv).operator Object *());
	else 
		editor_script_picker_class = memnew(EditorScriptPicker);
	if (!editor_script_picker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_script_picker_class);
	return obj;
}
static JSValue editor_script_picker_class_set_script_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorScriptPicker::set_script_owner, ctx, this_val, argc, argv);
};
static JSValue editor_script_picker_class_get_script_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorScriptPicker::get_script_owner, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry editor_script_picker_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_script_owner", 1, &editor_script_picker_class_set_script_owner),
	JS_CFUNC_DEF("get_script_owner", 0, &editor_script_picker_class_get_script_owner),
};

static void define_editor_script_picker_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "script_owner"),
        JS_NewCFunction(ctx, editor_script_picker_class_get_script_owner, "get_script_owner", 0),
        JS_NewCFunction(ctx, editor_script_picker_class_set_script_owner, "set_script_owner", 1),
        JS_PROP_GETSET
    );
	
}

static void define_editor_script_picker_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_script_picker_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorScriptPicker"] = EditorScriptPicker::__class_id;
	class_id_list.insert(EditorScriptPicker::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorScriptPicker::__class_id, &editor_script_picker_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorScriptPicker::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, EditorResourcePicker::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorScriptPicker::__class_id, proto);

	define_editor_script_picker_property(ctx, proto);
	define_editor_script_picker_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_script_picker_class_proto_funcs, _countof(editor_script_picker_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_script_picker_class_constructor, "EditorScriptPicker", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorScriptPicker", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_script_picker_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/editor_resource_picker';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_script_picker_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorScriptPicker");
	return m;
}

JSModuleDef *js_init_editor_script_picker_module(JSContext *ctx) {
	return _js_init_editor_script_picker_module(ctx, "@godot/classes/editor_script_picker");
}

void register_editor_script_picker() {
	EditorScriptPicker::__init_js_class_id();
	js_init_editor_script_picker_module(ctx);
}