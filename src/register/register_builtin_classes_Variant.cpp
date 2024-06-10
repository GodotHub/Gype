#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/object_id.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/basis.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_float64_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/projection.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/signal.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/variant/vector3i.hpp>
#include <godot_cpp/variant/vector4.hpp>
#include <godot_cpp/variant/vector4i.hpp>

#include <iosfwd>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_Variant() {
	get_Variant_module().class_<Variant>("Variant").constructor<>().constructor<std::nullptr_t>("Variant_1").constructor<const Variant &>("Variant_2").constructor<bool>("Variant_3").constructor<int64_t>("Variant_4").constructor<int32_t>("Variant_5").constructor<int16_t>("Variant_6").constructor<int8_t>("Variant_7").constructor<uint64_t>("Variant_8").constructor<uint32_t>("Variant_9").constructor<uint16_t>("Variant_10").constructor<uint8_t>("Variant_11").constructor<double>("Variant_12").constructor<float>("Variant_13").constructor<const String &>("Variant_14").constructor<const char *>("Variant_15").constructor<const char16_t *>("Variant_16").constructor<const char32_t *>("Variant_17").constructor<const wchar_t *>("Variant_18").constructor<const Vector2 &>("Variant_19").constructor<const Vector2i &>("Variant_20").constructor<const Rect2 &>("Variant_21").constructor<const Rect2i &>("Variant_22").constructor<const Vector3 &>("Variant_23").constructor<const Vector3i &>("Variant_24").constructor<const Transform2D &>("Variant_25").constructor<const Vector4 &>("Variant_26").constructor<const Vector4i &>("Variant_27").constructor<const Plane &>("Variant_28").constructor<const Quaternion &>("Variant_29").constructor<const AABB &>("Variant_30").constructor<const Basis &>("Variant_31").constructor<const Transform3D &>("Variant_32").constructor<const Projection &>("Variant_33").constructor<const Color &>("Variant_34").constructor<const StringName &>("Variant_35").constructor<const NodePath &>("Variant_36").constructor<const RID &>("Variant_37").constructor<const ObjectID &>("Variant_38").constructor<const Object *>("Variant_39").constructor<const Callable &>("Variant_40").constructor<const Signal &>("Variant_41").constructor<const Dictionary &>("Variant_42").constructor<const Array &>("Variant_43").constructor<const PackedByteArray &>("Variant_44").constructor<const PackedInt32Array &>("Variant_45").constructor<const PackedInt64Array &>("Variant_46").constructor<const PackedFloat32Array &>("Variant_47").constructor<const PackedFloat64Array &>("Variant_48").constructor<const PackedStringArray &>("Variant_49").constructor<const PackedVector2Array &>("Variant_50").constructor<const PackedVector3Array &>("Variant_51").constructor<const PackedColorArray &>("Variant_52");
}