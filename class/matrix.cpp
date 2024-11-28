#include <iostream>
using namespace std;
int main (){
    int x,y;
    cin>>x>>y;
    int a[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    int b[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>b[i][j];
        }
    }
    int c[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<c[i][j]<<" ";
        }
    }
    return 0;
}

// Subtraction matrix


// #include <iostream>
// using namespace std;
// int main (){
//     int a[5][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cin>>a[i][j];
//         }
//     }
//     int b[5][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cin>>b[i][j];
//         }
//     }
//     int c[5][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             c[i][j]=a[i][j]-b[i][j];
//         }
//     }
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cout<<c[i][j];
//         }
//     }
//     return 0;
// }


// Multiplication matrix

// #include <iostream>
// using namespace std;
// int main (){
//     int a[5][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cin>>a[i][j];
//         }
//     }
//     int b[5][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cin>>b[i][j];
//         }
//     }
//     int c[5][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             c[i][j]=a[i][j]*b[i][j];
//         }
//     }
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cout<<c[i][j];
//         }
//     }
//     return 0;
// }