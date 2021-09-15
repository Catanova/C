
#include "stdio.h"

#define Lower  0
#define Upper 20

/* Private function prototypes */
static int RaiseIntToPower(int n, int k);
/* Main program */
main()
{
    int e;
    for (e = Lower; e <= Upper; ++e) {
        printf(" %2d | %3d |\n", e,
               RaiseIntToPower(e, 2));
             
    }
    return 0;
}
/*
 * ---------------------------------
 * This function returns n to the kth power.
 */
static int RaiseIntToPower(int n, int k)
{
    int i, result;
    result = 1;
    for (i = 0; i < k; i++) {
        result *= n;
    }
    return (result);
}