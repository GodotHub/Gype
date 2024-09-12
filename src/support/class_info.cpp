#include "support/class_info.hpp"
#include "quickjs/env.h"

GDExtensionObjectPtr _create_instance_func(void *data) {
	JSValue *js_data = (JSValue *)data;
	return js_data;
}

void _free_instance_func(void *p_class_userdata, GDExtensionClassInstancePtr p_instance) {
	JS_FreeValue(context.ctx, *(reinterpret_cast<JSValue *>(p_instance)));
}