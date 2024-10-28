
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/audio_stream_ogg_vorbis.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/classes/resource_importer_ogg_vorbis.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void resource_importer_ogg_vorbis_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef resource_importer_ogg_vorbis_class_def = {
	"ResourceImporterOggVorbis",
	.finalizer = resource_importer_ogg_vorbis_class_finalizer
};

static JSValue resource_importer_ogg_vorbis_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ResourceImporterOggVorbis::__class_id);
	if (JS_IsException(obj))
		return obj;
	ResourceImporterOggVorbis *resource_importer_ogg_vorbis_class = memnew(ResourceImporterOggVorbis);
	if (!resource_importer_ogg_vorbis_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, resource_importer_ogg_vorbis_class);
	return obj;
}
static JSValue resource_importer_ogg_vorbis_class_load_from_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&ResourceImporterOggVorbis::load_from_buffer, ctx, this_val, argc, argv);
};
static JSValue resource_importer_ogg_vorbis_class_load_from_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&ResourceImporterOggVorbis::load_from_file, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry resource_importer_ogg_vorbis_class_static_funcs[] = {
	JS_CFUNC_DEF("load_from_buffer", 1, &resource_importer_ogg_vorbis_class_load_from_buffer),
	JS_CFUNC_DEF("load_from_file", 1, &resource_importer_ogg_vorbis_class_load_from_file),
};

void define_resource_importer_ogg_vorbis_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_resource_importer_ogg_vorbis_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ResourceImporterOggVorbis::__class_id);
	classes["ResourceImporterOggVorbis"] = ResourceImporterOggVorbis::__class_id;
	class_id_list.insert(ResourceImporterOggVorbis::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ResourceImporterOggVorbis::__class_id, &resource_importer_ogg_vorbis_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ResourceImporterOggVorbis::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ResourceImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceImporterOggVorbis::__class_id, proto);

	define_resource_importer_ogg_vorbis_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, resource_importer_ogg_vorbis_class_constructor, "ResourceImporterOggVorbis", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, resource_importer_ogg_vorbis_class_static_funcs, _countof(resource_importer_ogg_vorbis_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ResourceImporterOggVorbis", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_importer_ogg_vorbis_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource_importer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_importer_ogg_vorbis_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceImporterOggVorbis");
	return m;
}

JSModuleDef *js_init_resource_importer_ogg_vorbis_module(JSContext *ctx) {
	return _js_init_resource_importer_ogg_vorbis_module(ctx, "godot/classes/resource_importer_ogg_vorbis");
}

void register_resource_importer_ogg_vorbis() {
	ResourceImporterOggVorbis::__init_js_class_id();
	js_init_resource_importer_ogg_vorbis_module(ctx);
}