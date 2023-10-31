#include<iostream>
#include<string.h>
using namespace std;

int length(char name[]){
    int length = 0;
    int index = 0;
    while(name[index]!='\0'){
        length++;
        index++;
    }
    return length;
}

int main(){
  char name[25] = "sahil yadav";
  cout<<length(name);
  return 0;
}
