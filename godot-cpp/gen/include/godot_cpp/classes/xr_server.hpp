/**************************************************************************/
/*  xr_server.hpp                                                         */
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

#ifndef GODOT_CPP_XR_SERVER_HPP
#define GODOT_CPP_XR_SERVER_HPP

#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class String;
class StringName;
class XRInterface;
class XRPositionalTracker;

class XRServer : public Object {
	GDEXTENSION_CLASS(XRServer, Object)

public:

	enum TrackerType {
		TRACKER_HEAD = 1,
		TRACKER_CONTROLLER = 2,
		TRACKER_BASESTATION = 4,
		TRACKER_ANCHOR = 8,
		TRACKER_ANY_KNOWN = 127,
		TRACKER_UNKNOWN = 128,
		TRACKER_ANY = 255,
	};

	enum RotationMode {
		RESET_FULL_ROTATION = 0,
		RESET_BUT_KEEP_TILT = 1,
		DONT_RESET_ROTATION = 2,
	};

	static XRServer *get_singleton();

	double get_world_scale() const;
	void set_world_scale(double scale);
	Transform3D get_world_origin() const;
	void set_world_origin(const Transform3D &world_origin);
	Transform3D get_reference_frame() const;
	void center_on_hmd(XRServer::RotationMode rotation_mode, bool keep_height);
	Transform3D get_hmd_transform();
	void add_interface(const Ref<XRInterface> &interface);
	int32_t get_interface_count() const;
	void remove_interface(const Ref<XRInterface> &interface);
	Ref<XRInterface> get_interface(int32_t idx) const;
	TypedArray<Dictionary> get_interfaces() const;
	Ref<XRInterface> find_interface(const String &name) const;
	void add_tracker(const Ref<XRPositionalTracker> &tracker);
	void remove_tracker(const Ref<XRPositionalTracker> &tracker);
	Dictionary get_trackers(int32_t tracker_types);
	Ref<XRPositionalTracker> get_tracker(const StringName &tracker_name) const;
	Ref<XRInterface> get_primary_interface() const;
	void set_primary_interface(const Ref<XRInterface> &interface);
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(XRServer::TrackerType);
VARIANT_ENUM_CAST(XRServer::RotationMode);

#endif // ! GODOT_CPP_XR_SERVER_HPP