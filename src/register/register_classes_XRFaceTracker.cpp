#include <godot_cpp/classes/xr_face_tracker.hpp>
#include <godot_cpp/classes/xr_tracker.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XRFaceTracker() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<XRFaceTracker>("XRFaceTracker")
			.constructor<>()
			.base<XRTracker>()
			.property<static_cast<PackedFloat32Array (XRFaceTracker::*)() const>(&XRFaceTracker::get_blend_shapes), static_cast<void (XRFaceTracker::*)(const PackedFloat32Array &)>(&XRFaceTracker::set_blend_shapes)>((new std::string("blend_shapes"))->c_str())
			.fun<static_cast<double (XRFaceTracker::*)(XRFaceTracker::BlendShapeEntry) const>(&XRFaceTracker::get_blend_shape)>((new std::string("get_blend_shape"))->c_str())
			.fun<static_cast<void (XRFaceTracker::*)(XRFaceTracker::BlendShapeEntry, double)>(&XRFaceTracker::set_blend_shape)>((new std::string("set_blend_shape"))->c_str());
	qjs::Value _BlendShapeEntry = context->newObject();
	_BlendShapeEntry[(new std::string("FT_EYE_LOOK_OUT_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_OUT_RIGHT;
	_BlendShapeEntry[(new std::string("FT_EYE_LOOK_IN_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_IN_RIGHT;
	_BlendShapeEntry[(new std::string("FT_EYE_LOOK_UP_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_UP_RIGHT;
	_BlendShapeEntry[(new std::string("FT_EYE_LOOK_DOWN_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_DOWN_RIGHT;
	_BlendShapeEntry[(new std::string("FT_EYE_LOOK_OUT_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_OUT_LEFT;
	_BlendShapeEntry[(new std::string("FT_EYE_LOOK_IN_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_IN_LEFT;
	_BlendShapeEntry[(new std::string("FT_EYE_LOOK_UP_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_UP_LEFT;
	_BlendShapeEntry[(new std::string("FT_EYE_LOOK_DOWN_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_DOWN_LEFT;
	_BlendShapeEntry[(new std::string("FT_EYE_CLOSED_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_CLOSED_RIGHT;
	_BlendShapeEntry[(new std::string("FT_EYE_CLOSED_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_CLOSED_LEFT;
	_BlendShapeEntry[(new std::string("FT_EYE_SQUINT_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_SQUINT_RIGHT;
	_BlendShapeEntry[(new std::string("FT_EYE_SQUINT_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_SQUINT_LEFT;
	_BlendShapeEntry[(new std::string("FT_EYE_WIDE_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_WIDE_RIGHT;
	_BlendShapeEntry[(new std::string("FT_EYE_WIDE_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_WIDE_LEFT;
	_BlendShapeEntry[(new std::string("FT_EYE_DILATION_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_DILATION_RIGHT;
	_BlendShapeEntry[(new std::string("FT_EYE_DILATION_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_DILATION_LEFT;
	_BlendShapeEntry[(new std::string("FT_EYE_CONSTRICT_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_CONSTRICT_RIGHT;
	_BlendShapeEntry[(new std::string("FT_EYE_CONSTRICT_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_CONSTRICT_LEFT;
	_BlendShapeEntry[(new std::string("FT_BROW_PINCH_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_BROW_PINCH_RIGHT;
	_BlendShapeEntry[(new std::string("FT_BROW_PINCH_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_BROW_PINCH_LEFT;
	_BlendShapeEntry[(new std::string("FT_BROW_LOWERER_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_BROW_LOWERER_RIGHT;
	_BlendShapeEntry[(new std::string("FT_BROW_LOWERER_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_BROW_LOWERER_LEFT;
	_BlendShapeEntry[(new std::string("FT_BROW_INNER_UP_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_BROW_INNER_UP_RIGHT;
	_BlendShapeEntry[(new std::string("FT_BROW_INNER_UP_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_BROW_INNER_UP_LEFT;
	_BlendShapeEntry[(new std::string("FT_BROW_OUTER_UP_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_BROW_OUTER_UP_RIGHT;
	_BlendShapeEntry[(new std::string("FT_BROW_OUTER_UP_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_BROW_OUTER_UP_LEFT;
	_BlendShapeEntry[(new std::string("FT_NOSE_SNEER_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_NOSE_SNEER_RIGHT;
	_BlendShapeEntry[(new std::string("FT_NOSE_SNEER_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_NOSE_SNEER_LEFT;
	_BlendShapeEntry[(new std::string("FT_NASAL_DILATION_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_NASAL_DILATION_RIGHT;
	_BlendShapeEntry[(new std::string("FT_NASAL_DILATION_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_NASAL_DILATION_LEFT;
	_BlendShapeEntry[(new std::string("FT_NASAL_CONSTRICT_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_NASAL_CONSTRICT_RIGHT;
	_BlendShapeEntry[(new std::string("FT_NASAL_CONSTRICT_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_NASAL_CONSTRICT_LEFT;
	_BlendShapeEntry[(new std::string("FT_CHEEK_SQUINT_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_SQUINT_RIGHT;
	_BlendShapeEntry[(new std::string("FT_CHEEK_SQUINT_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_SQUINT_LEFT;
	_BlendShapeEntry[(new std::string("FT_CHEEK_PUFF_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_PUFF_RIGHT;
	_BlendShapeEntry[(new std::string("FT_CHEEK_PUFF_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_PUFF_LEFT;
	_BlendShapeEntry[(new std::string("FT_CHEEK_SUCK_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_SUCK_RIGHT;
	_BlendShapeEntry[(new std::string("FT_CHEEK_SUCK_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_SUCK_LEFT;
	_BlendShapeEntry[(new std::string("FT_JAW_OPEN"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_JAW_OPEN;
	_BlendShapeEntry[(new std::string("FT_MOUTH_CLOSED"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_CLOSED;
	_BlendShapeEntry[(new std::string("FT_JAW_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_JAW_RIGHT;
	_BlendShapeEntry[(new std::string("FT_JAW_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_JAW_LEFT;
	_BlendShapeEntry[(new std::string("FT_JAW_FORWARD"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_JAW_FORWARD;
	_BlendShapeEntry[(new std::string("FT_JAW_BACKWARD"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_JAW_BACKWARD;
	_BlendShapeEntry[(new std::string("FT_JAW_CLENCH"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_JAW_CLENCH;
	_BlendShapeEntry[(new std::string("FT_JAW_MANDIBLE_RAISE"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_JAW_MANDIBLE_RAISE;
	_BlendShapeEntry[(new std::string("FT_LIP_SUCK_UPPER_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_UPPER_RIGHT;
	_BlendShapeEntry[(new std::string("FT_LIP_SUCK_UPPER_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_UPPER_LEFT;
	_BlendShapeEntry[(new std::string("FT_LIP_SUCK_LOWER_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_LOWER_RIGHT;
	_BlendShapeEntry[(new std::string("FT_LIP_SUCK_LOWER_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_LOWER_LEFT;
	_BlendShapeEntry[(new std::string("FT_LIP_SUCK_CORNER_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_CORNER_RIGHT;
	_BlendShapeEntry[(new std::string("FT_LIP_SUCK_CORNER_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_CORNER_LEFT;
	_BlendShapeEntry[(new std::string("FT_LIP_FUNNEL_UPPER_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_FUNNEL_UPPER_RIGHT;
	_BlendShapeEntry[(new std::string("FT_LIP_FUNNEL_UPPER_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_FUNNEL_UPPER_LEFT;
	_BlendShapeEntry[(new std::string("FT_LIP_FUNNEL_LOWER_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_FUNNEL_LOWER_RIGHT;
	_BlendShapeEntry[(new std::string("FT_LIP_FUNNEL_LOWER_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_FUNNEL_LOWER_LEFT;
	_BlendShapeEntry[(new std::string("FT_LIP_PUCKER_UPPER_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_PUCKER_UPPER_RIGHT;
	_BlendShapeEntry[(new std::string("FT_LIP_PUCKER_UPPER_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_PUCKER_UPPER_LEFT;
	_BlendShapeEntry[(new std::string("FT_LIP_PUCKER_LOWER_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_PUCKER_LOWER_RIGHT;
	_BlendShapeEntry[(new std::string("FT_LIP_PUCKER_LOWER_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_PUCKER_LOWER_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_UPPER_UP_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_UPPER_UP_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_UPPER_UP_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_UPPER_UP_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_LOWER_DOWN_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_LOWER_DOWN_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_LOWER_DOWN_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_LOWER_DOWN_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_UPPER_DEEPEN_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_UPPER_DEEPEN_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_UPPER_DEEPEN_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_UPPER_DEEPEN_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_UPPER_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_UPPER_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_UPPER_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_UPPER_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_LOWER_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_LOWER_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_LOWER_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_LOWER_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_CORNER_PULL_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_CORNER_PULL_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_CORNER_PULL_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_CORNER_PULL_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_CORNER_SLANT_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_CORNER_SLANT_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_CORNER_SLANT_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_CORNER_SLANT_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_FROWN_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_FROWN_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_FROWN_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_FROWN_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_STRETCH_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_STRETCH_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_STRETCH_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_STRETCH_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_DIMPLE_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_DIMPLE_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_DIMPLE_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_DIMPLE_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_RAISER_UPPER"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_RAISER_UPPER;
	_BlendShapeEntry[(new std::string("FT_MOUTH_RAISER_LOWER"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_RAISER_LOWER;
	_BlendShapeEntry[(new std::string("FT_MOUTH_PRESS_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_PRESS_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_PRESS_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_PRESS_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_TIGHTENER_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_TIGHTENER_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_TIGHTENER_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_TIGHTENER_LEFT;
	_BlendShapeEntry[(new std::string("FT_TONGUE_OUT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_OUT;
	_BlendShapeEntry[(new std::string("FT_TONGUE_UP"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_UP;
	_BlendShapeEntry[(new std::string("FT_TONGUE_DOWN"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_DOWN;
	_BlendShapeEntry[(new std::string("FT_TONGUE_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_RIGHT;
	_BlendShapeEntry[(new std::string("FT_TONGUE_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_LEFT;
	_BlendShapeEntry[(new std::string("FT_TONGUE_ROLL"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_ROLL;
	_BlendShapeEntry[(new std::string("FT_TONGUE_BLEND_DOWN"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_BLEND_DOWN;
	_BlendShapeEntry[(new std::string("FT_TONGUE_CURL_UP"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_CURL_UP;
	_BlendShapeEntry[(new std::string("FT_TONGUE_SQUISH"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_SQUISH;
	_BlendShapeEntry[(new std::string("FT_TONGUE_FLAT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_FLAT;
	_BlendShapeEntry[(new std::string("FT_TONGUE_TWIST_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_TWIST_RIGHT;
	_BlendShapeEntry[(new std::string("FT_TONGUE_TWIST_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_TWIST_LEFT;
	_BlendShapeEntry[(new std::string("FT_SOFT_PALATE_CLOSE"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_SOFT_PALATE_CLOSE;
	_BlendShapeEntry[(new std::string("FT_THROAT_SWALLOW"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_THROAT_SWALLOW;
	_BlendShapeEntry[(new std::string("FT_NECK_FLEX_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_NECK_FLEX_RIGHT;
	_BlendShapeEntry[(new std::string("FT_NECK_FLEX_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_NECK_FLEX_LEFT;
	_BlendShapeEntry[(new std::string("FT_EYE_CLOSED"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_CLOSED;
	_BlendShapeEntry[(new std::string("FT_EYE_WIDE"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_WIDE;
	_BlendShapeEntry[(new std::string("FT_EYE_SQUINT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_SQUINT;
	_BlendShapeEntry[(new std::string("FT_EYE_DILATION"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_DILATION;
	_BlendShapeEntry[(new std::string("FT_EYE_CONSTRICT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_EYE_CONSTRICT;
	_BlendShapeEntry[(new std::string("FT_BROW_DOWN_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_BROW_DOWN_RIGHT;
	_BlendShapeEntry[(new std::string("FT_BROW_DOWN_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_BROW_DOWN_LEFT;
	_BlendShapeEntry[(new std::string("FT_BROW_DOWN"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_BROW_DOWN;
	_BlendShapeEntry[(new std::string("FT_BROW_UP_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_BROW_UP_RIGHT;
	_BlendShapeEntry[(new std::string("FT_BROW_UP_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_BROW_UP_LEFT;
	_BlendShapeEntry[(new std::string("FT_BROW_UP"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_BROW_UP;
	_BlendShapeEntry[(new std::string("FT_NOSE_SNEER"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_NOSE_SNEER;
	_BlendShapeEntry[(new std::string("FT_NASAL_DILATION"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_NASAL_DILATION;
	_BlendShapeEntry[(new std::string("FT_NASAL_CONSTRICT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_NASAL_CONSTRICT;
	_BlendShapeEntry[(new std::string("FT_CHEEK_PUFF"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_PUFF;
	_BlendShapeEntry[(new std::string("FT_CHEEK_SUCK"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_SUCK;
	_BlendShapeEntry[(new std::string("FT_CHEEK_SQUINT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_SQUINT;
	_BlendShapeEntry[(new std::string("FT_LIP_SUCK_UPPER"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_UPPER;
	_BlendShapeEntry[(new std::string("FT_LIP_SUCK_LOWER"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_LOWER;
	_BlendShapeEntry[(new std::string("FT_LIP_SUCK"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK;
	_BlendShapeEntry[(new std::string("FT_LIP_FUNNEL_UPPER"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_FUNNEL_UPPER;
	_BlendShapeEntry[(new std::string("FT_LIP_FUNNEL_LOWER"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_FUNNEL_LOWER;
	_BlendShapeEntry[(new std::string("FT_LIP_FUNNEL"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_FUNNEL;
	_BlendShapeEntry[(new std::string("FT_LIP_PUCKER_UPPER"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_PUCKER_UPPER;
	_BlendShapeEntry[(new std::string("FT_LIP_PUCKER_LOWER"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_PUCKER_LOWER;
	_BlendShapeEntry[(new std::string("FT_LIP_PUCKER"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_LIP_PUCKER;
	_BlendShapeEntry[(new std::string("FT_MOUTH_UPPER_UP"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_UPPER_UP;
	_BlendShapeEntry[(new std::string("FT_MOUTH_LOWER_DOWN"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_LOWER_DOWN;
	_BlendShapeEntry[(new std::string("FT_MOUTH_OPEN"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_OPEN;
	_BlendShapeEntry[(new std::string("FT_MOUTH_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_SMILE_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_SMILE_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_SMILE_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_SMILE_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_SMILE"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_SMILE;
	_BlendShapeEntry[(new std::string("FT_MOUTH_SAD_RIGHT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_SAD_RIGHT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_SAD_LEFT"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_SAD_LEFT;
	_BlendShapeEntry[(new std::string("FT_MOUTH_SAD"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_SAD;
	_BlendShapeEntry[(new std::string("FT_MOUTH_STRETCH"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_STRETCH;
	_BlendShapeEntry[(new std::string("FT_MOUTH_DIMPLE"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_DIMPLE;
	_BlendShapeEntry[(new std::string("FT_MOUTH_TIGHTENER"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_TIGHTENER;
	_BlendShapeEntry[(new std::string("FT_MOUTH_PRESS"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_PRESS;
	_BlendShapeEntry[(new std::string("FT_MAX"))->c_str()] = XRFaceTracker::BlendShapeEntry::FT_MAX;
	_module.add("BlendShapeEntry", std::move(_BlendShapeEntry));
}