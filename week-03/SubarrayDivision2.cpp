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
    deque<int> window;
    int count = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(i < m) // starting window
        {
            window.push_front(s[i]); 
        }  
        else
        {
            window.pop_back();
            window.push_front(s[i]);
        }  
        
        int sum = 0;
        for(int j = 0; j < window.size(); j++) // loop window
        {
            sum += window[j];        
        }

        if(sum == d && window.size() == m)
        {
            count++;
        }
    }
    return count;
}