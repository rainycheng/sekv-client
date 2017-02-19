/* mt19937p.h
 *
 * This is a version of the Mersenne Twister (aka mt19937) that is designed for
 * parallel use. Usage:
 *
 * struct mt19937p myMT19937;
 * sgenrand(seed,&myMT19937);
 * randomNumber = genrand(&myMT19937);
 *
 * Simply create different mt19937p structures for your different streams.
 * Disclaimer & Warning: This has only been lightly tested and has shown that it
 * generates identical sequences as mt19937.c! Use at your own risk!
 *
 * Massaged into parallel for my Austen McDonald <austen@cc.gatech.edu>
 * http://www.prism.gatech.edu/~gte363v/
 * November, 2000
 */

#ifndef MT19937P
#define MT19937P

#define MATRIX_A 0x9908b0df /* constant vector a */
////#define N 624
///* Period parameters */
//#define N 624
//#define M 397
//#define MATRIX_A 0x9908b0df   /* constant vector a */
//#define UPPER_MASK 0x80000000 /* most significant w-r bits */
//#define LOWER_MASK 0x7fffffff /* least significant r bits */
//
///* Tempering parameters */
//#define TEMPERING_MASK_B 0x9d2c5680
//#define TEMPERING_MASK_C 0xefc60000
//#define TEMPERING_SHIFT_U(y)  (y >> 11)
//#define TEMPERING_SHIFT_S(y)  (y << 7)
//#define TEMPERING_SHIFT_T(y)  (y << 15)
//#define TEMPERING_SHIFT_L(y)  (y >> 18)

struct mt19937p {
	unsigned long mt[624];
	int mti;
	unsigned long mag01[2];
};

/* initializing the array with a NONZERO seed */
void sgenrand(unsigned long seed, struct mt19937p* config);

//double /* generating reals */
 unsigned long  /* for integer generation */
genrand(struct mt19937p* config);
#endif
