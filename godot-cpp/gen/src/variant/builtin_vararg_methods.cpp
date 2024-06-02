/**************************************************************************/
/*  builtin_vararg_methods.cpp                                            */
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

#include <godot_cpp/templates/vararg.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/signal.hpp>
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

Variant Callable::call(rest<Variant> args) const {
	std::vector<Variant> variant_args;
	variant_args.insert(variant_args.end(), args.begin(), args.end());
	std::vector<const Variant *> call_args;
	for (size_t i = 0; i < variant_args.size(); i++) {
		call_args.push_back(&variant_args[i]);
	}
	Variant ret;
	_method_bindings.method_call((GDExtensionTypePtr)&opaque, reinterpret_cast<GDExtensionConstTypePtr *>(call_args.data()), &ret, 0 + call_args.size());
	return ret;
}

void Callable::call_deferred(rest<Variant> args) const {
	std::vector<Variant> variant_args;
	variant_args.insert(variant_args.end(), args.begin(), args.end());
	std::vector<const Variant *> call_args;
	for (size_t i = 0; i < variant_args.size(); i++) {
		call_args.push_back(&variant_args[i]);
	}
	_method_bindings.method_call_deferred((GDExtensionTypePtr)&opaque, reinterpret_cast<GDExtensionConstTypePtr *>(call_args.data()), nullptr, 0 + call_args.size());
}

void Callable::rpc(rest<Variant> args) const {
	std::vector<Variant> variant_args;
	variant_args.insert(variant_args.end(), args.begin(), args.end());
	std::vector<const Variant *> call_args;
	for (size_t i = 0; i < variant_args.size(); i++) {
		call_args.push_back(&variant_args[i]);
	}
	_method_bindings.method_rpc((GDExtensionTypePtr)&opaque, reinterpret_cast<GDExtensionConstTypePtr *>(call_args.data()), nullptr, 0 + call_args.size());
}

void Callable::rpc_id(int64_t peer_id, rest<Variant> args) const {
	std::vector<Variant> variant_args;
	variant_args.push_back(Variant(peer_id));
	variant_args.insert(variant_args.end(), args.begin(), args.end());
	std::vector<const Variant *> call_args;
	for (size_t i = 0; i < variant_args.size(); i++) {
		call_args.push_back(&variant_args[i]);
	}
	_method_bindings.method_rpc_id((GDExtensionTypePtr)&opaque, reinterpret_cast<GDExtensionConstTypePtr *>(call_args.data()), nullptr, 1 + call_args.size());
}

Callable Callable::bind(rest<Variant> args) const {
	std::vector<Variant> variant_args;
	variant_args.insert(variant_args.end(), args.begin(), args.end());
	std::vector<const Variant *> call_args;
	for (size_t i = 0; i < variant_args.size(); i++) {
		call_args.push_back(&variant_args[i]);
	}
	Callable ret;
	_method_bindings.method_bind((GDExtensionTypePtr)&opaque, reinterpret_cast<GDExtensionConstTypePtr *>(call_args.data()), &ret, 0 + call_args.size());
	return ret;
}

void Signal::emit(rest<Variant> args) const {
	std::vector<Variant> variant_args;
	variant_args.insert(variant_args.end(), args.begin(), args.end());
	std::vector<const Variant *> call_args;
	for (size_t i = 0; i < variant_args.size(); i++) {
		call_args.push_back(&variant_args[i]);
	}
	_method_bindings.method_emit((GDExtensionTypePtr)&opaque, reinterpret_cast<GDExtensionConstTypePtr *>(call_args.data()), nullptr, 0 + call_args.size());
}
