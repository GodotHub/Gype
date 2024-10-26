## GypeScript  
  
Godot with Great JavaScript/TypeScript  
  
[English](https://github.com/GodotHub/Gype) &nbsp;&nbsp;&nbsp;&nbsp;[中文](https://github.com/GodotHub/Gype/blob/master/README.ZH.md)  

## Quick Start

Import the plugin in a Godot project and use it like GDS：  
```js
import { GodotClass, Tool } from "@js_godot/class_defined";
import { Sprite2D } from "godot/classes/sprite2d";

@GodotClass
export class MySprite extends Sprite2D {
  vec2 = new Vector2(500, 0);
  constructor() {
	super();
  }

  _ready() {
	this.position = this.vec2;
	GD.print(this.position);
  }

  _process(delta) {
	this.vec2.y += 100 * delta;
	this.position = this.vec2;
  }
}
```  

Examples can be viewed in the `example` directory.  
> The source repository does not contain compiled binaries, so the addons directory needs to import the plugin itself.  

Notes:  
1. Godot's `variant` types are globally scoped and can be used without `import`.  
2. Godot's `object` classes are all in `godot/classes/xxxx`, such as `godot/classes/node`.  
3. Godot's utility functions are in the `GD` singleton, e.g. `GD.print()`.  


## Project Plan

1. ✅ Run a JS/TS script  
2. ✅ Add JS/TS bindings for Godot API  
3. 🟦 Implement new version of GMUI with JS/TS binding  
4. 🟨 Add editor support for ~~JS~~/TS  
5. 🟦🟨✅...  

## Build the Project

#### Compiler Setup

On Linux, you can run it directly without manually configuring GCC.  

On Windows, download [mingw64 (posix version)](https://github.com/niXman/mingw-builds-binaries/releases/download/13.2.0-rt_v11-rev1/x86_64-13.2.0-release-posix-seh-msvcrt-rt_v11-rev1.7z) and set the PATH env variable.

#### Build library

Windows: `./build.ps1`  
