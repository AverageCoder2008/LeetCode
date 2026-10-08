void reverse(int* a,int low,int high)
{   int left=low;
    int right=high;
    while(left<right)
    {   int temp=a[left];
        a[left]=a[right];
        a[right]=temp;
        left++;
        right--;
    }
}
void rotate(int* a, int n, int k) {
    k=k%n;
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
}