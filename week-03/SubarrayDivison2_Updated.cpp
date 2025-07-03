/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

int birthday(vector<int> s, int d, int m) 
{
    int count = 0;
    int sum = 0;
    
    for(int i = 0; i < m-1; i++)
    {
        sum += s[i]; // Add
    }
     
    for(int i = 0; i < s.size()-m+1; i++)
    {
        sum += s[m+i-1]; // Add
        if(sum == d)
        {
            count++;
        }
        sum -= s[i];  // Sub
    }
    return count;
}