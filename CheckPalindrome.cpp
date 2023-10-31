#include <bits/stdc++.h> 

char tolowercase(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
        return ch;
    else
        return ch-'A'+'a';
}

bool checkPalindrome(string str)
{
    
    int s = 0;
    int e = str.length()-1;

    while(s<e){
        while(!((str[s]>='a' && str[s]<='z')||(str[s]>='A' && str[s]<='Z')||(str[s]>='0' && str[s]<='9'))){
            if(s<e)
                s++;
            else
                break;
        }
        while(!((str[e]>='a' && str[e]<='z')||(str[e]>='A' && str[e]<='Z')||(str[e]>='0' && str[e]<='9'))){
            if(s<e)
                e--;
            else
                break;
        }
        if(tolowercase(str[s])!=tolowercase(str[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
