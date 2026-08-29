class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "" ;
        for(auto x : strs){
            res += to_string(x.length()) ;
            res += '#' ;
            res += x ;
        }
        return res ;
    }

    vector<string> decode(string s) {
        vector<string>result ;
        int i = 0 ;
        while(i < s.length()){
        int j = i ;
        while(s[j] != '#'){
            j++ ;
        }
        // int len = stoi(s.substr(i,j-i));
        int len = stoi(s.substr(i, j - i));
        j++ ;
        result.push_back(s.substr(j,len));
        i = j+len ;
        
        }
        return result ;

    }
};
