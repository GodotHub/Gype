import os


env = SConscript("./godot-cpp/SConstruct")
tree_sitter = SConscript("./tree-sitter/SConstruct")
quickjs = SConscript("./quickjs/SConstruct")

env.Append(CXXFLAGS=["-std=c++17"])
env['LINK']='g++'

def get_sources(path):
    sources = []
    for root, dirs, files in os.walk(path):
        sources += Glob(os.path.join(root, '*.cpp'))
    for root, dirs, files in os.walk(path):
        sources += Glob(os.path.join(root, '*.c'))
    return sources

env.Append(CPPPATH=["./include", "./quickjs/include", "./tree-sitter/include", "./tree-sitter/src", "./godot-cpp/include", "./godot-cpp/gen/include"])

sources = []
sources.extend(get_sources('./src'))
sources.extend(get_sources('./godot-cpp/src'))
sources.extend(get_sources('./godot-cpp/gen/src'))

object_files = []
for source in sources:
    obj = env.Object(source=source)
    object_files.append(obj)

response_file_path = "objects.rsp"
with open(response_file_path, "w") as rsp:
    for obj in object_files:
        # rsp.write(f"{obj[0].abspath.replace("\\", "/")}\n")
        path = obj[0].abspath.replace("\\", "/")
        rsp.write(f"{path}\n")


env.Append(LINKFLAGS=[f"@{response_file_path}"])

library = env.SharedLibrary(
    "bin/libgype{}{}".format(env["suffix"], env["SHLIBSUFFIX"]),
    source=[],
    LIBS=[quickjs,tree_sitter],
)

Default([object_files,library])
