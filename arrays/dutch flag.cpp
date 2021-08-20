   

void sort012(int a[], int n)
{
    int low=0, high=n-1, mid=0;
    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0:
            swap(arr[low],arr[mid]);
            low++;
            mid++;
            break;
    
    case 1:
            mid++;
            break;
            
            case 2:
            swap(arr[mid],arr[high]);
            high--;
            break;
        }
}
}
