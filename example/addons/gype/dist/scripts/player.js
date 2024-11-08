var __decorate = (this && this.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __classPrivateFieldSet = (this && this.__classPrivateFieldSet) || function (receiver, state, value, kind, f) {
    if (kind === "m") throw new TypeError("Private method is not writable");
    if (kind === "a" && !f) throw new TypeError("Private accessor was defined without a setter");
    if (typeof state === "function" ? receiver !== state || !f : !state.has(receiver)) throw new TypeError("Cannot write private member to an object whose class did not declare it");
    return (kind === "a" ? f.call(receiver, value) : f ? f.value = value : state.set(receiver, value)), value;
};
var __classPrivateFieldGet = (this && this.__classPrivateFieldGet) || function (receiver, state, kind, f) {
    if (kind === "a" && !f) throw new TypeError("Private accessor was defined without a getter");
    if (typeof state === "function" ? receiver !== state || !f : !state.has(receiver)) throw new TypeError("Cannot read private member from an object whose class did not declare it");
    return kind === "m" ? f : kind === "a" ? f.call(receiver) : f ? f.value : state.get(receiver);
};
var _Player_speed, _Player_animation_tree, _Player_playback;
import { GodotClass } from "@godot/core/class_defined";
import { CharacterBody2D } from "@godot/classes/character_body2d";
let Player = class Player extends CharacterBody2D {
    constructor() {
        super(...arguments);
        _Player_speed.set(this, 150);
        _Player_animation_tree.set(this, void 0);
        _Player_playback.set(this, void 0);
    }
    _ready() {
        __classPrivateFieldSet(this, _Player_animation_tree, this.get_node("./AnimationTree"), "f");
        __classPrivateFieldSet(this, _Player_playback, __classPrivateFieldGet(this, _Player_animation_tree, "f")?.get("parameters/playback"), "f");
    }
    _process(delta) { }
    _physics_process(delta) {
        let velocity = new Vector2();
        if (Input.is_action_pressed("ui_left")) {
            velocity.x -= __classPrivateFieldGet(this, _Player_speed, "f");
        }
        if (Input.is_action_pressed("ui_right")) {
            velocity.x += __classPrivateFieldGet(this, _Player_speed, "f");
        }
        if (Input.is_action_pressed("ui_up")) {
            velocity.y -= __classPrivateFieldGet(this, _Player_speed, "f");
        }
        if (Input.is_action_pressed("ui_down")) {
            velocity.y += __classPrivateFieldGet(this, _Player_speed, "f");
        }
        this.velocity = velocity;
        if (velocity.x != 0 || velocity.y != 0) {
            __classPrivateFieldGet(this, _Player_playback, "f")?.travel("Move");
            __classPrivateFieldGet(this, _Player_animation_tree, "f")?.set("parameters/Move/BlendSpace2D/blend_position", this.velocity);
            __classPrivateFieldGet(this, _Player_animation_tree, "f")?.set("parameters/Idle/blend_position", this.velocity);
        }
        else {
            __classPrivateFieldGet(this, _Player_playback, "f")?.travel("Idle");
        }
        this.move_and_slide();
    }
};
_Player_speed = new WeakMap();
_Player_animation_tree = new WeakMap();
_Player_playback = new WeakMap();
Player = __decorate([
    GodotClass
], Player);
export { Player };
