#include <bits/stdc++.h>

using namespace std;
/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) 
{
    int positive{0};
    int negative{0};
    int zero{0};
    
    for(int n : arr)
    {
        if(n > 0)
        {
            positive++;
        }
        
        if(n < 0)
        {
            negative++;
        }
        
        if(n == 0)
        {
            zero++;
        }
    }
    
    double ratioP = (double) positive / arr.size();
    double ratioN = (double) negative / arr.size();
    double ratioZ = (double) zero / arr.size();
    
    cout << setprecision(6) << ratioP << endl << ratioN << endl << ratioZ << endl;
}
