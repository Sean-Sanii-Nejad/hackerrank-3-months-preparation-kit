/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

vector<int> rotateLeft(int d, vector<int> arr) 
{
    vector<int> answer;
    answer.resize(arr.size());
    for(int i = 0; i < arr.size(); i++)
    {
        answer[i] = arr[(i+d) % arr.size()];
    }
    return answer;
}