
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_stream_ogg_vorbis.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/classes/resource_importer_ogg_vorbis.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void resource_importer_ogg_vorbis_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourceImporterOggVorbis *resource_importer_ogg_vorbis = static_cast<ResourceImporterOggVorbis *>(JS_GetOpaque(val, ResourceImporterOggVorbis::__class_id));
	if (resource_importer_ogg_vorbis)
		ResourceImporterOggVorbis::free(nullptr, resource_importer_ogg_vorbis);
}

static JSClassDef resource_importer_ogg_vorbis_class_def = {
	"ResourceImporterOggVorbis",
	.finalizer = resource_importer_ogg_vorbis_class_finalizer
};

static JSValue resource_importer_ogg_vorbis_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ResourceImporterOggVorbis *resource_importer_ogg_vorbis_class;
	JSValue obj = JS_NewObjectClass(ctx, ResourceImporterOggVorbis::__class_id);
	if (JS_IsException(obj))
		return obj;
	resource_importer_ogg_vorbis_class = memnew(ResourceImporterOggVorbis);
	if (!resource_importer_ogg_vorbis_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, resource_importer_ogg_vorbis_class);
	return obj;
}
static JSValue resource_importer_ogg_vorbis_class_load_from_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&ResourceImporterOggVorbis::load_from_buffer, ResourceImporterOggVorbis::__class_id, ctx, this_val, argv);
};
static JSValue resource_importer_ogg_vorbis_class_load_from_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&ResourceImporterOggVorbis::load_from_file, ResourceImporterOggVorbis::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry resource_importer_ogg_vorbis_class_static_funcs[] = {
	JS_CFUNC_DEF("load_from_buffer", 1, &resource_importer_ogg_vorbis_class_load_from_buffer),
	JS_CFUNC_DEF("load_from_file", 1, &resource_importer_ogg_vorbis_class_load_from_file),
};

static int js_resource_importer_ogg_vorbis_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ResourceImporterOggVorbis::__class_id);
	classes["ResourceImporterOggVorbis"] = ResourceImporterOggVorbis::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ResourceImporterOggVorbis::__class_id, &resource_importer_ogg_vorbis_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ResourceImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceImporterOggVorbis::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, resource_importer_ogg_vorbis_class_constructor, "ResourceImporterOggVorbis", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, resource_importer_ogg_vorbis_class_static_funcs, _countof(resource_importer_ogg_vorbis_class_static_funcs));

	JS_SetModuleExport(ctx, m, "ResourceImporterOggVorbis", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_importer_ogg_vorbis_module(JSContext *ctx, const char *module_name) {
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
	js_init_resource_importer_ogg_vorbis_module(ctx);
}