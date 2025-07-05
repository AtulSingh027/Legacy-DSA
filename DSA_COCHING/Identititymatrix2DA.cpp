#include <iostream>
using namespace std;

int main()
{
    int nums[3][3];
    bool isIdentity = true; // Assume the matrix is identity initially

    // Input the matrix elements
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the element [" << i << "," << j << "]: ";
            cin >> nums[i][j];
        }
    }

    // Display the original matrix
    cout << "Original matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
    cout << "===================" << endl;

    // Check if the matrix is identity
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                if (nums[i][j] != 1) // Check if diagonal elements are 1
                {
                    isIdentity = false;
                    break;
                }
            }
            else
            {
                if (nums[i][j] != 0) // Check if non-diagonal elements are 0
                {
                    isIdentity = false;
                    break;
                }
            }
        }
        if (!isIdentity)
            break; // If any element is not as expected, break the loop
    }

    // Output the result
    if (isIdentity)
    {
        cout << "The matrix is identity." << endl;
    }
    else                                              
    {                                                    
        cout << "The matrix is not identity." << endl;      
    }        
    return 0;   
}                                                                            

