/*
* Complete the 'findMedian' function below.
*
* The function is expected to return an INTEGER.
* The function accepts INTEGER_ARRAY arr as parameter.
*/
int findMedian(vector<int> arr) {
 sort(arr.begin(), arr.end());
 int middle = arr.size();

 return arr[middle/2];
}
