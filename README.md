## GypeScript

Godot with Great TypeScript

## Notes

This project is still under development. Stay tuned!

## Build the Project

#### Compiler Setup

On Linux, you can run it directly without manually configuring GCC.  
On Windows, download [mingw64 (posix version)](https://github.com/niXman/mingw-builds-binaries/releases/download/13.2.0-rt_v11-rev1/x86_64-13.2.0-release-posix-seh-msvcrt-rt_v11-rev1.7z) and set the PATH variable.

#### Build library

1. Windows: `.\getlib`
2. Linux: `bash getlib.sh`
3. Compile JS: `.\gsc ts_example\hello.ts`

## Project Plan

1. 🟨 Run GypeScript/JS/TS code through GDE
2. 🟦 Add GDE API bindings for GypeScript
3. 🟦 Add Godot API bindings for GypeScript
4. 🟦 Customize GypeScript while maintaining TS compatibility
5. 🟦 Add new GMUI API bindings for GypeScript
6. 🟦 Add GypeScript support in the Godot editor
7. 🟦🟨✅...

## 使用

在 godot 导入插件即可像 gdscript 一样使用
godot 的 variant 类型均在全局作用域,不需要 import 就可使用.
object 类均在 godot/classes/xxxx,例如,godot/classes/node
工具函数均在 GD 单例内,例如 GD.print(...);

该项目依赖 nodejs 来执行 tsc,需要安装 nodejs 才能编译.(后续会尝试替换为 qjs)
