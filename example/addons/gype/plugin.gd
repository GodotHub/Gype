@tool
extends EditorPlugin

func _build():
	var err = Engine.register_script_language(Typescript.new())
	if err != OK:
		push_error(err)
	else:
		print_debug('TS registration successful')

func _enter_tree():
	# Initialization of the plugin goes here.
	pass


func _exit_tree():
	# Clean-up of the plugin goes here.
	pass
