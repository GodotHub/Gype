#include <godot_cpp/classes/progress_bar.hpp>
#include <godot_cpp/classes/range.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ProgressBar() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<ProgressBar>("ProgressBar")
            .constructor<>()
            .base<Range>()
            .property<static_cast<int32_t(ProgressBar::*)()>(&ProgressBar::get_fill_mode),static_cast<void(ProgressBar::*)(int32_t)>(&ProgressBar::set_fill_mode)>("fill_mode")
            .property<static_cast<bool(ProgressBar::*)()const>(&ProgressBar::is_percentage_shown),static_cast<void(ProgressBar::*)(bool)>(&ProgressBar::set_show_percentage)>("show_percentage")
            .property<static_cast<bool(ProgressBar::*)()const>(&ProgressBar::is_indeterminate),static_cast<void(ProgressBar::*)(bool)>(&ProgressBar::set_indeterminate)>("indeterminate")
            .property<static_cast<bool(ProgressBar::*)()const>(&ProgressBar::is_editor_preview_indeterminate_enabled),static_cast<void(ProgressBar::*)(bool)>(&ProgressBar::set_editor_preview_indeterminate)>("editor_preview_indeterminate")
;    qjs::Value _FillMode = context->newObject();
    _FillMode["FILL_BEGIN_TO_END"] = ProgressBar::FillMode::FILL_BEGIN_TO_END;
    _FillMode["FILL_END_TO_BEGIN"] = ProgressBar::FillMode::FILL_END_TO_BEGIN;
    _FillMode["FILL_TOP_TO_BOTTOM"] = ProgressBar::FillMode::FILL_TOP_TO_BOTTOM;
    _FillMode["FILL_BOTTOM_TO_TOP"] = ProgressBar::FillMode::FILL_BOTTOM_TO_TOP;
    _module.add("FillMode", std::move(_FillMode));
}