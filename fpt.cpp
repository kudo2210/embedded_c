#include<stdio.h>
#include<stdint.h>

int main(){
	
/*	for (char i=0; i<256;i++)
	{
		printf("%d",i);
	}
*/

int numArr[] ={ 1,2,3,4,5,6,7,8,9};
int *ptr = (int*) numArr;
ptr++;
printf("%X" , *ptr);

}
