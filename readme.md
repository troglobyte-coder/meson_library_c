# 🦎 Bunny package

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
and *Linux* users. This project uses [Meson](https://mesonbuild.com/) `0.58.0`
and newer, uses `c18` standards for initial implementation of the package. The
objective by far is usability, security, transparency, and lightweight, packages
for any if not most of your application development needs.

Here's some important information about our mascot which is relevant to the
design and architecture of this project.

*Rabbits are small mammals in the family Leporidae (along with the hare) of the order Lagomorpha (along with the pika). Oryctolagus cuniculus includes the European rabbit species and its descendants, the world's 305 breeds of domestic rabbit. Sylvilagus includes 13 wild rabbit species, among them the seven types of cottontail. The European rabbit, which has been introduced on every continent except Antarctica, is familiar throughout the world as a wild prey animal and as a domesticated form of livestock and pet. With its widespread effect on ecologies and cultures, the rabbit (or bunny) is, in many areas of the world, a part of daily life—as food, clothing, a companion, and a source of artistic inspiration.*

*Although once considered rodents, lagomorphs like rabbits have been discovered to have diverged separately and earlier than their rodent cousins and have a number of traits rodents lack, like two extra incisors.*

## Setup, Compile and Install

* * *

Using this package should be fairly simple just add the git wrap file
in your subprojects directory and include the dependency in your project.

```console
[wrap-git]
directory = bunny
url = https://github.com/bunny-libraries/bunny.git
revision = main

[provide]
bunny = bunny_dep
```


The next step should be to add the package to your Meson project:

```meson
bunny_dep = dependency('bunny')

executable('prog', 'main.c',
    dependencies : [bunny_dep])

```

And finally we setup, and compile the project just like normal.

## Usage of this package

* * *

Here is a simple sample application that should get you up and
running with using this library as soon as possible but to learn
more please view the API documentation thanks.

**Usage in C**:

```c
#include <stdio.h>
#include <stdlib.h>
#include <bunny/package.h>

//
// main is where all good examples start
//
int main(void)
{
    puts(greet());
    return EXIT_SUCCESS;
} // end of function main

```

## Join the developer community

* * *

You may find that the Bunny projects has a community in which you
can keep up to date on the latest features and news. Simply done by
joining [Bunny Projects](https://www.reddit.com/r/bunny_projects/)
subreddit on reddit.

Lastly don't forget to have a cup of virtual coffee. Thanks.
