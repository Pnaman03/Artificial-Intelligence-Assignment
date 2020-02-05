#include<iostream>
#include<bits/stdc++.h>

using namespace std;
typedef pair<int,vector<vector<int>>> p;

// checking safe position for queen
bool checkPosition(vector<vector<int>> &v,int row, int col){
    int i, j;
    // checking safe position in the  left
    for (i = 0; i < col; i++) 
        if (v[row][i]) 
            return false; 
    // checking safe postion in the left upward
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (v[i][j]) 
            return false; 
    // checking safe positon in the left downward
    for (i = row, j = col; j >= 0 && i < 8; i++, j--) 
        if (v[i][j]) 
            return false; 
    //if the position is safe then return true
    return true; 
}
// in priority queue childs at same level has same priority.
void ucs(priority_queue<p,vector<p>,greater<p>> &open, vector<vector<int>> &v){
    // push blank chess board and cost = 0 in open
    open.push(make_pair(0,v));
    int k = 1;
    while(!open.empty()){
        for(int j = 0; j < 8; ++j){
            p storePair = open.top();
            vector<vector<int>> vec = storePair.second;
            int t = storePair.first; // column number
            if(checkPosition(vec,j,t)){  //  if position is feasible
                if(t == 7){ // since last queen so solution is ready. so we print it.
                     vec[j][t] = 1;
                     
                     cout << "solution : "<< k << endl;
                     ++k;
                    
                     for(auto it : vec){
                        for(auto i : it){
                            cout << i << " ";
                        }
                        cout << endl;
                    }
                    cout << endl;
                }else{ 
                    vec[j][t] = 1;
                   
                    open.push(make_pair(t+1,vec)); // pushing the current state in queue
                }  
            }
        }
        open.pop();        
    }
}


int main(){
   
    priority_queue<p,vector<p>,greater<p>> open;   //priority queue for storing pairs (cost and pointer to chess board) but cost = 1 per queen
    
    vector<vector<int>> v(8,vector<int>(8,0)); // create 8X8  blank chess board 
    ucs(open,v);
}
