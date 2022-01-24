#include<iostream>
using namespace std;

bool countSame(int ctxt[],int cptr[]){
    for(int i=0;i<256;i++){
        if(ctxt[i]!=cptr[i]){
            return false;
        }
    }
    return true;
}

int findAnagram(string txt,string ptr){
    int i,ctxt[256]={0},cptr[256]={0};
    for(i=0;i<ptr.length();i++){
        ctxt[txt[i]]++;
    }
    for(i=0;i<ptr.length();i++){
        cptr[ptr[i]]++;
    }
    if(countSame(ctxt,cptr)){
        return 1;
    }
    for(i=ptr.length();i<txt.length();i++){
        if(countSame(ctxt,cptr)){
            return 1;
        }
        ctxt[txt[i]]++;
        ctxt[txt[i-ptr.length()]]--;
    }
    return -1;
}

int main(){
    string txt,ptr;
    cin>>txt;
    cin>>ptr;
    cout<<findAnagram(txt,ptr);
    return 0;
}