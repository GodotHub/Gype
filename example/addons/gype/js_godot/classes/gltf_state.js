import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_add_used_extension;
  method_append_data_to_buffers;
  method_get_json;
  method_set_json;
  method_get_major_version;
  method_set_major_version;
  method_get_minor_version;
  method_set_minor_version;
  method_get_copyright;
  method_set_copyright;
  method_get_glb_data;
  method_set_glb_data;
  method_get_use_named_skin_binds;
  method_set_use_named_skin_binds;
  method_get_nodes;
  method_set_nodes;
  method_get_buffers;
  method_set_buffers;
  method_get_buffer_views;
  method_set_buffer_views;
  method_get_accessors;
  method_set_accessors;
  method_get_meshes;
  method_set_meshes;
  method_get_animation_players_count;
  method_get_animation_player;
  method_get_materials;
  method_set_materials;
  method_get_scene_name;
  method_set_scene_name;
  method_get_base_path;
  method_set_base_path;
  method_get_filename;
  method_set_filename;
  method_get_root_nodes;
  method_set_root_nodes;
  method_get_textures;
  method_set_textures;
  method_get_texture_samplers;
  method_set_texture_samplers;
  method_get_images;
  method_set_images;
  method_get_skins;
  method_set_skins;
  method_get_cameras;
  method_set_cameras;
  method_get_lights;
  method_set_lights;
  method_get_unique_names;
  method_set_unique_names;
  method_get_unique_animation_names;
  method_set_unique_animation_names;
  method_get_skeletons;
  method_set_skeletons;
  method_get_create_animations;
  method_set_create_animations;
  method_get_import_as_skeleton_bones;
  method_set_import_as_skeleton_bones;
  method_get_animations;
  method_set_animations;
  method_get_scene_node;
  method_get_node_index;
  method_get_additional_data;
  method_set_additional_data;
  method_get_handle_binary_image;
  method_set_handle_binary_image;
  method_set_bake_fps;
  method_get_bake_fps;
}
@GodotClass
export class GLTFState extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFState");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_used_extension() {
    if (!this._bindings.method_add_used_extension) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("add_used_extension");
      this._bindings.method_add_used_extension = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2678287736
      );
    }
  }
  static init_method_append_data_to_buffers() {
    if (!this._bindings.method_append_data_to_buffers) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("append_data_to_buffers");
      this._bindings.method_append_data_to_buffers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1460416665
      );
    }
  }
  static init_method_get_json() {
    if (!this._bindings.method_get_json) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_json");
      this._bindings.method_get_json = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2382534195
      );
    }
  }
  static init_method_set_json() {
    if (!this._bindings.method_set_json) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_json");
      this._bindings.method_set_json = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155329257
      );
    }
  }
  static init_method_get_major_version() {
    if (!this._bindings.method_get_major_version) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_major_version");
      this._bindings.method_get_major_version = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_major_version() {
    if (!this._bindings.method_set_major_version) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_major_version");
      this._bindings.method_set_major_version = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_minor_version() {
    if (!this._bindings.method_get_minor_version) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_minor_version");
      this._bindings.method_get_minor_version = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_minor_version() {
    if (!this._bindings.method_set_minor_version) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_minor_version");
      this._bindings.method_set_minor_version = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_copyright() {
    if (!this._bindings.method_get_copyright) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_copyright");
      this._bindings.method_get_copyright = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_copyright() {
    if (!this._bindings.method_set_copyright) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_copyright");
      this._bindings.method_set_copyright = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_glb_data() {
    if (!this._bindings.method_get_glb_data) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_glb_data");
      this._bindings.method_get_glb_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2115431945
      );
    }
  }
  static init_method_set_glb_data() {
    if (!this._bindings.method_set_glb_data) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_glb_data");
      this._bindings.method_set_glb_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2971499966
      );
    }
  }
  static init_method_get_use_named_skin_binds() {
    if (!this._bindings.method_get_use_named_skin_binds) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_use_named_skin_binds");
      this._bindings.method_get_use_named_skin_binds = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_use_named_skin_binds() {
    if (!this._bindings.method_set_use_named_skin_binds) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_use_named_skin_binds");
      this._bindings.method_set_use_named_skin_binds = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_nodes() {
    if (!this._bindings.method_get_nodes) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_nodes");
      this._bindings.method_get_nodes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_nodes() {
    if (!this._bindings.method_set_nodes) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_nodes");
      this._bindings.method_set_nodes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_buffers() {
    if (!this._bindings.method_get_buffers) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_buffers");
      this._bindings.method_get_buffers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_buffers() {
    if (!this._bindings.method_set_buffers) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_buffers");
      this._bindings.method_set_buffers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_buffer_views() {
    if (!this._bindings.method_get_buffer_views) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_buffer_views");
      this._bindings.method_get_buffer_views = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_buffer_views() {
    if (!this._bindings.method_set_buffer_views) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_buffer_views");
      this._bindings.method_set_buffer_views = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_accessors() {
    if (!this._bindings.method_get_accessors) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_accessors");
      this._bindings.method_get_accessors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_accessors() {
    if (!this._bindings.method_set_accessors) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_accessors");
      this._bindings.method_set_accessors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_meshes() {
    if (!this._bindings.method_get_meshes) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_meshes");
      this._bindings.method_get_meshes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_meshes() {
    if (!this._bindings.method_set_meshes) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_meshes");
      this._bindings.method_set_meshes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_animation_players_count() {
    if (!this._bindings.method_get_animation_players_count) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_animation_players_count");
      this._bindings.method_get_animation_players_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3744713108
      );
    }
  }
  static init_method_get_animation_player() {
    if (!this._bindings.method_get_animation_player) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_animation_player");
      this._bindings.method_get_animation_player = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        925043400
      );
    }
  }
  static init_method_get_materials() {
    if (!this._bindings.method_get_materials) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_materials");
      this._bindings.method_get_materials = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_materials() {
    if (!this._bindings.method_set_materials) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_materials");
      this._bindings.method_set_materials = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_scene_name() {
    if (!this._bindings.method_get_scene_name) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_scene_name");
      this._bindings.method_get_scene_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841200299
      );
    }
  }
  static init_method_set_scene_name() {
    if (!this._bindings.method_set_scene_name) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_scene_name");
      this._bindings.method_set_scene_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_base_path() {
    if (!this._bindings.method_get_base_path) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_base_path");
      this._bindings.method_get_base_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841200299
      );
    }
  }
  static init_method_set_base_path() {
    if (!this._bindings.method_set_base_path) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_base_path");
      this._bindings.method_set_base_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_filename() {
    if (!this._bindings.method_get_filename) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_filename");
      this._bindings.method_get_filename = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_filename() {
    if (!this._bindings.method_set_filename) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_filename");
      this._bindings.method_set_filename = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_root_nodes() {
    if (!this._bindings.method_get_root_nodes) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_root_nodes");
      this._bindings.method_get_root_nodes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        969006518
      );
    }
  }
  static init_method_set_root_nodes() {
    if (!this._bindings.method_set_root_nodes) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_root_nodes");
      this._bindings.method_set_root_nodes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3614634198
      );
    }
  }
  static init_method_get_textures() {
    if (!this._bindings.method_get_textures) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_textures");
      this._bindings.method_get_textures = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_textures() {
    if (!this._bindings.method_set_textures) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_textures");
      this._bindings.method_set_textures = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_texture_samplers() {
    if (!this._bindings.method_get_texture_samplers) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_texture_samplers");
      this._bindings.method_get_texture_samplers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_texture_samplers() {
    if (!this._bindings.method_set_texture_samplers) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_texture_samplers");
      this._bindings.method_set_texture_samplers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_images() {
    if (!this._bindings.method_get_images) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_images");
      this._bindings.method_get_images = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_images() {
    if (!this._bindings.method_set_images) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_images");
      this._bindings.method_set_images = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_skins() {
    if (!this._bindings.method_get_skins) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_skins");
      this._bindings.method_get_skins = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_skins() {
    if (!this._bindings.method_set_skins) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_skins");
      this._bindings.method_set_skins = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_cameras() {
    if (!this._bindings.method_get_cameras) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_cameras");
      this._bindings.method_get_cameras = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_cameras() {
    if (!this._bindings.method_set_cameras) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_cameras");
      this._bindings.method_set_cameras = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_lights() {
    if (!this._bindings.method_get_lights) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_lights");
      this._bindings.method_get_lights = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_lights() {
    if (!this._bindings.method_set_lights) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_lights");
      this._bindings.method_set_lights = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_unique_names() {
    if (!this._bindings.method_get_unique_names) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_unique_names");
      this._bindings.method_get_unique_names = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_unique_names() {
    if (!this._bindings.method_set_unique_names) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_unique_names");
      this._bindings.method_set_unique_names = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_unique_animation_names() {
    if (!this._bindings.method_get_unique_animation_names) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_unique_animation_names");
      this._bindings.method_get_unique_animation_names = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_unique_animation_names() {
    if (!this._bindings.method_set_unique_animation_names) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_unique_animation_names");
      this._bindings.method_set_unique_animation_names = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_skeletons() {
    if (!this._bindings.method_get_skeletons) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_skeletons");
      this._bindings.method_get_skeletons = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_skeletons() {
    if (!this._bindings.method_set_skeletons) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_skeletons");
      this._bindings.method_set_skeletons = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_create_animations() {
    if (!this._bindings.method_get_create_animations) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_create_animations");
      this._bindings.method_get_create_animations = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_create_animations() {
    if (!this._bindings.method_set_create_animations) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_create_animations");
      this._bindings.method_set_create_animations = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_import_as_skeleton_bones() {
    if (!this._bindings.method_get_import_as_skeleton_bones) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_import_as_skeleton_bones");
      this._bindings.method_get_import_as_skeleton_bones = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_import_as_skeleton_bones() {
    if (!this._bindings.method_set_import_as_skeleton_bones) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_import_as_skeleton_bones");
      this._bindings.method_set_import_as_skeleton_bones = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_animations() {
    if (!this._bindings.method_get_animations) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_animations");
      this._bindings.method_get_animations = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_animations() {
    if (!this._bindings.method_set_animations) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_animations");
      this._bindings.method_set_animations = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_scene_node() {
    if (!this._bindings.method_get_scene_node) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_scene_node");
      this._bindings.method_get_scene_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4253421667
      );
    }
  }
  static init_method_get_node_index() {
    if (!this._bindings.method_get_node_index) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_node_index");
      this._bindings.method_get_node_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1205807060
      );
    }
  }
  static init_method_get_additional_data() {
    if (!this._bindings.method_get_additional_data) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_additional_data");
      this._bindings.method_get_additional_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2138907829
      );
    }
  }
  static init_method_set_additional_data() {
    if (!this._bindings.method_set_additional_data) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_additional_data");
      this._bindings.method_set_additional_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3776071444
      );
    }
  }
  static init_method_get_handle_binary_image() {
    if (!this._bindings.method_get_handle_binary_image) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_handle_binary_image");
      this._bindings.method_get_handle_binary_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_handle_binary_image() {
    if (!this._bindings.method_set_handle_binary_image) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_handle_binary_image");
      this._bindings.method_set_handle_binary_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_bake_fps() {
    if (!this._bindings.method_set_bake_fps) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("set_bake_fps");
      this._bindings.method_set_bake_fps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_bake_fps() {
    if (!this._bindings.method_get_bake_fps) {
      let classname = new StringName("GLTFState");
      let methodname = new StringName("get_bake_fps");
      this._bindings.method_get_bake_fps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  add_used_extension(_extension_name, _required) {
    GLTFState.init_method_add_used_extension();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_add_used_extension,
      this._owner,
      _extension_name, _required
    );
    
  }
  append_data_to_buffers(_data, _deduplication) {
    GLTFState.init_method_append_data_to_buffers();
    return _call_native_mb_ret(
      GLTFState._bindings.method_append_data_to_buffers,
      this._owner,
			Variant.Type.INT,
    
      _data, _deduplication
    );
    
  }
  get_json() {
    GLTFState.init_method_get_json();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_json,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  set_json(_json) {
    GLTFState.init_method_set_json();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_json,
      this._owner,
      _json
    );
    
  }
  get_major_version() {
    GLTFState.init_method_get_major_version();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_major_version,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_major_version(_major_version) {
    GLTFState.init_method_set_major_version();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_major_version,
      this._owner,
      _major_version
    );
    
  }
  get_minor_version() {
    GLTFState.init_method_get_minor_version();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_minor_version,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_minor_version(_minor_version) {
    GLTFState.init_method_set_minor_version();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_minor_version,
      this._owner,
      _minor_version
    );
    
  }
  get_copyright() {
    GLTFState.init_method_get_copyright();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_copyright,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_copyright(_copyright) {
    GLTFState.init_method_set_copyright();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_copyright,
      this._owner,
      _copyright
    );
    
  }
  get_glb_data() {
    GLTFState.init_method_get_glb_data();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_glb_data,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      
    );
    
  }
  set_glb_data(_glb_data) {
    GLTFState.init_method_set_glb_data();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_glb_data,
      this._owner,
      _glb_data
    );
    
  }
  get_use_named_skin_binds() {
    GLTFState.init_method_get_use_named_skin_binds();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_use_named_skin_binds,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_use_named_skin_binds(_use_named_skin_binds) {
    GLTFState.init_method_set_use_named_skin_binds();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_use_named_skin_binds,
      this._owner,
      _use_named_skin_binds
    );
    
  }
  get_nodes() {
    GLTFState.init_method_get_nodes();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_nodes,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_nodes(_nodes) {
    GLTFState.init_method_set_nodes();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_nodes,
      this._owner,
      _nodes
    );
    
  }
  get_buffers() {
    GLTFState.init_method_get_buffers();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_buffers,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_buffers(_buffers) {
    GLTFState.init_method_set_buffers();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_buffers,
      this._owner,
      _buffers
    );
    
  }
  get_buffer_views() {
    GLTFState.init_method_get_buffer_views();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_buffer_views,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_buffer_views(_buffer_views) {
    GLTFState.init_method_set_buffer_views();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_buffer_views,
      this._owner,
      _buffer_views
    );
    
  }
  get_accessors() {
    GLTFState.init_method_get_accessors();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_accessors,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_accessors(_accessors) {
    GLTFState.init_method_set_accessors();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_accessors,
      this._owner,
      _accessors
    );
    
  }
  get_meshes() {
    GLTFState.init_method_get_meshes();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_meshes,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_meshes(_meshes) {
    GLTFState.init_method_set_meshes();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_meshes,
      this._owner,
      _meshes
    );
    
  }
  get_animation_players_count(_idx) {
    GLTFState.init_method_get_animation_players_count();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_animation_players_count,
      this._owner,
			Variant.Type.INT,
    
      _idx
    );
    
  }
  get_animation_player(_idx) {
    GLTFState.init_method_get_animation_player();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_animation_player,
      this._owner,
			Variant.Type.OBJECT,
      _idx
    );
    
  }
  get_materials() {
    GLTFState.init_method_get_materials();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_materials,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_materials(_materials) {
    GLTFState.init_method_set_materials();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_materials,
      this._owner,
      _materials
    );
    
  }
  get_scene_name() {
    GLTFState.init_method_get_scene_name();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_scene_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_scene_name(_scene_name) {
    GLTFState.init_method_set_scene_name();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_scene_name,
      this._owner,
      _scene_name
    );
    
  }
  get_base_path() {
    GLTFState.init_method_get_base_path();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_base_path,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_base_path(_base_path) {
    GLTFState.init_method_set_base_path();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_base_path,
      this._owner,
      _base_path
    );
    
  }
  get_filename() {
    GLTFState.init_method_get_filename();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_filename,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_filename(_filename) {
    GLTFState.init_method_set_filename();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_filename,
      this._owner,
      _filename
    );
    
  }
  get_root_nodes() {
    GLTFState.init_method_get_root_nodes();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_root_nodes,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_root_nodes(_root_nodes) {
    GLTFState.init_method_set_root_nodes();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_root_nodes,
      this._owner,
      _root_nodes
    );
    
  }
  get_textures() {
    GLTFState.init_method_get_textures();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_textures,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_textures(_textures) {
    GLTFState.init_method_set_textures();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_textures,
      this._owner,
      _textures
    );
    
  }
  get_texture_samplers() {
    GLTFState.init_method_get_texture_samplers();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_texture_samplers,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_texture_samplers(_texture_samplers) {
    GLTFState.init_method_set_texture_samplers();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_texture_samplers,
      this._owner,
      _texture_samplers
    );
    
  }
  get_images() {
    GLTFState.init_method_get_images();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_images,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_images(_images) {
    GLTFState.init_method_set_images();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_images,
      this._owner,
      _images
    );
    
  }
  get_skins() {
    GLTFState.init_method_get_skins();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_skins,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_skins(_skins) {
    GLTFState.init_method_set_skins();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_skins,
      this._owner,
      _skins
    );
    
  }
  get_cameras() {
    GLTFState.init_method_get_cameras();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_cameras,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_cameras(_cameras) {
    GLTFState.init_method_set_cameras();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_cameras,
      this._owner,
      _cameras
    );
    
  }
  get_lights() {
    GLTFState.init_method_get_lights();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_lights,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_lights(_lights) {
    GLTFState.init_method_set_lights();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_lights,
      this._owner,
      _lights
    );
    
  }
  get_unique_names() {
    GLTFState.init_method_get_unique_names();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_unique_names,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_unique_names(_unique_names) {
    GLTFState.init_method_set_unique_names();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_unique_names,
      this._owner,
      _unique_names
    );
    
  }
  get_unique_animation_names() {
    GLTFState.init_method_get_unique_animation_names();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_unique_animation_names,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_unique_animation_names(_unique_animation_names) {
    GLTFState.init_method_set_unique_animation_names();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_unique_animation_names,
      this._owner,
      _unique_animation_names
    );
    
  }
  get_skeletons() {
    GLTFState.init_method_get_skeletons();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_skeletons,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_skeletons(_skeletons) {
    GLTFState.init_method_set_skeletons();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_skeletons,
      this._owner,
      _skeletons
    );
    
  }
  get_create_animations() {
    GLTFState.init_method_get_create_animations();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_create_animations,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_create_animations(_create_animations) {
    GLTFState.init_method_set_create_animations();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_create_animations,
      this._owner,
      _create_animations
    );
    
  }
  get_import_as_skeleton_bones() {
    GLTFState.init_method_get_import_as_skeleton_bones();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_import_as_skeleton_bones,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_import_as_skeleton_bones(_import_as_skeleton_bones) {
    GLTFState.init_method_set_import_as_skeleton_bones();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_import_as_skeleton_bones,
      this._owner,
      _import_as_skeleton_bones
    );
    
  }
  get_animations() {
    GLTFState.init_method_get_animations();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_animations,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_animations(_animations) {
    GLTFState.init_method_set_animations();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_animations,
      this._owner,
      _animations
    );
    
  }
  get_scene_node(_idx) {
    GLTFState.init_method_get_scene_node();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_scene_node,
      this._owner,
			Variant.Type.OBJECT,
      _idx
    );
    
  }
  get_node_index(_scene_node) {
    GLTFState.init_method_get_node_index();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_node_index,
      this._owner,
			Variant.Type.INT,
    
      _scene_node
    );
    
  }
  get_additional_data(_extension_name) {
    GLTFState.init_method_get_additional_data();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_additional_data,
      this._owner,
			Variant.Type.VARIANT,
    
      _extension_name
    );
    
  }
  set_additional_data(_extension_name, _additional_data) {
    GLTFState.init_method_set_additional_data();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_additional_data,
      this._owner,
      _extension_name, _additional_data
    );
    
  }
  get_handle_binary_image() {
    GLTFState.init_method_get_handle_binary_image();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_handle_binary_image,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_handle_binary_image(_method) {
    GLTFState.init_method_set_handle_binary_image();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_handle_binary_image,
      this._owner,
      _method
    );
    
  }
  set_bake_fps(_value) {
    GLTFState.init_method_set_bake_fps();
    return _call_native_mb_no_ret(
      GLTFState._bindings.method_set_bake_fps,
      this._owner,
      _value
    );
    
  }
  get_bake_fps() {
    GLTFState.init_method_get_bake_fps();
    return _call_native_mb_ret(
      GLTFState._bindings.method_get_bake_fps,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get json () {
  return this.get_json();
}
set json (new_value) {
  this.set_json(new_value);
}
get major_version () {
  return this.get_major_version();
}
set major_version (new_value) {
  this.set_major_version(new_value);
}
get minor_version () {
  return this.get_minor_version();
}
set minor_version (new_value) {
  this.set_minor_version(new_value);
}
get copyright () {
  return this.get_copyright();
}
set copyright (new_value) {
  this.set_copyright(new_value);
}
get glb_data () {
  return this.get_glb_data();
}
set glb_data (new_value) {
  this.set_glb_data(new_value);
}
get use_named_skin_binds () {
  return this.get_use_named_skin_binds();
}
set use_named_skin_binds (new_value) {
  this.set_use_named_skin_binds(new_value);
}
get nodes () {
  return this.get_nodes();
}
set nodes (new_value) {
  this.set_nodes(new_value);
}
get buffers () {
  return this.get_buffers();
}
set buffers (new_value) {
  this.set_buffers(new_value);
}
get buffer_views () {
  return this.get_buffer_views();
}
set buffer_views (new_value) {
  this.set_buffer_views(new_value);
}
get accessors () {
  return this.get_accessors();
}
set accessors (new_value) {
  this.set_accessors(new_value);
}
get meshes () {
  return this.get_meshes();
}
set meshes (new_value) {
  this.set_meshes(new_value);
}
get materials () {
  return this.get_materials();
}
set materials (new_value) {
  this.set_materials(new_value);
}
get scene_name () {
  return this.get_scene_name();
}
set scene_name (new_value) {
  this.set_scene_name(new_value);
}
get base_path () {
  return this.get_base_path();
}
set base_path (new_value) {
  this.set_base_path(new_value);
}
get filename () {
  return this.get_filename();
}
set filename (new_value) {
  this.set_filename(new_value);
}
get root_nodes () {
  return this.get_root_nodes();
}
set root_nodes (new_value) {
  this.set_root_nodes(new_value);
}
get textures () {
  return this.get_textures();
}
set textures (new_value) {
  this.set_textures(new_value);
}
get texture_samplers () {
  return this.get_texture_samplers();
}
set texture_samplers (new_value) {
  this.set_texture_samplers(new_value);
}
get images () {
  return this.get_images();
}
set images (new_value) {
  this.set_images(new_value);
}
get skins () {
  return this.get_skins();
}
set skins (new_value) {
  this.set_skins(new_value);
}
get cameras () {
  return this.get_cameras();
}
set cameras (new_value) {
  this.set_cameras(new_value);
}
get lights () {
  return this.get_lights();
}
set lights (new_value) {
  this.set_lights(new_value);
}
get unique_names () {
  return this.get_unique_names();
}
set unique_names (new_value) {
  this.set_unique_names(new_value);
}
get unique_animation_names () {
  return this.get_unique_animation_names();
}
set unique_animation_names (new_value) {
  this.set_unique_animation_names(new_value);
}
get skeletons () {
  return this.get_skeletons();
}
set skeletons (new_value) {
  this.set_skeletons(new_value);
}
get create_animations () {
  return this.get_create_animations();
}
set create_animations (new_value) {
  this.set_create_animations(new_value);
}
get import_as_skeleton_bones () {
  return this.get_import_as_skeleton_bones();
}
set import_as_skeleton_bones (new_value) {
  this.set_import_as_skeleton_bones(new_value);
}
get animations () {
  return this.get_animations();
}
set animations (new_value) {
  this.set_animations(new_value);
}
get handle_binary_image () {
  return this.get_handle_binary_image();
}
set handle_binary_image (new_value) {
  this.set_handle_binary_image(new_value);
}
get bake_fps () {
  return this.get_bake_fps();
}
set bake_fps (new_value) {
  this.set_bake_fps(new_value);
}

}