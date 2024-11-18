#include "utils/variant_helper.hpp"
#include "utils/quickjs_helper.hpp"

VariantAdapter::VariantAdapter() {}
VariantAdapter::VariantAdapter(const Variant &variant) { this->variant = variant; }
VariantAdapter::VariantAdapter(Variant &&other) { this->variant = variant; }
VariantAdapter::VariantAdapter(const JSValue &v) { variant = any_to_variant(v); }
VariantAdapter::~VariantAdapter() {}

VariantAdapter::operator bool() const { return variant; }
VariantAdapter::operator int64_t() const { return variant; }
VariantAdapter::operator int32_t() const { return variant; }
VariantAdapter::operator int16_t() const { return variant; }
VariantAdapter::operator int8_t() const { return variant; }
VariantAdapter::operator uint64_t() const { return variant; }
VariantAdapter::operator uint32_t() const { return variant; }
VariantAdapter::operator uint16_t() const { return variant; }
VariantAdapter::operator uint8_t() const { return variant; }
VariantAdapter::operator double() const { return variant; }
VariantAdapter::operator float() const { return variant; }
VariantAdapter::operator String() const { return variant; }
VariantAdapter::operator Vector2() const { return variant; }
VariantAdapter::operator Vector2i() const { return variant; }
VariantAdapter::operator Rect2() const { return variant; }
VariantAdapter::operator Rect2i() const { return variant; }
VariantAdapter::operator Vector3() const { return variant; }
VariantAdapter::operator Vector3i() const { return variant; }
VariantAdapter::operator Transform2D() const { return variant; }
VariantAdapter::operator Vector4() const { return variant; }
VariantAdapter::operator Vector4i() const { return variant; }
VariantAdapter::operator Plane() const { return variant; }
VariantAdapter::operator Quaternion() const { return variant; }
VariantAdapter::operator godot::AABB() const { return variant; }
VariantAdapter::operator Basis() const { return variant; }
VariantAdapter::operator Transform3D() const { return variant; }
VariantAdapter::operator Projection() const { return variant; }
VariantAdapter::operator Color() const { return variant; }
VariantAdapter::operator StringName() const { return variant; }
VariantAdapter::operator NodePath() const { return variant; }
VariantAdapter::operator godot::RID() const { return variant; }
VariantAdapter::operator ObjectID() const { return variant; }
VariantAdapter::operator Object *() const { return variant; }
VariantAdapter::operator Callable() const { return variant; }
VariantAdapter::operator Signal() const { return variant; }
VariantAdapter::operator Dictionary() const { return variant; }
VariantAdapter::operator Array() const { return variant; }
VariantAdapter::operator PackedByteArray() const { return variant; }
VariantAdapter::operator PackedInt32Array() const { return variant; }
VariantAdapter::operator PackedInt64Array() const { return variant; }
VariantAdapter::operator PackedFloat32Array() const { return variant; }
VariantAdapter::operator PackedFloat64Array() const { return variant; }
VariantAdapter::operator PackedStringArray() const { return variant; }
VariantAdapter::operator PackedVector2Array() const { return variant; }
VariantAdapter::operator PackedVector3Array() const { return variant; }
VariantAdapter::operator PackedColorArray() const { return variant; }
VariantAdapter::operator PackedVector4Array() const { return variant; }
VariantAdapter::operator JSValue() const { return any_to_jsvalue(&variant); }
VariantAdapter::operator Variant() const { return variant; }
Variant::Type VariantAdapter::get_type() { return variant.get_type(); }