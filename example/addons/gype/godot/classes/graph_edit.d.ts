
import { GraphFrame } from "@godot/classes/graph_frame";
import { GodotObject } from "@godot/classes/godot_object";
import { Node } from "@godot/classes/node";
import { HBoxContainer } from "@godot/classes/h_box_container";
import { Control } from "@godot/classes/control";

export declare class GraphEdit extends Control{
  public _is_in_input_hotzone(_in_node: Object, _in_port: number, _mouse_position: Vector2): boolean;
  public _is_in_output_hotzone(_in_node: Object, _in_port: number, _mouse_position: Vector2): boolean;
  public _get_connection_line(_from_position: Vector2, _to_position: Vector2): PackedVector2Array;
  public _is_node_hover_valid(_from_node: String | StringName | string, _from_port: number, _to_node: String | StringName | string, _to_port: number): boolean;
  public connect_node(_from_node: String | StringName | string, _from_port: number, _to_node: String | StringName | string, _to_port: number): number;
  public is_node_connected(_from_node: String | StringName | string, _from_port: number, _to_node: String | StringName | string, _to_port: number): boolean;
  public disconnect_node(_from_node: String | StringName | string, _from_port: number, _to_node: String | StringName | string, _to_port: number): void;
  public set_connection_activity(_from_node: String | StringName | string, _from_port: number, _to_node: String | StringName | string, _to_port: number, _amount: number): void;
  public get_connection_list(): GDArray;
  public get_closest_connection_at_point(_point: Vector2, _max_distance: number): Dictionary;
  public get_connections_intersecting_with_rect(_rect: Rect2): GDArray;
  public clear_connections(): void;
  public force_connection_drag_end(): void;
  public get_scroll_offset(): Vector2;
  public set_scroll_offset(_offset: Vector2): void;
  public add_valid_right_disconnect_type(_type: number): void;
  public remove_valid_right_disconnect_type(_type: number): void;
  public add_valid_left_disconnect_type(_type: number): void;
  public remove_valid_left_disconnect_type(_type: number): void;
  public add_valid_connection_type(_from_type: number, _to_type: number): void;
  public remove_valid_connection_type(_from_type: number, _to_type: number): void;
  public is_valid_connection_type(_from_type: number, _to_type: number): boolean;
  public get_connection_line(_from_node: Vector2, _to_node: Vector2): PackedVector2Array;
  public attach_graph_element_to_frame(_element: String | StringName | string, _frame: String | StringName | string): void;
  public detach_graph_element_from_frame(_element: String | StringName | string): void;
  public get_element_frame(_element: String | StringName | string): GraphFrame;
  public get_attached_nodes_of_frame(_frame: String | StringName | string): GDArray;
  public set_panning_scheme(_scheme: number): void;
  public get_panning_scheme(): number;
  public set_zoom(_zoom: number): void;
  public get_zoom(): number;
  public set_zoom_min(_zoom_min: number): void;
  public get_zoom_min(): number;
  public set_zoom_max(_zoom_max: number): void;
  public get_zoom_max(): number;
  public set_zoom_step(_zoom_step: number): void;
  public get_zoom_step(): number;
  public set_show_grid(_enable: boolean): void;
  public is_showing_grid(): boolean;
  public set_grid_pattern(_pattern: number): void;
  public get_grid_pattern(): number;
  public set_snapping_enabled(_enable: boolean): void;
  public is_snapping_enabled(): boolean;
  public set_snapping_distance(_pixels: number): void;
  public get_snapping_distance(): number;
  public set_connection_lines_curvature(_curvature: number): void;
  public get_connection_lines_curvature(): number;
  public set_connection_lines_thickness(_pixels: number): void;
  public get_connection_lines_thickness(): number;
  public set_connection_lines_antialiased(_pixels: boolean): void;
  public is_connection_lines_antialiased(): boolean;
  public set_minimap_size(_size: Vector2): void;
  public get_minimap_size(): Vector2;
  public set_minimap_opacity(_opacity: number): void;
  public get_minimap_opacity(): number;
  public set_minimap_enabled(_enable: boolean): void;
  public is_minimap_enabled(): boolean;
  public set_show_menu(_hidden: boolean): void;
  public is_showing_menu(): boolean;
  public set_show_zoom_label(_enable: boolean): void;
  public is_showing_zoom_label(): boolean;
  public set_show_grid_buttons(_hidden: boolean): void;
  public is_showing_grid_buttons(): boolean;
  public set_show_zoom_buttons(_hidden: boolean): void;
  public is_showing_zoom_buttons(): boolean;
  public set_show_minimap_button(_hidden: boolean): void;
  public is_showing_minimap_button(): boolean;
  public set_show_arrange_button(_hidden: boolean): void;
  public is_showing_arrange_button(): boolean;
  public set_right_disconnects(_enable: boolean): void;
  public is_right_disconnects_enabled(): boolean;
  public get_menu_hbox(): HBoxContainer;
  public arrange_nodes(): void;
  public set_selected(_node: Node): void;
  public get scroll_offset(): Vector2 {
    get_scroll_offset();
  }
  public set scroll_offset(value): void {
    set_scroll_offset(value);
  }
  public get show_grid(): boolean {
    is_showing_grid();
  }
  public set show_grid(value): void {
    set_show_grid(value);
  }
  public get grid_pattern(): number {
    get_grid_pattern();
  }
  public set grid_pattern(value): void {
    set_grid_pattern(value);
  }
  public get snapping_enabled(): boolean {
    is_snapping_enabled();
  }
  public set snapping_enabled(value): void {
    set_snapping_enabled(value);
  }
  public get snapping_distance(): number {
    get_snapping_distance();
  }
  public set snapping_distance(value): void {
    set_snapping_distance(value);
  }
  public get panning_scheme(): number {
    get_panning_scheme();
  }
  public set panning_scheme(value): void {
    set_panning_scheme(value);
  }
  public get right_disconnects(): boolean {
    is_right_disconnects_enabled();
  }
  public set right_disconnects(value): void {
    set_right_disconnects(value);
  }
  public get connection_lines_curvature(): number {
    get_connection_lines_curvature();
  }
  public set connection_lines_curvature(value): void {
    set_connection_lines_curvature(value);
  }
  public get connection_lines_thickness(): number {
    get_connection_lines_thickness();
  }
  public set connection_lines_thickness(value): void {
    set_connection_lines_thickness(value);
  }
  public get connection_lines_antialiased(): boolean {
    is_connection_lines_antialiased();
  }
  public set connection_lines_antialiased(value): void {
    set_connection_lines_antialiased(value);
  }
  public get zoom(): number {
    get_zoom();
  }
  public set zoom(value): void {
    set_zoom(value);
  }
  public get zoom_min(): number {
    get_zoom_min();
  }
  public set zoom_min(value): void {
    set_zoom_min(value);
  }
  public get zoom_max(): number {
    get_zoom_max();
  }
  public set zoom_max(value): void {
    set_zoom_max(value);
  }
  public get zoom_step(): number {
    get_zoom_step();
  }
  public set zoom_step(value): void {
    set_zoom_step(value);
  }
  public get minimap_enabled(): boolean {
    is_minimap_enabled();
  }
  public set minimap_enabled(value): void {
    set_minimap_enabled(value);
  }
  public get minimap_size(): Vector2 {
    get_minimap_size();
  }
  public set minimap_size(value): void {
    set_minimap_size(value);
  }
  public get minimap_opacity(): number {
    get_minimap_opacity();
  }
  public set minimap_opacity(value): void {
    set_minimap_opacity(value);
  }
  public get show_menu(): boolean {
    is_showing_menu();
  }
  public set show_menu(value): void {
    set_show_menu(value);
  }
  public get show_zoom_label(): boolean {
    is_showing_zoom_label();
  }
  public set show_zoom_label(value): void {
    set_show_zoom_label(value);
  }
  public get show_zoom_buttons(): boolean {
    is_showing_zoom_buttons();
  }
  public set show_zoom_buttons(value): void {
    set_show_zoom_buttons(value);
  }
  public get show_grid_buttons(): boolean {
    is_showing_grid_buttons();
  }
  public set show_grid_buttons(value): void {
    set_show_grid_buttons(value);
  }
  public get show_minimap_button(): boolean {
    is_showing_minimap_button();
  }
  public set show_minimap_button(value): void {
    set_show_minimap_button(value);
  }
  public get show_arrange_button(): boolean {
    is_showing_arrange_button();
  }
  public set show_arrange_button(value): void {
    set_show_arrange_button(value);
  }
  static PanningScheme = {
    SCROLL_ZOOMS = 0,
    SCROLL_PANS = 1,
  }
  static GridPattern = {
    GRID_PATTERN_LINES = 0,
    GRID_PATTERN_DOTS = 1,
  }
  public get connection_request(): Signal;
  public get disconnection_request(): Signal;
  public get connection_to_empty(): Signal;
  public get connection_from_empty(): Signal;
  public get connection_drag_started(): Signal;
  public get connection_drag_ended(): Signal;
  public get copy_nodes_request(): Signal;
  public get paste_nodes_request(): Signal;
  public get duplicate_nodes_request(): Signal;
  public get delete_nodes_request(): Signal;
  public get node_selected(): Signal;
  public get node_deselected(): Signal;
  public get frame_rect_changed(): Signal;
  public get popup_request(): Signal;
  public get begin_node_move(): Signal;
  public get end_node_move(): Signal;
  public get graph_elements_linked_to_frame_request(): Signal;
  public get scroll_offset_changed(): Signal;
}