/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().
/*
blz
*/
int main(void)
{
    int x;
    float count=0, countRange[] = {0,0,0,0,0};

    while(cin >> std::ws >> x){
        count++;
        if(x>=0 && x<25){
            countRange[0]++;
        }
        else if(x>=25 && x<50){
            countRange[1]++;
        }
        else if(x>=50 && x<75){
            countRange[2]++;
        }
        else if(x>=75 && x<100){
            countRange[3]++;
        }
        else{
            countRange[4]++;
        }
    } 

    for(int i=0; i<5; i++){
        cout << std::setprecision(4) << (countRange[i] * 100)/count << endl;
    }

    return 0;
}
