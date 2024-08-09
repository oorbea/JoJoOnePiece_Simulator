#include <iostream>

using namespace std;

int main(){
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            for(int k=0; k<j; k++){
                cout<<"-";
            }
            cout<<"_";
            for(int k=0; k<5-(j+1); k++){
                cout<<"-";
            }
            cout<<endl;
        }
    }
}
