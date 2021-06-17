#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], int n )
{
    // TODO: Adicione aqui sua solução.

    int equal=0, max, min;
    max = V[0];
    min = V[0];

    for(int i=0; i<n; i++){
        if(max < V[i])
            max = V[i];
        else if(min > V[i])
            min = V[i];
            
        if(V[i] == V[0])
            equal++;
    }
    if(equal==n)
        equal=1;
    else
        equal=0;

    if(n==0){
        return { -1, -1 };
    }
    else if(n==1){
        return { 0, 0 };
    }
    else if(n==2){
        if(V[0]<V[1]){
            return { 0, 1 };
        }
        else if(V[0]>V[1]){
            return { 1, 0 };
        }
        else
            return { 0, 1 };
    }
    else if(n>2 && equal==1){
        return { 0, (n-1) };
    }
    else if(n>2 && equal==0){
        for(int i=0; i<n; i++){
            if(V[i]==max){ 
                max = i;
                break; 
            }
        }
        for(int i=0; i<n; i++){
            if(V[i]==min){ 
                min = i;
                break; 
            }
        }
        return { min, max };
    }

}
