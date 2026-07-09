#include<iostream>
using namespace std;

int main() {
        int n=5;
        
        for(int i=1; i<n; i++){
            for(int j=n; j>=i; j--){
                cout << "* ";
            }

            for(int j=1; j<= (2*i)-2; j++){
                cout << ("  ");
            }

            for(int j=n; j>=i; j--){
                cout << ("* ");
            }
    
            cout << endl;
        }

        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout << "* ";
            }
            for(int j=1; j<=2*(n-i); j++){
                cout << "  ";
            }
            for(int j=1; j<=i; j++){
               cout << "* ";
            }
            cout << endl;
        }
}
