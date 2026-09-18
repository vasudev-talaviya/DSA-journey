#include<iostream>
#include<vector>

using namespace std;

int search(vector<int>& A, int tar) {

    int st = 0 , end = A.size()-1;

    while(st<=end)
    {

        cout << "\nStaring value:- " << st << endl;
        cout << "Ending value:- " << end << endl;

        int mid = st + (end-st) / 2;

        cout << "Middle value:- " << mid << endl;

        if(A[mid] == tar)
        {
            return mid;
        }
        else if(A[st] <= A[mid]) // left side
        {
            cout << "Left side calling" << endl;
            if(A[st] <= tar && tar <= A[mid] )
            {
                end = mid - 1;
                cout << "ending update" << endl;
            }
            else
            {
                st = mid + 1;
                cout << "starting update" << endl;
            }

        }
        else{       // right side

                cout << "Right side calling" << endl;

                if(A[mid] <= tar & tar <= A[end])
                {
                    st = mid + 1;
                    cout << "starting update" << endl;
                }
                else
                {
                    end = mid - 1;
                    cout << "Ending update" << endl;
                }
        }
    }
    return -1;    
}

int main()
{

    vector<int> array = {10,11,12,4,5,6,7};
    int target = 11;

    int index_found = search(array,target);

    cout << "\nIndex...found:- " << index_found << endl;

    return 1;
}