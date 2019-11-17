
float add(float x , float y){
    return x+y;
}

float sub(float x , float y){
    return x-y;
}

double mul(double x , int y){
    return y*x;
}

double div(double x, int y){
    if(y != 0){
        return x/y;
    }
    return -1;
    
}
