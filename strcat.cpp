//Concatenate two strings ......

#include<iostream>
#include<string.h>
using namespace std;

char* strcat1(char* str1, char* str2){
    while(*str1!='\0'){
        str1++;
    }
    while(*str2!='\0'){
        *str1=*str2;
        str1++;
        str2++;
    }
    *str1='\0';
    return str1;
}

int main(){
    char str1[20];
    char str2[20];
    cout<<"Enter first string:"<<endl;
    cin.getline(str1,20);
    //cin.ignore();
    cout<<"Enter Second String:"<<endl;
    cin.getline(str2,20);
    strcat(str1,str2);
    cout<<"concatenate two strings"<<str1<<endl;
    strcat1(str1,str2);
    cout<<"Concatenate String is:"<<str1;
}
