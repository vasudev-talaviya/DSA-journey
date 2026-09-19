// leetcode 540 problem solve

// Problem find unique number in array 
// mean single numbers many time occure but only one elements are single time this find

// This problem solve basic needs
// 1). Elements are sorted format

#include<iostream>
#include<vector>

using namespace std;

int singleElements(vector<int> arr)
{

    int size = arr.size();
    if(size == 0) return 0;

    int st = 0 , end = size - 1;

    while(st<=end)
    {

        int mid = st + (end - st) / 2;

        if(mid == 0 && arr[0] != arr[1]) return mid;
        if(mid == size-1 && arr[size-1] != arr[size-2]) return mid;

        if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]) return mid;


        if(mid%2 == 0) // even
        {
            if(arr[mid] == arr[mid-1]) // left 
            {
                end = mid - 1;
            }
            else    // right
            {
                st = mid + 1;
            }

        }
        else    // odd
        {
            if(arr[mid-1] == arr[mid]) //  right
            {
                st = mid + 1;
            }
            else // left 
            {
                end = mid - 1;
            }
        }
    }


    return -1;
}


int main()
{

    vector<int> arr = {1,1,2,3,3,4,4,5,5};

    int index = singleElements(arr);

    cout << index << endl;

    return 0;
}