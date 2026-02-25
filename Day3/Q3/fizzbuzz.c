char** fizzBuzz(int n, int* returnSize) {
    *returnSize=n;
    char** ans=(char**)malloc(sizeof(char*)*n);
    for(int i=0;i<n;i++){
        ans[i]=(char*)malloc(12*sizeof(char));
        int num=i+1;
        if(num%3==0 && num%5==0){
            strcpy(ans[i],"FizzBuzz");
        }
        else if(num%3==0){
            strcpy(ans[i],"Fizz");
        }
        else if(num%5==0){
            strcpy(ans[i],"Buzz");
        }
        else{
            sprintf(ans[i],"%d",num);
        }
    }
    return ans;
}
