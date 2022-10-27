/* Problem statement*/

/* find the maximum number of ones in a matrix */


/* logic && intuition */
// The approach is pretty simple that is keep rowindex=any value (0 or -1)  and keep two variable count,maxcount=0
// traverse the whole matrix and when you come across 1 increment the counter
// lastly check if count>maxcount then keep maxcount equal to count
// and rwo index =1  
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
           int rowindex=-1;
     
 
           int maxcount=0;
           for(int i=0;i<N;i++)
           {
               int count=0;
               for(int j=0;j<M;j++){
                   if(Mat[i][j]==1){
                       count++;
                   }
               }
               if(count>maxcount){
               maxcount=count;
               rowindex=i;
              }
           }
           return rowindex;
           
        }
};



int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
