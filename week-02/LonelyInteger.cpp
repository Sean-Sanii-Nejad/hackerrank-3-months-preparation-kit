/*
 * Complete the 'lonelyinteger' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int lonelyinteger(vector<int> a) {
    unordered_map<int, int>map;
    int answer;
    
    for(unsigned int i = 0; i < a.size(); i++)
    {
        map[a[i]]++;
    }
    
    for(auto& m : map)
    {
        if(m.second <= 1)
        {
            answer = m.first;
        }
    }
    return answer;
}