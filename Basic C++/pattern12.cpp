#include <iostream>
using namespace std;
/*
for 5
A B C D E 
A B C D E
A B C D E
A B C D E
A B C D E 
*/
int main(){
    int n;
    cout << "Enter a number: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch = 'A'+j -1;
            cout << ch <<" ";
        }
        cout <<endl;
    }
    return 0;
}