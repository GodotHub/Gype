
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/editor_export_platform.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_export_platform_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorExportPlatform *editor_export_platform = static_cast<EditorExportPlatform *>(JS_GetOpaque(val, EditorExportPlatform::__class_id));
	if (editor_export_platform)
		memdelete(editor_export_platform);
}

static JSClassDef editor_export_platform_class_def = {
	"EditorExportPlatform",
	.finalizer = editor_export_platform_class_finalizer
};

static JSValue editor_export_platform_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorExportPlatform::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorExportPlatform *editor_export_platform_class;
	if (argc == 1) 
		editor_export_platform_class = static_cast<EditorExportPlatform *>(Variant(*argv).operator Object *());
	else 
		editor_export_platform_class = memnew(EditorExportPlatform);
	if (!editor_export_platform_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_export_platform_class);
	return obj;
}
static JSValue editor_export_platform_class_get_os_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorExportPlatform::get_os_name, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry editor_export_platform_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_os_name", 0, &editor_export_platform_class_get_os_name),
};

static void define_editor_export_platform_property(JSContext *ctx, JSValue proto) {
	
}

static void define_editor_export_platform_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_export_platform_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorExportPlatform"] = EditorExportPlatform::__class_id;
	class_id_list.insert(EditorExportPlatform::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorExportPlatform::__class_id, &editor_export_platform_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorExportPlatform::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorExportPlatform::__class_id, proto);

	define_editor_export_platform_property(ctx, proto);
	define_editor_export_platform_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_export_platform_class_proto_funcs, _countof(editor_export_platform_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_export_platform_class_constructor, "EditorExportPlatform", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "EditorExportPlatform", ctor);
	constructors[EditorExportPlatform::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_editor_export_platform_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_export_platform_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorExportPlatform");
	return m;
}

JSModuleDef *js_init_editor_export_platform_module(JSContext *ctx) {
	return _js_init_editor_export_platform_module(ctx, "@godot/classes/editor_export_platform");
}

void register_editor_export_platform() {
	EditorExportPlatform::__init_js_class_id();
	js_init_editor_export_platform_module(ctx);
}