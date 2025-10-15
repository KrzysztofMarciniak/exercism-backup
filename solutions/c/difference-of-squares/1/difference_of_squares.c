#include "difference_of_squares.h"
#define ui unsigned int
unsigned int sum_of_squares(unsigned int number){
    ui sum = 0;
    for (ui x = 0; x <= number; x++){
        sum += (x*x);
    }
    return sum;
}
unsigned int square_of_sum(unsigned int number){
    ui sum = 0;
    for (ui x = 0; x <= number; x++){
        sum += x;
    }
    return (sum*sum); 
}
unsigned int difference_of_squares(unsigned int number){
    ui n1,n2 = 0;
    n1 = square_of_sum(number);
    n2 = sum_of_squares(number);
   return n1-n2;
}