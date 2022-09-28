#include <stdio.h>

int search(int arr[],int l, int tar){

        int start=0,end=l,mid;
while(start<=end){
mid=(start+end)/2;
if(arr[mid]<tar){
    start=mid+1;
}else if(arr[mid]>tar){
    end=mid-1;
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
   int f= search(ar,n,tar);
if(f==-1)
printf("element not found \n");
else
printf("element found at index %d \n",f);
}