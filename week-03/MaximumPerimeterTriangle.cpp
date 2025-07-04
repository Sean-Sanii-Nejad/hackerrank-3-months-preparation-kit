/*
 * Complete the 'maximumPerimeterTriangle' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY sticks as parameter.
 */

vector<int> maximumPerimeterTriangle(vector<int> sticks) 
{
    sort(sticks.begin(), sticks.end());
    vector<int> answer = {-1};
    int n = sticks.size();
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            for(int k = j+1; k < n; k++)
            {
                int a = sticks[i];
                int b = sticks[j];
                int c = sticks[k];
                
                if(a + b > c)
                {
                    unsigned int perimeter = a + b + c;
                    unsigned int highest = 0;
                    
                    if(perimeter > highest) // highest perimeter 
                    {
                        answer = {a, b, c};
                        highest = perimeter; 
                    }
                }
            }
        }
    }
    return answer;
}