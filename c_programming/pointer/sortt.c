#include <stdio.h>

int compire(int a, int b){
    return (a > b)? -1 : 1;
}
void Bubble_sort(int *A,size_t siz,int(*compire)(int,int)){
    int temp;
    for(int i =0; i < siz; i++){
        for(int j = i+1; j < siz; j++){
            if(compire(A[i] , A[j]) > 0){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    
}
int main(){
    int arr[] = {3,8,2,9,6,4};
    int s = sizeof(arr) / sizeof(arr[0]);
    Bubble_sort(arr,s,compire);

    for(int i=0; i < s;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}