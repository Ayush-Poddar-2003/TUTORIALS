/*

A multi-dimensional array can be termed as an array of arrays that stores homogeneous data in tabular form. 
Data in multidimensional arrays are stored in row-major order.

SYNTAX : data_type array_name[size1][size2]....[sizeN];

Examples: int two_d[10][20];    int three_d[10][20][30]; 

-------------------------- 2D ARRAY -------------------------

Syntax: data_type array_name[x][y];

INITIALIZATION -

        First Method: 
        int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11}

        Second Method: 
        int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};

        Third Method:
        int x[3][4];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 4; j++){
                cin >> x[i][j];
            }
        } 

        Fourth Method(Dynamic Allocation):

        int** x = new int*[3];
        for(int i = 0; i < 3; i++)
        {
            x[i] = new int[4];
            for(int j = 0; j < 4; j++)
            {
                cin >> x[i][j];
            }
        }

*/