import os


env = SConscript("godot-cpp/SConstruct")
gype_target = ARGUMENTS.get('gype_target')

def get_sources(path):
    sources = []
    for root, dirs, files in os.walk(path):
        sources += Glob(os.path.join(root, '*.cpp'))
    for root, dirs, files in os.walk(path):
        sources += Glob(os.path.join(root, '*.c'))
    return sources

if os.name == 'nt':
    prebuilt_path = "windows-x86_64"
elif os.name == 'posix':
    prebuilt_path = "linux-x86_64"
else:
    raise OSError("Unsupported operating system")

env_gype = Environment(tools=["default"], PLATFORM="")
env_gype.PrependENVPath("PATH", os.getenv("PATH"))

if gype_target == 'windows':
    env["LINK"]="g++"
elif gype_target == 'linux':
    env["LINK"]="g++"
elif gype_target == 'android':
    env_gype["ENV"]["ANDROID_HOME"] = os.getenv("ANDROID_HOME")
    env_gype["CC"] = f"{env_gype['ENV']['ANDROID_HOME']}/ndk/23.2.8568313/toolchains/llvm/prebuilt/{prebuilt_path}/bin/aarch64-linux-android23-clang"
    env_gype["CXX"] = f"{env_gype['ENV']['ANDROID_HOME']}/ndk/23.2.8568313/toolchains/llvm/prebuilt/{prebuilt_path}/bin/aarch64-linux-android23-clang++"
else:
    print(f"gype_target is an unexpected value: {gype_target}")


env_gype.Append(CCFLAGS=['-O0', '-Wall', '-Wextra', '-Wno-unused-parameter', '-fPIC'])
env_gype.Append(CPPPATH=['tree-sitter/include', 'tree-sitter/src'])


sources_tree = get_sources('tree-sitter/src')
tree_sitter = env_gype.StaticLibrary(target='tree-sitter/bin/tree-sitter', source=sources_tree)
Export('tree_sitter')


env_gype.Append(CPPPATH=['quickjs/include'])
env_gype.Append(CPPDEFINES=[
    '_GNU_SOURCE',
    'CONFIG_BIGNUM',
    'CONFIG_ALL_UNICODE',
    'CONFIG_VERSION=\\"2024-05-20\\"'
])

sources_qjs = Glob('quickjs/src/*.c')
quickjs = env_gype.StaticLibrary(target='quickjs/bin/quickjs', source=sources_qjs)
Export('quickjs')



env.Append(CXXFLAGS=["-std=c++17"])
env.Append(CPPPATH=["include", "quickjs/include", "tree-sitter/include", "tree-sitter/src", "godot-cpp/include", "godot-cpp/gen/include"])

sources = []
sources.extend(get_sources('src'))
sources.extend(get_sources('godot-cpp/src'))
sources.extend(get_sources('godot-cpp/gen/src'))

object_files = []
for source in sources:
    obj = env.Object(source=source)
    object_files.append(obj)

response_file_path = "objects.rsp"
with open(response_file_path, "w") as rsp:
    for obj in object_files:
        path = obj[0].abspath.replace("\\", "/")
        rsp.write(f"{path}\n")


env.Append(LINKFLAGS=[f"@{response_file_path}"])

library = env.SharedLibrary(
    "bin/libgype{}{}".format(env["suffix"], env["SHLIBSUFFIX"]),
    source=[],
    LIBS=[quickjs,tree_sitter],
)

Default([object_files,library])
