#include<stdio.h>
#include<stdlib.h>

// Write a C program for the implementation operations on an array Insert, Delete, Update, 
// Search and traverse input taken by the user..

int n = 0;
void insertFunction(int a , int *arr){
    arr[n] = a;
    n++;
}

void deleteFunction(int index , int *arr){
    if(index>=n) return;
    for(int i=index ; i<n ; i++){
        arr[i] = arr[i+1];
    }
    n--;
}

void updateFunction(int index , int val , int *arr){
    if(index>=n) return;
    arr[index] = val;
}

int main(){
    
    scanf("%d" , &n);
    int arr[1000];

    for(int i=0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    }

    for(int i=0 ; i<n ; i++){
        printf("%d " , arr[i]);
    }

    printf("\n");


    insertFunction(5, arr); // checking insertion
    for(int i=0 ; i<n ; i++){
        printf("%d " , arr[i]);
    }

    printf("\n");

    deleteFunction(2 , arr); // checking deletion

    for(int i=0 ; i<n ; i++){
        printf("%d " , arr[i]);
    }

    printf("\n");

    updateFunction(2 , 10 , arr); // checking updation

    for(int i=0 ; i<n ; i++){
        printf("%d " , arr[i]);
    }

    printf("\n");




    return 0;
}

