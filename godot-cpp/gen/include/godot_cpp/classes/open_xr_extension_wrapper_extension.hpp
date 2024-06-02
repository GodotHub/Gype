/**************************************************************************/
/*  open_xr_extension_wrapper_extension.hpp                               */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#ifndef GODOT_CPP_OPEN_XR_EXTENSION_WRAPPER_EXTENSION_HPP
#define GODOT_CPP_OPEN_XR_EXTENSION_WRAPPER_EXTENSION_HPP

#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/dictionary.hpp>


#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class OpenXRAPIExtension;

class OpenXRExtensionWrapperExtension : public Object {
	GDEXTENSION_CLASS(OpenXRExtensionWrapperExtension, Object)

public:
	Ref<OpenXRAPIExtension> get_openxr_api();
	void register_extension_wrapper();
	virtual Dictionary _get_requested_extensions();
	virtual uint64_t _set_system_properties_and_get_next_pointer(void *next_pointer);
	virtual uint64_t _set_instance_create_info_and_get_next_pointer(void *next_pointer);
	virtual uint64_t _set_session_create_and_get_next_pointer(void *next_pointer);
	virtual uint64_t _set_swapchain_create_info_and_get_next_pointer(void *next_pointer);
	virtual void _on_register_metadata();
	virtual void _on_before_instance_created();
	virtual void _on_instance_created(uint64_t instance);
	virtual void _on_instance_destroyed();
	virtual void _on_session_created(uint64_t session);
	virtual void _on_process();
	virtual void _on_pre_render();
	virtual void _on_session_destroyed();
	virtual void _on_state_idle();
	virtual void _on_state_ready();
	virtual void _on_state_synchronized();
	virtual void _on_state_visible();
	virtual void _on_state_focused();
	virtual void _on_state_stopping();
	virtual void _on_state_loss_pending();
	virtual void _on_state_exiting();
	virtual bool _on_event_polled(const void *event);

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_get_requested_extensions), decltype(&T::_get_requested_extensions)>) {
			BIND_VIRTUAL_METHOD(T, _get_requested_extensions);
		}
		if constexpr (!std::is_same_v<decltype(&B::_set_system_properties_and_get_next_pointer), decltype(&T::_set_system_properties_and_get_next_pointer)>) {
			BIND_VIRTUAL_METHOD(T, _set_system_properties_and_get_next_pointer);
		}
		if constexpr (!std::is_same_v<decltype(&B::_set_instance_create_info_and_get_next_pointer), decltype(&T::_set_instance_create_info_and_get_next_pointer)>) {
			BIND_VIRTUAL_METHOD(T, _set_instance_create_info_and_get_next_pointer);
		}
		if constexpr (!std::is_same_v<decltype(&B::_set_session_create_and_get_next_pointer), decltype(&T::_set_session_create_and_get_next_pointer)>) {
			BIND_VIRTUAL_METHOD(T, _set_session_create_and_get_next_pointer);
		}
		if constexpr (!std::is_same_v<decltype(&B::_set_swapchain_create_info_and_get_next_pointer), decltype(&T::_set_swapchain_create_info_and_get_next_pointer)>) {
			BIND_VIRTUAL_METHOD(T, _set_swapchain_create_info_and_get_next_pointer);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_register_metadata), decltype(&T::_on_register_metadata)>) {
			BIND_VIRTUAL_METHOD(T, _on_register_metadata);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_before_instance_created), decltype(&T::_on_before_instance_created)>) {
			BIND_VIRTUAL_METHOD(T, _on_before_instance_created);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_instance_created), decltype(&T::_on_instance_created)>) {
			BIND_VIRTUAL_METHOD(T, _on_instance_created);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_instance_destroyed), decltype(&T::_on_instance_destroyed)>) {
			BIND_VIRTUAL_METHOD(T, _on_instance_destroyed);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_session_created), decltype(&T::_on_session_created)>) {
			BIND_VIRTUAL_METHOD(T, _on_session_created);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_process), decltype(&T::_on_process)>) {
			BIND_VIRTUAL_METHOD(T, _on_process);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_pre_render), decltype(&T::_on_pre_render)>) {
			BIND_VIRTUAL_METHOD(T, _on_pre_render);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_session_destroyed), decltype(&T::_on_session_destroyed)>) {
			BIND_VIRTUAL_METHOD(T, _on_session_destroyed);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_state_idle), decltype(&T::_on_state_idle)>) {
			BIND_VIRTUAL_METHOD(T, _on_state_idle);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_state_ready), decltype(&T::_on_state_ready)>) {
			BIND_VIRTUAL_METHOD(T, _on_state_ready);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_state_synchronized), decltype(&T::_on_state_synchronized)>) {
			BIND_VIRTUAL_METHOD(T, _on_state_synchronized);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_state_visible), decltype(&T::_on_state_visible)>) {
			BIND_VIRTUAL_METHOD(T, _on_state_visible);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_state_focused), decltype(&T::_on_state_focused)>) {
			BIND_VIRTUAL_METHOD(T, _on_state_focused);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_state_stopping), decltype(&T::_on_state_stopping)>) {
			BIND_VIRTUAL_METHOD(T, _on_state_stopping);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_state_loss_pending), decltype(&T::_on_state_loss_pending)>) {
			BIND_VIRTUAL_METHOD(T, _on_state_loss_pending);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_state_exiting), decltype(&T::_on_state_exiting)>) {
			BIND_VIRTUAL_METHOD(T, _on_state_exiting);
		}
		if constexpr (!std::is_same_v<decltype(&B::_on_event_polled), decltype(&T::_on_event_polled)>) {
			BIND_VIRTUAL_METHOD(T, _on_event_polled);
		}
	}

public:
};

} // namespace godot

#endif // ! GODOT_CPP_OPEN_XR_EXTENSION_WRAPPER_EXTENSION_HPP