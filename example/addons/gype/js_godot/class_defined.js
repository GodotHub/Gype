const _GodotClass = Symbol("_GodotClass");

export function GodotClass(target) {
  target[_GodotClass] = true;
  return target;
}
