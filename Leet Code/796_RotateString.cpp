#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool rotateString(string s, string goal) {
    if (s == goal)
        return true;
    int i = s.length();
    do{
        char x = s[0];
        s = s.substr(1) + x;
        if (s == goal)
            return true;
        i--;
    }while(i != 0);
    return false;
}

int main(){
    string s, goal;
    try
    {
        cin >> s >> goal;
        if (s.length() < 1 || s.length() > 100 || goal.length() < 1 || goal.length() > 100 )
            throw invalid_argument("Invalid length (between 1 to 100)"); 
        
        for (char c : s) {
            if (!islower(c)) {
                throw invalid_argument("String `s` contains invalid characters.");
            }
        }
        for (char c : goal) {
            if (!islower(c)) {
                throw invalid_argument("String `goal` contains invalid characters.");
            }
        }

        if (rotateString(s, goal)) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    catch(const invalid_argument& e){
        cerr << e.what()<< '\n';
    }
    catch(const exception& e)
    {
        cerr << "An error occured" << '\n';
    }
    
}