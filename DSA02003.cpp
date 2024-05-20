#include<bits/stdc++.h>

int n;
int a[100][100];
std::string s;
int check;
void Try(int i, int j){
    if(i == n-1 && j == n-1){
        std::cout << s << " ";
        check = 1;
        return;
    }
    if(a[i+1][j]){
        s += "D";
        Try(i+1, j);
        s.erase(s.length()-1, 1);
    }
    if(a[i][j+1]){
        s += "R";
        Try(i, j+1);
        s.erase(s.length() - 1, 1);
    }
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        check = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                std::cin >> a[i][j];
            }
        }
        if(!a[0][0])    std::cout << -1;
        else{
            Try(0, 0);
            if(!check)  std::cout << -1;
        }
        std::cout << std::endl;
    }
}