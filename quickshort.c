#include <stdio.h>

void swap(int *x,int *y);
void quickShort(int array[], int length);
void quickShort_recusion(int array[], int low, int high);
int partition(int array[], int low, int high);


int main(){
	
	int a[] = {18, 7, 24, 11, 6, 28, 15, 5, 30, 10, 12, 22, 3, 25, 14, 4, 29, 9, 19, 21, 2, 8, 20, 26, 16, 23, 27, 13, 1, 17};
	int length = 30;
	int i;
	
	quickShort(a, length);
	
	for (i = 0; i < length; i++)
		printf ("%d ", a[i]);
	printf ("\n ");
	
	
	return 0;
}

void swap(int *x, int *y){
	
	int temp = *x;
	*x = *y;
	*y = temp; 
}

void quickShort(int array[], int length){
	
	quickShort_recusion(array, 0, length - 1);
}

void quickShort_recusion(int array[], int low, int high){
	
	if (low < high){
		
		int pivot_index = partition(array, low, high);
		quickShort_recusion(array, low, pivot_index - 1);
		quickShort_recusion(array, pivot_index + 1, high);
	}
}

int partition(int array[], int low, int high){
	
	int pivot_value = array[high];
	
	int i = low;
	
	int j;
	
	for(j = low; j < high; j++){
		if (array[j] <= pivot_value){
			swap(&array[i], &array[j]);
			i++;
		}
	}
	
	swap(&array[i], &array[high]);
	
	return i;
}


