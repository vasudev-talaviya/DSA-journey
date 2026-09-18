// leetcode 704 problem solve

#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> arr , int target)
{
    int st = 0 , end = arr.size()-1;
    
    while(st <= end)
    {

        int mid = (st + end) / 2;

        if(target > arr[mid])
        {
            st = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;

}

// recursion throguh solve same question
int Recursion(vector<int> arr , int target , int st , int end)
{

    if(st <= end)
    {
        int mid = st + (end - st ) / 2;

        if(target > arr[mid])
        {
            return Recursion(arr , target , mid+1 , end);
        }
        else if(target < arr[mid])
        {
            return Recursion(arr , target , st , mid-1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
};

int main()
{

    vector<int> arr = {-1,1,0,2,4,6,8,10};
    int target = 10;
    int answer;

    answer = binarySearch(arr,target);
    
    cout << "Which position availble" << target << "Is this Index number :-" << answer << endl;

    int target2 = 4;
    answer = Recursion(arr,target2,0,arr.size()-1);
    
    cout << "Which position availble" << target2 << "Is this Index number :-" << answer << endl;

    return 0;
}