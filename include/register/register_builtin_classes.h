#ifndef REGISTER_BUILTIN_CLASSES
#define REGISTER_BUILTIN_CLASSES

#include "qjspp.hpp"

qjs::Context::Module &get_Variant_module();

void register_builtin_classes_RID();
void register_builtin_classes_Callable();
void register_builtin_classes_String();
void register_builtin_classes_Vector2();
void register_builtin_classes_Vector2i();
void register_builtin_classes_Rect2();
void register_builtin_classes_Rect2i();
void register_builtin_classes_Vector3();
void register_builtin_classes_Vector3i();
void register_builtin_classes_Transform2D();
void register_builtin_classes_Vector4();
void register_builtin_classes_Vector4i();
void register_builtin_classes_Plane();
void register_builtin_classes_Quaternion();
void register_builtin_classes_AABB();
void register_builtin_classes_Basis();
void register_builtin_classes_Transform3D();
void register_builtin_classes_Projection();
void register_builtin_classes_Color();
void register_builtin_classes_StringName();
void register_builtin_classes_NodePath();
void register_builtin_classes_Signal();
void register_builtin_classes_Dictionary();
void register_builtin_classes_Array();
void register_builtin_classes_PackedByteArray();
void register_builtin_classes_PackedInt32Array();
void register_builtin_classes_PackedInt64Array();
void register_builtin_classes_PackedFloat32Array();
void register_builtin_classes_PackedFloat64Array();
void register_builtin_classes_PackedStringArray();
void register_builtin_classes_PackedVector2Array();
void register_builtin_classes_PackedVector3Array();
void register_builtin_classes_PackedColorArray();
void register_builtin_classes_Variant();
#endif