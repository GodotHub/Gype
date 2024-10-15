var __decorate = (this && this.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (this && this.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
import { GodotClass, Tool } from "@js_godot/class_defined";
import { Node2D } from "godot/classes/node2d";
let MyNode = class MyNode extends Node2D {
    constructor() {
        super();
    }
    _ready() {
        this.node = new Node2D();
        this.add_child(this.node);
    }
};
MyNode = __decorate([
    GodotClass,
    __metadata("design:paramtypes", [])
], MyNode);
export { MyNode };
