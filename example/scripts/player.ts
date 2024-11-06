import { GodotClass } from "@godot/core/class_defined";
import { CharacterBody2D } from "@godot/classes/character_body2d";
import { AnimationTree } from "@godot/classes/animation_tree";
import { AnimationNodeStateMachinePlayback } from "@godot/classes/animation_node_state_machine_playback";

@GodotClass
export class Player extends CharacterBody2D {

	#speed: number = 150;
	#animation_tree?: AnimationTree;
	#playback?: AnimationNodeStateMachinePlayback;

	public _ready(): void {
		this.#animation_tree = this.get_node("./AnimationTree");
		this.#playback = this.#animation_tree?.get("parameters/playback");
	}

	public _process(delta: number): void { }

	public _physics_process(delta: number): void {

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

			this.#animation_tree?.set(
				"parameters/Move/BlendSpace2D/blend_position",
				this.velocity
			);

			this.#animation_tree?.set(
				"parameters/Idle/blend_position",
				this.velocity
			);

		} else {
			this.#playback?.travel("Idle");
		}

		this.move_and_slide();
	}
}
