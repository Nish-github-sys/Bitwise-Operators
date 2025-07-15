//NAME: Nishka Ranadive
//PRN: 24070123082
//Exp-4

//Program-1
#include <iostream>
using namespace std;

int main() {
    int a=2;
    int b=7;
    
    int bitwise_and=a&b;
    int bitwise_or=a|b;
    int bitwise_not_a=~a;
    int bitwise_not_b=~b;
    int bitwise_xor=a^b;
    int l_shift_a=a<<4;
    int r_shift_a=a>>3;
    int l_shift_b=b<<4;
    int r_shift_b=b>>3;
    
    cout<<"Bitwise AND:"<<bitwise_and<<endl;
    cout<<"Bitwise OR:"<<bitwise_or<<endl;
    cout<<"Bitwise NOT_a:"<<bitwise_not_a<<endl;
    cout<<"Bitwise NOT_b:"<<bitwise_not_b<<endl;
    cout<<"Bitwise XOR:"<<bitwise_xor<<endl;
    cout<<"Left Shift_a:"<<l_shift_a<<endl;
    cout<<"Right Shift_a:"<<r_shift_a<<endl;
    cout<<"Left Shift_b:"<<l_shift_b<<endl;
    cout<<"Right Shift_b:"<<r_shift_b<<endl;

    return 0;
}


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