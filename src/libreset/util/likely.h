#ifndef __LIKELY_H__
#define __LIKELY_H__

/**
 * @file likely.h
 *
 * This file contains the likely() and unlikely() macro definitions
 */

#ifdef __GNUC__

#define likely(x)   __builtin_expect(!!(x),1)
#define unlikely(x) __builtin_expect(!!(x),0)

#else

#define likely(x)   (x)
#define unlikely(x) (x)

#endif //__GNUC__

#endif
