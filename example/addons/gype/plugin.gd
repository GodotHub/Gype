@tool
extends EditorPlugin

var compile_button_scene = preload("res://addons/gype/support/ComplieButton.tscn");
var compile_button:TextureButton = compile_button_scene.instantiate();
var file_system: EditorFileSystem;

func _enter_tree() -> void:
	file_system = get_editor_interface().get_resource_filesystem()
	add_singletons();
	add_control_to_container(CONTAINER_TOOLBAR, compile_button);
	if not compile_button.is_connected("pressed", _compile):
		compile_button.pressed.connect(_compile);
	if not file_system.filesystem_changed.is_connected(_compile):
		file_system.filesystem_changed.connect(_compile)
	
func _exit_tree() -> void:
	remove_singletons();
	remove_control_from_container(CONTAINER_TOOLBAR, compile_button);
	if compile_button.is_connected("pressed", _compile):
		compile_button.disconnect("pressed", _compile)
	if file_system.filesystem_changed.is_connected(_compile):
		file_system.filesystem_changed.disconnect(_compile)

func _enable_plugin() -> void:
	add_singletons();
	add_control_to_container(CONTAINER_TOOLBAR, compile_button);
	if not compile_button.is_connected("pressed", _compile):
		compile_button.pressed.connect(_compile);
	if not file_system.filesystem_changed.is_connected(_compile):
		file_system.filesystem_changed.connect(_compile)

func _disable_plugin() -> void:
	remove_singletons();
	remove_control_from_container(CONTAINER_TOOLBAR, compile_button);
	if compile_button.is_connected("pressed", _compile):
		compile_button.disconnect("pressed", _compile)
	if file_system.filesystem_changed.is_connected(_compile):
		file_system.filesystem_changed.disconnect(_compile)

func add_singletons():
	add_autoload_singleton('GlobalClasses', "res://addons/gype/godot/core/global_classes.ts")

func remove_singletons():
	remove_autoload_singleton('GlobalClasses')

func _compile():
	if not Engine.is_editor_hint():
		print("Game is running.Can not compile.");
		return true
	var exit_code = OS.execute("cmd.exe", ["/c", "tsc", "--build", "tsconfig.json"]);
	if exit_code == -1:
		printerr('error compile js')
		return false
	else:
		print('scripts generated')
		return true

func _build() -> bool:
	return _compile()
