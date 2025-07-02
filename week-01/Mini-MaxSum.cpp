/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    
    long maxNum{0};
    for(int i = 0; i < arr.size()-1; i++)
    {
        maxNum += arr[i];
    }
    
    long minNum{0};
    for(int i = 1; i < arr.size(); i++)
    {
        minNum += arr[i];
    }
    
    cout << maxNum << " " << minNum << endl;
}