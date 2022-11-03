class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //strs es lo que me dan 
        int count=0, min=1000;
        string str;

        int lon = strs.size();
        if(lon == 0) return "";
        if(lon == 1) return strs[0];
        
        for(int i = 0; i < lon; i++){
            int len = strs[i].size();
            if(len < min){
                min = len;
                str = strs[i];
            }
        }

        for(int i = 0; i < min; i++ ){
            for(int j = 0; j < strs.size(); j++){
                if(strs[j][i] != str[i]){
                    return str.substr(0,count);
                }
            }
            count++;
        }
        return str.substr(0, count);
    }
};