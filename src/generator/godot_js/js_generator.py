from jinja2 import Environment, FileSystemLoader
from scripts.builtin_classes.builtin_classes import render_builtin_classes
from scripts.classes.classes import render_classes
from scripts.enums.enums import render_enums
from scripts.utility_functions.utility_functions import render_functions

if __name__ == '__main__':
    p = 'float_64'
    render_builtin_classes(p)
    render_classes(p)
    render_functions()
    render_enums()
