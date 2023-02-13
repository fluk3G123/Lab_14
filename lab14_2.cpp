#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void showImage(const bool A[N][M]){
    cout << "------------------------------------------------------------------------\n";
    for (int j = 0 ; j <30 ; j++){
        cout << "|";
        for (int i = 0 ; i < 70 ; i ++ ){
            if(A[j][i]==1) {
            cout << '*';
            continue;
            }
            cout << " ";
        }
        cout << "|\n";
    }
    cout << "------------------------------------------------------------------------\n";
}

void updateImage(bool A[N][M],int S,int X,int Y){
    for (int j = 0; j < 30; j++)
    {
        for (int i = 0; i < 70; i++)
        {
           if (sqrt(pow(j-X,2) + pow(i-Y,2))<= S-1 ){
            A[j][i] = 1 ;
           }
        }
    }
}
