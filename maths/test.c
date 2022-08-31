#include <stdio.h>
//#include <math.h>
#include "progressions.h"

int main () {

    printf("\ntest of arithmetic progression.\n");
    int first = 12;
    double numb = 4;
    double distance = 3;
    int last = 21;
    printf ("k term is %f\n", k_arit (first,distance,numb));
    printf ("number of terms is %d\n", number_arit (first,distance,last));
    printf ("first term is %f\n", first_arit (last,distance,numb));
    printf ("common difference is %f\n", distance_arit (first,last,numb));
    printf ("sum is %f\n", sum_arit(first, distance, numb));

    printf("\ntest of geometric progression.\n");

    double first_term = 1.0;
    double common_ratio = 2.0;
    int kth = 63;
    printf("le kth term is %f\n", kth_term_geometric(first_term, common_ratio, kth));
    printf("somme = %15.7e\n", sum_term_geometric(first_term, common_ratio, kth));

    return 0;
}