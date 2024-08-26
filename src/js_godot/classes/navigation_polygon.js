import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { Rect2 } from 'src/js_godot/variant/rect2'
import { StringName } from 'src/js_godot/variant/string_name'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { Resource } from 'src/js_godot/classesresource'
class _MethodBindings {
    method_set_vertices;
    method_get_vertices;
    method_add_polygon;
    method_get_polygon_count;
    method_get_polygon;
    method_clear_polygons;
    method_get_navigation_mesh;
    method_add_outline;
    method_add_outline_at_index;
    method_get_outline_count;
    method_set_outline;
    method_get_outline;
    method_remove_outline;
    method_clear_outlines;
    method_make_polygons_from_outlines;
    method_set_cell_size;
    method_get_cell_size;
    method_set_border_size;
    method_get_border_size;
    method_set_parsed_geometry_type;
    method_get_parsed_geometry_type;
    method_set_parsed_collision_mask;
    method_get_parsed_collision_mask;
    method_set_parsed_collision_mask_value;
    method_get_parsed_collision_mask_value;
    method_set_source_geometry_mode;
    method_get_source_geometry_mode;
    method_set_source_geometry_group_name;
    method_get_source_geometry_group_name;
    method_set_agent_radius;
    method_get_agent_radius;
    method_set_baking_rect;
    method_get_baking_rect;
    method_set_baking_rect_offset;
    method_get_baking_rect_offset;
    method_clear;
}


export class NavigationPolygon extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationPolygon");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_vertices");
      this._bindings.method_set_vertices = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_vertices");
      this._bindings.method_get_vertices = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2961356807
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("add_polygon");
      this._bindings.method_add_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3614634198
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_polygon_count");
      this._bindings.method_get_polygon_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_polygon");
      this._bindings.method_get_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3668444399
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("clear_polygons");
      this._bindings.method_clear_polygons = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_navigation_mesh");
      this._bindings.method_get_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        330232164
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("add_outline");
      this._bindings.method_add_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("add_outline_at_index");
      this._bindings.method_add_outline_at_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1569738947
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_outline_count");
      this._bindings.method_get_outline_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_outline");
      this._bindings.method_set_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1201971903
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_outline");
      this._bindings.method_get_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3946907486
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("remove_outline");
      this._bindings.method_remove_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("clear_outlines");
      this._bindings.method_clear_outlines = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("make_polygons_from_outlines");
      this._bindings.method_make_polygons_from_outlines = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_cell_size");
      this._bindings.method_set_cell_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_cell_size");
      this._bindings.method_get_cell_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_border_size");
      this._bindings.method_set_border_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_border_size");
      this._bindings.method_get_border_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_parsed_geometry_type");
      this._bindings.method_set_parsed_geometry_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2507971764
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_parsed_geometry_type");
      this._bindings.method_get_parsed_geometry_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1073219508
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_parsed_collision_mask");
      this._bindings.method_set_parsed_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_parsed_collision_mask");
      this._bindings.method_get_parsed_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_parsed_collision_mask_value");
      this._bindings.method_set_parsed_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_parsed_collision_mask_value");
      this._bindings.method_get_parsed_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_source_geometry_mode");
      this._bindings.method_set_source_geometry_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4002316705
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_source_geometry_mode");
      this._bindings.method_get_source_geometry_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        459686762
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_source_geometry_group_name");
      this._bindings.method_set_source_geometry_group_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_source_geometry_group_name");
      this._bindings.method_get_source_geometry_group_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_agent_radius");
      this._bindings.method_set_agent_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_agent_radius");
      this._bindings.method_get_agent_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_baking_rect");
      this._bindings.method_set_baking_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2046264180
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_baking_rect");
      this._bindings.method_get_baking_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1639390495
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_baking_rect_offset");
      this._bindings.method_set_baking_rect_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_baking_rect_offset");
      this._bindings.method_get_baking_rect_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  set_vertices(_vertices) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertices,
      this._owner,
      _vertices
    );
  }
  get_vertices() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertices,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      
    );
  }
  add_polygon(_polygon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_polygon,
      this._owner,
      _polygon
    );
  }
  get_polygon_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_polygon_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_polygon(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_polygon,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _idx
    );
  }
  clear_polygons() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_polygons,
      this._owner,
      
    );
  }
  get_navigation_mesh() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_navigation_mesh,
      this._owner,
			Variant.INT,
      
    );
  }
  add_outline(_outline) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_outline,
      this._owner,
      _outline
    );
  }
  add_outline_at_index(_outline, _index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_outline_at_index,
      this._owner,
      _outline, _index
    );
  }
  get_outline_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_outline_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_outline(_idx, _outline) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_outline,
      this._owner,
      _idx, _outline
    );
  }
  get_outline(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_outline,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      _idx
    );
  }
  remove_outline(_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_outline,
      this._owner,
      _idx
    );
  }
  clear_outlines() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_outlines,
      this._owner,
      
    );
  }
  make_polygons_from_outlines() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_make_polygons_from_outlines,
      this._owner,
      
    );
  }
  set_cell_size(_cell_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cell_size,
      this._owner,
      _cell_size
    );
  }
  get_cell_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_border_size(_border_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_border_size,
      this._owner,
      _border_size
    );
  }
  get_border_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_border_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_parsed_geometry_type(_geometry_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_parsed_geometry_type,
      this._owner,
      _geometry_type
    );
  }
  get_parsed_geometry_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_parsed_geometry_type,
      this._owner,
			Variant.INT,
      
    );
  }
  set_parsed_collision_mask(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_parsed_collision_mask,
      this._owner,
      _mask
    );
  }
  get_parsed_collision_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_parsed_collision_mask,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_parsed_collision_mask_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_parsed_collision_mask_value,
      this._owner,
      _layer_number, _value
    );
  }
  get_parsed_collision_mask_value(_layer_number) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_parsed_collision_mask_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
  }
  set_source_geometry_mode(_geometry_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_source_geometry_mode,
      this._owner,
      _geometry_mode
    );
  }
  get_source_geometry_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_source_geometry_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_source_geometry_group_name(_group_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_source_geometry_group_name,
      this._owner,
      _group_name
    );
  }
  get_source_geometry_group_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_source_geometry_group_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
  }
  set_agent_radius(_agent_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_agent_radius,
      this._owner,
      _agent_radius
    );
  }
  get_agent_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_agent_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_baking_rect(_rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_baking_rect,
      this._owner,
      _rect
    );
  }
  get_baking_rect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_baking_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      
    );
  }
  set_baking_rect_offset(_rect_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_baking_rect_offset,
      this._owner,
      _rect_offset
    );
  }
  get_baking_rect_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_baking_rect_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
  }
  static ParsedGeometryType = {
    PARSED_GEOMETRY_MESH_INSTANCES: 0,
    PARSED_GEOMETRY_STATIC_COLLIDERS: 1,
    PARSED_GEOMETRY_BOTH: 2,
    PARSED_GEOMETRY_MAX: 3,
  }
  static SourceGeometryMode = {
    SOURCE_GEOMETRY_ROOT_NODE_CHILDREN: 0,
    SOURCE_GEOMETRY_GROUPS_WITH_CHILDREN: 1,
    SOURCE_GEOMETRY_GROUPS_EXPLICIT: 2,
    SOURCE_GEOMETRY_MAX: 3,
  }
}