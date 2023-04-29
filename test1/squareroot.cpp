#include <iostream>
#include <math.h>

double squareRoot(const double num)
{
    double soln=sqrt(num);
    if (soln != soln){
        return -1.0;
    }else{
        return sqrt(num);
    }

}
//https://lchsk.com/how-to-set-up-googletest-library-from-source
//