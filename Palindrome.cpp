//Check given string is palindrome or not

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="MADAM";
    string rev="";
    int len=s.length();
    rev.resize(len);
    for(int i=0,j=len-1;i<len ; i++,j--){
        rev[i]=s[j];
    }
    rev[len]='\0';
    cout<<rev<<endl;

    if(s.compare(rev)==0){
        cout<<"Given string is Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }

    return 0;
}
