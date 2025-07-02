/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) 
{
    cout << path;
    int valleyCounter = 0;
    int level = 0;
    
    for(int i = 0; i < steps; i++)
    {
        if(path[i] == 'D')
        {
            level--;
        }
        else
        {
            level++;
        }
        
        if(level == 0 && path[i] == 'U')
        {
            valleyCounter++;
        }
    }
    return valleyCounter;
}