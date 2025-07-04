/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) 
{
    map<int, int> map;
    int pairs = 0;
    
    for(int n : ar)
    {
        map[n]++;
    }
    
    for(auto& m : map)
    { 
        if(m.second % 2 == 0) // even number
        {
            pairs += m.second / 2;
        }
        else                  // odd number 
        {
            pairs += (m.second-1) / 2;
        }
    } 
    
    return pairs;
}