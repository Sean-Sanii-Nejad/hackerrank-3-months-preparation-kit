/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string formatted;
    
    if(s[8] == 'P')
    {
        string number;
        for(int i = 0; i < 2; i++)
        {
            number+= s[i];
        }
        int hour = stoi(number);
        
        if(hour != 00)
        {
            hour = hour+12;
        }     
        
        formatted += to_string(hour);
        
        for(int i = 2; i < s.size()-2; i++)
        {
            formatted += s[i];
        }
    }
    else 
    {
        string number;
        for(int i = 0; i < 2; i++)
        {
            number+= s[i];
        }
        int hour = stoi(number);
        
        if(hour == 12)
        {
            hour = hour-12;
            formatted += to_string(hour);
            
            for(int i = 2; i < s.size()-2; i++)
            {
                formatted += s[i];
            }
            return formatted;
        }
        
        for(int i = 0; i < s.size()-2; i++)
        {
            formatted += s[i];
        }
    }
    return formatted;
}