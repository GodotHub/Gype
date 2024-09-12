#pragma once

#include <gdextension_interface.h>
#include <string>

// GDExtensionBool set_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_value);
// GDExtensionBool get_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret);
// const GDExtensionPropertyInfo *get_property_list_func(GDExtensionScriptInstanceDataPtr p_instance, uint32_t *r_count);
// void free_property_list_func(GDExtensionScriptInstanceDataPtr p_instance, const GDExtensionPropertyInfo *p_list, uint32_t p_count);
// GDExtensionBool property_can_revert_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name);
// GDExtensionBool property_get_revert_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret);
// GDExtensionObjectPtr get_owner_func(GDExtensionScriptInstanceDataPtr p_instance);

// GDExtensionObjectPtr get_script_func(GDExtensionScriptInstanceDataPtr p_instance);
// GDExtensionScriptLanguagePtr get_language_func(GDExtensionScriptInstanceDataPtr p_instance);

static const GDExtensionScriptInstanceInfo3 InstanceInfo = GDExtensionScriptInstanceInfo3();