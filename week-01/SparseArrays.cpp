/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY strings
 *  2. STRING_ARRAY queries
 */

vector<int> matchingStrings(vector<string> strings, vector<string> queries) 
{
    vector<int> answer;
    answer.resize(queries.size());
    for(unsigned int i = 0; i < queries.size(); i++)
    {
        for(unsigned int j = 0; j < strings.size(); j++)
        {
            if(strings[j] == queries[i])
            {
                answer[i]++;
            }          
        }
    }
    return answer;
}