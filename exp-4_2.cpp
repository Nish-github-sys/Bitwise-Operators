//NAME: Nishka Ranadive
//PRN: 24070123082
//Exp-4

//Program-2
#include <iostream>
using namespace std;

int main() {
    int n=12;
    int bit_reset, bit_set, bit_set_o, bit_reset_o;
    
    cout<<"Enter bit position to be set: ";
    cin>>bit_set;
    bit_set_o=n|(1<<bit_set);
    cout<<"Set_output:"<<bit_set_o<<endl;
    
    cout<<"Enter bit position to be reset: ";
    cin>>bit_reset;
    bit_reset_o=n&(~(1<<bit_reset));
    cout<<"Reset_output:"<<bit_reset_o<<endl;

    return 0;
}


/*==========OUTPUTS==========
-->Program-2:
Enter bit position to be set: 2
Set_output:12
Enter bit position to be reset: 3
Reset_output:4
*/