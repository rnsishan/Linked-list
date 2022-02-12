//delete first element array

#include <stdio.h>


int del_first(int a[],int n){
    
    int i;
    if(n==0){
        printf("array is empty");
        return n;
    }
    
    for(i=0;i<n;i++){
        a[i]=a[i+1];
    }
    return n-1;
}
int main()
{
    int a[8];
    int n,i;
    printf("enter elements\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    n=del_first(a,n);
    
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
    
    
    return 0;
}

