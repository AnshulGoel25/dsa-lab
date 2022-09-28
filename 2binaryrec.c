#include <stdio.h>

int search(int arr[],int start,int l, int tar){

        int end=l,mid;
while(start<=end){
mid=(start+end)/2;
if(arr[mid]<tar){
    return(arr,mid+1,l,tar);
}else if(arr[mid]>tar){
    return(arr,start,mid-1,tar);
}else{
    return mid;
}

}
 
    return -1;
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