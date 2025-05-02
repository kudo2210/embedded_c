#include<stdio.h>
#include<stdint.h>
int main()
{
	int x=1;
	char *ptr1 = (char*)&x;
	if(*ptr1 ==1)
	{
		printf("littel endian \n");
	 } 
	else printf("big endian /n");
	
	uint8_t data[] = {0x11, 0x22, 0x33, 0x44};
	uint32_t* ptr =  (uint32_t*) data;
	printf("%X",*ptr);

}
