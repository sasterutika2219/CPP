/*Pattern is 
    ---*
    --**
    -***
    ****
*/

#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i+j>=3){  //i+j>=n ----logic
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
