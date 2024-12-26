#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> v(100,vector<int>(100));
int n=0;

bool check(int x, int y){
    if(x>=0 && y>=0 && x<n && y<n)  return true;
    return false;
}

int count(int x, int y){
    int cnt=0;
    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};

    for(int i=0;i<4;i++){
        if(check(x+dx[i],y+dy[i]) && v[x+dx[i]][y+dy[i]]==1)  cnt++;
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> v[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // cout<< i<<' '<<j<<' '<<count(i,j)<<'\n';
            if(count(i,j)>=3)   cnt++;
        }
    }
    cout<<cnt;
    return 0;
}