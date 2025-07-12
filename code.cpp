class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        string ans = "";
        for(int i=0;i<chars.size()-1;i++){
            if(chars[i]==chars[i+1]) count++;
            else{
                if(count>1){
                    ans+=chars[i];
                    ans+=to_string(count);
                }
                else ans+=chars[i];
                count = 1;
            }
        }
        if(count>1){
            ans+=chars[chars.size()-1];
            ans+=to_string(count);
        }
        else ans+=chars[chars.size()-1];
        chars.clear();
        for(int i=0;i<ans.size();i++) chars.push_back(ans[i]);
        return ans.size();
    }
};
