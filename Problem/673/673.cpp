#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n ){
        char str[140] ;
        getc(stdin) ;
        FOR(i, 0, n){
            stack<char> sta ;
            gets(str) ;
            int lengt = strlen(str) ;
            FOR(j, 0, lengt){
                if ( str[j] == '(' || str[j] == '[' ){
                    sta.push(str[j]) ;
                }else if ( str[j] == ')' ){
                    if ( sta.empty() || sta.top() != '(' ){
                        sta.push('a') ;
                        break ;
                    }
                    sta.pop() ;
                }else if ( str[j] == ']' ){
                    if ( sta.empty() || sta.top() != '[' ){
                        sta.push('a') ;
                        break ;
                    }
                    sta.pop() ;
                }
            }
            if ( sta.empty() ){
                cout << "Yes" << endl ;
            }else {
                cout << "No" << endl ;
            }
        }
    }
    return 0 ;
}
