#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

//    Function should shift elements in array in the left direction keeping
//    elements in the array like circular-buffer.
//    Example:
//    a=[1, 2, 3, 4, 5]
//    shift(a, 5, 2)
//    a=[3, 4, 5, 1, 2]
//    DoD: a) Function body is implemented with all requirements.
//         b) Function is tested.
void shift_buffer(int16_t* buff, int8_t size, int8_t shift){
    int16_t *secondBuffer = (int16_t*)malloc(sizeof(int16_t)*size);
	//wypisanie dla testu
    printf("Przed: ");
    for(int i=0;i<size;i++)
    {
        printf("%d",buff[i]);
    }
	
	    for(int8_t i=0; i < size; i++){
		//printf("%d a size to: %d ",i+shift, size);
		if(shift >= 0){
			if(i+(shift%size) < size){
				
			    secondBuffer[i] = buff[i+shift%size];
			}
			
			else secondBuffer[i] = buff[i+(shift%size)-size];
		} else {
			if (i+(shift%size) < 0){
			secondBuffer[i] = buff[size+(shift%size)+i];			
			}
			else secondBuffer[i] = buff[i+(shift%size)];
		  }
	    }
	
	//wypisanie dla testu
	printf("\nPrzesuniecie o %d w lewo.", shift);
    printf("\nPo: ");
    for(int i=0;i<size;i++)
    {
	buff[i]=secondBuffer[i]; //zmiana pozycji w orginale
        printf("%d",buff[i]);
    }

    printf("\n");
};
int main(){
    int16_t a[] = {1,2,3,4,5};

    shift_buffer(a, 5, -11);

    return 0;
}