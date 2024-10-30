import { Node } from "@godot/classes/node";
import { GodotObject } from "@godot/classes/godot_object";
import { RefCounted } from "../classes/ref_counted";

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

// flag = 4 确保在await后释放连接
export function ToSignal(instance: GodotObject, signal: string): Promise<any> {
  return new Promise((resolve, reject) => {
    if (!GD.is_instance_id_valid(instance.get_instance_id()))
      reject("instance invalid");
    const resolveWrapper = new Resolver(instance, signal, resolve);
    const callback: Callable = resolveWrapper.callback;
    instance.connect(signal, callback, 4);
  });
}

class Resolver extends RefCounted {
  #resolve: Function;
  #instance: GodotObject;
  #callback: Callable;
  #signal = "";
  constructor(instance: GodotObject, signal: string, resolve: Function) {
    super();
    this.#resolve = resolve;
    this.#instance = instance;
    this.#callback = new Callable(this, this.#resolve);
    this.#signal = signal;
  }

  get callback() {
    return this.#callback;
  }

  public resolve(): void {
    this.#instance.disconnect(this.#signal, this.#callback);
    this.#resolve();
    this.unreference();
  }
}
