/*
 * Complete the 'pickingNumbers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int pickingNumbers(vector<int> a) 
{
    sort(a.begin(), a.end());
    
    int highest = 0;
    
    int i = 0;
    int j = 1;
    
    while(j < a.size() && i < a.size())
    {
        if(abs(a[i] - a[j]) <= 1)
        {
            j++;
            if(j == a.size())
            {
                if(j - i > highest)
                {
                    highest = abs(j - i);
                }
            }
        }
        else 
        {
            if(j - i > highest)
            {
                highest = abs(j - i);
            }
            i++;
        }
    }
    return highest;
}