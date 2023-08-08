//Compare two strings

#include<iostream>
#include<string.h>
using namespace std;
int strcmp1(char *str1, char *str2)
{
    int diff;
    while (*str1 != '\0')
    {
        if (*str1 != *str2 || *str1 - *str2==-32 ||*str1 - *str2 ==32)
        {
            diff = 1;
            break;
        }
        else
        {
            diff = 0;
            str1++;
            str2++;
        }
    }
    
    return diff;
}
int main(){
   char s1[20];
    char s2[20];

    cout<<"Enter string 1:"<<endl;
    cin.getline(s1,20);

    
    cout<<"Enter string 2:"<<endl;
    cin.getline(s2,20); 
    if(strcmp(s1,s2)==0){
        cout<<"Both strings are same"<<endl;
    }
    else{
        cout<<"Both strings are different"<<endl;
    }
    int count=strcmp1(s1,s2);
    if(count==0){
        cout<<"Both strings are same"<<endl;
    }
    else{
        cout<<"Both strings are different"<<endl;
    }

}
