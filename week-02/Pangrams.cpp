/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) 
{
    map<char, int> map;
    int counter = 0;
    
    for(char c = 'a';  c <= 'z'; c++)
    {
        map.insert(make_pair(c, 0));
    }
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ') continue;
        map[tolower(s[i])]++;
    }
    
    for(auto& m : map)
    {
        if(m.second > 0)
        {
            counter++;
        }
    }
    return counter >= 26 ? "pangram" : "not pangram";
}