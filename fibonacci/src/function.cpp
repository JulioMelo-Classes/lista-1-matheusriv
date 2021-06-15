#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.

    int sum = 0, a = 0, b = 1;
    
    std::vector<unsigned int> fib_vector;

    while(true){
        if(sum>0)
            fib_vector.push_back(sum);
        a = b; 
        b = sum;
        sum = a + b;
        if(sum>=n)
            break;
    }

    return fib_vector;
}
