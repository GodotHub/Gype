#include <godot_cpp/classes/aspect_ratio_container.hpp>
#include <godot_cpp/classes/container.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AspectRatioContainer() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<AspectRatioContainer>("AspectRatioContainer")
			.constructor<>()
			.base<Container>()
			.property<static_cast<double (AspectRatioContainer::*)() const>(&AspectRatioContainer::get_ratio), static_cast<void (AspectRatioContainer::*)(double)>(&AspectRatioContainer::set_ratio)>((new std::string("ratio"))->c_str())
			.property<static_cast<AspectRatioContainer::StretchMode (AspectRatioContainer::*)() const>(&AspectRatioContainer::get_stretch_mode), static_cast<void (AspectRatioContainer::*)(AspectRatioContainer::StretchMode)>(&AspectRatioContainer::set_stretch_mode)>((new std::string("stretch_mode"))->c_str())
			.property<static_cast<AspectRatioContainer::AlignmentMode (AspectRatioContainer::*)() const>(&AspectRatioContainer::get_alignment_horizontal), static_cast<void (AspectRatioContainer::*)(AspectRatioContainer::AlignmentMode)>(&AspectRatioContainer::set_alignment_horizontal)>((new std::string("alignment_horizontal"))->c_str())
			.property<static_cast<AspectRatioContainer::AlignmentMode (AspectRatioContainer::*)() const>(&AspectRatioContainer::get_alignment_vertical), static_cast<void (AspectRatioContainer::*)(AspectRatioContainer::AlignmentMode)>(&AspectRatioContainer::set_alignment_vertical)>((new std::string("alignment_vertical"))->c_str());
	qjs::Value _StretchMode = context->newObject();
	_StretchMode[(new std::string("STRETCH_WIDTH_CONTROLS_HEIGHT"))->c_str()] = AspectRatioContainer::StretchMode::STRETCH_WIDTH_CONTROLS_HEIGHT;
	_StretchMode[(new std::string("STRETCH_HEIGHT_CONTROLS_WIDTH"))->c_str()] = AspectRatioContainer::StretchMode::STRETCH_HEIGHT_CONTROLS_WIDTH;
	_StretchMode[(new std::string("STRETCH_FIT"))->c_str()] = AspectRatioContainer::StretchMode::STRETCH_FIT;
	_StretchMode[(new std::string("STRETCH_COVER"))->c_str()] = AspectRatioContainer::StretchMode::STRETCH_COVER;
	_module.add("StretchMode", std::move(_StretchMode));
	qjs::Value _AlignmentMode = context->newObject();
	_AlignmentMode[(new std::string("ALIGNMENT_BEGIN"))->c_str()] = AspectRatioContainer::AlignmentMode::ALIGNMENT_BEGIN;
	_AlignmentMode[(new std::string("ALIGNMENT_CENTER"))->c_str()] = AspectRatioContainer::AlignmentMode::ALIGNMENT_CENTER;
	_AlignmentMode[(new std::string("ALIGNMENT_END"))->c_str()] = AspectRatioContainer::AlignmentMode::ALIGNMENT_END;
	_module.add("AlignmentMode", std::move(_AlignmentMode));
}