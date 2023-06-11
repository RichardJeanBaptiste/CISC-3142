#include <iostream>

using namespace std;

bool isPalindrome(string x);


int main() {
    
    cout << isPalindrome("abcdefgh") << "\n";
    cout << isPalindrome("madam") << "\n";
}


bool isPalindrome(string x){

    for (int i = 0; i < x.length(); i++){

        if(i == 0){
            //cout << x[i] << " " << x[x.length() - 1] << "\n";
            
            if(x[i] != x[x.length() - 1]){
                return false;
            }
            
        }else {
            //cout << x[i] << " " << x[x.length() - i - 1] << "\n";
            
            if(x[i] != x[x.length() - i - 1] ){
                return false;
            }
            
        }
        
    }
    
    return true;
}

