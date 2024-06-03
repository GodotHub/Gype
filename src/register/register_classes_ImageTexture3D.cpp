#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/image_texture3d.hpp>

using namespace godot;

void register_classes_ImageTexture3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<ImageTexture3D>("ImageTexture3D")
           .constructor<>()
		    .fun<static_cast<Error(ImageTexture3D::*)(Image::Format,int32_t,int32_t,int32_t,bool,const TypedArray<Image> &)>(&ImageTexture3D::create)>("create")
		    .fun<static_cast<void(ImageTexture3D::*)(const TypedArray<Image> &)>(&ImageTexture3D::update)>("update")
;}