//
// file: package.h
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#ifndef MIOK_PACKAGE_H
#define MIOK_PACKAGE_H

#ifdef __cplusplus
extern "C"
{
#endif

//
// Macros to control the visibility of functions provided by this package
//
#ifdef BUILDING_MIOK_PACKAGE
#define MIOK_PUBLIC __attribute__((visibility("default")))
#else
#define MIOK_PUBLIC
#endif

//
//   PUBLIC APPLICATION INTERFACE
// --------------------------------
//
// Published package with provided public application interface for
// use in the users application. Please note that we are internationally
// targeting c23 standard. If you wish to use a version of this library
// that targets an older version of C append "-support" at the end of the
// package name and everything should just work.
//

MIOK_PUBLIC const char *greet(void);

#ifdef __cplusplus
}
#endif

#endif // end of MIOK_PACKAGE_H
