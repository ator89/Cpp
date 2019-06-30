#include <iostream>
using std::cout;
using std::cin;
using std::endl;



int main(){


    char mat[4][5]={{'a','e','i','o','u'},{'1','2','3','4','5'},
        {'Z','X','Y','W','V'},{'6','7','8','9','0'}};

    for(int i = 0; i < 4; i++){
        for(int j = 2; j <4; j++){
           cout << " " << mat[i][j]; 
        }
        cout << endl;
    }

    for(int i = 0; i<4; i++ ){
        if(i == 3){
        for(int j = 0; j<5; j++){
            cout << " " << mat[i][j];
        }
        }
        else{
            for(int k = 2; k < 4; k++){
                cout << " " << endl;
            }
        }
    }

    return 0;
}
