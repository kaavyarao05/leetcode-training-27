#include <iostream>

int main(){
    int a,n;
    std::cin>>a>>n;

    for (int i=0;i<=n;i++){
        if((i%3)==0){
            std::cout<<"Foo"<<"\n";
        }
        else{
            if((i&1)==0){
                std::cout<<"Bar"<<"\n";
            }
            else{
                std::cout<<"Baz"<<"\n";
            }
        }
    }
}