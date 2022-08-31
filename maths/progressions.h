#include <math.h>

// content : formulas about arithmetic and geometric progressions

// arithmetic progressions

// kth term of a progression
double k_arit (double a, double d, int n) {
    return a + d*(n-1);
}
//number of terms
int  number_arit (double a, double d, double l){
    return (l-a)/d +1;
}
//value of first term
double first_arit (double l, double d, int n){
    return l-d*(n-1);
}
//value of distance
double distance_arit (double a, double l, int n){
    return (l-a) / (n-1);
}
//sum of progression
double sum_arit (double a, double d, int n){
    return 0.5*n*(2*a + d*(n-1));
}

// geometric progressions
// kth term
double kth_term_geometric (double a, double r, int k){
    return a * pow(r, k-1);
}
// sum of terms
double sum_term_geometric (double a, double r, int n) {
    return a*( pow(r,n)-1) / (r-1);
}