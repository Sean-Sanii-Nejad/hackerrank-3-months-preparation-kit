
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    // S split
    // C Combine
    
    // M Method
    // C Class
    // V Variable
    
    string name;
    
    while(getline(cin, name))
    {
        if (!name.empty() && name.back() == '\r') 
        {
            name.pop_back();
        }
        
        if(name[0] == 'S') // Split name
        {
            if (name[2] == 'M') // Method
            {
                string formatted;
                name.erase(0, 4); // remove "S;M;"
                for (int i = 0; i < name.size(); ++i)
                {
                    char c = name[i];
                    if (c == '(' || c == ')') continue; // skip parentheses
                    if (isupper(c))
                    {
                        if (i != 0) formatted += ' ';
                        formatted += tolower(c);
                    }
                    else
                    {
                        formatted += c;
                    }
                }
                cout << formatted << "\n";
            }
            if(name [2] == 'C') // Class
            {
                string formatted;
                name.erase(0, 4);         
                
                for(int i = 0; i < name.size(); i++)
                {
                    char c = name[i];
                    if(isupper(c))
                    {
                        if (i != 0) 
                        {
                            formatted += ' ';
                        }
                        formatted += tolower(c);
                    }
                    else 
                    {
                        formatted += c;
                    }
                }
                cout << formatted << "\n";
            }
            if (name[2] == 'V') // Variable
            {
                string formatted;
                name.erase(0, 4); // remove "S;V;"
                for (int i = 0; i < name.size(); ++i)
                {
                    char c = name[i];
                    if (isupper(c))
                    {
                        if (i != 0) formatted += ' ';
                        formatted += tolower(c);
                    }
                    else
                    {
                        formatted += c;
                    }
                }
                cout << formatted << "\n";
            }
        }
        else // Combine name
        {
            if(name [2] == 'M') // Method
            {
                string formatted;
                name.erase(0, 4);
                bool spaceBefore = false;  
        
                for(char c : name)
                {
                    if(c == ' ')
                    {
                        spaceBefore = true;
                        continue;
                    }
                    
                    if(spaceBefore)
                    {
                        formatted += toupper(c);
                    }
                    else 
                    {
                        formatted += c;
                    }
                    spaceBefore = false;
                }
                
                formatted += '(';
                formatted += ')';
                
                cout << formatted << "\n";
            }
            if(name [2] == 'C') // Class
            {
                string formatted;
                name.erase(0, 4);
                bool spaceBefore = false;  
                int counter = 0;
        
                for(char c : name)
                {
                    if(counter == 0)
                    {
                        formatted += toupper(c);
                        counter++;
                    }
                    else 
                    {
                        if(c == ' ')
                        {
                            spaceBefore = true;
                            continue;
                        }
                        
                        if(spaceBefore)
                        {
                            formatted += toupper(c);
                        }
                        else 
                        {
                            formatted += c;
                        }
                        spaceBefore = false;
                    }
                }
                cout << formatted << "\n";
            }
            if(name [2] == 'V') // Variable
            {
                string formatted;
                name.erase(0, 4);
                
                bool spaceBefore = false;    
                vector<string> names;
                
                for(char c : name)
                {
                    if(c == ' ')
                    {
                        spaceBefore = true;
                        continue;
                    }
                    
                    if(spaceBefore)
                    {
                        formatted += toupper(c);
                    }
                    else 
                    {
                        formatted += c;
                    }
                    spaceBefore = false;
                }
                cout << formatted << "\n";
            }
        }
    }