/*
 * Complete the 'twoArrays' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY A
 *  3. INTEGER_ARRAY B
 */

string twoArrays(int k, vector<int> A, vector<int> B) 
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    vector<int> required;
    int failed = 0;
        
    for(int i = 0; i < A.size(); i++)
    { 
        required.push_back(k - A[i]);
    }
    
    reverse(required.begin(), required.end());
    for(int i = 0; i < A.size(); i++)
    { 
        cout << "B: " << B[i] << " " << " difference: " << required[i] << " " << endl;
        if(B[i] >= required[i])
        {
            
        }
        else
        {
            failed ++;
        }
    }
    return failed > 0 ? "NO" : "YES";
}