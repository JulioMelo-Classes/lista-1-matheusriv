#include <iostream>

using namespace std;

const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.

    int countNegative=0, x;

    for(int i=0; i<SIZE; i++){ 
        cin >> x;
        if(x<0)
            countNegative++;
    }

    cout << countNegative << endl;

    return 0;
}
