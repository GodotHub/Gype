https://github.com/android/ndk/wiki/Unsupported-Downloads  

NDK下载：https://dl.google.com/android/repository/android-ndk-r23c-windows.zip  

设置`ANDROID_HOME`环境变量为安卓SDK路径，然后确保`$ANDROID_HOME/ndk/23.2.8568313/toolchains`目录存在  

是的，你要手动修改(刚刚下载的压缩包)解压后得到的文件夹的名称  

将`android-ndk-r23c`修改为`23.2.8568313`，并放置到`$ANDROID_HOME/ndk`路径下  

另外，Windows下设置完`ANDROID_HOME`环境变量后，请务必重启电脑  
