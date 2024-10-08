#include "utils/register_helper.h"

HashMap<StringName, JSClassID> classes;

Variant js_get_variant(JSContext *ctx, JSValue val) {
	VariantWrapper *vwrapper = (VariantWrapper *)gd_get_vwrapper(ctx, val);
	return *static_cast<Variant *>(gd_Variant_get_opaque(vwrapper));
}