/*
    link: 
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define prd(x) cout<<x<<" "
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int ar[n];
        int sum = 0;
        for(int i=0; i<n;i++){
            int temp; cin >> temp;
            ar[i] = temp;
            sum+=temp;
        }

        if(sum%3 == 0){
            cout << "0" << endl;
        }
        else{
            int flag = 0;
            for(int i=0; i<n; i++){
                if((sum-ar[i])%3 == 0){
                    cout << '1' << endl;
                    flag = 1;
                    break;
                }
            }
            if(!flag){
                cout << 3-(sum%3) << endl;
            }
        }
    }

    return 0;
}