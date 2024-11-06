
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/editor_property.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_property_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorProperty *editor_property = static_cast<EditorProperty *>(JS_GetOpaque(val, EditorProperty::__class_id));
	if (editor_property)
		memdelete(editor_property);
}

static JSClassDef editor_property_class_def = {
	"EditorProperty",
	.finalizer = editor_property_class_finalizer
};

static JSValue editor_property_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorProperty::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorProperty *editor_property_class;
	if (argc == 1) 
		editor_property_class = static_cast<EditorProperty *>(Variant(*argv).operator Object *());
	else 
		editor_property_class = memnew(EditorProperty);
	if (!editor_property_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_property_class);
	return obj;
}
static JSValue editor_property_class_set_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorProperty::set_label, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_get_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorProperty::get_label, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_set_read_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorProperty::set_read_only, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_is_read_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorProperty::is_read_only, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_set_checkable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorProperty::set_checkable, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_is_checkable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorProperty::is_checkable, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_set_checked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorProperty::set_checked, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_is_checked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorProperty::is_checked, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_set_draw_warning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorProperty::set_draw_warning, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_is_draw_warning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorProperty::is_draw_warning, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_set_keying(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorProperty::set_keying, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_is_keying(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorProperty::is_keying, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_set_deletable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorProperty::set_deletable, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_is_deletable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorProperty::is_deletable, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_get_edited_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorProperty::get_edited_property, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_get_edited_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorProperty::get_edited_object, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_update_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorProperty::update_property, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_add_focusable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorProperty::add_focusable, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_set_bottom_editor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorProperty::set_bottom_editor, ctx, this_val, argc, argv);
};
static JSValue editor_property_class_emit_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorProperty::emit_changed, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry editor_property_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_label", 1, &editor_property_class_set_label),
	JS_CFUNC_DEF("get_label", 0, &editor_property_class_get_label),
	JS_CFUNC_DEF("set_read_only", 1, &editor_property_class_set_read_only),
	JS_CFUNC_DEF("is_read_only", 0, &editor_property_class_is_read_only),
	JS_CFUNC_DEF("set_checkable", 1, &editor_property_class_set_checkable),
	JS_CFUNC_DEF("is_checkable", 0, &editor_property_class_is_checkable),
	JS_CFUNC_DEF("set_checked", 1, &editor_property_class_set_checked),
	JS_CFUNC_DEF("is_checked", 0, &editor_property_class_is_checked),
	JS_CFUNC_DEF("set_draw_warning", 1, &editor_property_class_set_draw_warning),
	JS_CFUNC_DEF("is_draw_warning", 0, &editor_property_class_is_draw_warning),
	JS_CFUNC_DEF("set_keying", 1, &editor_property_class_set_keying),
	JS_CFUNC_DEF("is_keying", 0, &editor_property_class_is_keying),
	JS_CFUNC_DEF("set_deletable", 1, &editor_property_class_set_deletable),
	JS_CFUNC_DEF("is_deletable", 0, &editor_property_class_is_deletable),
	JS_CFUNC_DEF("get_edited_property", 0, &editor_property_class_get_edited_property),
	JS_CFUNC_DEF("get_edited_object", 0, &editor_property_class_get_edited_object),
	JS_CFUNC_DEF("update_property", 0, &editor_property_class_update_property),
	JS_CFUNC_DEF("add_focusable", 1, &editor_property_class_add_focusable),
	JS_CFUNC_DEF("set_bottom_editor", 1, &editor_property_class_set_bottom_editor),
	JS_CFUNC_DEF("emit_changed", 4, &editor_property_class_emit_changed),
};
static JSValue editor_property_class_get_property_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorProperty *opaque = reinterpret_cast<EditorProperty *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "property_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "property_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "property_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_property_class_get_multiple_properties_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorProperty *opaque = reinterpret_cast<EditorProperty *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "multiple_properties_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "multiple_properties_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "multiple_properties_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_property_class_get_property_keyed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorProperty *opaque = reinterpret_cast<EditorProperty *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "property_keyed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "property_keyed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "property_keyed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_property_class_get_property_deleted_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorProperty *opaque = reinterpret_cast<EditorProperty *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "property_deleted_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "property_deleted").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "property_deleted_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_property_class_get_property_keyed_with_value_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorProperty *opaque = reinterpret_cast<EditorProperty *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "property_keyed_with_value_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "property_keyed_with_value").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "property_keyed_with_value_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_property_class_get_property_checked_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorProperty *opaque = reinterpret_cast<EditorProperty *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "property_checked_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "property_checked").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "property_checked_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_property_class_get_property_pinned_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorProperty *opaque = reinterpret_cast<EditorProperty *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "property_pinned_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "property_pinned").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "property_pinned_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_property_class_get_property_can_revert_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorProperty *opaque = reinterpret_cast<EditorProperty *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "property_can_revert_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "property_can_revert_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "property_can_revert_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_property_class_get_resource_selected_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorProperty *opaque = reinterpret_cast<EditorProperty *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "resource_selected_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "resource_selected").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "resource_selected_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_property_class_get_object_id_selected_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorProperty *opaque = reinterpret_cast<EditorProperty *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "object_id_selected_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "object_id_selected").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "object_id_selected_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue editor_property_class_get_selected_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorProperty *opaque = reinterpret_cast<EditorProperty *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "selected_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "selected").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "selected_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_editor_property_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "label"),
        JS_NewCFunction(ctx, editor_property_class_get_label, "get_label", 0),
        JS_NewCFunction(ctx, editor_property_class_set_label, "set_label", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "read_only"),
        JS_NewCFunction(ctx, editor_property_class_is_read_only, "is_read_only", 0),
        JS_NewCFunction(ctx, editor_property_class_set_read_only, "set_read_only", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "checkable"),
        JS_NewCFunction(ctx, editor_property_class_is_checkable, "is_checkable", 0),
        JS_NewCFunction(ctx, editor_property_class_set_checkable, "set_checkable", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "checked"),
        JS_NewCFunction(ctx, editor_property_class_is_checked, "is_checked", 0),
        JS_NewCFunction(ctx, editor_property_class_set_checked, "set_checked", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "draw_warning"),
        JS_NewCFunction(ctx, editor_property_class_is_draw_warning, "is_draw_warning", 0),
        JS_NewCFunction(ctx, editor_property_class_set_draw_warning, "set_draw_warning", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "keying"),
        JS_NewCFunction(ctx, editor_property_class_is_keying, "is_keying", 0),
        JS_NewCFunction(ctx, editor_property_class_set_keying, "set_keying", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "deletable"),
        JS_NewCFunction(ctx, editor_property_class_is_deletable, "is_deletable", 0),
        JS_NewCFunction(ctx, editor_property_class_set_deletable, "set_deletable", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "property_changed"),
		JS_NewCFunction(ctx, editor_property_class_get_property_changed_signal, "get_property_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "multiple_properties_changed"),
		JS_NewCFunction(ctx, editor_property_class_get_multiple_properties_changed_signal, "get_multiple_properties_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "property_keyed"),
		JS_NewCFunction(ctx, editor_property_class_get_property_keyed_signal, "get_property_keyed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "property_deleted"),
		JS_NewCFunction(ctx, editor_property_class_get_property_deleted_signal, "get_property_deleted_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "property_keyed_with_value"),
		JS_NewCFunction(ctx, editor_property_class_get_property_keyed_with_value_signal, "get_property_keyed_with_value_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "property_checked"),
		JS_NewCFunction(ctx, editor_property_class_get_property_checked_signal, "get_property_checked_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "property_pinned"),
		JS_NewCFunction(ctx, editor_property_class_get_property_pinned_signal, "get_property_pinned_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "property_can_revert_changed"),
		JS_NewCFunction(ctx, editor_property_class_get_property_can_revert_changed_signal, "get_property_can_revert_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "resource_selected"),
		JS_NewCFunction(ctx, editor_property_class_get_resource_selected_signal, "get_resource_selected_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "object_id_selected"),
		JS_NewCFunction(ctx, editor_property_class_get_object_id_selected_signal, "get_object_id_selected_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "selected"),
		JS_NewCFunction(ctx, editor_property_class_get_selected_signal, "get_selected_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_editor_property_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_property_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorProperty"] = EditorProperty::__class_id;
	class_id_list.insert(EditorProperty::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorProperty::__class_id, &editor_property_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorProperty::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorProperty::__class_id, proto);

	define_editor_property_property(ctx, proto);
	define_editor_property_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_property_class_proto_funcs, _countof(editor_property_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_property_class_constructor, "EditorProperty", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "EditorProperty", ctor);
	constructors[EditorProperty::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_editor_property_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_property_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorProperty");
	return m;
}

JSModuleDef *js_init_editor_property_module(JSContext *ctx) {
	return _js_init_editor_property_module(ctx, "@godot/classes/editor_property");
}

void register_editor_property() {
	EditorProperty::__init_js_class_id();
	js_init_editor_property_module(ctx);
}