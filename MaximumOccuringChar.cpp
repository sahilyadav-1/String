class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string s)
    {
        // Your code here
        vector<int> arr(26,0);
        int number;
    
        for(int i=0; i<s.length(); i++){
            number = s[i] - 'a';
            arr[number]++;
        }
        
        char finalAns = distance(arr.begin(),max_element(arr.begin(),arr.end())) + 'a';
        return finalAns; 
    }

};
