#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/texture_progress_bar.hpp>

using namespace godot;

void register_classes_TextureProgressBar() {
    qjs::Context::Module &_module = _Control;
    _module.class_<TextureProgressBar>("TextureProgressBar")
           .constructor<>()
           .property<TextureProgressBar::get_fill_mode, TextureProgressBar::set_fill_mode>("fill_mode")
           .property<TextureProgressBar::get_nine_patch_stretch, TextureProgressBar::set_nine_patch_stretch>("nine_patch_stretch")
           .property<TextureProgressBar::get_stretch_margin, TextureProgressBar::set_stretch_margin>("stretch_margin_left")
           .property<TextureProgressBar::get_stretch_margin, TextureProgressBar::set_stretch_margin>("stretch_margin_top")
           .property<TextureProgressBar::get_stretch_margin, TextureProgressBar::set_stretch_margin>("stretch_margin_right")
           .property<TextureProgressBar::get_stretch_margin, TextureProgressBar::set_stretch_margin>("stretch_margin_bottom")
           .property<TextureProgressBar::get_under_texture, TextureProgressBar::set_under_texture>("texture_under")
           .property<TextureProgressBar::get_over_texture, TextureProgressBar::set_over_texture>("texture_over")
           .property<TextureProgressBar::get_progress_texture, TextureProgressBar::set_progress_texture>("texture_progress")
           .property<TextureProgressBar::get_texture_progress_offset, TextureProgressBar::set_texture_progress_offset>("texture_progress_offset")
           .property<TextureProgressBar::get_tint_under, TextureProgressBar::set_tint_under>("tint_under")
           .property<TextureProgressBar::get_tint_over, TextureProgressBar::set_tint_over>("tint_over")
           .property<TextureProgressBar::get_tint_progress, TextureProgressBar::set_tint_progress>("tint_progress")
           .property<TextureProgressBar::get_radial_initial_angle, TextureProgressBar::set_radial_initial_angle>("radial_initial_angle")
           .property<TextureProgressBar::get_fill_degrees, TextureProgressBar::set_fill_degrees>("radial_fill_degrees")
           .property<TextureProgressBar::get_radial_center_offset, TextureProgressBar::set_radial_center_offset>("radial_center_offset")
;}