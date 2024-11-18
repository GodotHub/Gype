#!/usr/bin/env python
import os

env = SConscript("./godot-cpp/SConstruct")

def get_sources(path):
    sources = []
    for root, dirs, files in os.walk(path):
        sources += Glob(os.path.join(root, '*.cpp'))
    for root, dirs, files in os.walk(path):
        sources += Glob(os.path.join(root, '*.c'))
    return sources

# For the reference:
# - CCFLAGS are compilation flags shared between C and C++
# - CFLAGS are for C-specific compilation flags
# - CXXFLAGS are for C++-specific compilation flags
# - CPPFLAGS are for pre-processor flags
# - CPPDEFINES are for pre-processor defines
# - LINKFLAGS are for linking flags

# tweak this if you want to use different folders, or more folders, to store your source code in.
env.Append(CPPPATH=["./include", "./quickjs/include", "./tree-sitter/include", "./tree-sitter/src"])
env.Append(CPPDEFINES=['_GNU_SOURCE', 'CONFIG_BIGNUM', 'CONFIG_ALL_UNICODE', 'CONFIG_VERSION=\\"2024-05-20\\"'])

sources = []
sources.extend(get_sources("./quickjs/src"))
sources.extend(get_sources("./tree-sitter/src"))
sources.extend(get_sources('./src'))

if env["target"] in ["editor", "template_debug"]:
    doc_data = env.GodotCPPDocData("src/gen/doc_data.gen.cpp", source=Glob("doc_classes/*.xml"))
    sources.append(doc_data)

if env["platform"] == "macos":
    library = env.SharedLibrary(
        "bin/libgdexample.{}.{}.framework/libgdexample.{}.{}".format(
            env["platform"], env["target"], env["platform"], env["target"]
        ),
        source=sources,
    )
elif env["platform"] == "ios":
    if env["ios_simulator"]:
        library = env.StaticLibrary(
            "bin/libgdexample.{}.{}.simulator.a".format(env["platform"], env["target"]),
            source=sources,
        )
    else:
        library = env.StaticLibrary(
            "bin/libgdexample.{}.{}.a".format(env["platform"], env["target"]),
            source=sources,
        )
else:
    library = env.SharedLibrary(
        "bin/libgype{}{}".format(env["suffix"], env["SHLIBSUFFIX"]),
        source=sources,
    )

Default(library)