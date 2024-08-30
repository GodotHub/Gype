import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classes/godot_object'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_feed;
    method_get_feed_count;
    method_feeds;
    method_add_feed;
    method_remove_feed;
}

export const CameraServer = new _CameraServer();

class _CameraServer extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CameraServer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CameraServer");
        let methodname = new StringName("get_feed");
        this._bindings.method_get_feed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          361927068
        );
      }
      {
        let classname = new StringName("CameraServer");
        let methodname = new StringName("get_feed_count");
        this._bindings.method_get_feed_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("CameraServer");
        let methodname = new StringName("feeds");
        this._bindings.method_feeds = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2915620761
        );
      }
      {
        let classname = new StringName("CameraServer");
        let methodname = new StringName("add_feed");
        this._bindings.method_add_feed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3204782488
        );
      }
      {
        let classname = new StringName("CameraServer");
        let methodname = new StringName("remove_feed");
        this._bindings.method_remove_feed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3204782488
        );
      }
  }
  get_feed(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_feed,
      this._owner,
			Variant.INT,
      _index
    );
    
  }
  get_feed_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_feed_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  feeds() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_feeds,
      this._owner,
			Variant.INT,
      
    );
    
  }
  add_feed(_feed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_feed,
      this._owner,
      _feed
    );
    
  }
  remove_feed(_feed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_feed,
      this._owner,
      _feed
    );
    
  }
  static FeedImage = {
    FEED_RGBA_IMAGE: 0,
    FEED_YCBCR_IMAGE: 0,
    FEED_Y_IMAGE: 0,
    FEED_CBCR_IMAGE: 1,
  }
}