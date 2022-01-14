# Miok package

## About

* * *

Please add relevant information about your package.

The design of the API has significant impact on its usage. The principle of
information hiding describes the role of programming interfaces as enabling
modular programming by hiding the implementation details of the modules so that
users of modules or packages need not understand the complexities inside the
modules implementation.

Modular programming is a software design technique that emphasizes separating
the functionality of a program into independent, interchangeable modules, such
that each contains everything necessary to execute only one aspect of the
desired functionality.

## Tooling information

* * *

Targeted audience we are building for is *Windows 10*, *MacOSX*, *ChromeOS*
and *Linux* users. This project uses [Meson](https://mesonbuild.com/) `0.60.0`
and newer, uses `c23` standards for initial implementation of the package. The
objective by far is usability, security, transparency, and lightweight, packages
for any if not most of your application development needs.

## Setup, Compile and Install

* * *

Using this package should be fairly simple just add the git wrap file
in your subprojects directory and include the dependency in your project.

```console
[wrap-git]
directory = miok-module
url = https://github.com/miok-modules/module.git
revision = main

[provide]
module = module_dep
```


The next step should be to add the package to your Meson project:

```meson
module_dep = dependency('miko-module')

executable('prog', 'main.c',
    dependencies : [module_dep])

```

And finally we setup, and compile the project just like normal.

## Usage of this package

* * *

Here is a simple sample application that should get you up and
running with using this library as soon as possible but to learn
more please view the API documentation thanks.

**Usage in C**:

```c
#include <stdio>
#include <stdlib>
#include <miko/package.h>


//
// main is where all good examples start
//
int main(void)
{
    printf("%s", greet());
    return EXIT_SUCCESS;
} // end of function main

```

## Join the developer community

* * *

You may find that the projects under the visual cube has a community in which you
can keep up to date on the latest features, apps being developed and news. Simply done by
joining on [Reddit](https://www.reddit.com/r/miok/)

You may find that I have some platforms in which you can follow me and stay updated on what I’m working on.

- Reddit: [Michael Gene Brockus](https://www.reddit.com/u/Native_Oklatopian)
- facebook: [Michael Gene Brockus](https://michaelbrockus.medium.com/)
- linkedin: [Michael Gene Brockus](https://www.linkedin.com/in/michael-brockus)

Lastly don't forget to have a cup of virtual coffee, and happy coding. ☕💻
