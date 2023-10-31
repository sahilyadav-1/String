#include <bits/stdc++.h> 
string replaceSpaces(string &s){
  
    string str = "@40";  
    int i = 0;
    while(i<s.size()){
        if(s[i]==' ')
          s.replace(i,1,str);
        i++;
    }
   
    return s;
}
