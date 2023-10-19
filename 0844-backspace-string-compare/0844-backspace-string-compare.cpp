class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1,t1;

        for(auto itr:s){
            if(itr=='#'&&s1!=""){
                s1.pop_back();
            }
            else{
                if(itr!='#')
                s1.push_back(itr);
            }
        }

        for(auto itr:t){
            if(itr=='#'&&t1!=""){
                t1.pop_back();
            }
            else{
                if(itr!='#')
                t1.push_back(itr);
            }
        }

        return s1==t1;
    }
};