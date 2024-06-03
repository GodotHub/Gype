#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/physics_direct_space_state2d_extension.hpp>

using namespace godot;

void register_classes_PhysicsDirectSpaceState2DExtension() {
    qjs::Context::Module &_module = _General;
    _module.class_<PhysicsDirectSpaceState2DExtension>("PhysicsDirectSpaceState2DExtension")
           .constructor<>()
		    .fun<static_cast<bool(PhysicsDirectSpaceState2DExtension::*)(const Vector2 &,const Vector2 &,uint32_t,bool,bool,bool,PhysicsServer2DExtensionRayResult*)>(&PhysicsDirectSpaceState2DExtension::_intersect_ray)>("_intersect_ray")
		    .fun<static_cast<int32_t(PhysicsDirectSpaceState2DExtension::*)(const Vector2 &,uint64_t,uint32_t,bool,bool,PhysicsServer2DExtensionShapeResult*,int32_t)>(&PhysicsDirectSpaceState2DExtension::_intersect_point)>("_intersect_point")
		    .fun<static_cast<int32_t(PhysicsDirectSpaceState2DExtension::*)(const RID &,const Transform2D &,const Vector2 &,double,uint32_t,bool,bool,PhysicsServer2DExtensionShapeResult*,int32_t)>(&PhysicsDirectSpaceState2DExtension::_intersect_shape)>("_intersect_shape")
		    .fun<static_cast<bool(PhysicsDirectSpaceState2DExtension::*)(const RID &,const Transform2D &,const Vector2 &,double,uint32_t,bool,bool,float*,float*)>(&PhysicsDirectSpaceState2DExtension::_cast_motion)>("_cast_motion")
		    .fun<static_cast<bool(PhysicsDirectSpaceState2DExtension::*)(const RID &,const Transform2D &,const Vector2 &,double,uint32_t,bool,bool,void*,int32_t,int32_t*)>(&PhysicsDirectSpaceState2DExtension::_collide_shape)>("_collide_shape")
		    .fun<static_cast<bool(PhysicsDirectSpaceState2DExtension::*)(const RID &,const Transform2D &,const Vector2 &,double,uint32_t,bool,bool,PhysicsServer2DExtensionShapeRestInfo*)>(&PhysicsDirectSpaceState2DExtension::_rest_info)>("_rest_info")
		    .fun<static_cast<bool(PhysicsDirectSpaceState2DExtension::*)(const RID &)const>(&PhysicsDirectSpaceState2DExtension::is_body_excluded_from_query)>("is_body_excluded_from_query")
;}