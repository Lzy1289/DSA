#include<bits/stdc++.h>

void check(){
    std::string s;
    getline(std::cin, s);
    std::stack<char> c;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ')'){
            c.push(s[i]);
        }
        else{
            bool ok = false;
            while(!c.empty()){
                char v = c.top();
                c.pop();
                if(v == '+' || v == '-' || v == '*' || v == '/'){
                    ok = true;
                }
                if(v == '('){
                    break;
                }
            }
            if(!ok){
                std::cout << "Yes";
                return;
            }
        }
    }
    std::cout << "No";
}

int main(){
    int t;
    std::cin >> t;
    std::cin.ignore();
    while(t--){
        check();
        std::cout << std::endl;
    }
}