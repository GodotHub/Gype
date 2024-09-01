#pragma once

#include <gdextension_interface.h>
#include <string>

std::string to_char(GDExtensionConstStringNamePtr p_name);
GDExtensionVariantType variant_type(GDExtensionConstVariantPtr p_self);
GDExtensionBool set_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_value);
GDExtensionBool get_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret);

static const GDExtensionScriptInstanceInfo3 InstanceInfo = {
	set_func, get_func
};