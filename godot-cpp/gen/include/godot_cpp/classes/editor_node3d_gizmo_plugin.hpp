/**************************************************************************/
/*  editor_node3d_gizmo_plugin.hpp                                        */
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

#ifndef GODOT_CPP_EDITOR_NODE3D_GIZMO_PLUGIN_HPP
#define GODOT_CPP_EDITOR_NODE3D_GIZMO_PLUGIN_HPP

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class Camera3D;
class Node3D;
struct Plane;
class StandardMaterial3D;
struct Vector2;

class EditorNode3DGizmoPlugin : public Resource {
	GDEXTENSION_CLASS(EditorNode3DGizmoPlugin, Resource)

public:

	void create_material(const String &name, const Color &color, bool billboard = false, bool on_top = false, bool use_vertex_color = false);
	void create_icon_material(const String &name, const Ref<Texture2D> &texture, bool on_top = false, const Color &color = Color(1, 1, 1, 1));
	void create_handle_material(const String &name, bool billboard = false, const Ref<Texture2D> &texture = nullptr);
	void add_material(const String &name, const Ref<StandardMaterial3D> &material);
	Ref<StandardMaterial3D> get_material(const String &name, const Ref<EditorNode3DGizmo> &gizmo = nullptr);
	virtual bool _has_gizmo(Node3D *for_node_3d) const;
	virtual Ref<EditorNode3DGizmo> _create_gizmo(Node3D *for_node_3d) const;
	virtual String _get_gizmo_name() const;
	virtual int32_t _get_priority() const;
	virtual bool _can_be_hidden() const;
	virtual bool _is_selectable_when_hidden() const;
	virtual void _redraw(const Ref<EditorNode3DGizmo> &gizmo);
	virtual String _get_handle_name(const Ref<EditorNode3DGizmo> &gizmo, int32_t handle_id, bool secondary) const;
	virtual bool _is_handle_highlighted(const Ref<EditorNode3DGizmo> &gizmo, int32_t handle_id, bool secondary) const;
	virtual Variant _get_handle_value(const Ref<EditorNode3DGizmo> &gizmo, int32_t handle_id, bool secondary) const;
	virtual void _begin_handle_action(const Ref<EditorNode3DGizmo> &gizmo, int32_t handle_id, bool secondary);
	virtual void _set_handle(const Ref<EditorNode3DGizmo> &gizmo, int32_t handle_id, bool secondary, Camera3D *camera, const Vector2 &screen_pos);
	virtual void _commit_handle(const Ref<EditorNode3DGizmo> &gizmo, int32_t handle_id, bool secondary, const Variant &restore, bool cancel);
	virtual int32_t _subgizmos_intersect_ray(const Ref<EditorNode3DGizmo> &gizmo, Camera3D *camera, const Vector2 &screen_pos) const;
	virtual PackedInt32Array _subgizmos_intersect_frustum(const Ref<EditorNode3DGizmo> &gizmo, Camera3D *camera, const TypedArray<Plane> &frustum_planes) const;
	virtual Transform3D _get_subgizmo_transform(const Ref<EditorNode3DGizmo> &gizmo, int32_t subgizmo_id) const;
	virtual void _set_subgizmo_transform(const Ref<EditorNode3DGizmo> &gizmo, int32_t subgizmo_id, const Transform3D &transform);
	virtual void _commit_subgizmos(const Ref<EditorNode3DGizmo> &gizmo, const PackedInt32Array &ids, const TypedArray<Transform3D> &restores, bool cancel);
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Resource::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_has_gizmo),decltype(&T::_has_gizmo)>) {
			BIND_VIRTUAL_METHOD(T, _has_gizmo);
		}
		if constexpr (!std::is_same_v<decltype(&B::_create_gizmo),decltype(&T::_create_gizmo)>) {
			BIND_VIRTUAL_METHOD(T, _create_gizmo);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_gizmo_name),decltype(&T::_get_gizmo_name)>) {
			BIND_VIRTUAL_METHOD(T, _get_gizmo_name);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_priority),decltype(&T::_get_priority)>) {
			BIND_VIRTUAL_METHOD(T, _get_priority);
		}
		if constexpr (!std::is_same_v<decltype(&B::_can_be_hidden),decltype(&T::_can_be_hidden)>) {
			BIND_VIRTUAL_METHOD(T, _can_be_hidden);
		}
		if constexpr (!std::is_same_v<decltype(&B::_is_selectable_when_hidden),decltype(&T::_is_selectable_when_hidden)>) {
			BIND_VIRTUAL_METHOD(T, _is_selectable_when_hidden);
		}
		if constexpr (!std::is_same_v<decltype(&B::_redraw),decltype(&T::_redraw)>) {
			BIND_VIRTUAL_METHOD(T, _redraw);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_handle_name),decltype(&T::_get_handle_name)>) {
			BIND_VIRTUAL_METHOD(T, _get_handle_name);
		}
		if constexpr (!std::is_same_v<decltype(&B::_is_handle_highlighted),decltype(&T::_is_handle_highlighted)>) {
			BIND_VIRTUAL_METHOD(T, _is_handle_highlighted);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_handle_value),decltype(&T::_get_handle_value)>) {
			BIND_VIRTUAL_METHOD(T, _get_handle_value);
		}
		if constexpr (!std::is_same_v<decltype(&B::_begin_handle_action),decltype(&T::_begin_handle_action)>) {
			BIND_VIRTUAL_METHOD(T, _begin_handle_action);
		}
		if constexpr (!std::is_same_v<decltype(&B::_set_handle),decltype(&T::_set_handle)>) {
			BIND_VIRTUAL_METHOD(T, _set_handle);
		}
		if constexpr (!std::is_same_v<decltype(&B::_commit_handle),decltype(&T::_commit_handle)>) {
			BIND_VIRTUAL_METHOD(T, _commit_handle);
		}
		if constexpr (!std::is_same_v<decltype(&B::_subgizmos_intersect_ray),decltype(&T::_subgizmos_intersect_ray)>) {
			BIND_VIRTUAL_METHOD(T, _subgizmos_intersect_ray);
		}
		if constexpr (!std::is_same_v<decltype(&B::_subgizmos_intersect_frustum),decltype(&T::_subgizmos_intersect_frustum)>) {
			BIND_VIRTUAL_METHOD(T, _subgizmos_intersect_frustum);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_subgizmo_transform),decltype(&T::_get_subgizmo_transform)>) {
			BIND_VIRTUAL_METHOD(T, _get_subgizmo_transform);
		}
		if constexpr (!std::is_same_v<decltype(&B::_set_subgizmo_transform),decltype(&T::_set_subgizmo_transform)>) {
			BIND_VIRTUAL_METHOD(T, _set_subgizmo_transform);
		}
		if constexpr (!std::is_same_v<decltype(&B::_commit_subgizmos),decltype(&T::_commit_subgizmos)>) {
			BIND_VIRTUAL_METHOD(T, _commit_subgizmos);
		}
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_EDITOR_NODE3D_GIZMO_PLUGIN_HPP