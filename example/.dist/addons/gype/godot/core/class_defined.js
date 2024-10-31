import { RefCounted } from "../classes/ref_counted";
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
export function ToPromise(signal) {
    return new Promise((resolve, reject) => {
        const instance = signal.get_object();
        if (!GD.is_instance_id_valid(instance.get_instance_id()))
            reject("instance invalid");
        const resolver = new Resolver(instance, signal, resolve);
        const callback = resolver.callback;
        instance.connect(signal, callback, 4);
    });
}
class Resolver extends RefCounted {
    #resolve;
    #instance;
    #callback;
    #signal;
    constructor(instance, signal, resolve) {
        super();
        this.#resolve = resolve;
        this.#instance = instance;
        this.#callback = new Callable(this, this.#resolve);
        this.#signal = signal;
    }
    get callback() {
        return this.#callback;
    }
    resolve() {
        this.#resolve();
        this.unreference();
    }
}
