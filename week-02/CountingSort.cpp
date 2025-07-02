/*
 * Complete the 'countingSort' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> countingSort(vector<int> arr) 
{
    map<int, int>map;
    vector<int> arrIncrements;
    vector<int> exists;

    for(int i = 0; i < 100; i++)
    {
        map[i]+=0;
    }
    
    for(int i = 0; i < arr.size(); i++)
    {
        map[arr[i]]++;
    }
    
    for(auto& m : map)
    {
        arrIncrements.push_back(m.second);
    }
    return arrIncrements;
}