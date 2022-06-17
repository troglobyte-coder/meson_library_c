//
// Troglobyte stdlib:
// author: Michael Gene Brockus
// mail: <mailto: michaelbrockus@gmail.com>
//
#ifndef TROGLOBYTE_PACKAGE_H
#define TROGLOBYTE_PACKAGE_H

#ifdef __cplusplus
extern "C"
{
#endif

//
// Macros to control the visibility of functions provided by this package
//
#ifdef BUILDING_TROGLOBYTE_PACKAGE
#define TROGLOBYTE_PUBLIC __attribute__((visibility("default")))
#define TROGLOBYTE_LOCAL __attribute__((visibility("hidden")))
#else
#define TROGLOBYTE_PUBLIC
#define TROGLOBYTE_LOCAL
#endif

//
//   PUBLIC APPLICATION INTERFACE
// --------------------------------
//
// Published package with provided public application interface for
// use in the users application. Please note that we are internationally
// targeting c23 standard.
//

TROGLOBYTE_PUBLIC const char *greet(void);

#ifdef __cplusplus
}
#endif

#endif // end of TROGLOBYTE_PACKAGE_H
