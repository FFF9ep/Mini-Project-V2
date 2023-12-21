#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char mati;
	
	balik :
	printf("Mau Matiin Laptop? (Y / N) : ");
		scanf(" %c", &mati);
		
	if(mati == 'y' || mati == 'Y'){
		printf("Yah Laptopnya Mati Nih....in 5 second...");
		system("shutdown /s /t 5")
	}	else if(mati == 'n' || mati == 'N'){
		printf("Okesip, Good Gajadi Mati Laptopnya");
	}	else{
		printf("\nInput Tidak Valid Silahkan Isi ( Y / N )! ");
		goto balik;
	}
	return 0;
}