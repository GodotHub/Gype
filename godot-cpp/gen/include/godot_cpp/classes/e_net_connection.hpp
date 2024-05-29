/**************************************************************************/
/*  e_net_connection.hpp                                                  */
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

#ifndef GODOT_CPP_E_NET_CONNECTION_HPP
#define GODOT_CPP_E_NET_CONNECTION_HPP

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class ENetPacketPeer;
class PackedByteArray;
class String;

class ENetConnection : public RefCounted {
	GDEXTENSION_CLASS(ENetConnection, RefCounted)

public:

	enum CompressionMode {
		COMPRESS_NONE = 0,
		COMPRESS_RANGE_CODER = 1,
		COMPRESS_FASTLZ = 2,
		COMPRESS_ZLIB = 3,
		COMPRESS_ZSTD = 4,
	};

	enum EventType {
		EVENT_ERROR = -1,
		EVENT_NONE = 0,
		EVENT_CONNECT = 1,
		EVENT_DISCONNECT = 2,
		EVENT_RECEIVE = 3,
	};

	enum HostStatistic {
		HOST_TOTAL_SENT_DATA = 0,
		HOST_TOTAL_SENT_PACKETS = 1,
		HOST_TOTAL_RECEIVED_DATA = 2,
		HOST_TOTAL_RECEIVED_PACKETS = 3,
	};

	Error create_host_bound(const String &bind_address, int32_t bind_port, int32_t max_peers = 32, int32_t max_channels = 0, int32_t in_bandwidth = 0, int32_t out_bandwidth = 0);
	Error create_host(int32_t max_peers = 32, int32_t max_channels = 0, int32_t in_bandwidth = 0, int32_t out_bandwidth = 0);
	void destroy();
	Ref<ENetPacketPeer> connect_to_host(const String &address, int32_t port, int32_t channels = 0, int32_t data = 0);
	Array service(int32_t timeout = 0);
	void flush();
	void bandwidth_limit(int32_t in_bandwidth = 0, int32_t out_bandwidth = 0);
	void channel_limit(int32_t limit);
	void broadcast(int32_t channel, const PackedByteArray &packet, int32_t flags);
	void compress(ENetConnection::CompressionMode mode);
	Error dtls_server_setup(const Ref<TLSOptions> &server_options);
	Error dtls_client_setup(const String &hostname, const Ref<TLSOptions> &client_options = nullptr);
	void refuse_new_connections(bool refuse);
	double pop_statistic(ENetConnection::HostStatistic statistic);
	int32_t get_max_channels() const;
	int32_t get_local_port() const;
	TypedArray<ENetPacketPeer> get_peers();
	void socket_send(const String &destination_address, int32_t destination_port, const PackedByteArray &packet);
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		RefCounted::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(ENetConnection::CompressionMode);
VARIANT_ENUM_CAST(ENetConnection::EventType);
VARIANT_ENUM_CAST(ENetConnection::HostStatistic);

#endif // ! GODOT_CPP_E_NET_CONNECTION_HPP