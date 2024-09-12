#ifndef __CLASS_INFO_H__
#define __CLASS_INFO_H__

#include <gdextension_interface.h>

GDExtensionObjectPtr _create_instance_func(void *data);
void _free_instance_func(void *p_class_userdata, GDExtensionClassInstancePtr p_instance);

#endif // __CLASS_INFO_H__