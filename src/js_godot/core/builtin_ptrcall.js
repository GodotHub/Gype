export function _call_builtin_constructor (_constructor, base, args = []) {
  _constructor(base, args)
}

export function _call_builtin_method_ptr_ret (
  method,
  base,
  ret_type,
  args = []
) {
  return method(base, args, ret_type, args.length)
}
