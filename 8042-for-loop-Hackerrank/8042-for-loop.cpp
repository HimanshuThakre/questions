#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    // Complete the code.
    int a,b; 
    cin >> a >> b;
    string words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
  
    for (int i = a; i <= b; i++) {
        // if (i==1) cout <<"one" << endl;
        // else if (i==2) cout <<"two" << endl;
        // else if (i==3) cout <<"three" << endl;
        // else if (i==4) cout <<"four" << endl;
        // else if (i==5) cout <<"five" << endl;
        // else if (i==6) cout <<"six" << endl;
        // else if (i==7) cout <<"seven" << endl;        
        // else if (i==8) cout <<"eight" << endl;
        // else if (i==9) cout <<"nine" << endl;
        if(i>=1 && i<=9){
            cout << words[i-1] <<endl;
        }
        else if(i >=9){
            if(i % 2 == 0 ){
                cout << "even" << endl;
            }else{
                cout << "odd" << endl;
            }
            
        }
         
        
        
    }
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna