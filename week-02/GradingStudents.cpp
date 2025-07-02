/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) 
{
    vector<int> roundedGrades;
    roundedGrades.resize(grades.size());
    unsigned int counter = 0;
    unsigned int round = 0;
    for(int n : grades)
    {    
        round = 5 - (n % 5);
        if(round < 3 && n >= 38 && round < 3)
        {
            n += round;
        }
        roundedGrades[counter] = n;
        counter++;
    }
    return roundedGrades;
}