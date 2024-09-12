import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_feed;
  method_get_feed_count;
  method_feeds;
  method_add_feed;
  method_remove_feed;
}class _CameraServer extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CameraServer");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_feed() {
    if (!this.#_bindings.method_get_feed) {
      let classname = new StringName("CameraServer");
      let methodname = new StringName("get_feed");
      this.#_bindings.method_get_feed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        361927068
      );
    }
  }
  static init_method_get_feed_count() {
    if (!this.#_bindings.method_get_feed_count) {
      let classname = new StringName("CameraServer");
      let methodname = new StringName("get_feed_count");
      this.#_bindings.method_get_feed_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_feeds() {
    if (!this.#_bindings.method_feeds) {
      let classname = new StringName("CameraServer");
      let methodname = new StringName("feeds");
      this.#_bindings.method_feeds = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_add_feed() {
    if (!this.#_bindings.method_add_feed) {
      let classname = new StringName("CameraServer");
      let methodname = new StringName("add_feed");
      this.#_bindings.method_add_feed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3204782488
      );
    }
  }
  static init_method_remove_feed() {
    if (!this.#_bindings.method_remove_feed) {
      let classname = new StringName("CameraServer");
      let methodname = new StringName("remove_feed");
      this.#_bindings.method_remove_feed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3204782488
      );
    }
  }

  
  
  get_feed(_index) {
    CameraServer.init_method_get_feed();
    return _call_native_mb_ret(
      _CameraServer.#_bindings.method_get_feed,
      this._owner,
			Variant.Type.OBJECT,
      _index
    );
    
  }
  get_feed_count() {
    CameraServer.init_method_get_feed_count();
    return _call_native_mb_ret(
      _CameraServer.#_bindings.method_get_feed_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  feeds() {
    CameraServer.init_method_feeds();
    return _call_native_mb_ret(
      _CameraServer.#_bindings.method_feeds,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  add_feed(_feed) {
    CameraServer.init_method_add_feed();
    return _call_native_mb_no_ret(
      _CameraServer.#_bindings.method_add_feed,
      this._owner,
      _feed
    );
    
  }
  remove_feed(_feed) {
    CameraServer.init_method_remove_feed();
    return _call_native_mb_no_ret(
      _CameraServer.#_bindings.method_remove_feed,
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
export const CameraServer = (function () {
  let _instance;
  function create_instance() {
    return new _CameraServer();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();