import { Node } from "@godot/classes/node";
import { GodotObject } from "@godot/classes/godot_object";

const _GodotClass = Symbol("_GodotClass");
export function GodotClass(target: any) {
  target[_GodotClass] = true;
  return target;
}

const _Tool = Symbol("_Tool");
export function Tool(target: any) {
  target[_Tool] = true;
  return target;
}

export function to_promise(signal: Signal): Promise<void> {
  return new Promise((resolve, reject) => {
    const instance = signal.get_object();
    if (!GD.is_instance_id_valid(instance.get_instance_id()))
      reject("instance invalid");
    const resolver: Resolver = new Resolver(resolve);
    signal.connect(resolver.callback, 0);
  });
}

class Resolver extends Node {
  #resolve: Function;
  #callback: Callable;

  constructor(resolve: Function) {
    super();
    this.#resolve = resolve;
    this.#callback = new Callable(this, this.#resolve);
  }

  get callback() {
    return this.#callback;
  }

  public resolve(): void {
    this.#resolve();
    this.queue_free();
  }
}
