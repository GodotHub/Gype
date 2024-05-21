## GypeScript  
Godot with Great TypeScript  
  
### 拉取代码   
在根目录执行：`git clone https://github.com/godotengine/godot-cpp -b 4.2`  
  
### 编译项目  
Linux平台可以直接运行，无需手动配置GCC  
Windows平台下载[mingw64(posix版本)](https://github.com/niXman/mingw-builds-binaries/releases/download/13.2.0-rt_v11-rev1/x86_64-13.2.0-release-posix-seh-msvcrt-rt_v11-rev1.7z)，配置PATH变量  
  
下载Python3，安装Scons：`pip install scons`  
根目录执行`scons target=template_debug use_mingw=true`  
