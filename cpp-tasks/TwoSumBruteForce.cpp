
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    vector<int> NumArray;
    int target;

    /* Solution of the problem of brute force*/
    vector<int> GetTwoSumHardWork()
    {
        int term_1, term_2;
        for (int i = 0; i < NumArray.size(); i++)
        {
            if (NumArray[i] < target)
            {
                term_1 = NumArray[i];
                term_2 = target - NumArray[i];
                for (int n = 0; n < NumArray.size(); n++)
                {
                    if (NumArray[n] == term_2)
                    {
                        break;
                    }
                }
                break;
            }
        }
        vector<int> TwoSumSol(2);
        TwoSumSol = {term_1, term_2};

        return TwoSumSol;
    }
};

int main()
{
    Solution Test_1;
    Test_1.target = 14;
    Test_1.NumArray = {7, 6, 7, 1712, 28};

    vector<int> TestAns(2);
    TestAns = {7, 7};

    if (TestAns == Test_1.GetTwoSumHardWork())
    {
        cout << "Test Success!" << endl;
    }
    else
    {
        cout << "Test faild" << endl;
    }
    return 0;
}