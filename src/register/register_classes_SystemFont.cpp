#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/system_font.hpp>

using namespace godot;

void register_classes_SystemFont() {
    qjs::Context::Module &_module = _General;
    _module.class_<SystemFont>("SystemFont")
           .constructor<>()
           .property<SystemFont::get_font_names, SystemFont::set_font_names>("font_names")
           .property<SystemFont::get_font_italic, SystemFont::set_font_italic>("font_italic")
           .property<SystemFont::get_font_weight, SystemFont::set_font_weight>("font_weight")
           .property<SystemFont::get_font_stretch, SystemFont::set_font_stretch>("font_stretch")
           .property<SystemFont::get_antialiasing, SystemFont::set_antialiasing>("antialiasing")
           .property<SystemFont::get_generate_mipmaps, SystemFont::set_generate_mipmaps>("generate_mipmaps")
           .property<SystemFont::is_allow_system_fallback, SystemFont::set_allow_system_fallback>("allow_system_fallback")
           .property<SystemFont::is_force_autohinter, SystemFont::set_force_autohinter>("force_autohinter")
           .property<SystemFont::get_hinting, SystemFont::set_hinting>("hinting")
           .property<SystemFont::get_subpixel_positioning, SystemFont::set_subpixel_positioning>("subpixel_positioning")
           .property<SystemFont::is_multichannel_signed_distance_field, SystemFont::set_multichannel_signed_distance_field>("multichannel_signed_distance_field")
           .property<SystemFont::get_msdf_pixel_range, SystemFont::set_msdf_pixel_range>("msdf_pixel_range")
           .property<SystemFont::get_msdf_size, SystemFont::set_msdf_size>("msdf_size")
           .property<SystemFont::get_oversampling, SystemFont::set_oversampling>("oversampling")
;}