int migratoryBirds(vector<int> arr) 
{
    map<int, int, greater<int>> map;
    int id = 0;
    
    for(int n : arr)
    {
        map[n]++;
    }
    
    int highest = 0;
    for(auto& m : map)
    {
        if(m.second > highest)
        {
            highest = m.second;
        }
    }
    
    for(auto& m : map)
    {
        if(m.second == highest)
        {
            id = m.first;
        }
    }
    
    return id;
}