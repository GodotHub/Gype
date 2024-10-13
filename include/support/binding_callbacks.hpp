#ifndef __BINDING_CALLBACKS_H__
#define __BINDING_CALLBACKS_H__

#include "quickjs/quickjs.h"
#include <gdextension_interface.h>

namespace godot {
namespace internal {

extern const GDExtensionInstanceBindingCallbacks _js_callbacks;

} // namespace internal

} //namespace godot

#endif // __BINDING_CALLBACKS_H__