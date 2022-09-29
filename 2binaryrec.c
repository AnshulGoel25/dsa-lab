#include <stdio.h>

int search(int A[],int low,int high, int key){

     int mid=(low +high)/2;
if(low>high){
return -1;
}
if(key==A[mid]){
return mid;
}
else if(key<A[mid]){
return search(A,low,mid-1,key);
}
else{
return search(A,mid+1,high,key);
}
}
void main(){



    int n;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    int ar[n];
        printf("Enter the elements of array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int tar;
        printf("Enter target element \n");
    scanf("%d",&tar);
   int f= search(ar,0,n,tar);
if(f==-1)
printf("element not found \n");
else
printf("element found at index %d \n",f);
}