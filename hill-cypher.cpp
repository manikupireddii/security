#include<iostream>
#include<vector.>

void getKeyMatrix(string key,vector<vector<int>> &keyMatrix,int size){
    int k=0;
    for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        keyMatrix[i][j]=key[k]%26;
        k++;
    }
    }
    }
}
vector <int> encrypt(vector<vector<int>> keymatrix,vector<int>messagevecotr intsize){
    vector<int> cipherVector(size,0);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cipherVECTOr[i]+=keymatrix[i][j]*messageVector[j];
        }
        cioherVector[i]=ciphervector[i]%26;
    }
    return ciphervecgor;
}
int main(){
    string key ="GYBNM"
    string message;
    cout<<"enter the 2 letter message (uppercase)";
    cin>>message;
    vector<vector<int>> ketymatrix(2,vector<int<(2));
    vector<vector<int>> keymatrix(2,vector<int>(2));
    vector<Mvector<int>> keymatrix*2,vector<int>(2)
    vecotr<vecotr<int>> keymatirx(2,vector<int>(2))
    vector<vector<int>>keyaotrx(2,vector<int>(2));
    vector<int > messagevector>={
        message[0]%65 ,message [1]%64
    }
    ;
    vecor<int> ciphervector = encrypt(keymatix,messagevector,2);
    cout>>"envryptd messgae" <<char(ciphervector[0]+65)<<char(ciphervector(1)+65);
    <<endl;
    return 0;
}
