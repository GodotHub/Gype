#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_file_system_import_format_support_query.hpp>

using namespace godot;

void register_classes_EditorFileSystemImportFormatSupportQuery() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorFileSystemImportFormatSupportQuery>("EditorFileSystemImportFormatSupportQuery")
           .constructor<>()
		    .fun<static_cast<bool(EditorFileSystemImportFormatSupportQuery::*)()const>(&EditorFileSystemImportFormatSupportQuery::_is_active)>("_is_active")
		    .fun<static_cast<PackedStringArray(EditorFileSystemImportFormatSupportQuery::*)()const>(&EditorFileSystemImportFormatSupportQuery::_get_file_extensions)>("_get_file_extensions")
		    .fun<static_cast<bool(EditorFileSystemImportFormatSupportQuery::*)()const>(&EditorFileSystemImportFormatSupportQuery::_query)>("_query")
;}