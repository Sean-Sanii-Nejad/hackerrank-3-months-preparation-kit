/*
* Complete the 'flippingMatrix' function below.
*
* The function is expected to return an INTEGER.
* The function accepts 2D_INTEGER_ARRAY matrix as parameter.
*/
int flippingMatrix(vector<vector<int>> matrix)
{
    int total = 0;
    int maxValue = 0;

    for(int i = 0; i < matrix.size()/2; i++)
    {
        for(int j = 0; j < matrix.size()/2; j ++)
        {
            maxValue = max({matrix[i][j], matrix[i][matrix.size() - 1 - j], matrix[matrix.size() - 1 - i][j], matrix[matrix.size() - 1 - i][matrix.size()- 1 - j]});
            total += maxValue;
        }
    }
    return total;
}