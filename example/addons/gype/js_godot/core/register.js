import { StringName } from "@js_godot/variant/string_name";

class MethodBind {
  name;
  instance_class;
  argument_count = 0;
  hint_flags = MethodFlags.METHOD_FLAGS_DEFAULT;
  _is_static = false;
  _is_const = false;
  _has_return = false;
  _vararg = false;

  argument_names = [];
  argument_types = [];
  default_arguments = [];

  gen_argument_type(p_arg) {}
  gen_argument_type_info(p_arg) {}
  generate_argument_types(p_count) {}
  set_const(p_const) {}
  set_return(p_return) {}
  set_static(p_static) {}
  set_vararg(p_vararg) {}
  set_argument_count(p_count) {}

  get_name() {}
  set_name(p_name) {}
  get_default_argument_count() {
    return this.default_arguments.length;
  }
  get_default_arguments() {
    return this.default_arguments;
  }
  has_default_argument(p_arg) {}
}
