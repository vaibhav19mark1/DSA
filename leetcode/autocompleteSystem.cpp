#include<iostream>
#include<queue>
#include<vector>
#include<map>
using namespace std;

struct TrieNode{
    bool isEnd;
    map<string,int> freq;
    map<char,TrieNode*> children;
};


class AutoComplete{
    public:
    TrieNode *root,*curr;
    string s;
    AutoComplete(vector<string> sentences,vector<int> times){
        int m=sentences.size(),n=times.size();
        if(m==0 || n==0 || m!=n) return;
        reset();
        root=new TrieNode();
        for(int i=0;i<n;i++){
            insert(sentences[i],times[i]);
        }
    }

    vector<string> input(char c){
        vector<string> res;
        if(curr==NULL) curr=root;
        if(c=='#'){
            insert(s,1);
            reset();
            return res;
        }
        s+=c;
        curr->children[c]=new TrieNode();
        curr=curr->children[c];
        res=findTopK(curr,3);
        return res;
    }

    struct compare{
        bool operator()(pair<int,int> a, pair<int,int> b){
            return a.second>b.second;
        }
    };

    vector<string> findTopK(TrieNode* node,int k){
        vector<string> v;
        if(node->freq.empty()) return {};
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
        for()
    }

    vector<int> insert(string s,int count){
        int n=s.length();
        if(n==0) return {};
        TrieNode *node=root;
        for(int i=0;i<n;i++){
            node->children[s[i]]=new TrieNode();  
            node=node->children[s[i]];
            node->freq[s]+=count;
        }
        node->isEnd=true;
    }

    void reset(){
        curr=NULL;
        s="";
    }
    
    vector<string> input(char c){

    }
};

int main(){
    vector<string> sentences={"i love you", "island","ironman", "i love leetcode"};
    vector<int> times={5,3,2,2};
    AutoComplete a(sentences,times);
    // a.input("i");
}