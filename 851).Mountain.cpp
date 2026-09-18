// leetcode 851 problem statments

#include<iostream>
#include<vector>

using namespace std;

int mountain(vector<int> arr)
{

    int st = 1;
    int end = arr.size() - 2;

    cout << endl;

    while(st<=end)
    {
        int mid = st + (end - st) / 2;

        cout << "\n\tIndex :-" << mid << " value :-" << arr[mid] << endl;
        cout << "\tStarting :-" << st << endl;
        cout << "\tEnd :-" << end << endl;


        if(arr[mid] > arr[mid - 1] && arr[mid+1] < arr[mid])
        {
            return mid;
        }
        else if ( arr[mid] < arr[mid-1]  ) // left side search
        {
            end = mid-1;
        }
        else if(arr[mid] < arr[mid+1]) // right side search
        {
            st = mid + 1;
        }


    }

    return -1;

};


int main()
{

    vector<int> arr = {0,3,10,9,5,2};
    // vector<int> arr = {1,2,3,8,7};
     

    int index = mountain(arr);


    cout << " Index number {"<< index << "} Is Highest peak of the mountain" << "Value is :-" << arr[index];

    return 0;
}