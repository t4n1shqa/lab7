#include <stdio.h>

int swapsies = 0;
int its = 0;

void bubbleSort(int arr[], int n){
  int a, b,temp;
  for (a = 0; a < n-1; a++){
    for (b = 0; b < n-a-1; b++){
      if (arr[b] > arr[b+1]){
        temp=arr[b];
        arr[b]=arr[b+1];
        arr[b+1]=temp;
        swapsies++;
      }
    }
    its++;
    printf("Iteration #%d: %d\n", its, swapsies);
    swapsies=0;
  }
}

void printArray(int arr[], int size){
  for (int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(){
  int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  int n = 9; 
  bubbleSort(arr, n);
  printArray(arr, n);
  return 0;
}

