class Solution {
public:
    bool isPalindrome(string s) {

string st="";
        for(int i=0;i<s.size();i++){

           if(isalnum(s[i])){
                st.push_back(tolower(s[i]));
            }


        }

        int i=0;
        int j=st.size()-1;

        while(i<=j){

            if(st[i]==st[j]){
                i++;
                j--;
            }
            else{
                return false;
            }

        }
        
        return true;
    }
};
