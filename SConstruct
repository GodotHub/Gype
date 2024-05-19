#!/usr/bin/env python
import os
import sys

def recursive_glob(rootdir='.', suffix=''):
    return [os.path.join(looproot, filename)
            for looproot, _, filenames in os.walk(rootdir)
            for filename in filenames if filename.endswith(suffix)]

env = SConscript("godot-cpp/SConstruct")

# For the reference:
# - CCFLAGS are compilation flags shared between C and C++
# - CFLAGS are for C-specific compilation flags
# - CXXFLAGS are for C++-specific compilation flags
# - CPPFLAGS are for pre-processor flags
# - CPPDEFINES are for pre-processor defines
# - LINKFLAGS are for linking flags

# tweak this if you want to use different folders, or more folders, to store your source code in.
# include dir
env.Append(CPPPATH=['src/core'])
env.Append(CXXFLAGS=["-std=c++17", "-fexceptions"])
# env.Append(CC='gcc')
# env.Append(CXX='g++')

# cpp file
sources = recursive_glob('./src/core', 'cpp')
sources.extend(recursive_glob('./src/core', 'hpp'))
sources.extend(recursive_glob('./src/core', 'c'))

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
