//Bracket Matching 2

#include <iostream>
#include <string>
#include <stack>

using namespace std;



string open="{[(<";

string close="}])>";



//function to check matching brackets  modified to replace if/else ladder with a loop

int matchingPair(char a, char b)

{

for(int j=0; j<open.length(); j++){

if(a==open[j] && b==close[j])

return 1;

}

return 0;

}



int isOpen( char symb)			//defined to simplify testing for opening symbols

{

for(int j=0; j<open.length(); j++){

if(symb==j)

return 1;

}

return 0;

}



int main()

{

    stack<char> st;

    string s;

    cout<<"Enter the bracket sequence\n";

    getline(cin,s);



    for (int i = 0; i < s.length(); i++) {
		
		if(s[i] != ' '){
			if (s[i] == '(' || s[i] == '{' || s[i] == '['|| s[i] == '<') {
	
	            st.push(s[i]);
	
	        } else if (st.empty() || !matchingPair(st.top(),s[i])) {
	
	            cout<<"Not a matching pair\n";
	
	            break;
	
	        } else {
	
	            st.pop();
	
	        }	
		}
        

    }



    if(st.empty())

        cout<<"Brackets are balanced and matched\n";

        return 0;

}