#include "quickjs/wrapper/object_wrapper.h"
#include "quickjs/wrapper/js_object.h"
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

struct ObjectWrapper {
	godot::JSObject *opaque;
};

void *gd_JSObject_get_opaque(ObjectWrapper *wrapper) {
	return wrapper->opaque;
}

ObjectWrapper *gd_new_empty_JSObject_wrapper() {
	return new ObjectWrapper{ memnew(godot::JSObject) };
}

ObjectWrapper *get_new_JSObject_wrapper(JSContext *ctx, JSValue this_obj) {
	return new ObjectWrapper{ memnew(godot::JSObject(ctx, this_obj)) };
}

void gd_JSObject_set_value(ObjectWrapper *this_obj, VariantWrapper *keyw, VariantWrapper *valw) {
	godot::JSObject *obj = static_cast<godot::JSObject *>(gd_JSObject_get_opaque(this_obj));
	godot::Dictionary properties = obj->get_property_dict();
	godot::Variant key = gd_Variant_get_opaque(keyw);
	godot::Variant val = gd_Variant_get_opaque(valw);
	properties[key] = val;
}