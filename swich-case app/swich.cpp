// // Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    cout << "Welcome" << endl;
    int a;
    int b;
    int c;
    
    cout << "Enter a number: " << endl;
    cin >> a;
    
    cout << "Enter a second number: " << endl;
    cin >> b;
    
    cout << "Choose an option: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    
    cin >> c;
    
    switch (c) {
        case 1: {
            int sum = a + b;
            cout << "The result is: " << sum << endl;
            break;
        }
        case 2: {
            int subs = a - b;
            cout << "The result is: " << subs << endl;
            break;
        }
        case 3: {
            int multi = a * b;
            cout << "The result is: " << multi << endl;
            break;
        }
        default: {
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
















// #include <iostream>
// using namespace std ;

// int main() {
//   cout<<"welcome"<<endl;
//   int a;
//   int b;
//   int c;
   
//   cout<<"Enter a number "<<endl;
//   cin>>a;
   
//   cout<<"entre  a second number "<<endl;
//   cin>>b;
//   cout<<"chose this potion "<<endl;
//   cout<<"1.addition "<<endl;
//   cout<<"2.subtaraction "<<endl;
//   cout<<"3.multiplicstion "<<endl;
   
//   cin>>c;
   
//   switch(c){
//       case 1:
//       int sum = a+b;
//       cout<<sum<<endl;
//       break;
//       case 2:
//       int subs = a-b;
//       cout<<subs<<endl;
//       case 3:
//       int multi = a*b;
//       cout<<multi<<endl
//       break ;
//       defualt:
//       cout<<"invalid choise"<<endl;
//   }
// }