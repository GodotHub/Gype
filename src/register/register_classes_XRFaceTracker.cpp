#include <godot_cpp/classes/xr_face_tracker.hpp>
#include <godot_cpp/classes/xr_tracker.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_XRFaceTracker() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<XRFaceTracker>("XRFaceTracker")
            .constructor<>()
            .base<XRTracker>()
            .property<static_cast<PackedFloat32Array(XRFaceTracker::*)()const>(&XRFaceTracker::get_blend_shapes),static_cast<void(XRFaceTracker::*)(const PackedFloat32Array &)>(&XRFaceTracker::set_blend_shapes)>("blend_shapes")
            .fun<static_cast<double(XRFaceTracker::*)(XRFaceTracker::BlendShapeEntry)const>(&XRFaceTracker::get_blend_shape)>("get_blend_shape")
            .fun<static_cast<void(XRFaceTracker::*)(XRFaceTracker::BlendShapeEntry,double)>(&XRFaceTracker::set_blend_shape)>("set_blend_shape")
;    qjs::Value _BlendShapeEntry = context->newObject();
    _BlendShapeEntry["FT_EYE_LOOK_OUT_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_OUT_RIGHT;
    _BlendShapeEntry["FT_EYE_LOOK_IN_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_IN_RIGHT;
    _BlendShapeEntry["FT_EYE_LOOK_UP_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_UP_RIGHT;
    _BlendShapeEntry["FT_EYE_LOOK_DOWN_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_DOWN_RIGHT;
    _BlendShapeEntry["FT_EYE_LOOK_OUT_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_OUT_LEFT;
    _BlendShapeEntry["FT_EYE_LOOK_IN_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_IN_LEFT;
    _BlendShapeEntry["FT_EYE_LOOK_UP_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_UP_LEFT;
    _BlendShapeEntry["FT_EYE_LOOK_DOWN_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_LOOK_DOWN_LEFT;
    _BlendShapeEntry["FT_EYE_CLOSED_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_CLOSED_RIGHT;
    _BlendShapeEntry["FT_EYE_CLOSED_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_CLOSED_LEFT;
    _BlendShapeEntry["FT_EYE_SQUINT_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_SQUINT_RIGHT;
    _BlendShapeEntry["FT_EYE_SQUINT_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_SQUINT_LEFT;
    _BlendShapeEntry["FT_EYE_WIDE_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_WIDE_RIGHT;
    _BlendShapeEntry["FT_EYE_WIDE_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_WIDE_LEFT;
    _BlendShapeEntry["FT_EYE_DILATION_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_DILATION_RIGHT;
    _BlendShapeEntry["FT_EYE_DILATION_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_DILATION_LEFT;
    _BlendShapeEntry["FT_EYE_CONSTRICT_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_CONSTRICT_RIGHT;
    _BlendShapeEntry["FT_EYE_CONSTRICT_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_CONSTRICT_LEFT;
    _BlendShapeEntry["FT_BROW_PINCH_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_BROW_PINCH_RIGHT;
    _BlendShapeEntry["FT_BROW_PINCH_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_BROW_PINCH_LEFT;
    _BlendShapeEntry["FT_BROW_LOWERER_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_BROW_LOWERER_RIGHT;
    _BlendShapeEntry["FT_BROW_LOWERER_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_BROW_LOWERER_LEFT;
    _BlendShapeEntry["FT_BROW_INNER_UP_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_BROW_INNER_UP_RIGHT;
    _BlendShapeEntry["FT_BROW_INNER_UP_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_BROW_INNER_UP_LEFT;
    _BlendShapeEntry["FT_BROW_OUTER_UP_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_BROW_OUTER_UP_RIGHT;
    _BlendShapeEntry["FT_BROW_OUTER_UP_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_BROW_OUTER_UP_LEFT;
    _BlendShapeEntry["FT_NOSE_SNEER_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_NOSE_SNEER_RIGHT;
    _BlendShapeEntry["FT_NOSE_SNEER_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_NOSE_SNEER_LEFT;
    _BlendShapeEntry["FT_NASAL_DILATION_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_NASAL_DILATION_RIGHT;
    _BlendShapeEntry["FT_NASAL_DILATION_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_NASAL_DILATION_LEFT;
    _BlendShapeEntry["FT_NASAL_CONSTRICT_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_NASAL_CONSTRICT_RIGHT;
    _BlendShapeEntry["FT_NASAL_CONSTRICT_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_NASAL_CONSTRICT_LEFT;
    _BlendShapeEntry["FT_CHEEK_SQUINT_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_SQUINT_RIGHT;
    _BlendShapeEntry["FT_CHEEK_SQUINT_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_SQUINT_LEFT;
    _BlendShapeEntry["FT_CHEEK_PUFF_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_PUFF_RIGHT;
    _BlendShapeEntry["FT_CHEEK_PUFF_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_PUFF_LEFT;
    _BlendShapeEntry["FT_CHEEK_SUCK_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_SUCK_RIGHT;
    _BlendShapeEntry["FT_CHEEK_SUCK_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_SUCK_LEFT;
    _BlendShapeEntry["FT_JAW_OPEN"] = XRFaceTracker::BlendShapeEntry::FT_JAW_OPEN;
    _BlendShapeEntry["FT_MOUTH_CLOSED"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_CLOSED;
    _BlendShapeEntry["FT_JAW_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_JAW_RIGHT;
    _BlendShapeEntry["FT_JAW_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_JAW_LEFT;
    _BlendShapeEntry["FT_JAW_FORWARD"] = XRFaceTracker::BlendShapeEntry::FT_JAW_FORWARD;
    _BlendShapeEntry["FT_JAW_BACKWARD"] = XRFaceTracker::BlendShapeEntry::FT_JAW_BACKWARD;
    _BlendShapeEntry["FT_JAW_CLENCH"] = XRFaceTracker::BlendShapeEntry::FT_JAW_CLENCH;
    _BlendShapeEntry["FT_JAW_MANDIBLE_RAISE"] = XRFaceTracker::BlendShapeEntry::FT_JAW_MANDIBLE_RAISE;
    _BlendShapeEntry["FT_LIP_SUCK_UPPER_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_UPPER_RIGHT;
    _BlendShapeEntry["FT_LIP_SUCK_UPPER_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_UPPER_LEFT;
    _BlendShapeEntry["FT_LIP_SUCK_LOWER_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_LOWER_RIGHT;
    _BlendShapeEntry["FT_LIP_SUCK_LOWER_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_LOWER_LEFT;
    _BlendShapeEntry["FT_LIP_SUCK_CORNER_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_CORNER_RIGHT;
    _BlendShapeEntry["FT_LIP_SUCK_CORNER_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_CORNER_LEFT;
    _BlendShapeEntry["FT_LIP_FUNNEL_UPPER_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_LIP_FUNNEL_UPPER_RIGHT;
    _BlendShapeEntry["FT_LIP_FUNNEL_UPPER_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_LIP_FUNNEL_UPPER_LEFT;
    _BlendShapeEntry["FT_LIP_FUNNEL_LOWER_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_LIP_FUNNEL_LOWER_RIGHT;
    _BlendShapeEntry["FT_LIP_FUNNEL_LOWER_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_LIP_FUNNEL_LOWER_LEFT;
    _BlendShapeEntry["FT_LIP_PUCKER_UPPER_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_LIP_PUCKER_UPPER_RIGHT;
    _BlendShapeEntry["FT_LIP_PUCKER_UPPER_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_LIP_PUCKER_UPPER_LEFT;
    _BlendShapeEntry["FT_LIP_PUCKER_LOWER_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_LIP_PUCKER_LOWER_RIGHT;
    _BlendShapeEntry["FT_LIP_PUCKER_LOWER_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_LIP_PUCKER_LOWER_LEFT;
    _BlendShapeEntry["FT_MOUTH_UPPER_UP_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_UPPER_UP_RIGHT;
    _BlendShapeEntry["FT_MOUTH_UPPER_UP_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_UPPER_UP_LEFT;
    _BlendShapeEntry["FT_MOUTH_LOWER_DOWN_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_LOWER_DOWN_RIGHT;
    _BlendShapeEntry["FT_MOUTH_LOWER_DOWN_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_LOWER_DOWN_LEFT;
    _BlendShapeEntry["FT_MOUTH_UPPER_DEEPEN_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_UPPER_DEEPEN_RIGHT;
    _BlendShapeEntry["FT_MOUTH_UPPER_DEEPEN_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_UPPER_DEEPEN_LEFT;
    _BlendShapeEntry["FT_MOUTH_UPPER_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_UPPER_RIGHT;
    _BlendShapeEntry["FT_MOUTH_UPPER_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_UPPER_LEFT;
    _BlendShapeEntry["FT_MOUTH_LOWER_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_LOWER_RIGHT;
    _BlendShapeEntry["FT_MOUTH_LOWER_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_LOWER_LEFT;
    _BlendShapeEntry["FT_MOUTH_CORNER_PULL_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_CORNER_PULL_RIGHT;
    _BlendShapeEntry["FT_MOUTH_CORNER_PULL_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_CORNER_PULL_LEFT;
    _BlendShapeEntry["FT_MOUTH_CORNER_SLANT_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_CORNER_SLANT_RIGHT;
    _BlendShapeEntry["FT_MOUTH_CORNER_SLANT_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_CORNER_SLANT_LEFT;
    _BlendShapeEntry["FT_MOUTH_FROWN_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_FROWN_RIGHT;
    _BlendShapeEntry["FT_MOUTH_FROWN_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_FROWN_LEFT;
    _BlendShapeEntry["FT_MOUTH_STRETCH_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_STRETCH_RIGHT;
    _BlendShapeEntry["FT_MOUTH_STRETCH_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_STRETCH_LEFT;
    _BlendShapeEntry["FT_MOUTH_DIMPLE_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_DIMPLE_RIGHT;
    _BlendShapeEntry["FT_MOUTH_DIMPLE_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_DIMPLE_LEFT;
    _BlendShapeEntry["FT_MOUTH_RAISER_UPPER"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_RAISER_UPPER;
    _BlendShapeEntry["FT_MOUTH_RAISER_LOWER"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_RAISER_LOWER;
    _BlendShapeEntry["FT_MOUTH_PRESS_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_PRESS_RIGHT;
    _BlendShapeEntry["FT_MOUTH_PRESS_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_PRESS_LEFT;
    _BlendShapeEntry["FT_MOUTH_TIGHTENER_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_TIGHTENER_RIGHT;
    _BlendShapeEntry["FT_MOUTH_TIGHTENER_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_TIGHTENER_LEFT;
    _BlendShapeEntry["FT_TONGUE_OUT"] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_OUT;
    _BlendShapeEntry["FT_TONGUE_UP"] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_UP;
    _BlendShapeEntry["FT_TONGUE_DOWN"] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_DOWN;
    _BlendShapeEntry["FT_TONGUE_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_RIGHT;
    _BlendShapeEntry["FT_TONGUE_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_LEFT;
    _BlendShapeEntry["FT_TONGUE_ROLL"] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_ROLL;
    _BlendShapeEntry["FT_TONGUE_BLEND_DOWN"] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_BLEND_DOWN;
    _BlendShapeEntry["FT_TONGUE_CURL_UP"] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_CURL_UP;
    _BlendShapeEntry["FT_TONGUE_SQUISH"] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_SQUISH;
    _BlendShapeEntry["FT_TONGUE_FLAT"] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_FLAT;
    _BlendShapeEntry["FT_TONGUE_TWIST_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_TWIST_RIGHT;
    _BlendShapeEntry["FT_TONGUE_TWIST_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_TONGUE_TWIST_LEFT;
    _BlendShapeEntry["FT_SOFT_PALATE_CLOSE"] = XRFaceTracker::BlendShapeEntry::FT_SOFT_PALATE_CLOSE;
    _BlendShapeEntry["FT_THROAT_SWALLOW"] = XRFaceTracker::BlendShapeEntry::FT_THROAT_SWALLOW;
    _BlendShapeEntry["FT_NECK_FLEX_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_NECK_FLEX_RIGHT;
    _BlendShapeEntry["FT_NECK_FLEX_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_NECK_FLEX_LEFT;
    _BlendShapeEntry["FT_EYE_CLOSED"] = XRFaceTracker::BlendShapeEntry::FT_EYE_CLOSED;
    _BlendShapeEntry["FT_EYE_WIDE"] = XRFaceTracker::BlendShapeEntry::FT_EYE_WIDE;
    _BlendShapeEntry["FT_EYE_SQUINT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_SQUINT;
    _BlendShapeEntry["FT_EYE_DILATION"] = XRFaceTracker::BlendShapeEntry::FT_EYE_DILATION;
    _BlendShapeEntry["FT_EYE_CONSTRICT"] = XRFaceTracker::BlendShapeEntry::FT_EYE_CONSTRICT;
    _BlendShapeEntry["FT_BROW_DOWN_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_BROW_DOWN_RIGHT;
    _BlendShapeEntry["FT_BROW_DOWN_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_BROW_DOWN_LEFT;
    _BlendShapeEntry["FT_BROW_DOWN"] = XRFaceTracker::BlendShapeEntry::FT_BROW_DOWN;
    _BlendShapeEntry["FT_BROW_UP_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_BROW_UP_RIGHT;
    _BlendShapeEntry["FT_BROW_UP_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_BROW_UP_LEFT;
    _BlendShapeEntry["FT_BROW_UP"] = XRFaceTracker::BlendShapeEntry::FT_BROW_UP;
    _BlendShapeEntry["FT_NOSE_SNEER"] = XRFaceTracker::BlendShapeEntry::FT_NOSE_SNEER;
    _BlendShapeEntry["FT_NASAL_DILATION"] = XRFaceTracker::BlendShapeEntry::FT_NASAL_DILATION;
    _BlendShapeEntry["FT_NASAL_CONSTRICT"] = XRFaceTracker::BlendShapeEntry::FT_NASAL_CONSTRICT;
    _BlendShapeEntry["FT_CHEEK_PUFF"] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_PUFF;
    _BlendShapeEntry["FT_CHEEK_SUCK"] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_SUCK;
    _BlendShapeEntry["FT_CHEEK_SQUINT"] = XRFaceTracker::BlendShapeEntry::FT_CHEEK_SQUINT;
    _BlendShapeEntry["FT_LIP_SUCK_UPPER"] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_UPPER;
    _BlendShapeEntry["FT_LIP_SUCK_LOWER"] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK_LOWER;
    _BlendShapeEntry["FT_LIP_SUCK"] = XRFaceTracker::BlendShapeEntry::FT_LIP_SUCK;
    _BlendShapeEntry["FT_LIP_FUNNEL_UPPER"] = XRFaceTracker::BlendShapeEntry::FT_LIP_FUNNEL_UPPER;
    _BlendShapeEntry["FT_LIP_FUNNEL_LOWER"] = XRFaceTracker::BlendShapeEntry::FT_LIP_FUNNEL_LOWER;
    _BlendShapeEntry["FT_LIP_FUNNEL"] = XRFaceTracker::BlendShapeEntry::FT_LIP_FUNNEL;
    _BlendShapeEntry["FT_LIP_PUCKER_UPPER"] = XRFaceTracker::BlendShapeEntry::FT_LIP_PUCKER_UPPER;
    _BlendShapeEntry["FT_LIP_PUCKER_LOWER"] = XRFaceTracker::BlendShapeEntry::FT_LIP_PUCKER_LOWER;
    _BlendShapeEntry["FT_LIP_PUCKER"] = XRFaceTracker::BlendShapeEntry::FT_LIP_PUCKER;
    _BlendShapeEntry["FT_MOUTH_UPPER_UP"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_UPPER_UP;
    _BlendShapeEntry["FT_MOUTH_LOWER_DOWN"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_LOWER_DOWN;
    _BlendShapeEntry["FT_MOUTH_OPEN"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_OPEN;
    _BlendShapeEntry["FT_MOUTH_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_RIGHT;
    _BlendShapeEntry["FT_MOUTH_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_LEFT;
    _BlendShapeEntry["FT_MOUTH_SMILE_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_SMILE_RIGHT;
    _BlendShapeEntry["FT_MOUTH_SMILE_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_SMILE_LEFT;
    _BlendShapeEntry["FT_MOUTH_SMILE"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_SMILE;
    _BlendShapeEntry["FT_MOUTH_SAD_RIGHT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_SAD_RIGHT;
    _BlendShapeEntry["FT_MOUTH_SAD_LEFT"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_SAD_LEFT;
    _BlendShapeEntry["FT_MOUTH_SAD"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_SAD;
    _BlendShapeEntry["FT_MOUTH_STRETCH"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_STRETCH;
    _BlendShapeEntry["FT_MOUTH_DIMPLE"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_DIMPLE;
    _BlendShapeEntry["FT_MOUTH_TIGHTENER"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_TIGHTENER;
    _BlendShapeEntry["FT_MOUTH_PRESS"] = XRFaceTracker::BlendShapeEntry::FT_MOUTH_PRESS;
    _BlendShapeEntry["FT_MAX"] = XRFaceTracker::BlendShapeEntry::FT_MAX;
    _module.add("BlendShapeEntry", std::move(_BlendShapeEntry));
}