#include <stdio.h>

void main (int argc,char *argv[]){
char c;
int i;
char op0[]={0x15,0xb9,0x05,0xb9};
char op1[]={0x05,0xb9,0x15,0xb9};
char ret[]={0x08,0x95};
	while(EOF!=(c=getchar())){ 
		if (c=='0') write(1,op0,4);
		if (c=='1') write(1,op1,4);
	}
	write(1,ret,2);
}
