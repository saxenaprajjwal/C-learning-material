#include <iostream>
using namespace std;

int main(){

    int n = 10;                  
    
    // outer loop 
    for(int i=1;i<=n;i++){
        // inner loop
        for(int j=1;j<=i;j++){
            //work
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}