### 拉取godot-cpp
执行git submodule update --init --recursive

### 项目配置
下载mingw64,配置环境变量
修改.vscode/c_cpp_properties.json的compilerPath.

### 编译
ctrl+shift+p进入命令面板,选择运行任务,选择initial-build-extension

### 运行
修改.vscode/launch.json的"program"为你的godot路径,然后直接启动