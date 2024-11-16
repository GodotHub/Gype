#include "utils/variant_helper.hpp"
#include "utils/quickjs_helper.hpp"

VariantAdapter::VariantAdapter(const Variant &variant) {
    this->variant = variant;
}

VariantAdapter::VariantAdapter(const JSValue &v) {
	variant = any_to_variant(v);
}

VariantAdapter::operator JSValue() const {
	return any_to_jsvalue(&variant);
}

VariantAdapter::operator Variant() const {
    return variant;
}