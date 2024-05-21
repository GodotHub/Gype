## GypeScript  
Godot with Great TypeScript  

### Notes  
This project is still under development. Stay tuned!  

### Pull the Code  
In the root directory, execute: `git clone https://github.com/godotengine/godot-cpp -b 4.2`  

### Build the Project  
On Linux, you can run it directly without manually configuring GCC.  
On Windows, download [mingw64 (posix version)](https://github.com/niXman/mingw-builds-binaries/releases/download/13.2.0-rt_v11-rev1/x86_64-13.2.0-release-posix-seh-msvcrt-rt_v11-rev1.7z) and set the PATH variable.  
  
Download Python3, and install Scons: `pip install scons`  
In the root directory, execute `scons target=template_debug use_mingw=true`  

### Project Plan  
1. 🟨 Run GypeScript/JS/TS code through GDE  
2. 🟦 Add GDE API bindings for GypeScript  
3. 🟦 Add Godot API bindings for GypeScript  
4. 🟦 Customize GypeScript while maintaining TS compatibility  
5. 🟦 Add new GMUI API bindings for GypeScript  
6. 🟦 Add GypeScript support in the Godot editor  
7. 🟦🟨✅...  
