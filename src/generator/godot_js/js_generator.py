from scripts.classses.generator import gen_classes
from scripts.utility_functions.generator import gen_utility_functions
from scripts.builtin_classes.generator import gen_builtin_classes
from scripts.global_enum.generator import gen_global_enum
from scripts.dts.classes.generator import gen_classes_d_ts
from scripts.dts.builtin_classes.generator import gen_builtin_classes_d_ts
from scripts.dts.utility_functions.generator import gen_utility_functions_d_ts

if __name__ == '__main__':
    gen_classes()
    gen_utility_functions()
    gen_global_enum()
    gen_classes_d_ts()
<<<<<<< HEAD
=======
    gen_builtin_classes_d_ts()
>>>>>>> 0c008da7b935a7329ba949abea3320f1b5334455
    gen_utility_functions_d_ts()