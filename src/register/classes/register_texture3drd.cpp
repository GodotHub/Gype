
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/classes/texture3drd.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void texture3drd_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef texture3drd_class_def = {
	"Texture3DRD",
	.finalizer = texture3drd_class_finalizer
};

static JSValue texture3drd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Texture3DRD::__class_id);
	if (JS_IsException(obj))
		return obj;
	Texture3DRD *texture3drd_class;
	if (argc == 1) {
		Variant vobj = *argv;
		texture3drd_class = static_cast<Texture3DRD *>(static_cast<Object *>(vobj));
	} else {
		texture3drd_class = memnew(Texture3DRD);
	}
	if (!texture3drd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, texture3drd_class);	
	return obj;
}
static JSValue texture3drd_class_set_texture_rd_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Texture3DRD::set_texture_rd_rid, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture3drd_class_get_texture_rd_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Texture3DRD::get_texture_rd_rid, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry texture3drd_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture_rd_rid", 1, &texture3drd_class_set_texture_rd_rid),
	JS_CFUNC_DEF("get_texture_rd_rid", 0, &texture3drd_class_get_texture_rd_rid),
};

void define_texture3drd_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_rd_rid"),
        JS_NewCFunction(ctx, texture3drd_class_get_texture_rd_rid, "get_texture_rd_rid", 0),
        JS_NewCFunction(ctx, texture3drd_class_set_texture_rd_rid, "set_texture_rd_rid", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_texture3drd_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Texture3DRD::__class_id);
	classes["Texture3DRD"] = Texture3DRD::__class_id;
	class_id_list.insert(Texture3DRD::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Texture3DRD::__class_id, &texture3drd_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Texture3DRD::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Texture3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Texture3DRD::__class_id, proto);

	define_texture3drd_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture3drd_class_proto_funcs, _countof(texture3drd_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, texture3drd_class_constructor, "Texture3DRD", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Texture3DRD", ctor);

	return 0;
}

JSModuleDef *_js_init_texture3drd_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/texture3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture3drd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Texture3DRD");
	return m;
}

JSModuleDef *js_init_texture3drd_module(JSContext *ctx) {
	return _js_init_texture3drd_module(ctx, "@godot/classes/texture3drd");
}

void register_texture3drd() {
	Texture3DRD::__init_js_class_id();
	js_init_texture3drd_module(ctx);
}