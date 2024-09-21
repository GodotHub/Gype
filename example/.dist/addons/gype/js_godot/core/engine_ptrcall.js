import { convert_vars } from "@js_godot/core/convert";
import { Variant } from "@js_godot/variant/variant";
import { object_method_bind_ptrcall } from "__internal__";
import { opaque_type, get_type } from "@js_godot/core/type_helper";
export function call_utility_ret(method, ...args) {
    let ret = new Variant();
    method(ret.opaque, convert_vars(args), args.length);
    ret.opaque[opaque_type] = get_type(ret);
    return ret;
}
export function call_utility_no_ret(method, ...args) {
    let ret = new Variant();
    method(ret.opaque, convert_vars(args), args.length);
}
export function _call_native_mb_ret(mb, instance, type, ...args) {
    let opaque = object_method_bind_ptrcall(mb, instance, type, convert_vars(args));
    opaque[opaque_type] = type;
    let ret = new Variant(opaque);
    return ret;
}
export function _call_native_mb_no_ret(mb, instance, ...args) {
    object_method_bind_ptrcall(mb, instance, 0, convert_vars(args));
}
