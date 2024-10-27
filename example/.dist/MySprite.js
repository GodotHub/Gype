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
import { Sprite2D } from "godot/classes/sprite2d";
let MySprite = class MySprite extends Sprite2D {
    constructor() {
        super();
        this.vec2 = new Vector2(500, 0);
    }
    _method() {
        GD.print("process");
    }
    _ready() {
        this.position = this.vec2;
        GD.print(this.position);
        let method = new Callable(this, this._method);
        method.call();
    }
    _process(delta) {
        this.vec2.y += 100 * delta;
        this.position = this.vec2;
    }
};
MySprite = __decorate([
    GodotClass,
    __metadata("design:paramtypes", [])
], MySprite);
export { MySprite };
