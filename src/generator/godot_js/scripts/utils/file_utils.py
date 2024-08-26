import os
import json
from pathlib import Path

def _read_gde_json():
    root = Path(workspace_dir)
    return json.loads(root.joinpath('../../../', 'godot-cpp','gdextension','extension_api.json').read_text(encoding='utf8'))

workspace_dir = os.getenv('VSCODE_WORKSPACE', os.getcwd())
js_generated_dir = Path(workspace_dir).parent.parent.joinpath('js_godot')
cpp_generated_dir = Path(workspace_dir).parent.parent.parent
gde_json = _read_gde_json()