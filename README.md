## God TS  
Godot with TypeScript  

### 拉取代码  
执行`git submodule update --init --recursive`  
或者删除godot-cpp文件夹后：  
`git clone https://github.com/godotengine/godot-cpp -b 4.2`  

### 编译项目  
Linux平台无需配置GCC  
Windows平台下载[mingw64(posix版本)](https://github.com/niXman/mingw-builds-binaries/releases/download/13.2.0-rt_v11-rev1/x86_64-13.2.0-release-posix-seh-msvcrt-rt_v11-rev1.7z)，配置PATH变量  
  
下载Python3，安装Scons：`pip install scons`  
根目录执行`scons target=template_debug use_mingw=true`  
