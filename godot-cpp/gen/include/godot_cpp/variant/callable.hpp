/**************************************************************************/
/*  callable.hpp                                                          */
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

#ifndef GODOT_CPP_CALLABLE_HPP
#define GODOT_CPP_CALLABLE_HPP

#include <godot_cpp/core/defs.hpp>

#include <gdextension_interface.h>
#include <godot_cpp/variant/callable_custom.hpp>


#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Array;
class Dictionary;
class Object;
class StringName;
class Variant;

class Callable {
	static constexpr size_t CALLABLE_SIZE = 16;
	uint8_t opaque[CALLABLE_SIZE] = {};

	friend class Variant;

	static struct _MethodBindings {
		GDExtensionTypeFromVariantConstructorFunc from_variant_constructor;
		GDExtensionPtrConstructor constructor_0;
		GDExtensionPtrConstructor constructor_1;
		GDExtensionPtrConstructor constructor_2;
		GDExtensionPtrDestructor destructor;
		GDExtensionPtrBuiltInMethod method_callv;
		GDExtensionPtrBuiltInMethod method_is_null;
		GDExtensionPtrBuiltInMethod method_is_custom;
		GDExtensionPtrBuiltInMethod method_is_standard;
		GDExtensionPtrBuiltInMethod method_is_valid;
		GDExtensionPtrBuiltInMethod method_get_object;
		GDExtensionPtrBuiltInMethod method_get_object_id;
		GDExtensionPtrBuiltInMethod method_get_method;
		GDExtensionPtrBuiltInMethod method_get_bound_arguments_count;
		GDExtensionPtrBuiltInMethod method_get_bound_arguments;
		GDExtensionPtrBuiltInMethod method_hash;
		GDExtensionPtrBuiltInMethod method_bindv;
		GDExtensionPtrBuiltInMethod method_unbind;
		GDExtensionPtrBuiltInMethod method_call;
		GDExtensionPtrBuiltInMethod method_call_deferred;
		GDExtensionPtrBuiltInMethod method_rpc;
		GDExtensionPtrBuiltInMethod method_rpc_id;
		GDExtensionPtrBuiltInMethod method_bind;
		GDExtensionPtrOperatorEvaluator operator_equal_Variant;
		GDExtensionPtrOperatorEvaluator operator_not_equal_Variant;
		GDExtensionPtrOperatorEvaluator operator_not;
		GDExtensionPtrOperatorEvaluator operator_equal_Callable;
		GDExtensionPtrOperatorEvaluator operator_not_equal_Callable;
		GDExtensionPtrOperatorEvaluator operator_in_Dictionary;
		GDExtensionPtrOperatorEvaluator operator_in_Array;
	} _method_bindings;

	static void init_bindings();
	static void _init_bindings_constructors_destructor();

	Callable(const Variant *p_variant);

public:
	_FORCE_INLINE_ GDExtensionTypePtr _native_ptr() const { return const_cast<uint8_t(*)[CALLABLE_SIZE]>(&opaque); }
	Callable();
	Callable(const Callable &from);
	Callable(Object *object, const StringName &method);
	Callable(Callable &&other);
	Callable(CallableCustom *p_custom);
	CallableCustom *get_custom() const;
	~Callable();
	Variant callv(const Array &arguments) const;
	bool is_null() const;
	bool is_custom() const;
	bool is_standard() const;
	bool is_valid() const;
	Object *get_object() const;
	int64_t get_object_id() const;
	StringName get_method() const;
	int64_t get_bound_arguments_count() const;
	Array get_bound_arguments() const;
	int64_t hash() const;
	Callable bindv(const Array &arguments);
	Callable unbind(int64_t argcount) const;
	Variant call(rest<Variant> args) const;
	void call_deferred(rest<Variant> args) const;
	void rpc(rest<Variant> args) const;
	void rpc_id(int64_t peer_id, rest<Variant> args) const;
	Callable bind(rest<Variant> args) const;
	bool operator==(const Variant &other) const;
	bool operator!=(const Variant &other) const;
	bool operatornot() const;
	bool operator==(const Callable &other) const;
	bool operator!=(const Callable &other) const;
	Callable &operator=(const Callable &other);
	Callable &operator=(Callable &&other);
};

} // namespace godot
#endif // ! GODOT_CPP_CALLABLE_HPP