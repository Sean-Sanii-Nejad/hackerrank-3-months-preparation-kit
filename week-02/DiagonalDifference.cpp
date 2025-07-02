/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    
    int leftToRight = 0;
    int rightToLeft = 0;
    
    int answer = 0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr[i].size(); j++)
        {
            if(i == j)
            {
                leftToRight += arr[i][j]; 
            }
            if(i + j == arr[i].size()-1)
            {
                rightToLeft += arr[i][j];
            }
        }
    }
    
    answer = abs(leftToRight - rightToLeft);
    return answer;
}