if get_option('with_tests').enabled()
    unity = dependency('unity')

    test_exe = executable('dummy',
        'test_cases.c',
        dependencies : [unity, trog_dep])

    test('Execute project tests', test_exe)
endif
