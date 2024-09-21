#ifndef __CLASS_INFO_H__
#define __CLASS_INFO_H__

#include <gdextension_interface.h>

GDExtensionObjectPtr _create_instance_func(void *data);
void _free_instance_func(void *p_class_userdata, GDExtensionClassInstancePtr p_instance);
GDExtensionBool get_func(GDExtensionClassInstancePtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret);
GDExtensionBool set_func(GDExtensionClassInstancePtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_value);

#endif // __CLASS_INFO_H__