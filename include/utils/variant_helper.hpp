#ifndef __VariantAdapter_HELPER_H__
#define __VariantAdapter_HELPER_H__

#include "quickjs/quickjs.h"
#include <godot_cpp/variant/builtin_types.hpp>
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

class VariantAdapter {
	Variant variant;

public:
	VariantAdapter();
	VariantAdapter(Variant other);
	VariantAdapter(const JSValue &v);
	~VariantAdapter();

	operator Variant() const;
	operator bool() const;
	operator int64_t() const;
	operator int32_t() const;
	operator int16_t() const;
	operator int8_t() const;
	operator uint64_t() const;
	operator uint32_t() const;
	operator uint16_t() const;
	operator uint8_t() const;
	operator double() const;
	operator float() const;
	operator String() const;
	operator Vector2() const;
	operator Vector2i() const;
	operator Rect2() const;
	operator Rect2i() const;
	operator Vector3() const;
	operator Vector3i() const;
	operator Transform2D() const;
	operator Vector4() const;
	operator Vector4i() const;
	operator Plane() const;
	operator Quaternion() const;
	operator godot::AABB() const;
	operator Basis() const;
	operator Transform3D() const;
	operator Projection() const;
	operator Color() const;
	operator StringName() const;
	operator NodePath() const;
	operator godot::RID() const;
	operator ObjectID() const;
	operator Object *() const;
	operator Callable() const;
	operator Signal() const;
	operator Dictionary() const;
	operator Array() const;
	operator PackedByteArray() const;
	operator PackedInt32Array() const;
	operator PackedInt64Array() const;
	operator PackedFloat32Array() const;
	operator PackedFloat64Array() const;
	operator PackedStringArray() const;
	operator PackedVector2Array() const;
	operator PackedVector3Array() const;
	operator PackedColorArray() const;
	operator PackedVector4Array() const;
	operator JSValue() const;

	Variant::Type get_type();
};

#endif // __VariantAdapter_HELPER_H__