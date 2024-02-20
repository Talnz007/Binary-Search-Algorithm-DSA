#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = { 1,3,5,4,6,2,9,7,8,20,25 };
    int Num;
    cout << "Enter the number you want to find: ";
    cin >> Num;

    int Start = 0;
    int End = arr.size() - 1;

    for (int i = 0; i < End; i++)
    {
        for (int j = 0; j < End; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    


    while (Start <= End)
    {
        int Mid = (Start + End) / 2;
        if (Num == arr[Mid])
        {
            cout << "Found " << Num << " at index " << Mid << endl;
            break;
        }
        else if (Num > arr[Mid])
        {
            Start = Mid + 1;
        }
        else if (Num < arr[Mid])
        {
            End = Mid - 1;
        }
    }

    if (Start > End)
    {
        cout << "Error, Number not found in the array." << endl;
    }

    return 0;
}
