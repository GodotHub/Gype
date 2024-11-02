var __decorate = (this && this.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
import { Control } from "@godot/classes/control";
import { GodotClass } from "@godot/core/class_defined";
let RootNode = class RootNode extends Control {
    _ready() {
        let child = this.get_node("./Child");
        GD.print(child.size);
    }
    _process(delta) { }
};
RootNode = __decorate([
    GodotClass
], RootNode);
export { RootNode };
