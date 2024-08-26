import * as internal from '__internal__';
import { PacketPeer } from 'src/js_godot/classespacket_peer'
class _MethodBindings {
    method__get_packet;
    method__put_packet;
    method__get_available_packet_count;
    method__get_max_packet_size;
}


export class PacketPeerExtension extends PacketPeer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PacketPeerExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("PacketPeerExtension");
      let methodname = new StringName("_get_packet");
      this._bindings.method__get_packet = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PacketPeerExtension");
      let methodname = new StringName("_put_packet");
      this._bindings.method__put_packet = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PacketPeerExtension");
      let methodname = new StringName("_get_available_packet_count");
      this._bindings.method__get_available_packet_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PacketPeerExtension");
      let methodname = new StringName("_get_max_packet_size");
      this._bindings.method__get_max_packet_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _get_packet(_r_buffer, _r_buffer_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_packet,
      this._owner,
			Variant.INT,
      _r_buffer, _r_buffer_size
    );
  }
  _put_packet(_p_buffer, _p_buffer_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__put_packet,
      this._owner,
			Variant.INT,
      _p_buffer, _p_buffer_size
    );
  }
  _get_available_packet_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_available_packet_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_max_packet_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_max_packet_size,
      this._owner,
			Variant.Type.INT,
      
    );
  }
}