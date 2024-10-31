var __decorate = (this && this.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
import { TextEdit } from "@godot/classes/text_edit";
import { GodotClass } from "@godot/core/class_defined";
let text_edit = class text_edit extends TextEdit {
    edit(p0, p1) {
        GD.print(p0, p1);
    }
    _ready() {
        this.lines_edited_from.connect(new Callable(this, this.edit), 0);
    }
    _process(delta) {
    }
};
text_edit = __decorate([
    GodotClass
], text_edit);
export { text_edit };
