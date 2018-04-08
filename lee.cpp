#include <fstream>
#include <iostream>
#include <cstdlib>
  
using namespace std;
  
long int m[100][100];
unsigned int n = 0;
unsigned int x,y;
unsigned int x1,y1;
  
void ReadData (void);
void ShowData (void);
void Lee (int k, int a, int b);
  
int main()
{  
    ReadData ();
    Lee (0, x, y);

    cout << endl << endl <<"Final matrix..." << endl;
    ShowData ();
      
    cout << m[x1][y1] << " steps to get from point: " << endl
        << "(" << x << "," << y << ") to point: "
        << "(" << x1 << "," << y1 << ")" << endl;
        
    system("read");
}
  
void ShowData (void)
{
    unsigned int i, j;
    for (i = 1; i < n+1; ++i)
    {
        for (j = 1; j < n+1; ++j)
        {  
            cout << m[i][j] << ' ';
        }
        cout << endl << endl;
    }
}
  
void ReadData (void)
{
    unsigned int i, j;
    fstream fin("matrix.in", ios::in);
    fin >> n;
    for (i = 1; i < n+1; ++i)
        for (j = 1; j < n+1; ++j)
        {
            fin >> m[i][j];
        }
    fin.close();

    ShowData ();
    cout << endl << endl;   
    
    cout << "Starting point coordinates: " << endl;
    cout << "x="; cin >> x;
    cout << "y="; cin >> y;
    m[x][y] = 0;
    cout << "Ending point coordinates: " << endl;
    cout << "x1="; cin >> x1;
    cout << "y1="; cin >> y1;
}
  
void Lee (int k, int x, int y)
{
    if(x+1 < n+1){
        // Go down...
        if(m[x+1][y] > k+1)
        {
            if(m[x+1][y] == 100){
                m[x+1][y] = k+1;
                Lee (k+1, x+1, y);
            }else{
                m[x+1][y] = k+2;
                Lee (k+2, x+1, y);
            }
        }
    }
    
    if(x-1 > 0){
        // Go up...
        if(m[x-1][y] > k+1)
        {
            if(m[x-1][y] == 100){
                m[x-1][y] = k+1;
                Lee (k+1, x-1, y);
            }else{
                m[x-1][y] = k+2;
                Lee (k+2, x-1, y);
            }
            
        }
    }

    if(y+1 < n+1){
        // Go right...
        if(m[x][y+1] > k+1)
        {
            if(m[x][y+1] == 100){
                m[x][y+1] = k+1;
                Lee (k+1, x, y+1);
            }else{
                m[x][y+1] = k+2;
                Lee (k+2, x, y+1);
            }
        }
    }

    if(y-1 > 0){
        // Go left...
        if(m[x][y-1] > k+1)
        {
            if(m[x][y-1] == 100){
                m[x][y-1] = k+1;
                Lee (k+1, x, y-1);
            }else{
                m[x][y-1] = k+2;
                Lee (k+2, x, y-1);
            }
        }
    }
}