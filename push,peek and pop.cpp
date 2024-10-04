#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> m){
   while(!m.empty()){
        cout<<" "<<m.top()<<endl ;
      m.pop();
    }  
    cout<<endl;
}
int main(){
    stack<int> m;
    m.push(100);
    m.push(200);
    m.push(300);
    m.push(400);
    
    cout<<" Inserting original value :"<<endl;
    display(m);
    
   cout<< "After the poping :"<<endl; 
   m.pop();
 display(m);
 return 0;
}