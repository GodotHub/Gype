#include "register/register_types.h"
#include "register/register_builtin_classes.h"
#include "register/register_utility_functions.h"
#include "register/utils.h"
#include <gdextension_interface.h>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/core/error_macros.hpp>
#include <godot_cpp/godot.hpp>

using namespace godot;

void initialize_tgds_types(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	register_builtin_classes_RID();
	register_builtin_classes_Callable();
	register_builtin_classes_String();
	register_builtin_classes_Vector2();
	register_builtin_classes_Vector2i();
	register_builtin_classes_Rect2();
	register_builtin_classes_Rect2i();
	register_builtin_classes_Vector3();
	register_builtin_classes_Vector3i();
	register_builtin_classes_Transform2D();
	register_builtin_classes_Vector4();
	register_builtin_classes_Vector4i();
	register_builtin_classes_Plane();
	register_builtin_classes_Quaternion();
	register_builtin_classes_AABB();
	register_builtin_classes_Basis();
	register_builtin_classes_Transform3D();
	register_builtin_classes_Projection();
	register_builtin_classes_Color();
	register_builtin_classes_StringName();
	register_builtin_classes_NodePath();
	register_builtin_classes_Signal();
	register_builtin_classes_Dictionary();
	register_builtin_classes_Array();
	register_builtin_classes_PackedByteArray();
	register_builtin_classes_PackedInt32Array();
	register_builtin_classes_PackedInt64Array();
	register_builtin_classes_PackedFloat32Array();
	register_builtin_classes_PackedFloat64Array();
	register_builtin_classes_PackedStringArray();
	register_builtin_classes_PackedVector2Array();
	register_builtin_classes_PackedVector3Array();
	register_builtin_classes_PackedColorArray();
	register_builtin_classes_Variant();
	register_utility_functions();
	auto value = context.eval("import { Callable } from 'Variant';let c = new Callable();GD.print('start');GD.print('processing');GD.print('end');", "<eval>", JS_EVAL_TYPE_MODULE);
	// context.eval("let c = new Callable();", "<eval>", JS_EVAL_TYPE_MODULE);
	// context.eval("GD.print('test', c);", "<eval>", JS_EVAL_TYPE_GLOBAL);
	if (JS_IsException(value.v)) {
		JSValue exception = JS_GetException(context.ctx);
		const char *error = JS_ToCString(context.ctx, exception);
	}
	ERR_FAIL_COND_EDMSG(JS_IsException(value.v), "fail");
}

void uninitialize_tgds_types(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}

extern "C" {
GDExtensionBool GDE_EXPORT tgds_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address, GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization) {
	godot::GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library, r_initialization);
	init_obj.register_initializer(initialize_tgds_types);
	init_obj.register_terminator(uninitialize_tgds_types);
	init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);
	return init_obj.init();
}
}