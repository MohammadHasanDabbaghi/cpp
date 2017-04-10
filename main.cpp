#include <iostream>

using namespace std;

class matrix{//class of matrix x*x

public:
    /*matrix( int inrow = 100 , int incolumn = 100 , int _default = 42 ){//constructor of class matrix overloaded
        row = inrow;
        column = incolumn;//set row & column
        head = new int*[row];//dynamic array
        for ( int i = 0; i < row; i++ ){//dynamic matrix
                *head[i] = new int[column];
        }
        for ( int i = 0; i < row; i++ ){//for set default number to elements
                for ( int j = 0; j < column; j++ ){
                    head[i][j] == _default;
        }
        }//end for
        }//end constructor*/

    ~matrix(){//destructor
        /*delete []row;*/
    }//end destructor

    int set_value(){
        for ( int i = 0; i < 10/*row*/; i++){
            for ( int j = 0; j < 10/*column*/; j++){
                cout << "Please enter the element of row " << i << " and column " << j;
                cin >> row[i][j];
            }
        }
    }

    int get_value(){
        for ( int i = 0; i < 10/*row*/; i++){
            for ( int j = 0; j < 10/*column*/; j++){
                cout << row[i][j] << "\t";
            }
            cout << endl;
        }
    }

private:
    int m[10][10];
    /*int **head;
    int row;//row of matrix
    int column;//column of matrix*/

};//end of class

int main()
{
    matrix x;
    x.set_value();
    x.get_value();
    cout << "Hello world!" << endl;
    return 0;
}
