#include <stdio.h>

int main()
{
	int say1 , say2 , sonuc , i ;
	printf("CARPIM TABLOSU\n");
	for(say1=1 ; say1<=10 ; say1++)
	{
		i++ ;
		printf("%d ILE CARPIMLAR\n",i );
		for(say2=1 ; say2<=10 ; say2++)
	{
		
		sonuc=say1*say2 ;
		printf("%d X %d = %d \n", say1 , say2 , sonuc );
	}
	}
	
}
