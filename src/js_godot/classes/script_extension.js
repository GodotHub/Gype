import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { Script } from 'src/js_godot/classes/script'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { Variant } from 'src/js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class ScriptExtension extends Script{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ScriptExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
  _editor_can_reload_from_file() {
  }
  _placeholder_erased(_placeholder) {
  }
  _can_instantiate() {
  }
  _get_base_script() {
  }
  _get_global_name() {
  }
  _inherits_script(_script) {
  }
  _get_instance_base_type() {
  }
  _instance_create(_for_object) {
  }
  _placeholder_instance_create(_for_object) {
  }
  _instance_has(_object) {
  }
  _has_source_code() {
  }
  _get_source_code() {
  }
  _set_source_code(_code) {
  }
  _reload(_keep_state) {
  }
  _get_documentation() {
  }
  _get_class_icon_path() {
  }
  _has_method(_method) {
  }
  _has_static_method(_method) {
  }
  _get_script_method_argument_count(_method) {
  }
  _get_method_info(_method) {
  }
  _is_tool() {
  }
  _is_valid() {
  }
  _is_abstract() {
  }
  _get_language() {
  }
  _has_script_signal(_signal) {
  }
  _get_script_signal_list() {
  }
  _has_property_default_value(_property) {
  }
  _get_property_default_value(_property) {
  }
  _update_exports() {
  }
  _get_script_method_list() {
  }
  _get_script_property_list() {
  }
  _get_member_line(_member) {
  }
  _get_constants() {
  }
  _get_members() {
  }
  _is_placeholder_fallback_enabled() {
  }
  _get_rpc_config() {
  }
}