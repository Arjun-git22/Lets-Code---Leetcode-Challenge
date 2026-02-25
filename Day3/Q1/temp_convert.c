double* convertTemperature(double celsius, int* returnSize) {
    double kelvin=celsius+273.15;
    double fahrenheit=(celsius*1.80)+32.00;
    *returnSize=2;
    double* ans=(double*)malloc(sizeof(double)*(*returnSize));
    ans[0]=kelvin;
    ans[1]=fahrenheit;
    return ans;
}
