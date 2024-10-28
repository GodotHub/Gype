
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/editor_resource_preview.hpp>
#include <godot_cpp/classes/editor_resource_preview_generator.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_resource_preview_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef editor_resource_preview_class_def = {
	"EditorResourcePreview",
	.finalizer = editor_resource_preview_class_finalizer
};

static JSValue editor_resource_preview_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorResourcePreview::__class_id);
	if (JS_IsException(obj))
		return obj;
	EditorResourcePreview *editor_resource_preview_class = memnew(EditorResourcePreview);
	if (!editor_resource_preview_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_resource_preview_class);
	return obj;
}
static JSValue editor_resource_preview_class_queue_resource_preview(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&EditorResourcePreview::queue_resource_preview, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_resource_preview_class_queue_edited_resource_preview(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&EditorResourcePreview::queue_edited_resource_preview, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_resource_preview_class_add_preview_generator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&EditorResourcePreview::add_preview_generator, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_resource_preview_class_remove_preview_generator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&EditorResourcePreview::remove_preview_generator, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_resource_preview_class_check_for_invalidation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&EditorResourcePreview::check_for_invalidation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry editor_resource_preview_class_proto_funcs[] = {
	JS_CFUNC_DEF("queue_resource_preview", 4, &editor_resource_preview_class_queue_resource_preview),
	JS_CFUNC_DEF("queue_edited_resource_preview", 4, &editor_resource_preview_class_queue_edited_resource_preview),
	JS_CFUNC_DEF("add_preview_generator", 1, &editor_resource_preview_class_add_preview_generator),
	JS_CFUNC_DEF("remove_preview_generator", 1, &editor_resource_preview_class_remove_preview_generator),
	JS_CFUNC_DEF("check_for_invalidation", 1, &editor_resource_preview_class_check_for_invalidation),
};

void define_editor_resource_preview_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_resource_preview_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorResourcePreview::__class_id);
	classes["EditorResourcePreview"] = EditorResourcePreview::__class_id;
	class_id_list.insert(EditorResourcePreview::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorResourcePreview::__class_id, &editor_resource_preview_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorResourcePreview::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorResourcePreview::__class_id, proto);

	define_editor_resource_preview_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_resource_preview_class_proto_funcs, _countof(editor_resource_preview_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_resource_preview_class_constructor, "EditorResourcePreview", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorResourcePreview", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_resource_preview_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_resource_preview_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorResourcePreview");
	return m;
}

JSModuleDef *js_init_editor_resource_preview_module(JSContext *ctx) {
	return _js_init_editor_resource_preview_module(ctx, "godot/classes/editor_resource_preview");
}

void register_editor_resource_preview() {
	EditorResourcePreview::__init_js_class_id();
	js_init_editor_resource_preview_module(ctx);
}