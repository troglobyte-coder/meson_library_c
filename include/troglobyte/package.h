/*
   Troglobyte stdlib:
   author: Michael Gene Brockus
   gmail: <michaelbrockus@gmail.com>
*/
#ifndef TROGLOBYTE_PACKAGE_H
#define TROGLOBYTE_PACKAGE_H

#ifdef __cplusplus
extern "C"
{
#endif

//
//   PUBLIC APPLICATION INTERFACE
// --------------------------------
//
// Published package with provided public application interface for
// use in the users application. Please note that we are internationally
// targeting c23 standard.
//   
const char *greet(void);

#ifdef __cplusplus
}
#endif

#endif
