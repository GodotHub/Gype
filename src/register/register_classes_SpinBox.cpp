#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/spin_box.hpp>

using namespace godot;

void register_classes_SpinBox() {
    qjs::Context::Module &_module = _Control;
    _module.class_<SpinBox>("SpinBox")
           .constructor<>()
           .property<SpinBox::get_horizontal_alignment, SpinBox::set_horizontal_alignment>("alignment")
           .property<SpinBox::is_editable, SpinBox::set_editable>("editable")
           .property<SpinBox::get_update_on_text_changed, SpinBox::set_update_on_text_changed>("update_on_text_changed")
           .property<SpinBox::get_prefix, SpinBox::set_prefix>("prefix")
           .property<SpinBox::get_suffix, SpinBox::set_suffix>("suffix")
           .property<SpinBox::get_custom_arrow_step, SpinBox::set_custom_arrow_step>("custom_arrow_step")
           .property<SpinBox::is_select_all_on_focus, SpinBox::set_select_all_on_focus>("select_all_on_focus")
		    .fun<static_cast<void(SpinBox::*)()>(&SpinBox::apply)>("apply")
		    .fun<static_cast<LineEdit *(SpinBox::*)()>(&SpinBox::get_line_edit)>("get_line_edit")
;}