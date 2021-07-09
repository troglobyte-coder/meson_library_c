bunny_lib = static_library('bunny',
    'package.c',
    include_directories: inc_dir,
    gnu_symbol_visibility: 'hidden',
    install: true)

bunny_dep = declare_dependency(
    link_with: bunny_lib,
    include_directories: inc_dir)
