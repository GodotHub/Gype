/**************************************************************************/
/*  stream_peer.hpp                                                       */
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

#ifndef GODOT_CPP_STREAM_PEER_HPP
#define GODOT_CPP_STREAM_PEER_HPP

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class PackedByteArray;

class StreamPeer : public RefCounted {
	GDEXTENSION_CLASS(StreamPeer, RefCounted)

public:

	Error put_data(const PackedByteArray &data);
	Array put_partial_data(const PackedByteArray &data);
	Array get_data(int32_t bytes);
	Array get_partial_data(int32_t bytes);
	int32_t get_available_bytes() const;
	void set_big_endian(bool enable);
	bool is_big_endian_enabled() const;
	void put_8(int8_t value);
	void put_u8(uint8_t value);
	void put_16(int16_t value);
	void put_u16(uint16_t value);
	void put_32(int32_t value);
	void put_u32(uint32_t value);
	void put_64(int64_t value);
	void put_u64(uint64_t value);
	void put_float(double value);
	void put_double(double value);
	void put_string(const String &value);
	void put_utf8_string(const String &value);
	void put_var(const Variant &value, bool full_objects = false);
	int8_t get_8();
	uint8_t get_u8();
	int16_t get_16();
	uint16_t get_u16();
	int32_t get_32();
	uint32_t get_u32();
	int64_t get_64();
	uint64_t get_u64();
	double get_float();
	double get_double();
	String get_string(int32_t bytes = -1);
	String get_utf8_string(int32_t bytes = -1);
	Variant get_var(bool allow_objects = false);
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		RefCounted::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_STREAM_PEER_HPP