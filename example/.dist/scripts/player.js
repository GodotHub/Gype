var __decorate = (this && this.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
import { GodotClass } from "@godot/core/class_defined";
import { CharacterBody2D } from "@godot/classes/character_body2d";
let Player = class Player extends CharacterBody2D {
    #speed = 150;
    #animation_tree;
    #playback;
    _ready() {
        this.#animation_tree = this.get_node("./AnimationTree");
        this.#playback = this.#animation_tree?.get("parameters/playback");
    }
    _process(delta) { }
    _physics_process(delta) {
        let velocity = new Vector2();
        if (Input.is_action_pressed("ui_left")) {
            velocity.x -= this.#speed;
        }
        if (Input.is_action_pressed("ui_right")) {
            velocity.x += this.#speed;
        }
        if (Input.is_action_pressed("ui_up")) {
            velocity.y -= this.#speed;
        }
        if (Input.is_action_pressed("ui_down")) {
            velocity.y += this.#speed;
        }
        this.velocity = velocity;
        if (velocity.x != 0 || velocity.y != 0) {
            this.#playback?.travel("Move");
            this.#animation_tree?.set("parameters/Move/BlendSpace2D/blend_position", this.velocity);
            this.#animation_tree?.set("parameters/Idle/blend_position", this.velocity);
        }
        else {
            this.#playback?.travel("Idle");
        }
        this.move_and_slide();
    }
};
Player = __decorate([
    GodotClass
], Player);
export { Player };
