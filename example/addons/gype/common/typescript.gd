class_name Typescript extends ScriptLanguageExtension

static var singleton = Typescript.new()

func _get_global_class_name(path):
	return ''

func _get_extension():
	return 'ts'
	
func _get_recognized_extensions():
	return ['ts']

func _get_name():
	return 'Typescript'
	
func _get_type():
	return 'Typescript'
	
func _thread_enter():
	pass
	
func _thread_exit():
	pass
	
func _handles_global_class_type(type):
	return true

func _supports_documentation():
	return false
	
func _frame():
	pass
	
func _create_script():
	return Typescript.new()

func _can_inherit_from_file():
	return true;
