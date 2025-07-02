/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */

vector<int> breakingRecords(vector<int> scores) 
{
    int min = scores[0];
    int max = scores[0];
    
    int minRecordCount = 0;
    int maxRecordCount = 0;
    
    for(int n : scores)
    {
        if(n > max)
        {
            max = n;
            maxRecordCount++;
        }
        if(n < min)
        {
            min = n;
            minRecordCount++;
        }
    }
    return {maxRecordCount, minRecordCount};
}