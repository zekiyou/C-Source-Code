#include <stdio.h>
#include <stdlib.h>

int*** malloc3d(int length, int width, int height){

    int*** _3d = NULL;
    int** _2d = NULL;
    int* p = NULL;

    if(length>0 && width>0 && height>0){

        int*** _3d = (int***)malloc(sizeof(int**)*height);
        int** _2d = (int **)malloc(sizeof(int*)*length*height);
        int* p = (int *)malloc(sizeof(int)*width*length*height);

        for(int i=0;i<width*length*height;i++){
            *(p+i)=i;
        }

        for(int i=0;i<height;i++){
            _3d[i]=_2d+i*length;
        }

        for(int i=0;i<height*length;i++){
            _2d[i]=p+i*width;
        }


        for(int i=0;i<3;i++){
            printf("%4d",_3d[i][i][i]);
        }

    }



    return _3d;
}



int main()
{

    int*** a=malloc3d(3,3,3);



    return 0;
}
