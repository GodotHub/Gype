#include "support/javascript_saver.hpp"
#include "support/javascript.hpp"
#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/classes/project_settings.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/resource_saver.hpp>
#include <godot_cpp/classes/resource_uid.hpp>

using namespace godot;

JavaScriptSaver *JavaScriptSaver::singleton;

JavaScriptSaver *JavaScriptSaver::get_singleton() {
	if (singleton) {
		return singleton;
	}
	singleton = memnew(JavaScriptSaver);
	return singleton;
}

void JavaScriptSaver::update_cur_class(Ref<JavaScript> script) {
	// std::string code = script->_get_source_code().ascii().get_data();
	// JSValue ret = JS_Eval(context.ctx, code.c_str(), strlen(code.c_str()), "<input>", JS_EVAL_TYPE_MODULE | JS_EVAL_FLAG_COMPILE_ONLY);
	// if (!qjs::is_exception(context.ctx, ret)) {
	// 	JSModuleDef *md = (JSModuleDef *)JS_VALUE_GET_PTR(ret);
	// 	ret = JS_EvalFunction(context.ctx, ret);
	// 	JSValue ns = JS_GetModuleNamespace(context.ctx, md);
	// 	JSPropertyEnum *ptab;
	// 	uint32_t len;
	// 	JS_GetOwnPropertyNames(context.ctx, &ptab, &len, ns, JS_GPN_STRING_MASK);
	// 	if (len > 0) {
	// 		for (uint32_t i = 0; i < len; i++) {
	// 			JSAtom prop_atom = ptab[i].atom;
	// 			JSValue el = JS_GetProperty(context.ctx, ns, prop_atom);
	// 			ERR_FAIL_COND(qjs::is_exception(context.ctx, el));
	// 			JSPropertyEnum *class_ptab;
	// 			uint32_t class_len;
	// 			JS_GetOwnPropertyNames(context.ctx, &class_ptab, &class_len, el, JS_GPN_SYMBOL_MASK);
	// 			for (uint32_t j = 0; j < class_len; j++) {
	// 				JSAtom symbol_atom = class_ptab[j].atom;
	// 				const char *symbol_name = JS_AtomToCString(context.ctx, symbol_atom);
	// 				if (strcmp(symbol_name, JavaScriptInstance::symbol_mask) == 0) {
	// 					script->cur_class = el;
	// 				}
	// 			}
	// 		}
	// 	}
	// }
}

Error JavaScriptSaver::_save(const Ref<Resource> &p_resource, const String &p_path, uint32_t p_flags) {
	Ref<JavaScript> script = p_resource;
	update_cur_class(script);
	Ref<FileAccess> file = FileAccess::open(p_path, FileAccess::ModeFlags::WRITE);
	String source_code = script->_get_source_code();
	if (source_code != "") {
		file->store_string(source_code);
	}
	return Error::OK;
}

Error JavaScriptSaver::_set_uid(const String &p_path, int64_t p_uid) {
	ResourceUID::get_singleton()->set_id(p_uid, p_path);
	return OK;
}

bool JavaScriptSaver::_recognize(const Ref<Resource> &p_resource) const {
	return true;
}

PackedStringArray JavaScriptSaver::_get_recognized_extensions(const Ref<Resource> &p_resource) const {
	PackedStringArray ret = PackedStringArray();
	ret.append("js");
	return ret;
}

bool JavaScriptSaver::_recognize_path(const Ref<Resource> &p_resource, const String &p_path) const {
	Ref<JavaScript> script = p_resource;
	if (p_path.ends_with(".js")) {
		script->origin_path = ProjectSettings::get_singleton()->globalize_path(p_path);
		return true;
	} else {
		return false;
	}
}
