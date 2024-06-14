/**************************************************************************/
/*  main_loop.hpp                                                         */
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

#ifndef GODOT_CPP_MAIN_LOOP_HPP
#define GODOT_CPP_MAIN_LOOP_HPP

#include <godot_cpp/core/object.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class MainLoop : public Object {
	GDEXTENSION_CLASS(MainLoop, Object)

public:

	static const int NOTIFICATION_OS_MEMORY_WARNING;
	static const int NOTIFICATION_TRANSLATION_CHANGED;
	static const int NOTIFICATION_WM_ABOUT;
	static const int NOTIFICATION_CRASH;
	static const int NOTIFICATION_OS_IME_UPDATE;
	static const int NOTIFICATION_APPLICATION_RESUMED;
	static const int NOTIFICATION_APPLICATION_PAUSED;
	static const int NOTIFICATION_APPLICATION_FOCUS_IN;
	static const int NOTIFICATION_APPLICATION_FOCUS_OUT;
	static const int NOTIFICATION_TEXT_SERVER_CHANGED;

	virtual void _initialize();
	virtual bool _physics_process(double delta);
	virtual bool _process(double delta);
	virtual void _finalize();
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_initialize),decltype(&T::_initialize)>) {
			BIND_VIRTUAL_METHOD(T, _initialize);
		}
		if constexpr (!std::is_same_v<decltype(&B::_physics_process),decltype(&T::_physics_process)>) {
			BIND_VIRTUAL_METHOD(T, _physics_process);
		}
		if constexpr (!std::is_same_v<decltype(&B::_process),decltype(&T::_process)>) {
			BIND_VIRTUAL_METHOD(T, _process);
		}
		if constexpr (!std::is_same_v<decltype(&B::_finalize),decltype(&T::_finalize)>) {
			BIND_VIRTUAL_METHOD(T, _finalize);
		}
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_MAIN_LOOP_HPP