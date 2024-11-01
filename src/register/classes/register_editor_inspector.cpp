
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/editor_inspector.hpp>
#include <godot_cpp/classes/scroll_container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_inspector_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_inspector_class_def = {
	"EditorInspector",
	.finalizer = editor_inspector_class_finalizer
};

static JSValue editor_inspector_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorInspector::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorInspector *editor_inspector_class;
	if (argc == 1) 
		editor_inspector_class = static_cast<EditorInspector *>(Variant(*argv).operator Object *());
	else 
		editor_inspector_class = memnew(EditorInspector);
	if (!editor_inspector_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_inspector_class);
	return obj;
}
static JSValue editor_inspector_class_get_selected_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorInspector::get_selected_path, ctx, this_val, argc, argv);
};
static JSValue editor_inspector_class_get_edited_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorInspector::get_edited_object, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry editor_inspector_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_selected_path", 0, &editor_inspector_class_get_selected_path),
	JS_CFUNC_DEF("get_edited_object", 0, &editor_inspector_class_get_edited_object),
};
static JSValue editor_inspector_class_get_property_selected_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorInspector *opaque = reinterpret_cast<EditorInspector *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "property_selected_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "property_selected").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "property_selected_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_inspector_class_get_property_keyed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorInspector *opaque = reinterpret_cast<EditorInspector *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "property_keyed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "property_keyed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "property_keyed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_inspector_class_get_property_deleted_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorInspector *opaque = reinterpret_cast<EditorInspector *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "property_deleted_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "property_deleted").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "property_deleted_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_inspector_class_get_resource_selected_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorInspector *opaque = reinterpret_cast<EditorInspector *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "resource_selected_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "resource_selected").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "resource_selected_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_inspector_class_get_object_id_selected_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorInspector *opaque = reinterpret_cast<EditorInspector *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "object_id_selected_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "object_id_selected").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "object_id_selected_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_inspector_class_get_property_edited_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorInspector *opaque = reinterpret_cast<EditorInspector *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "property_edited_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "property_edited").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "property_edited_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_inspector_class_get_property_toggled_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorInspector *opaque = reinterpret_cast<EditorInspector *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "property_toggled_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "property_toggled").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "property_toggled_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_inspector_class_get_edited_object_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorInspector *opaque = reinterpret_cast<EditorInspector *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "edited_object_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "edited_object_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "edited_object_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_inspector_class_get_restart_requested_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorInspector *opaque = reinterpret_cast<EditorInspector *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "restart_requested_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "restart_requested").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "restart_requested_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_editor_inspector_property(JSContext *ctx, JSValue proto) {
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "property_selected"),
		JS_NewCFunction(ctx, editor_inspector_class_get_property_selected_signal, "get_property_selected_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "property_keyed"),
		JS_NewCFunction(ctx, editor_inspector_class_get_property_keyed_signal, "get_property_keyed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "property_deleted"),
		JS_NewCFunction(ctx, editor_inspector_class_get_property_deleted_signal, "get_property_deleted_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "resource_selected"),
		JS_NewCFunction(ctx, editor_inspector_class_get_resource_selected_signal, "get_resource_selected_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "object_id_selected"),
		JS_NewCFunction(ctx, editor_inspector_class_get_object_id_selected_signal, "get_object_id_selected_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "property_edited"),
		JS_NewCFunction(ctx, editor_inspector_class_get_property_edited_signal, "get_property_edited_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "property_toggled"),
		JS_NewCFunction(ctx, editor_inspector_class_get_property_toggled_signal, "get_property_toggled_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "edited_object_changed"),
		JS_NewCFunction(ctx, editor_inspector_class_get_edited_object_changed_signal, "get_edited_object_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "restart_requested"),
		JS_NewCFunction(ctx, editor_inspector_class_get_restart_requested_signal, "get_restart_requested_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_editor_inspector_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_inspector_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorInspector"] = EditorInspector::__class_id;
	class_id_list.insert(EditorInspector::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorInspector::__class_id, &editor_inspector_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorInspector::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ScrollContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorInspector::__class_id, proto);

	define_editor_inspector_property(ctx, proto);
	define_editor_inspector_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_inspector_class_proto_funcs, _countof(editor_inspector_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_inspector_class_constructor, "EditorInspector", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorInspector", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_inspector_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/scroll_container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_inspector_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorInspector");
	return m;
}

JSModuleDef *js_init_editor_inspector_module(JSContext *ctx) {
	return _js_init_editor_inspector_module(ctx, "@godot/classes/editor_inspector");
}

void register_editor_inspector() {
	EditorInspector::__init_js_class_id();
	js_init_editor_inspector_module(ctx);
}