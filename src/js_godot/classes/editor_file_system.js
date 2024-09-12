import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node } from '@js_godot/classes/node'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_filesystem;
  method_is_scanning;
  method_get_scanning_progress;
  method_scan;
  method_scan_sources;
  method_update_file;
  method_get_filesystem_path;
  method_get_file_type;
  method_reimport_files;
}
export class EditorFileSystem extends Node{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorFileSystem");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_filesystem() {
    if (!this.#_bindings.method_get_filesystem) {
      let classname = new StringName("EditorFileSystem");
      let methodname = new StringName("get_filesystem");
      this.#_bindings.method_get_filesystem = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        842323275
      );
    }
  }
  static init_method_is_scanning() {
    if (!this.#_bindings.method_is_scanning) {
      let classname = new StringName("EditorFileSystem");
      let methodname = new StringName("is_scanning");
      this.#_bindings.method_is_scanning = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_scanning_progress() {
    if (!this.#_bindings.method_get_scanning_progress) {
      let classname = new StringName("EditorFileSystem");
      let methodname = new StringName("get_scanning_progress");
      this.#_bindings.method_get_scanning_progress = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_scan() {
    if (!this.#_bindings.method_scan) {
      let classname = new StringName("EditorFileSystem");
      let methodname = new StringName("scan");
      this.#_bindings.method_scan = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_scan_sources() {
    if (!this.#_bindings.method_scan_sources) {
      let classname = new StringName("EditorFileSystem");
      let methodname = new StringName("scan_sources");
      this.#_bindings.method_scan_sources = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_update_file() {
    if (!this.#_bindings.method_update_file) {
      let classname = new StringName("EditorFileSystem");
      let methodname = new StringName("update_file");
      this.#_bindings.method_update_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_filesystem_path() {
    if (!this.#_bindings.method_get_filesystem_path) {
      let classname = new StringName("EditorFileSystem");
      let methodname = new StringName("get_filesystem_path");
      this.#_bindings.method_get_filesystem_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3188521125
      );
    }
  }
  static init_method_get_file_type() {
    if (!this.#_bindings.method_get_file_type) {
      let classname = new StringName("EditorFileSystem");
      let methodname = new StringName("get_file_type");
      this.#_bindings.method_get_file_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3135753539
      );
    }
  }
  static init_method_reimport_files() {
    if (!this.#_bindings.method_reimport_files) {
      let classname = new StringName("EditorFileSystem");
      let methodname = new StringName("reimport_files");
      this.#_bindings.method_reimport_files = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4015028928
      );
    }
  }

  
  
  get_filesystem() {
    EditorFileSystem.init_method_get_filesystem();
    return _call_native_mb_ret(
      EditorFileSystem.#_bindings.method_get_filesystem,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  is_scanning() {
    EditorFileSystem.init_method_is_scanning();
    return _call_native_mb_ret(
      EditorFileSystem.#_bindings.method_is_scanning,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_scanning_progress() {
    EditorFileSystem.init_method_get_scanning_progress();
    return _call_native_mb_ret(
      EditorFileSystem.#_bindings.method_get_scanning_progress,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  scan() {
    EditorFileSystem.init_method_scan();
    return _call_native_mb_no_ret(
      EditorFileSystem.#_bindings.method_scan,
      this._owner,
      
    );
    
  }
  scan_sources() {
    EditorFileSystem.init_method_scan_sources();
    return _call_native_mb_no_ret(
      EditorFileSystem.#_bindings.method_scan_sources,
      this._owner,
      
    );
    
  }
  update_file(_path) {
    EditorFileSystem.init_method_update_file();
    return _call_native_mb_no_ret(
      EditorFileSystem.#_bindings.method_update_file,
      this._owner,
      _path
    );
    
  }
  get_filesystem_path(_path) {
    EditorFileSystem.init_method_get_filesystem_path();
    return _call_native_mb_ret(
      EditorFileSystem.#_bindings.method_get_filesystem_path,
      this._owner,
			Variant.Type.OBJECT,
      _path
    );
    
  }
  get_file_type(_path) {
    EditorFileSystem.init_method_get_file_type();
    return _call_native_mb_ret(
      EditorFileSystem.#_bindings.method_get_file_type,
      this._owner,
			Variant.Type.STRING,
    
      _path
    );
    
  }
  reimport_files(_files) {
    EditorFileSystem.init_method_reimport_files();
    return _call_native_mb_no_ret(
      EditorFileSystem.#_bindings.method_reimport_files,
      this._owner,
      _files
    );
    
  }
  

}