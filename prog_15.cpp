#include<bits/stdc++.h>
using namespace std;


int main(){
    
    string s1 = "apple";
    string s2 = "banana";
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    
    return 0;
}
