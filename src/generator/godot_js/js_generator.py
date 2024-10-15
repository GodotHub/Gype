from scripts.classses.generator import gen_classes
from scripts.utility_functions.generator import gen_utility_functions
from scripts.builtin_classes.generator import gen_builtin_classes

if __name__ == '__main__':
    p = 'float_64'
    gen_classes()
    gen_utility_functions()
    # gen_builtin_classes()