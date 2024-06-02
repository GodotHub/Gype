/**************************************************************************/
/*  java_script_bridge.hpp                                                */
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

#ifndef GODOT_CPP_JAVA_SCRIPT_BRIDGE_HPP
#define GODOT_CPP_JAVA_SCRIPT_BRIDGE_HPP

#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>


#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Callable;
class JavaScriptObject;
class PackedByteArray;

class JavaScriptBridge : public Object {
	GDEXTENSION_CLASS(JavaScriptBridge, Object)

public:
	static JavaScriptBridge *get_singleton();

	Variant eval(const String &code, bool use_global_execution_context = false);
	Ref<JavaScriptObject> get_interface(const String &interface);
	Ref<JavaScriptObject> create_callback(const Callable &callable);

private:
private:
	Variant create_object_internal(const Variant **args, GDExtensionInt arg_count);

public:
	Variant create_object(const String &object, rest<Variant> args) {
		std::vector<Variant> variant_args;
		variant_args.push_back(Variant(object));
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for (size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		return create_object_internal(call_args.data(), variant_args.size());
	}
	void download_buffer(const PackedByteArray &buffer, const String &name, const String &mime = "application/octet-stream");
	bool pwa_needs_update() const;
	Error pwa_update();
	void force_fs_sync();

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

#endif // ! GODOT_CPP_JAVA_SCRIPT_BRIDGE_HPP