#include <bits/stdc++.h>

using namespace std;
struct TreeNode{
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x){
        val = x;
    }
};

TreeNode* build(vector<int>& pre, vector<int>& in, int pl, int pr, int inl, int inr){
    if(pl >= pr || inl >= inr)
        return NULL;
    int mid = pre[pl];
    int midid = inr, dis = pr;
    for(int i = inl; i < inr; ++i){
        if(in[i] == mid){
            midid = i;
            dis = i - inl;
            break;
        }
    }
    TreeNode * root = new TreeNode(mid);
    root->left = build(pre, in, pl + 1, pl + 1 + dis, inl, midid);
    root->right = build(pre, in, pl + 1 + dis, pr, midid + 1, inr);
    return root;
}

bool f = true;
void print(TreeNode* root){
    if(root == NULL)
        return;
    print(root->left);
    print(root->right);
    if(!f)
        cout << " ";
    cout << root->val;
    f = false;
}

int main()
{
    string s1, s2;
    int tmp;
    getline(cin, s1);
    getline(cin, s2);
    stringstream ss(s1);
    stringstream ss2(s2);
    vector<int> pre, ino;
    while(ss >> tmp){
        pre.push_back(tmp);
    }
    while(ss2 >> tmp){
        ino.push_back(tmp);
    }
    TreeNode* root = build(pre, ino, 0, pre.size(), 0, ino.size());
    print(root);
    cout << endl;
    return 0;
}
/*
2 1 4 3 5
1 2 3 4 5
*/
