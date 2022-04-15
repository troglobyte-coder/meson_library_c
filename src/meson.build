hak_lib = static_library('hak-construct',
    'package.c',
    include_directories: inc_dir,
    gnu_symbol_visibility: 'hidden',
    install: true)

hak_dep = declare_dependency(
    link_with: hak_lib,
    include_directories: inc_dir)
