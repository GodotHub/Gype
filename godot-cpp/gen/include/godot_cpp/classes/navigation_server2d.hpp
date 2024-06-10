/**************************************************************************/
/*  navigation_server2d.hpp                                               */
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

#ifndef GODOT_CPP_NAVIGATION_SERVER2D_HPP
#define GODOT_CPP_NAVIGATION_SERVER2D_HPP

#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class NavigationMeshSourceGeometryData2D;
class NavigationPathQueryParameters2D;
class NavigationPathQueryResult2D;
class NavigationPolygon;
class Node;

class NavigationServer2D : public Object {
	GDEXTENSION_CLASS(NavigationServer2D, Object)

	static NavigationServer2D *singleton;

public:

	static NavigationServer2D *get_singleton();

	TypedArray<RID> get_maps() const;
	RID map_create();
	void map_set_active(const RID &map, bool active);
	bool map_is_active(const RID &map) const;
	void map_set_cell_size(const RID &map, double cell_size);
	double map_get_cell_size(const RID &map) const;
	void map_set_use_edge_connections(const RID &map, bool enabled);
	bool map_get_use_edge_connections(const RID &map) const;
	void map_set_edge_connection_margin(const RID &map, double margin);
	double map_get_edge_connection_margin(const RID &map) const;
	void map_set_link_connection_radius(const RID &map, double radius);
	double map_get_link_connection_radius(const RID &map) const;
	PackedVector2Array map_get_path(const RID &map, const Vector2 &origin, const Vector2 &destination, bool optimize, uint32_t navigation_layers = 1) const;
	Vector2 map_get_closest_point(const RID &map, const Vector2 &to_point) const;
	RID map_get_closest_point_owner(const RID &map, const Vector2 &to_point) const;
	TypedArray<RID> map_get_links(const RID &map) const;
	TypedArray<RID> map_get_regions(const RID &map) const;
	TypedArray<RID> map_get_agents(const RID &map) const;
	TypedArray<RID> map_get_obstacles(const RID &map) const;
	void map_force_update(const RID &map);
	uint32_t map_get_iteration_id(const RID &map) const;
	Vector2 map_get_random_point(const RID &map, uint32_t navigation_layers, bool uniformly) const;
	void query_path(const Ref<NavigationPathQueryParameters2D> &parameters, const Ref<NavigationPathQueryResult2D> &result) const;
	RID region_create();
	void region_set_enabled(const RID &region, bool enabled);
	bool region_get_enabled(const RID &region) const;
	void region_set_use_edge_connections(const RID &region, bool enabled);
	bool region_get_use_edge_connections(const RID &region) const;
	void region_set_enter_cost(const RID &region, double enter_cost);
	double region_get_enter_cost(const RID &region) const;
	void region_set_travel_cost(const RID &region, double travel_cost);
	double region_get_travel_cost(const RID &region) const;
	void region_set_owner_id(const RID &region, uint64_t owner_id);
	uint64_t region_get_owner_id(const RID &region) const;
	bool region_owns_point(const RID &region, const Vector2 &point) const;
	void region_set_map(const RID &region, const RID &map);
	RID region_get_map(const RID &region) const;
	void region_set_navigation_layers(const RID &region, uint32_t navigation_layers);
	uint32_t region_get_navigation_layers(const RID &region) const;
	void region_set_transform(const RID &region, const Transform2D &transform);
	Transform2D region_get_transform(const RID &region) const;
	void region_set_navigation_polygon(const RID &region, const Ref<NavigationPolygon> &navigation_polygon);
	int32_t region_get_connections_count(const RID &region) const;
	Vector2 region_get_connection_pathway_start(const RID &region, int32_t connection) const;
	Vector2 region_get_connection_pathway_end(const RID &region, int32_t connection) const;
	Vector2 region_get_random_point(const RID &region, uint32_t navigation_layers, bool uniformly) const;
	RID link_create();
	void link_set_map(const RID &link, const RID &map);
	RID link_get_map(const RID &link) const;
	void link_set_enabled(const RID &link, bool enabled);
	bool link_get_enabled(const RID &link) const;
	void link_set_bidirectional(const RID &link, bool bidirectional);
	bool link_is_bidirectional(const RID &link) const;
	void link_set_navigation_layers(const RID &link, uint32_t navigation_layers);
	uint32_t link_get_navigation_layers(const RID &link) const;
	void link_set_start_position(const RID &link, const Vector2 &position);
	Vector2 link_get_start_position(const RID &link) const;
	void link_set_end_position(const RID &link, const Vector2 &position);
	Vector2 link_get_end_position(const RID &link) const;
	void link_set_enter_cost(const RID &link, double enter_cost);
	double link_get_enter_cost(const RID &link) const;
	void link_set_travel_cost(const RID &link, double travel_cost);
	double link_get_travel_cost(const RID &link) const;
	void link_set_owner_id(const RID &link, uint64_t owner_id);
	uint64_t link_get_owner_id(const RID &link) const;
	RID agent_create();
	void agent_set_avoidance_enabled(const RID &agent, bool enabled);
	bool agent_get_avoidance_enabled(const RID &agent) const;
	void agent_set_map(const RID &agent, const RID &map);
	RID agent_get_map(const RID &agent) const;
	void agent_set_paused(const RID &agent, bool paused);
	bool agent_get_paused(const RID &agent) const;
	void agent_set_neighbor_distance(const RID &agent, double distance);
	double agent_get_neighbor_distance(const RID &agent) const;
	void agent_set_max_neighbors(const RID &agent, int32_t count);
	int32_t agent_get_max_neighbors(const RID &agent) const;
	void agent_set_time_horizon_agents(const RID &agent, double time_horizon);
	double agent_get_time_horizon_agents(const RID &agent) const;
	void agent_set_time_horizon_obstacles(const RID &agent, double time_horizon);
	double agent_get_time_horizon_obstacles(const RID &agent) const;
	void agent_set_radius(const RID &agent, double radius);
	double agent_get_radius(const RID &agent) const;
	void agent_set_max_speed(const RID &agent, double max_speed);
	double agent_get_max_speed(const RID &agent) const;
	void agent_set_velocity_forced(const RID &agent, const Vector2 &velocity);
	void agent_set_velocity(const RID &agent, const Vector2 &velocity);
	Vector2 agent_get_velocity(const RID &agent) const;
	void agent_set_position(const RID &agent, const Vector2 &position);
	Vector2 agent_get_position(const RID &agent) const;
	bool agent_is_map_changed(const RID &agent) const;
	void agent_set_avoidance_callback(const RID &agent, const Callable &callback);
	bool agent_has_avoidance_callback(const RID &agent) const;
	void agent_set_avoidance_layers(const RID &agent, uint32_t layers);
	uint32_t agent_get_avoidance_layers(const RID &agent) const;
	void agent_set_avoidance_mask(const RID &agent, uint32_t mask);
	uint32_t agent_get_avoidance_mask(const RID &agent) const;
	void agent_set_avoidance_priority(const RID &agent, double priority);
	double agent_get_avoidance_priority(const RID &agent) const;
	RID obstacle_create();
	void obstacle_set_avoidance_enabled(const RID &obstacle, bool enabled);
	bool obstacle_get_avoidance_enabled(const RID &obstacle) const;
	void obstacle_set_map(const RID &obstacle, const RID &map);
	RID obstacle_get_map(const RID &obstacle) const;
	void obstacle_set_paused(const RID &obstacle, bool paused);
	bool obstacle_get_paused(const RID &obstacle) const;
	void obstacle_set_radius(const RID &obstacle, double radius);
	double obstacle_get_radius(const RID &obstacle) const;
	void obstacle_set_velocity(const RID &obstacle, const Vector2 &velocity);
	Vector2 obstacle_get_velocity(const RID &obstacle) const;
	void obstacle_set_position(const RID &obstacle, const Vector2 &position);
	Vector2 obstacle_get_position(const RID &obstacle) const;
	void obstacle_set_vertices(const RID &obstacle, const PackedVector2Array &vertices);
	PackedVector2Array obstacle_get_vertices(const RID &obstacle) const;
	void obstacle_set_avoidance_layers(const RID &obstacle, uint32_t layers);
	uint32_t obstacle_get_avoidance_layers(const RID &obstacle) const;
	void parse_source_geometry_data(const Ref<NavigationPolygon> &navigation_polygon, const Ref<NavigationMeshSourceGeometryData2D> &source_geometry_data, Node *root_node, const Callable &callback = Callable());
	void bake_from_source_geometry_data(const Ref<NavigationPolygon> &navigation_polygon, const Ref<NavigationMeshSourceGeometryData2D> &source_geometry_data, const Callable &callback = Callable());
	void bake_from_source_geometry_data_async(const Ref<NavigationPolygon> &navigation_polygon, const Ref<NavigationMeshSourceGeometryData2D> &source_geometry_data, const Callable &callback = Callable());
	bool is_baking_navigation_polygon(const Ref<NavigationPolygon> &navigation_polygon) const;
	RID source_geometry_parser_create();
	void source_geometry_parser_set_callback(const RID &parser, const Callable &callback);
	PackedVector2Array simplify_path(const PackedVector2Array &path, double epsilon);
	void free_rid(const RID &rid);
	void set_debug_enabled(bool enabled);
	bool get_debug_enabled() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

	~NavigationServer2D();

public:

};

} // namespace godot

#endif // ! GODOT_CPP_NAVIGATION_SERVER2D_HPP