@tool
extends EditorPlugin

var compile_button_scene = preload("res://addons/gype/support/ComplieButton.tscn");
var compile_button:TextureButton = compile_button_scene.instantiate();

func _enter_tree() -> void:
	add_singletons();
	add_control_to_container(CONTAINER_TOOLBAR, compile_button);
	compile_button.pressed.connect(_compile);
	
func _exit_tree() -> void:
	remove_singletons();
	remove_control_from_container(CONTAINER_TOOLBAR, compile_button);
	compile_button.disconnect("pressed", _compile)

func _enable_plugin() -> void:
	add_singletons();
	add_control_to_container(CONTAINER_TOOLBAR, compile_button);
	compile_button.pressed.connect(_compile);

func _disable_plugin() -> void:
	remove_singletons();
	remove_control_from_container(CONTAINER_TOOLBAR, compile_button);
	compile_button.disconnect("pressed", _compile)

func add_singletons():
	add_autoload_singleton('GlobalClasses', "res://addons/gype/godot/core/global_classes.ts")

func remove_singletons():
	remove_autoload_singleton('GlobalClasses')

func _compile():
	var exit_code = OS.execute("cmd.exe", ["/c", "tsc", "--build", "tsconfig.json"]);
	if exit_code == -1:
		printerr('error compile js')
		return false
	else:
		print('scripts generated')
		return true

func _build() -> bool:
	return _compile()
