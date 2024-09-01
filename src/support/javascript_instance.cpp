#include "support/javascript_instance.hpp"

GDExtensionBool JavaScriptInstance::set(GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_variant) {
	const StringName *name = reinterpret_cast<const StringName *>(p_name);
	return true;
}

GDExtensionBool JavaScriptInstance::get(GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
	const StringName *name = reinterpret_cast<const StringName *>(p_name);
	return true;
}
