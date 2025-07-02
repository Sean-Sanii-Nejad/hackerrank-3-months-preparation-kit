/*
 * Complete the 'divisibleSumPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY ar
 */

int divisibleSumPairs(int n, int k, vector<int> arr) 
{
    int counter = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr.size(); j++)
        {
            if(i < j && (arr[i] + arr[j]) % k == 0)
            {
                counter++;
            }
        }
    }
    return counter;
}