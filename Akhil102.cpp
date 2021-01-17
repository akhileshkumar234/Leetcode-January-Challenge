/*Name: Akhilesh Kumar
  Roll No:B19CS026
  LeetCode Username: Akhil102*/

class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> a(5,1);
        int ans=0;
       while(n--)
       {
           a[0]+=a[1]+=a[2]+=a[3]+=a[4];
       }
        ans=a[0];
        return ans;
    }
};