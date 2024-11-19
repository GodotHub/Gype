if ($args.Count -eq 0 -or $args[0] -match "none") {

}else {
    if (Test-Path "godot-cpp") {
        Remove-Item -Recurse -Force "godot-cpp"
        echo "Delete godot-cpp directory ..."
    }
    git clone https://github.com/godotengine/godot-cpp -b $args[0]
}

scons use_mingw=true generate_template_get_node=false