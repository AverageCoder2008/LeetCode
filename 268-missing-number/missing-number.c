int missingNumber(int* a, int n) {
    int hash[10000]={0};
    for(int i=0;i<n;i++)
    {    hash[a[i]]++;}
    for(int i=0;i<n+1;i++)
    {    if(hash[i]<1)
        {    return i;}}
    return -1;
}