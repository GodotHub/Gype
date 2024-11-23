# 使用本地godot-cpp编译：./compile.ps1
# 拉取官方仓库里的godot-cpp进行编译：./compile.ps1 4.3
# 使用本地godot-cpp编译Win：./compile.ps1 none win
# 拉取官方仓库4.3编译Windows版本：./compile.ps1 4.3 win
# 拉取官方仓库4.3编译Android版本：./compile.ps1 4.3 andr
# 拉取官方仓库4.3编译Android的debug版本：./compile.ps1 4.3 andr-debug
# 拉取官方仓库4.3编译Android的debug版本，不增量编译：./compile.ps1 4.3 andr-debug-noc

if ($args.Count -eq 0 -or $args[0] -match "none") {
    echo "Use local godot-cpp ..."
}else {
    if (Test-Path "godot-cpp") {
        Remove-Item -Recurse -Force "godot-cpp"
        echo "Delete godot-cpp directory ..."
    }
    git clone https://github.com/godotengine/godot-cpp -b $args[0]
}

$pip = if ($IsLinux) { "pip3" } else { "pip" }
$python = if ($IsLinux) { "python3" } else { "python" }

function check_python {

    if (-not (Get-Command $python -ErrorAction SilentlyContinue)) {
        echo "Python is not installed."
        exit 1
    }

    if (-not (Get-Command $pip -ErrorAction SilentlyContinue)) {
        echo "Pip is not installed."
        exit 1
    }

    try {
        & $pip show jinja2 > $null
        if ($LASTEXITCODE -ne 0) {
            echo "Please install python3's jinja2 package . "
            # & $pip install jinja2
            # sudo apt install python3-jinja2
            exit 1
        }
    }
    catch {
        echo "Failed to install jinja2."
        exit 1
    }

}

check_python

Push-Location src/generator/godot_js

& $python js_generator.py

Pop-Location


if ($args[1] -match "noc|no-clean") {
    echo "Will not clean scons cache ..."
}else {
    scons -c
    Get-ChildItem -Path . -Recurse -Filter *.o | Remove-Item -Force
}

if (Test-Path "bin") {
    Remove-Item -Recurse -Force "bin"
    echo "Delete bin directory ..."
}


$general_scons = "generate_template_get_node=false"

if ($args[1] -match "debug") {
    $debug_mode = "debug_symbols=true optimize=debug"
    $general_scons = "$general_scons $debug_mode"
}

if ($args.Count -eq 1 -or $args[1] -match "none") {
    scons $general_scons gype_target=none
}
elseif ($args[1] -match "andr|adr|and|ad") {
    scons platform=android $general_scons threads=true gype_target=android
}
elseif ($args[1] -match "win") {
    scons use_mingw=true $general_scons gype_target=windows
}
elseif ($args[1] -match "lin") {
    scons $general_scons gype_target=linux
}
else {
    Write-Output "Argument mismatch !!!"
}
