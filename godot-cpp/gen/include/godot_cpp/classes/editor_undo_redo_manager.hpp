/**************************************************************************/
/*  editor_undo_redo_manager.hpp                                          */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#ifndef GODOT_CPP_EDITOR_UNDO_REDO_MANAGER_HPP
#define GODOT_CPP_EDITOR_UNDO_REDO_MANAGER_HPP

#include <godot_cpp/core/object.hpp>
#include <godot_cpp/classes/undo_redo.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class String;
class StringName;
class Variant;

class EditorUndoRedoManager : public Object {
	GDEXTENSION_CLASS(EditorUndoRedoManager, Object)

public:

	enum SpecialHistory {
		GLOBAL_HISTORY = 0,
		REMOTE_HISTORY = -9,
		INVALID_HISTORY = -99,
	};

	void create_action(const String &name, UndoRedo::MergeMode merge_mode = (UndoRedo::MergeMode)0, Object *custom_context = nullptr, bool backward_undo_ops = false);
	void commit_action(bool execute = true);
	bool is_committing_action() const;
	private: private: void add_do_method_internal(const Variant **args, GDExtensionInt arg_count);
	public: void add_do_method(Object *object, const StringName &method, rest<Variant> args) {
		std::vector<Variant> variant_args;
		variant_args.push_back(Variant(object));
		variant_args.push_back(Variant(method));
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		add_do_method_internal(call_args.data(), variant_args.size());
	}
	private: private: void add_undo_method_internal(const Variant **args, GDExtensionInt arg_count);
	public: void add_undo_method(Object *object, const StringName &method, rest<Variant> args) {
		std::vector<Variant> variant_args;
		variant_args.push_back(Variant(object));
		variant_args.push_back(Variant(method));
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		add_undo_method_internal(call_args.data(), variant_args.size());
	}
	void add_do_property(Object *object, const StringName &property, const Variant &value);
	void add_undo_property(Object *object, const StringName &property, const Variant &value);
	void add_do_reference(Object *object);
	void add_undo_reference(Object *object);
	int32_t get_object_history_id(Object *object) const;
	UndoRedo *get_history_undo_redo(int32_t id) const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(EditorUndoRedoManager::SpecialHistory);

#endif // ! GODOT_CPP_EDITOR_UNDO_REDO_MANAGER_HPP