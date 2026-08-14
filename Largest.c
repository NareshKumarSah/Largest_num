# include<stdio.h>
int main(){
    // declear varible
    int arr[] = {4,-3,-6,22,55,2,1,41,3};
    int size = 9; // size of array;

    //assusm arr[0] is largest number;
    int largest = arr[0];

    //using loop ( 1 to size-1) to compair
    for(int i = 1; i< size; i++){

        //compair current to largest
        if(arr[i] > largest){

            //update largest = current
            largest = arr[i];
        }
    }
    
    // print largest
    printf("Largest = %d ",largest);
    return 0;
}