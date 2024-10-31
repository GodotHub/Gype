var __decorate = (this && this.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
import { SpinBox } from "@godot/classes/spin_box";
import { GodotClass } from "@godot/core/class_defined";
let spin_box = class spin_box extends SpinBox {
    update(num) {
        GD.print(num);
    }
    _ready() {
        this.value_changed.connect(new Callable(this, this.update), 0);
    }
    _process(delta) {
        GD.print(1);
    }
};
spin_box = __decorate([
    GodotClass
], spin_box);
export { spin_box };
