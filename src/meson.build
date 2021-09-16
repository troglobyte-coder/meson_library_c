ram_lib = static_library('hyper-ram',
    'package.c',
    include_directories: inc_dir,
    gnu_symbol_visibility: 'hidden',
    install: true)

ram_dep = declare_dependency(
    link_with: ram_lib,
    include_directories: inc_dir)
