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
export function to_promise(signal) {
    return new Promise((resolve, reject) => {
        const instance = signal.get_object();
        if (!GD.is_instance_id_valid(instance.get_instance_id()))
            reject("instance invalid");
        const resolver = new Resolver(resolve);
        signal.connect(resolver.callback, 0);
    });
}
class Resolver extends Node {
    #resolve;
    #callback;
    constructor(resolve) {
        super();
        this.#resolve = resolve;
        this.#callback = new Callable(this, this.#resolve);
    }
    get callback() {
        return this.#callback;
    }
    resolve() {
        this.#resolve();
        this.queue_free();
    }
}
