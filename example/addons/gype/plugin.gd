@tool
extends EditorPlugin

var compile_button_scene = preload("res://addons/gype/support/ComplieButton.tscn");
var compile_button:TextureButton = compile_button_scene.instantiate();

func _enable_plugin() -> void:
	add_control_to_container(CONTAINER_TOOLBAR, compile_button);
	compile_button.pressed.connect(_compile);


func _disable_plugin() -> void:
	remove_control_from_container(CONTAINER_TOOLBAR, compile_button);
	compile_button.free()

func _compile():
	var exit_code = OS.execute("cmd.exe", ["/c", "tsc", "--build", "tsconfig.json"]);
	if exit_code == -1:
		printerr('compile js error')
	pass
