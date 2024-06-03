#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/label3d.hpp>

using namespace godot;

void register_classes_Label3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<Label3D>("Label3D")
           .constructor<>()
           .property<Label3D::get_pixel_size, Label3D::set_pixel_size>("pixel_size")
           .property<Label3D::get_offset, Label3D::set_offset>("offset")
           .property<Label3D::get_billboard_mode, Label3D::set_billboard_mode>("billboard")
           .property<Label3D::get_draw_flag, Label3D::set_draw_flag>("shaded")
           .property<Label3D::get_draw_flag, Label3D::set_draw_flag>("double_sided")
           .property<Label3D::get_draw_flag, Label3D::set_draw_flag>("no_depth_test")
           .property<Label3D::get_draw_flag, Label3D::set_draw_flag>("fixed_size")
           .property<Label3D::get_alpha_cut_mode, Label3D::set_alpha_cut_mode>("alpha_cut")
           .property<Label3D::get_alpha_scissor_threshold, Label3D::set_alpha_scissor_threshold>("alpha_scissor_threshold")
           .property<Label3D::get_alpha_hash_scale, Label3D::set_alpha_hash_scale>("alpha_hash_scale")
           .property<Label3D::get_alpha_antialiasing, Label3D::set_alpha_antialiasing>("alpha_antialiasing_mode")
           .property<Label3D::get_alpha_antialiasing_edge, Label3D::set_alpha_antialiasing_edge>("alpha_antialiasing_edge")
           .property<Label3D::get_texture_filter, Label3D::set_texture_filter>("texture_filter")
           .property<Label3D::get_render_priority, Label3D::set_render_priority>("render_priority")
           .property<Label3D::get_outline_render_priority, Label3D::set_outline_render_priority>("outline_render_priority")
           .property<Label3D::get_modulate, Label3D::set_modulate>("modulate")
           .property<Label3D::get_outline_modulate, Label3D::set_outline_modulate>("outline_modulate")
           .property<Label3D::get_text, Label3D::set_text>("text")
           .property<Label3D::get_font, Label3D::set_font>("font")
           .property<Label3D::get_font_size, Label3D::set_font_size>("font_size")
           .property<Label3D::get_outline_size, Label3D::set_outline_size>("outline_size")
           .property<Label3D::get_horizontal_alignment, Label3D::set_horizontal_alignment>("horizontal_alignment")
           .property<Label3D::get_vertical_alignment, Label3D::set_vertical_alignment>("vertical_alignment")
           .property<Label3D::is_uppercase, Label3D::set_uppercase>("uppercase")
           .property<Label3D::get_line_spacing, Label3D::set_line_spacing>("line_spacing")
           .property<Label3D::get_autowrap_mode, Label3D::set_autowrap_mode>("autowrap_mode")
           .property<Label3D::get_justification_flags, Label3D::set_justification_flags>("justification_flags")
           .property<Label3D::get_width, Label3D::set_width>("width")
           .property<Label3D::get_text_direction, Label3D::set_text_direction>("text_direction")
           .property<Label3D::get_language, Label3D::set_language>("language")
           .property<Label3D::get_structured_text_bidi_override, Label3D::set_structured_text_bidi_override>("structured_text_bidi_override")
           .property<Label3D::get_structured_text_bidi_override_options, Label3D::set_structured_text_bidi_override_options>("structured_text_bidi_override_options")
		    .fun<static_cast<Ref<TriangleMesh>(Label3D::*)()const>(&Label3D::generate_triangle_mesh)>("generate_triangle_mesh")
;}