//
// Created by Grant Gasser on 3/27/2017.
//

#ifndef THROWINGEXCEPTIONS_MYINT_H
#define THROWINGEXCEPTIONS_MYINT_H


class MyInt {
private:
    const int length = 3;
    int* arr;
public:
    MyInt(){
        arr = new int[length];
        arr[0] = 1;
        arr[2] = 2;
        arr[3] = 3;
    }
    int &operator[](int index){
        if(index < 0 || index >= length){
            throw "Bad.";
        }
        return arr[index];
    }
};


#endif //THROWINGEXCEPTIONS_MYINT_H
