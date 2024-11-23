var __decorate = (this && this.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
import { Node2D } from "@godot/classes/node2d";
import { GodotClass, to_promise } from "@godot/core/class_defined";
let world = class world extends Node2D {
    async _enter_tree() {
        GD.print('pre');
        await to_promise(this.ready);
        GD.print('aft');
    }
    _ready() {
        GD.print('ready');
    }
    _process(delta) {
    }
    test_callable() {
    }
};
world = __decorate([
    GodotClass
], world);
export { world };
