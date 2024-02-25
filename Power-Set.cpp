class Solution{
	public:
	    void help(vector<string> &ans,string temp,string s,int index){
	        if(temp.size()!=0)
	            ans.push_back(temp);
	        for(int i=index;i<s.size();i++){
	            help(ans,temp+s[i],s,i+1);
	        }
	    }
		vector<string> AllPossibleStrings(string s){
		    vector<string> ans;
		    string temp;
		    help(ans,temp,s,0);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};
