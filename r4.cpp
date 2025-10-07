#include<iostream>
using namespace std;
class Solution{
    public:
    void inverted(int n){
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Solution obj;
    int n;
    cout<<"enter a number:";
    cin>>n;
    obj.inverted(n);
    return 0;
}
