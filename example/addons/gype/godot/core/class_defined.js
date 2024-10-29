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
    const resolveWrapper = new ResolveWrapper(instance, signal, resolve);
    const callback = resolveWrapper.callback;
    instance.connect(signal, callback);
  });
}

class ResolveWrapper extends Node {
  #resolve = null;
  #instance = null;
  #callback = null;
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
