#include<iostream>
#include<string.h>
using namespace std;
char* strcpy1(char* str1, char* str2){
    while(*str1!='\0'){
        *str2=*str1;
        str1++;
        str2++;
    }
    *str2='\0';
    return str2;
}

int main(){
    char str1[20];
    char str2[20];

    cout<<"Enter string"<<endl;
    cin.getline(str1,20);

    strcpy(str2,str1);
    cout<<"String is: "<<str2<<endl;

    strcpy1(str1,str2);
    cout<<"copied string: "<<str2<<endl;
}
