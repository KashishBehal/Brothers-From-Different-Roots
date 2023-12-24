class Solution
{
public:
void inorder(Node *root , vector<int>&v){
    if(root==NULL){
        return ;
    }
    inorder(root->left , v);
    v.push_back(root->data);
    inorder(root->right , v);
}
    int countPairs(Node* root1, Node* root2, int x)
    {
       vector<int>v1;
       vector<int>v2;
       inorder(root1 , v1);
       inorder(root2  , v2);
      int j=v2.size()-1;
      int i=0;
      int c=0;
      while(i<v1.size()  && j>=0 ){
          if(v1[i]+v2[j]==x){
              c++;
              i++;
              j--;
          }
          else if( v1[i]+v2[j]<x){i++;}
          else{
              j--;
          }
      }
      return c;
    }
};
