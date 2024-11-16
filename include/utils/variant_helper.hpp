#ifndef __VARIANT_HELPER_H__
#define __VARIANT_HELPER_H__

#include <godot_cpp/variant/variant.hpp>
#include "quickjs/quickjs.h"

using namespace godot;

class VariantAdapter {
    Variant variant;

public:
	VariantAdapter(const Variant &variant);
	VariantAdapter(const JSValue &v);
	operator JSValue() const;
	operator Variant() const;
};

#endif // __VARIANT_HELPER_H__