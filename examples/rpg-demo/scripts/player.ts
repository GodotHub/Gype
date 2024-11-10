import { GodotClass } from "@godot/core/class_defined";
import { CharacterBody2D } from "@godot/classes/character_body2d";
import { AnimationPlayer } from "@godot/classes/animation_player";
import { AnimationTree } from "@godot/classes/animation_tree";
import { AnimationNodeStateMachinePlayback } from "@res/addons/gype/godot/classes/animation_node_state_machine_playback";

@GodotClass
export class Player extends CharacterBody2D {
  #speed: number = 80;
  #animation_player!: AnimationPlayer;
  #animation_tree!: AnimationTree;
  #playback!: AnimationNodeStateMachinePlayback;

  public _ready(): void {
	this.#animation_player = this.get_node("./AnimationPlayer");
	this.#animation_tree = this.get_node("./AnimationTree");
	this.#playback = this.#animation_tree.get("parameters/playback");
	this.#animation_tree.active = true;
  }

  public _physics_process(delta: number): void {
	let x =
	  (Input.get_action_strength("ui_right") -
		Input.get_action_strength("ui_left")) *
	  this.#speed;
	let y =
	  (Input.get_action_strength("ui_down") -
		Input.get_action_strength("ui_up")) *
	  this.#speed;
	this.velocity = new Vector2(x, y);
	if (Input.is_action_pressed("ui_select")) {
	  this.#playback.travel("Idle");
	  this.#playback.travel("Attack");
	} else if (this.velocity.x != 0 || this.velocity.y != 0) {
	  this.#playback.travel("Move");
	  this.#animation_tree.set("parameters/Idle/blend_position", this.velocity);
	  this.#animation_tree.set("parameters/Move/blend_position", this.velocity);
	  this.#animation_tree.set("parameters/Attack/blend_position", this.velocity);
	} else {
	  this.#playback.travel("Idle");
	}
	this.move_and_slide();
  }
}
