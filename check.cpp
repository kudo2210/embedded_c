#include <iostream>
using namespace std;

void bit_set(uint32_t &reg, int n)
{
    reg |= (1 << n);  // Use |= to set the nth bit to 1
    cout << "After function: ";
    cout << reg << endl;
}

void  clear_bit(uint32_t &reg ,int n)
{
	reg &= ~(1<<n);
	cout <<"After function:";
	cout<<reg;
}

 void toggleBit(uint32_t &reg, int n){
 	reg ^= ~(1<<n);
 	cout<<"After funtion";
 	cout<<reg;
 }

bool isBitSet(uint32_t reg, int n)
{
    uint32_t temp =reg;
    reg|=(1<<n);
    if(temp == reg) return true;
    else return false;
}

bool isBitSet2(uint32_t reg, int n)
{
    // Check if the nth bit is set (1)
    if (reg & (1 << n) )  // If the nth bit is 1, the result will be non-zero
        return true;
    else
        return false;
}


int main()
{
    uint32_t reg;
    cout << "Enter register value: ";
    cin >> reg;
    int position;
    cout << "Enter bit position: ";
    cin >> position;
    
    if(isBitSet(reg, position)) 
	{
		cout<<"set";
		
	}else cout<<"reset";
    return 0;
}

