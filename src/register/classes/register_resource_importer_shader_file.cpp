
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource_importer_shader_file.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void resource_importer_shader_file_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourceImporterShaderFile *resource_importer_shader_file = static_cast<ResourceImporterShaderFile *>(JS_GetOpaque(val, ResourceImporterShaderFile::__class_id));
	if (resource_importer_shader_file)
		memdelete(resource_importer_shader_file);
}

static JSClassDef resource_importer_shader_file_class_def = {
	"ResourceImporterShaderFile",
	.finalizer = resource_importer_shader_file_class_finalizer
};

static JSValue resource_importer_shader_file_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ResourceImporterShaderFile::__class_id);
	if (JS_IsException(obj))
		return obj;

	ResourceImporterShaderFile *resource_importer_shader_file_class;
	if (argc == 1) 
		resource_importer_shader_file_class = static_cast<ResourceImporterShaderFile *>(Variant(*argv).operator Object *());
	else 
		resource_importer_shader_file_class = memnew(ResourceImporterShaderFile);
	if (!resource_importer_shader_file_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, resource_importer_shader_file_class);
	return obj;
}

static void define_resource_importer_shader_file_property(JSContext *ctx, JSValue proto) {
	
}

static void define_resource_importer_shader_file_enum(JSContext *ctx, JSValue proto) {
}

static int js_resource_importer_shader_file_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ResourceImporterShaderFile"] = ResourceImporterShaderFile::__class_id;
	class_id_list.insert(ResourceImporterShaderFile::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ResourceImporterShaderFile::__class_id, &resource_importer_shader_file_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ResourceImporterShaderFile::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ResourceImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceImporterShaderFile::__class_id, proto);

	define_resource_importer_shader_file_property(ctx, proto);
	define_resource_importer_shader_file_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, resource_importer_shader_file_class_constructor, "ResourceImporterShaderFile", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "ResourceImporterShaderFile", ctor);
	constructors[ResourceImporterShaderFile::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_resource_importer_shader_file_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/resource_importer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_importer_shader_file_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceImporterShaderFile");
	return m;
}

JSModuleDef *js_init_resource_importer_shader_file_module(JSContext *ctx) {
	return _js_init_resource_importer_shader_file_module(ctx, "@godot/classes/resource_importer_shader_file");
}

void register_resource_importer_shader_file() {
	ResourceImporterShaderFile::__init_js_class_id();
	js_init_resource_importer_shader_file_module(ctx);
}