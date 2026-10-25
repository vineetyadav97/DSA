#include <iostream>
#include <string>
using namespace std;
int main(){
   string s;
   cout<<"Enter the string : ";
   getline(cin,s);
   int vowel=0,consonant=0;
   for(int i=0;i<s.length();i++){
    char ch=tolower(s[i]);
    if(ch>='a'&&ch<='z'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowel++;
        }else{
            consonant++;
        }
    }
   }
   cout<<"Vowel : "<<vowel<<endl;
   cout<<"Consonont : "<<consonant<<endl;
   return 0;

}