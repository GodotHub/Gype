import { Node } from "@godot/classes/node";
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
        if (!GD.is_instance_id_valid(instance.get_instance_id()))
            reject();
        const resolveWrapper = new Resolver(instance, signal, resolve);
        const callback = resolveWrapper.callback;
        instance.connect(signal, callback, 0);
    });
}
class Resolver extends Node {
    #resolve;
    #instance;
    #callback;
    #signal = "";
    constructor(instance, signal, resolve) {
        super();
        this.#resolve = resolve;
        this.#instance = instance;
        this.#callback = new Callable(this, this.resolve);
        this.#signal = signal;
    }
    get callback() {
        return this.#callback;
    }
    resolve() {
        this.#instance.disconnect(this.#signal, this.#callback);
        this.#resolve();
    }
}
