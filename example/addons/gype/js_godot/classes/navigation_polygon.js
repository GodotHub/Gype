import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationPolygon");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_vertices() {
    if (!this.#_bindings.method_set_vertices) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_vertices");
      this.#_bindings.method_set_vertices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1509147220
      );
    }
  }
  static init_method_get_vertices() {
    if (!this.#_bindings.method_get_vertices) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_vertices");
      this.#_bindings.method_get_vertices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2961356807
      );
    }
  }
  static init_method_add_polygon() {
    if (!this.#_bindings.method_add_polygon) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("add_polygon");
      this.#_bindings.method_add_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3614634198
      );
    }
  }
  static init_method_get_polygon_count() {
    if (!this.#_bindings.method_get_polygon_count) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_polygon_count");
      this.#_bindings.method_get_polygon_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_polygon() {
    if (!this.#_bindings.method_get_polygon) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_polygon");
      this.#_bindings.method_get_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3668444399
      );
    }
  }
  static init_method_clear_polygons() {
    if (!this.#_bindings.method_clear_polygons) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("clear_polygons");
      this.#_bindings.method_clear_polygons = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_navigation_mesh() {
    if (!this.#_bindings.method_get_navigation_mesh) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_navigation_mesh");
      this.#_bindings.method_get_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        330232164
      );
    }
  }
  static init_method_add_outline() {
    if (!this.#_bindings.method_add_outline) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("add_outline");
      this.#_bindings.method_add_outline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1509147220
      );
    }
  }
  static init_method_add_outline_at_index() {
    if (!this.#_bindings.method_add_outline_at_index) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("add_outline_at_index");
      this.#_bindings.method_add_outline_at_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1569738947
      );
    }
  }
  static init_method_get_outline_count() {
    if (!this.#_bindings.method_get_outline_count) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_outline_count");
      this.#_bindings.method_get_outline_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_outline() {
    if (!this.#_bindings.method_set_outline) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_outline");
      this.#_bindings.method_set_outline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1201971903
      );
    }
  }
  static init_method_get_outline() {
    if (!this.#_bindings.method_get_outline) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_outline");
      this.#_bindings.method_get_outline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3946907486
      );
    }
  }
  static init_method_remove_outline() {
    if (!this.#_bindings.method_remove_outline) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("remove_outline");
      this.#_bindings.method_remove_outline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_clear_outlines() {
    if (!this.#_bindings.method_clear_outlines) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("clear_outlines");
      this.#_bindings.method_clear_outlines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_make_polygons_from_outlines() {
    if (!this.#_bindings.method_make_polygons_from_outlines) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("make_polygons_from_outlines");
      this.#_bindings.method_make_polygons_from_outlines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_cell_size() {
    if (!this.#_bindings.method_set_cell_size) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_cell_size");
      this.#_bindings.method_set_cell_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_cell_size() {
    if (!this.#_bindings.method_get_cell_size) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_cell_size");
      this.#_bindings.method_get_cell_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_border_size() {
    if (!this.#_bindings.method_set_border_size) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_border_size");
      this.#_bindings.method_set_border_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_border_size() {
    if (!this.#_bindings.method_get_border_size) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_border_size");
      this.#_bindings.method_get_border_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_parsed_geometry_type() {
    if (!this.#_bindings.method_set_parsed_geometry_type) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_parsed_geometry_type");
      this.#_bindings.method_set_parsed_geometry_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2507971764
      );
    }
  }
  static init_method_get_parsed_geometry_type() {
    if (!this.#_bindings.method_get_parsed_geometry_type) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_parsed_geometry_type");
      this.#_bindings.method_get_parsed_geometry_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1073219508
      );
    }
  }
  static init_method_set_parsed_collision_mask() {
    if (!this.#_bindings.method_set_parsed_collision_mask) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_parsed_collision_mask");
      this.#_bindings.method_set_parsed_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_parsed_collision_mask() {
    if (!this.#_bindings.method_get_parsed_collision_mask) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_parsed_collision_mask");
      this.#_bindings.method_get_parsed_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_parsed_collision_mask_value() {
    if (!this.#_bindings.method_set_parsed_collision_mask_value) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_parsed_collision_mask_value");
      this.#_bindings.method_set_parsed_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_parsed_collision_mask_value() {
    if (!this.#_bindings.method_get_parsed_collision_mask_value) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_parsed_collision_mask_value");
      this.#_bindings.method_get_parsed_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_source_geometry_mode() {
    if (!this.#_bindings.method_set_source_geometry_mode) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_source_geometry_mode");
      this.#_bindings.method_set_source_geometry_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4002316705
      );
    }
  }
  static init_method_get_source_geometry_mode() {
    if (!this.#_bindings.method_get_source_geometry_mode) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_source_geometry_mode");
      this.#_bindings.method_get_source_geometry_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        459686762
      );
    }
  }
  static init_method_set_source_geometry_group_name() {
    if (!this.#_bindings.method_set_source_geometry_group_name) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_source_geometry_group_name");
      this.#_bindings.method_set_source_geometry_group_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_source_geometry_group_name() {
    if (!this.#_bindings.method_get_source_geometry_group_name) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_source_geometry_group_name");
      this.#_bindings.method_get_source_geometry_group_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_set_agent_radius() {
    if (!this.#_bindings.method_set_agent_radius) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_agent_radius");
      this.#_bindings.method_set_agent_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_agent_radius() {
    if (!this.#_bindings.method_get_agent_radius) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_agent_radius");
      this.#_bindings.method_get_agent_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_baking_rect() {
    if (!this.#_bindings.method_set_baking_rect) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_baking_rect");
      this.#_bindings.method_set_baking_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2046264180
      );
    }
  }
  static init_method_get_baking_rect() {
    if (!this.#_bindings.method_get_baking_rect) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_baking_rect");
      this.#_bindings.method_get_baking_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639390495
      );
    }
  }
  static init_method_set_baking_rect_offset() {
    if (!this.#_bindings.method_set_baking_rect_offset) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("set_baking_rect_offset");
      this.#_bindings.method_set_baking_rect_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_baking_rect_offset() {
    if (!this.#_bindings.method_get_baking_rect_offset) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("get_baking_rect_offset");
      this.#_bindings.method_get_baking_rect_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_clear() {
    if (!this.#_bindings.method_clear) {
      let classname = new StringName("NavigationPolygon");
      let methodname = new StringName("clear");
      this.#_bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  set_vertices(_vertices) {
    NavigationPolygon.init_method_set_vertices();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_set_vertices,
      this._owner,
      _vertices
    );
    
  }
  get_vertices() {
    NavigationPolygon.init_method_get_vertices();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_vertices,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      
    );
    
  }
  add_polygon(_polygon) {
    NavigationPolygon.init_method_add_polygon();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_add_polygon,
      this._owner,
      _polygon
    );
    
  }
  get_polygon_count() {
    NavigationPolygon.init_method_get_polygon_count();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_polygon_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_polygon(_idx) {
    NavigationPolygon.init_method_get_polygon();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_polygon,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _idx
    );
    
  }
  clear_polygons() {
    NavigationPolygon.init_method_clear_polygons();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_clear_polygons,
      this._owner,
      
    );
    
  }
  get_navigation_mesh() {
    NavigationPolygon.init_method_get_navigation_mesh();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_navigation_mesh,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  add_outline(_outline) {
    NavigationPolygon.init_method_add_outline();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_add_outline,
      this._owner,
      _outline
    );
    
  }
  add_outline_at_index(_outline, _index) {
    NavigationPolygon.init_method_add_outline_at_index();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_add_outline_at_index,
      this._owner,
      _outline, _index
    );
    
  }
  get_outline_count() {
    NavigationPolygon.init_method_get_outline_count();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_outline_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_outline(_idx, _outline) {
    NavigationPolygon.init_method_set_outline();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_set_outline,
      this._owner,
      _idx, _outline
    );
    
  }
  get_outline(_idx) {
    NavigationPolygon.init_method_get_outline();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_outline,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _idx
    );
    
  }
  remove_outline(_idx) {
    NavigationPolygon.init_method_remove_outline();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_remove_outline,
      this._owner,
      _idx
    );
    
  }
  clear_outlines() {
    NavigationPolygon.init_method_clear_outlines();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_clear_outlines,
      this._owner,
      
    );
    
  }
  make_polygons_from_outlines() {
    NavigationPolygon.init_method_make_polygons_from_outlines();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_make_polygons_from_outlines,
      this._owner,
      
    );
    
  }
  set_cell_size(_cell_size) {
    NavigationPolygon.init_method_set_cell_size();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_set_cell_size,
      this._owner,
      _cell_size
    );
    
  }
  get_cell_size() {
    NavigationPolygon.init_method_get_cell_size();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_cell_size,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_border_size(_border_size) {
    NavigationPolygon.init_method_set_border_size();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_set_border_size,
      this._owner,
      _border_size
    );
    
  }
  get_border_size() {
    NavigationPolygon.init_method_get_border_size();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_border_size,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_parsed_geometry_type(_geometry_type) {
    NavigationPolygon.init_method_set_parsed_geometry_type();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_set_parsed_geometry_type,
      this._owner,
      _geometry_type
    );
    
  }
  get_parsed_geometry_type() {
    NavigationPolygon.init_method_get_parsed_geometry_type();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_parsed_geometry_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_parsed_collision_mask(_mask) {
    NavigationPolygon.init_method_set_parsed_collision_mask();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_set_parsed_collision_mask,
      this._owner,
      _mask
    );
    
  }
  get_parsed_collision_mask() {
    NavigationPolygon.init_method_get_parsed_collision_mask();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_parsed_collision_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_parsed_collision_mask_value(_layer_number, _value) {
    NavigationPolygon.init_method_set_parsed_collision_mask_value();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_set_parsed_collision_mask_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_parsed_collision_mask_value(_layer_number) {
    NavigationPolygon.init_method_get_parsed_collision_mask_value();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_parsed_collision_mask_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  set_source_geometry_mode(_geometry_mode) {
    NavigationPolygon.init_method_set_source_geometry_mode();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_set_source_geometry_mode,
      this._owner,
      _geometry_mode
    );
    
  }
  get_source_geometry_mode() {
    NavigationPolygon.init_method_get_source_geometry_mode();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_source_geometry_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_source_geometry_group_name(_group_name) {
    NavigationPolygon.init_method_set_source_geometry_group_name();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_set_source_geometry_group_name,
      this._owner,
      _group_name
    );
    
  }
  get_source_geometry_group_name() {
    NavigationPolygon.init_method_get_source_geometry_group_name();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_source_geometry_group_name,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_agent_radius(_agent_radius) {
    NavigationPolygon.init_method_set_agent_radius();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_set_agent_radius,
      this._owner,
      _agent_radius
    );
    
  }
  get_agent_radius() {
    NavigationPolygon.init_method_get_agent_radius();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_agent_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_baking_rect(_rect) {
    NavigationPolygon.init_method_set_baking_rect();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_set_baking_rect,
      this._owner,
      _rect
    );
    
  }
  get_baking_rect() {
    NavigationPolygon.init_method_get_baking_rect();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_baking_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  set_baking_rect_offset(_rect_offset) {
    NavigationPolygon.init_method_set_baking_rect_offset();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_set_baking_rect_offset,
      this._owner,
      _rect_offset
    );
    
  }
  get_baking_rect_offset() {
    NavigationPolygon.init_method_get_baking_rect_offset();
    return _call_native_mb_ret(
      NavigationPolygon.#_bindings.method_get_baking_rect_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  clear() {
    NavigationPolygon.init_method_clear();
    return _call_native_mb_no_ret(
      NavigationPolygon.#_bindings.method_clear,
      this._owner,
      
    );
    
  }
  
get vertices () {
  return this.get_vertices();
}
set vertices (new_value) {
  this.set_vertices(new_value);
}
get polygons () {
  return this._get_polygons();
}
set polygons (new_value) {
  this._set_polygons(new_value);
}
get outlines () {
  return this._get_outlines();
}
set outlines (new_value) {
  this._set_outlines(new_value);
}
get parsed_geometry_type () {
  return this.get_parsed_geometry_type();
}
set parsed_geometry_type (new_value) {
  this.set_parsed_geometry_type(new_value);
}
get parsed_collision_mask () {
  return this.get_parsed_collision_mask();
}
set parsed_collision_mask (new_value) {
  this.set_parsed_collision_mask(new_value);
}
get source_geometry_mode () {
  return this.get_source_geometry_mode();
}
set source_geometry_mode (new_value) {
  this.set_source_geometry_mode(new_value);
}
get source_geometry_group_name () {
  return this.get_source_geometry_group_name();
}
set source_geometry_group_name (new_value) {
  this.set_source_geometry_group_name(new_value);
}
get cell_size () {
  return this.get_cell_size();
}
set cell_size (new_value) {
  this.set_cell_size(new_value);
}
get border_size () {
  return this.get_border_size();
}
set border_size (new_value) {
  this.set_border_size(new_value);
}
get agent_radius () {
  return this.get_agent_radius();
}
set agent_radius (new_value) {
  this.set_agent_radius(new_value);
}
get baking_rect () {
  return this.get_baking_rect();
}
set baking_rect (new_value) {
  this.set_baking_rect(new_value);
}
get baking_rect_offset () {
  return this.get_baking_rect_offset();
}
set baking_rect_offset (new_value) {
  this.set_baking_rect_offset(new_value);
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