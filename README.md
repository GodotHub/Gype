### 拉取代码  
执行`git submodule update --init --recursive`  

### 编译项目  
Windows平台下载mingw64，配置环境变量  
下载Python3，安装Scons：`pip install scons`  
根目录执行`scons target=template_debug use_mingw=true`  
