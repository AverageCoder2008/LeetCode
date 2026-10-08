int findMaxConsecutiveOnes(int* a, int n) 
{
    int max=0,count=0;
    for(int i=0;i<n;i++)
    {   if(a[i]==1)
        {    count++;}
        else
        {    count=0;}
        if(count>max)
        {    max=count;}
        printf("%d",max);}
        return max;
}