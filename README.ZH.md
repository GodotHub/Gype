## GypeScript

Godot引擎，但是带有JavaScript/TypeScript支持  

## 快速开始

在Godot项目中导入插件，像GDS一样使用：  
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

可以查看`example`目录下的例子。  
> 源代码仓库内不包含编译好的二进制文件，因此addons目录需要自行导入插件。  

注意：  
1. Godot的`variant`类型均在全局作用域，无需`import`即可使用  
2. Godot的`object`类均在`godot/classes/xxxx`，如`godot/classes/node`  
3. Godot的工具函数均在`GD`单例内，例如`GD.print()`  

## 项目规划

1. ✅ 运行JS/TS脚本  
2. ✅ 添加Godot API的JS/TS绑定  
3. 🟦 通过JS/TS绑定实现新版GMUI  
4. 🟨 为~~JS~~/TS脚本添加编辑器支持  
5. 🟦🟨✅...  

## 编译项目

#### 配置编译器

在Linux上，直接使用GCC即可  
  
在Windows，下载[mingw64 (posix version)](https://github.com/niXman/mingw-builds-binaries/releases/download/13.2.0-rt_v11-rev1/x86_64-13.2.0-release-posix-seh-msvcrt-rt_v11-rev1.7z)然后设置PATH环境变量  

#### 构建二进制文件

Windows: 在仓库根目录里执行`./build.ps1`  
