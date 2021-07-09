//
// file: package.h
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#ifndef BUNNY_PACKAGE_H
#define BUNNY_PACKAGE_H

#ifdef __cplusplus
extern "C"
{
#endif

//
// Macros to control the visibility of functions provided by this package
//
#ifdef BUILDING_BUNNY_PACKAGE
#define BUNNY_PUBLIC __attribute__((visibility("default")))
#else
#define BUNNY_PUBLIC
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

BUNNY_PUBLIC const char *greet(void);

#ifdef __cplusplus
}
#endif

#endif // end of BUNNY_PACKAGE_H
