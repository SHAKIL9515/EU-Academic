#include<stdio.h>
void bubblesort(int array[], int n){
    int i,j,temp;
    for(i=0; i<n-1; i++){
        for(j=0;j<n-1-i;j++){
            if(array[j]>array[j+1]){
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            }
        }
    }
}

int binarysearch(int array[], int n, int key){
 int low=0, high=n-1, mid;
 while(low<=high){
     mid=(low+high)/2;
     
     if(array[mid]==key){
         return mid;
     }else if(array[mid]<key){
         low=mid+1;
     }else{
         high=mid-1;
     }
 }
 return -1;
}

int main(){
    int n,i;
    
    printf("Enter number of Elements: ");
    scanf("%d",&n);
    int array[n];
    
    printf("Enter the Array Elements: \n");
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }

printf("The Unsorted array is: ");
for(i=0; i<n; i++){
    printf("%d ",array[i]);
}

bubblesort(array, n);
printf("\nThe sorted array is: ");
for(i=0; i<n; i++){
    printf("%d ", array[i]);
}
int key, result;
printf("\nEnter the searching elements in the array: ");
scanf("%d", &key);

result = binarysearch(array, n, key);
if(result!= -1){
    printf("Elemnt is found at %d", result);
}else{
    printf("Elements is not found");
}



    
    return 0;
}
