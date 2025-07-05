/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */
 
 bool isFactor(int number, vector<int> a, vector<int> b)
 {
    for(int i = 0; i < a.size(); i++)
    {
        if(number % a[i] != 0) // check if a[i] is not a factor of number
        {
            return false;
        }
    }
    
    for(int i = 0; i < b.size(); i++)
    {
        if(b[i] % number != 0) // check if number is not a factor of b[i]
        {
            return false;
        }
    }
    return true;
 }

int getTotalX(vector<int> a, vector<int> b) 
{
    int start = a[a.size()-1];
    int end = b[0];
    
    int count = 0;
    
    for(int i = start; i < end+1; i++)
    {
        if(isFactor(i, a , b))
        {
            count++;
        }
    }
    return count;
}