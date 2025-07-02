/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    
    int errorCount = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(i % 3 == 0 && s[i] != 'S')
        {
            errorCount++; 
        }
        if(i % 3 == 1 && s[i] != 'O')
        {
            errorCount++; 
        }
        
        if(i % 3 == 2 && s[i] != 'S')
        {
            errorCount++; 
        }
    }
    return errorCount;
}