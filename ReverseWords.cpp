void reverseWords(string s) {
        
    string temp = "";
    string str = "";

    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            if(temp.length() == 0){
                temp = str;
                str = "";
            }
            else{
                temp = str + " " + temp; 
                str = "";
            }
        }
        else
        {
            str = str + s[i];
        }
    }
    temp = str + " " + temp;

    cout<<temp;
}
