#include <array>

#include <iterator>

using std::iter_swap;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
 /*
 ok!
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    /*codigo*/

    size_t tamanho = arr . size();

    for(int start=0, end=tamanho-1; start<end; start++,end--){
        swap(arr[start], arr[end]);
    }

}