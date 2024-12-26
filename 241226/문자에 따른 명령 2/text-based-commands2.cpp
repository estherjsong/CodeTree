#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    int x=0,y=0,dir = 0;

    string s;
    cin >> s;

    for(string::iterator iter=s.begin(); iter!=s.end();iter++){
        switch(*iter){
            case 'L':
                dir=(dir+3)%4;
                break;
            case 'R':
                dir=(dir+1)%4;
                break;
            case 'F':
                x+=dx[dir];
                y+=dy[dir];
                break;
        }
    }
    cout << x << ' ' << y;

    return 0;
}