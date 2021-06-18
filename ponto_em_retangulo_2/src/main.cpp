/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.

int main(void)
{
    int x1, y1, x2, y2, x, y;
    Ponto R1, R2, P;

    while(cin >> std::ws >> x1 >> y1 >> x2 >> y2 >> x >> y){
          if( (x1 == x2) && (y1 == y2) ){
              cout << "invalid" << endl;
          }

          R1.x = x1, R1.y = y1;
          R2.x = x2, R2.y = y2;
          P.x = x, P.y = y;

          if(pt_in_rect(  R1,  R2,  P )==0){
              cout << "inside" << endl;
          }
          else if(pt_in_rect(  R1,  R2,  P )==1){
              cout << "border" << endl;
          }
          else if(pt_in_rect(  R1,  R2,  P )==2){
              cout << "outside" << endl;
          }
    } 

    return 0;
}
