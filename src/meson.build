trog_src = files(
    'package.c')

trog_lib = static_library('troglo_lib-c',
    trog_src,
    include_directories: inc_dir,
    install: true)

trog_dep = declare_dependency(link_with: trog_lib,
    include_directories: inc_dir)
