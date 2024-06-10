#include "register/register_classes.h"
#include <godot_cpp/classes/editor_file_system_import_format_support_query.hpp>

using namespace godot;

void register_classes_EditorFileSystemImportFormatSupportQueryRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorFileSystemImportFormatSupportQuery>>("EditorFileSystemImportFormatSupportQueryRef").constructor<EditorFileSystemImportFormatSupportQuery *>();
}