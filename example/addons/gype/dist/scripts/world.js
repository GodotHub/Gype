var __decorate = (this && this.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __classPrivateFieldGet = (this && this.__classPrivateFieldGet) || function (receiver, state, kind, f) {
    if (kind === "a" && !f) throw new TypeError("Private accessor was defined without a getter");
    if (typeof state === "function" ? receiver !== state || !f : !state.has(receiver)) throw new TypeError("Cannot read private member from an object whose class did not declare it");
    return kind === "m" ? f : kind === "a" ? f.call(receiver) : f ? f.value : state.get(receiver);
};
var _world_test_node;
import { Node2D } from "@godot/classes/node2d";
import { GodotClass } from "@godot/core/class_defined";
let world = class world extends Node2D {
    constructor() {
        super(...arguments);
        _world_test_node.set(this, new Node2D());
    }
    _ready() {
        this.add_child(__classPrivateFieldGet(this, _world_test_node, "f"));
    }
    _process(delta) { }
};
_world_test_node = new WeakMap();
world = __decorate([
    GodotClass
], world);
export { world };
