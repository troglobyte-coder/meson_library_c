miok_lib = static_library('miok',
    'package.c',
    include_directories: inc_dir,
    gnu_symbol_visibility: 'hidden',
    install: true)

miok_dep = declare_dependency(
    link_with: miok_lib,
    include_directories: inc_dir)
