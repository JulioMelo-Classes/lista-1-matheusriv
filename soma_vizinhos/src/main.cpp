/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>

using namespace std;

int main( void )
{
    // TODO: Adicione seu código aqui. 

    int num1, num2, sum=0;

    while (cin >> num1 >> num2){
        if(num1 == 0 || num2 == 0){
            sum = num1 + num2;
        }
        else if(num2>0){
            for(int i=0; i<num2; i++){
                sum+=num1;
                num1++;
            }
        }
        else if(num2<0){
            for(int i=0; i<abs(num2); i++){
                sum+=num1;
                num1--;
            }
        }
        cout << sum << endl;
        sum = 0;
    }


    return 0;
}
