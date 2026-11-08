class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;

        for (int i = 0; i < s1.length(); i++) {
            string path1 = "";
            string path2 = "";

            if (s1[i] != s2[i]) {
                while (s1[i] != s2[i]) {
                    path1 += s1[i];
                    path2 += s2[i];
                    i++;
                }

                i-- ;
                ans.push_back({path1 , path2});

            }
        }
        
        return ans;
    }
};