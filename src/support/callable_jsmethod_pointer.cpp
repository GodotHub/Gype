#include "support/callable_jsmethod_pointer.hpp"

namespace godot {
namespace internal {

Callable *create_callable_ptr_from_ccmp(CallableCustomMethodPointerBase *p_callable_method_pointer) {
	GDExtensionCallableCustomInfo2 info = {};
	info.callable_userdata = p_callable_method_pointer;
	info.token = internal::token;
	info.object_id = p_callable_method_pointer->get_object();
	info.call_func = &custom_callable_mp_call;
	info.is_valid_func = &custom_callable_mp_is_valid;
	info.free_func = &custom_callable_mp_free;
	info.hash_func = &custom_callable_mp_hash;
	info.equal_func = &custom_callable_mp_equal_func;
	info.less_than_func = &custom_callable_mp_less_than_func;
	info.get_argument_count_func = &custom_callable_mp_get_argument_count_func;

	Callable *callable = memnew(Callable);
	::godot::internal::gdextension_interface_callable_custom_create2(callable->_native_ptr(), &info);
	return callable;
};
} // namespace internal

} //namespace godot
