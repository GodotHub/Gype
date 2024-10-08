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

// ObjectWrapper *gd_new_empty_JSObject_wrapper() {
// 	ObjectWrapper *wrapper = memnew(ObjectWrapper);
// 	memnew_placement(&(wrapper->opaque), godot::JSObject);
// 	return wrapper;
// }

ObjectWrapper *gd_new_empty_JSObject_wrapper() {
	ObjectWrapper *wrapper = memnew(ObjectWrapper);
	wrapper->opaque = nullptr;
	return wrapper;
}

ObjectWrapper *gd_new_JSObject_wrapper(JSContext *ctx, JSValue this_obj) {
	ObjectWrapper *wrapper = memnew(ObjectWrapper);
	memnew_placement(&(wrapper->opaque), godot::JSObject(ctx, this_obj));
	return wrapper;
}

void gd_JSObject_set_value(ObjectWrapper *this_obj, VariantWrapper *keyw, VariantWrapper *valw) {
	void *opaque = gd_JSObject_get_opaque(this_obj);
	if (opaque) {
		godot::JSObject *obj = static_cast<godot::JSObject *>(opaque);
		godot::Variant key = gd_Variant_get_opaque(keyw);
		godot::Variant val = gd_Variant_get_opaque(valw);
		this_obj->opaque->set(key, val);
	}
}