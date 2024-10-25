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
