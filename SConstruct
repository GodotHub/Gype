import os
import sys

def recursive_glob(rootdir='.', suffix=''):
    return [os.path.join(looproot, filename)
            for looproot, _, filenames in os.walk(rootdir)
            for filename in filenames if filename.endswith(suffix)]

env = SConscript("godot-cpp/SConstruct")

env.Append(CPPPATH=['src'])

# 编译器和编译选项
env.Append(CXXFLAGS=['-std=c++17', '-fexceptions'])

# 添加必要的编译选项
env.Append(CPPDEFINES=['_GNU_SOURCE'])
env.Append(CFLAGS=['-D_GNU_SOURCE'])
env.Append(CPPDEFINES=['CONFIG_BIGNUM'])
env.Append(CFLAGS=['-D_CONFIG_BIGNUM'])
env.Append(CPPDEFINES={'CONFIG_VERSION': '\\"2024-05-20\\"'})

env.Append(CPPPATH=['include', 'include/quickjs', 'include/register'])

sources = recursive_glob('src', 'cpp')
sources.extend(recursive_glob('src', 'c'))

if env["platform"] == "macos":
    library = env.SharedLibrary(
        "game/bin/libtgds.{}.{}.framework/libgdsummator.{}.{}".format(
            env["platform"], env["target"], env["platform"], env["target"]
        ),
        source=sources,
    )
else:
    library = env.SharedLibrary(
        "game/bin/libtgds{}{}".format(env["suffix"], env["SHLIBSUFFIX"]),
        source=sources,
    )

Default(library)

def clean(env):
    # 列出需要清理的文件和目录
    clean_targets = [
        # 'game/bin',  # 目标文件目录
        '*.o',  # 对象文件
        # '*.os',  # 对象文件
        # '*.a',  # 静态库
        # '*.so',  # 共享库
        # '*.dylib',  # 动态库
    ]
    for target in clean_targets:
        env.Clean(target, target)

# 添加清理步骤
# clean(env)
