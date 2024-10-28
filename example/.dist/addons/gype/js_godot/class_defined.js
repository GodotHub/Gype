var __classPrivateFieldSet = (this && this.__classPrivateFieldSet) || function (receiver, state, value, kind, f) {
    if (kind === "m") throw new TypeError("Private method is not writable");
    if (kind === "a" && !f) throw new TypeError("Private accessor was defined without a setter");
    if (typeof state === "function" ? receiver !== state || !f : !state.has(receiver)) throw new TypeError("Cannot write private member to an object whose class did not declare it");
    return (kind === "a" ? f.call(receiver, value) : f ? f.value = value : state.set(receiver, value)), value;
};
var __classPrivateFieldGet = (this && this.__classPrivateFieldGet) || function (receiver, state, kind, f) {
    if (kind === "a" && !f) throw new TypeError("Private accessor was defined without a getter");
    if (typeof state === "function" ? receiver !== state || !f : !state.has(receiver)) throw new TypeError("Cannot read private member from an object whose class did not declare it");
    return kind === "m" ? f : kind === "a" ? f.call(receiver) : f ? f.value : state.get(receiver);
};
var _ResolveWrapper_resolve, _ResolveWrapper_instance, _ResolveWrapper_callback, _ResolveWrapper_signal;
import { RefCounted } from "godot/classes/ref_counted";
import { Node } from "godot/classes/node";
const _GodotClass = Symbol("_GodotClass");
export function GodotClass(target) {
    target[_GodotClass] = true;
    return target;
}
const _Tool = Symbol("_Tool");
export function Tool(target) {
    target[_Tool] = true;
    return target;
}
export function ToSignal(instance, signal) {
    return new Promise((resolve, reject) => {
        const resolveWrapper = new ResolveWrapper(instance, signal, resolve);
        const callback = resolveWrapper.callback;
        instance.connect(signal, callback);
    });
}
class ResolveWrapper extends Node {
    constructor(instance, signal, resolve) {
        super();
        _ResolveWrapper_resolve.set(this, null);
        _ResolveWrapper_instance.set(this, null);
        _ResolveWrapper_callback.set(this, null);
        _ResolveWrapper_signal.set(this, "");
        __classPrivateFieldSet(this, _ResolveWrapper_resolve, resolve, "f");
        __classPrivateFieldSet(this, _ResolveWrapper_instance, instance, "f");
        __classPrivateFieldSet(this, _ResolveWrapper_callback, new Callable(this, this.resolve), "f");
        __classPrivateFieldSet(this, _ResolveWrapper_signal, signal, "f");
    }
    get callback() {
        return __classPrivateFieldGet(this, _ResolveWrapper_callback, "f");
    }
    resolve() {
        __classPrivateFieldGet(this, _ResolveWrapper_instance, "f").disconnect(__classPrivateFieldGet(this, _ResolveWrapper_signal, "f"), __classPrivateFieldGet(this, _ResolveWrapper_callback, "f"));
        __classPrivateFieldGet(this, _ResolveWrapper_resolve, "f").call(this);
    }
}
_ResolveWrapper_resolve = new WeakMap(), _ResolveWrapper_instance = new WeakMap(), _ResolveWrapper_callback = new WeakMap(), _ResolveWrapper_signal = new WeakMap();
