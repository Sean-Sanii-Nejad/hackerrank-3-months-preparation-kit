/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p) 
{
    int countFromFront = 0;
    int countFromBack = 0;
    
    for(int i = 1; i <= n ; i++) // Front of book
    {
        if(i == p)
        {
            break;
        }
        if(i % 2 != 0) // odd number
        {
            countFromFront++;
        }
    }
    
    for(int i = n; i >= 0 ; i--) // Back of book
    {
        if(i == p)
        {
            break;
        }
        if(i % 2 == 0) // even number
        {
            countFromBack++;
        }
    }
    
    return countFromFront < countFromBack ? countFromFront : countFromBack;
}