int* twoSum(int* a, int n, int t, int* returnSize){  
    
    int* result=malloc(2*sizeof(int));
    if(result==NULL)
    {   printf("Memory allocation failed");
        return NULL;
    }
    for(int i=0;i<n;i++)
    {   for(int j=i+1;j<n;j++)
        {   if((a[i]+a[j])==t)
            {   result[0]=i;
                result[1]=j;
                *returnSize=2;
                return result;    
            }
        }
    }
    free(result);
    *returnSize=0;
    return NULL;
}
    