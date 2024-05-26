class Solution {
public:

    bool isLate(int cnt){
        if(cnt>=3){
            return true;
        }
        return false;
    }
    bool checkRecord(string s) {

        int absent=0,late=0,flag=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='L'){
                late++;
                if(isLate(late)){
                    flag=1;
                    break;
                }
            }
            else if(s[i]=='A'){
                absent++;
                  if(isLate(late)){
                    flag=1;
                    break;
                }
                late=0;
            }
            else{
                if(isLate(late)){
                    flag=1;
                    break;
                }
                late=0;
            }
        }

        if(flag==1 || absent>1){
            return false;
        }else{
            return true;
        }
    }
};