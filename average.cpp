#include<iostream>
#include<cstdlib>
using namespace  std ;

int main(int argc , char *argv[]){
     if (argc == 1)
       cout << "Please input numbers to find average." << endl ;
      
    else {
        float sum = 0, ans ;
        for (int i = 1 ; i < argc ; i++){
            sum += atof (argv[i]) ; }
         ans = sum /(argc-1) ;

        cout << "---------------------------------\n";
        cout << "Average of" << " " << argc-1 << " numbers = "<< ans << endl;
        cout << "---------------------------------";

        }
    return 0 ;

}
