var __classPrivateFieldGet = (this && this.__classPrivateFieldGet) || function (receiver, state, kind, f) {
    if (kind === "a" && !f) throw new TypeError("Private accessor was defined without a getter");
    if (typeof state === "function" ? receiver !== state || !f : !state.has(receiver)) throw new TypeError("Cannot read private member from an object whose class did not declare it");
    return kind === "m" ? f : kind === "a" ? f.call(receiver) : f ? f.value : state.get(receiver);
};
var _a, _Node2D__bindings, _Node2D_initialized;
import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant';
import { StringName } from '@js_godot/variant/string_name';
import { CanvasItem } from '@js_godot/classes/canvas_item';
import { call_utility_ret, call_utility_no_ret, _call_native_mb_ret, _call_native_mb_no_ret } from "@js_godot/core/engine_ptrcall";
class _MethodBindings {
}
export class Node2D extends CanvasItem {
    constructor(godot_object) {
        if (!godot_object) {
            super("Node2D");
        }
        else {
            super(godot_object);
        }
    }
    static init_method_set_position() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_position) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("set_position");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_position = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 743155724);
        }
    }
    static init_method_set_rotation() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_rotation) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("set_rotation");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_rotation = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 373806689);
        }
    }
    static init_method_set_rotation_degrees() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_rotation_degrees) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("set_rotation_degrees");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_rotation_degrees = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 373806689);
        }
    }
    static init_method_set_skew() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_skew) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("set_skew");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_skew = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 373806689);
        }
    }
    static init_method_set_scale() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_scale) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("set_scale");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_scale = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 743155724);
        }
    }
    static init_method_get_position() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_position) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("get_position");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_position = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3341600327);
        }
    }
    static init_method_get_rotation() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_rotation) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("get_rotation");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_rotation = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1740695150);
        }
    }
    static init_method_get_rotation_degrees() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_rotation_degrees) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("get_rotation_degrees");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_rotation_degrees = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1740695150);
        }
    }
    static init_method_get_skew() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_skew) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("get_skew");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_skew = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1740695150);
        }
    }
    static init_method_get_scale() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_scale) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("get_scale");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_scale = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3341600327);
        }
    }
    static init_method_rotate() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_rotate) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("rotate");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_rotate = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 373806689);
        }
    }
    static init_method_move_local_x() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_move_local_x) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("move_local_x");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_move_local_x = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2087892650);
        }
    }
    static init_method_move_local_y() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_move_local_y) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("move_local_y");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_move_local_y = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2087892650);
        }
    }
    static init_method_translate() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_translate) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("translate");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_translate = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 743155724);
        }
    }
    static init_method_global_translate() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_global_translate) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("global_translate");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_global_translate = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 743155724);
        }
    }
    static init_method_apply_scale() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_apply_scale) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("apply_scale");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_apply_scale = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 743155724);
        }
    }
    static init_method_set_global_position() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_global_position) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("set_global_position");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_global_position = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 743155724);
        }
    }
    static init_method_get_global_position() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_global_position) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("get_global_position");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_global_position = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3341600327);
        }
    }
    static init_method_set_global_rotation() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_global_rotation) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("set_global_rotation");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_global_rotation = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 373806689);
        }
    }
    static init_method_set_global_rotation_degrees() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_global_rotation_degrees) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("set_global_rotation_degrees");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_global_rotation_degrees = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 373806689);
        }
    }
    static init_method_get_global_rotation() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_global_rotation) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("get_global_rotation");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_global_rotation = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1740695150);
        }
    }
    static init_method_get_global_rotation_degrees() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_global_rotation_degrees) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("get_global_rotation_degrees");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_global_rotation_degrees = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1740695150);
        }
    }
    static init_method_set_global_skew() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_global_skew) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("set_global_skew");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_global_skew = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 373806689);
        }
    }
    static init_method_get_global_skew() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_global_skew) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("get_global_skew");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_global_skew = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1740695150);
        }
    }
    static init_method_set_global_scale() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_global_scale) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("set_global_scale");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_global_scale = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 743155724);
        }
    }
    static init_method_get_global_scale() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_global_scale) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("get_global_scale");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_global_scale = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3341600327);
        }
    }
    static init_method_set_transform() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_transform) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("set_transform");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_transform = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2761652528);
        }
    }
    static init_method_set_global_transform() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_global_transform) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("set_global_transform");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_set_global_transform = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2761652528);
        }
    }
    static init_method_look_at() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_look_at) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("look_at");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_look_at = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 743155724);
        }
    }
    static init_method_get_angle_to() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_angle_to) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("get_angle_to");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_angle_to = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2276447920);
        }
    }
    static init_method_to_local() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_to_local) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("to_local");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_to_local = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2656412154);
        }
    }
    static init_method_to_global() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_to_global) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("to_global");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_to_global = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2656412154);
        }
    }
    static init_method_get_relative_transform_to_parent() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_relative_transform_to_parent) {
            let classname = new StringName("Node2D");
            let methodname = new StringName("get_relative_transform_to_parent");
            __classPrivateFieldGet(this, _a, "f", _Node2D__bindings).method_get_relative_transform_to_parent = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 904556875);
        }
    }
    set_position(_position) {
        _a.init_method_set_position();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_set_position, this._owner, _position);
    }
    set_rotation(_radians) {
        _a.init_method_set_rotation();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_set_rotation, this._owner, _radians);
    }
    set_rotation_degrees(_degrees) {
        _a.init_method_set_rotation_degrees();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_set_rotation_degrees, this._owner, _degrees);
    }
    set_skew(_radians) {
        _a.init_method_set_skew();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_set_skew, this._owner, _radians);
    }
    set_scale(_scale) {
        _a.init_method_set_scale();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_set_scale, this._owner, _scale);
    }
    get_position() {
        _a.init_method_get_position();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_get_position, this._owner, Variant.Type.VECTOR2);
    }
    get_rotation() {
        _a.init_method_get_rotation();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_get_rotation, this._owner, Variant.Type.FLOAT);
    }
    get_rotation_degrees() {
        _a.init_method_get_rotation_degrees();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_get_rotation_degrees, this._owner, Variant.Type.FLOAT);
    }
    get_skew() {
        _a.init_method_get_skew();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_get_skew, this._owner, Variant.Type.FLOAT);
    }
    get_scale() {
        _a.init_method_get_scale();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_get_scale, this._owner, Variant.Type.VECTOR2);
    }
    rotate(_radians) {
        _a.init_method_rotate();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_rotate, this._owner, _radians);
    }
    move_local_x(_delta, _scaled) {
        _a.init_method_move_local_x();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_move_local_x, this._owner, _delta, _scaled);
    }
    move_local_y(_delta, _scaled) {
        _a.init_method_move_local_y();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_move_local_y, this._owner, _delta, _scaled);
    }
    translate(_offset) {
        _a.init_method_translate();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_translate, this._owner, _offset);
    }
    global_translate(_offset) {
        _a.init_method_global_translate();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_global_translate, this._owner, _offset);
    }
    apply_scale(_ratio) {
        _a.init_method_apply_scale();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_apply_scale, this._owner, _ratio);
    }
    set_global_position(_position) {
        _a.init_method_set_global_position();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_set_global_position, this._owner, _position);
    }
    get_global_position() {
        _a.init_method_get_global_position();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_get_global_position, this._owner, Variant.Type.VECTOR2);
    }
    set_global_rotation(_radians) {
        _a.init_method_set_global_rotation();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_set_global_rotation, this._owner, _radians);
    }
    set_global_rotation_degrees(_degrees) {
        _a.init_method_set_global_rotation_degrees();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_set_global_rotation_degrees, this._owner, _degrees);
    }
    get_global_rotation() {
        _a.init_method_get_global_rotation();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_get_global_rotation, this._owner, Variant.Type.FLOAT);
    }
    get_global_rotation_degrees() {
        _a.init_method_get_global_rotation_degrees();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_get_global_rotation_degrees, this._owner, Variant.Type.FLOAT);
    }
    set_global_skew(_radians) {
        _a.init_method_set_global_skew();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_set_global_skew, this._owner, _radians);
    }
    get_global_skew() {
        _a.init_method_get_global_skew();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_get_global_skew, this._owner, Variant.Type.FLOAT);
    }
    set_global_scale(_scale) {
        _a.init_method_set_global_scale();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_set_global_scale, this._owner, _scale);
    }
    get_global_scale() {
        _a.init_method_get_global_scale();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_get_global_scale, this._owner, Variant.Type.VECTOR2);
    }
    set_transform(_xform) {
        _a.init_method_set_transform();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_set_transform, this._owner, _xform);
    }
    set_global_transform(_xform) {
        _a.init_method_set_global_transform();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_set_global_transform, this._owner, _xform);
    }
    look_at(_point) {
        _a.init_method_look_at();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_look_at, this._owner, _point);
    }
    get_angle_to(_point) {
        _a.init_method_get_angle_to();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_get_angle_to, this._owner, Variant.Type.FLOAT, _point);
    }
    to_local(_global_point) {
        _a.init_method_to_local();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_to_local, this._owner, Variant.Type.VECTOR2, _global_point);
    }
    to_global(_local_point) {
        _a.init_method_to_global();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_to_global, this._owner, Variant.Type.VECTOR2, _local_point);
    }
    get_relative_transform_to_parent(_parent) {
        _a.init_method_get_relative_transform_to_parent();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node2D__bindings).method_get_relative_transform_to_parent, this._owner, Variant.Type.TRANSFORM2D, _parent);
    }
    get position() {
        return this.get_position();
    }
    set position(new_value) {
        this.set_position(new_value);
    }
    get rotation() {
        return this.get_rotation();
    }
    set rotation(new_value) {
        this.set_rotation(new_value);
    }
    get rotation_degrees() {
        return this.get_rotation_degrees();
    }
    set rotation_degrees(new_value) {
        this.set_rotation_degrees(new_value);
    }
    get scale() {
        return this.get_scale();
    }
    set scale(new_value) {
        this.set_scale(new_value);
    }
    get skew() {
        return this.get_skew();
    }
    set skew(new_value) {
        this.set_skew(new_value);
    }
    get transform() {
        return this.get_transform();
    }
    set transform(new_value) {
        this.set_transform(new_value);
    }
    get global_position() {
        return this.get_global_position();
    }
    set global_position(new_value) {
        this.set_global_position(new_value);
    }
    get global_rotation() {
        return this.get_global_rotation();
    }
    set global_rotation(new_value) {
        this.set_global_rotation(new_value);
    }
    get global_rotation_degrees() {
        return this.get_global_rotation_degrees();
    }
    set global_rotation_degrees(new_value) {
        this.set_global_rotation_degrees(new_value);
    }
    get global_scale() {
        return this.get_global_scale();
    }
    set global_scale(new_value) {
        this.set_global_scale(new_value);
    }
    get global_skew() {
        return this.get_global_skew();
    }
    set global_skew(new_value) {
        this.set_global_skew(new_value);
    }
    get global_transform() {
        return this.get_global_transform();
    }
    set global_transform(new_value) {
        this.set_global_transform(new_value);
    }
}
_a = Node2D;
_Node2D__bindings = { value: new _MethodBindings() };
_Node2D_initialized = { value: false };
