if ($args.Count -eq 0 -or $args[0] -match "none") {

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


scons use_mingw=true generate_template_get_node=false
