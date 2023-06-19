nt *arr= new int[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
while(n>0){cout<<arr[n-1]<<" ";
                   n--;        }
//after allocating the memory we must clear memory.
delete arr;
