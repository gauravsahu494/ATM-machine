#include <bits/stdc++.h>
using namespace std;

int money=0,add=0,sub=0;

stack<int> dep;
stack<int> wit;

int history(int num){
    dep.push(num);
}

int history1(int num1){
    wit.push(num1);
}

void printstack(stack<int> dep){
    cout<<"Your recent deposited history are"<<endl;
    while(!dep.empty()){
    cout<<dep.top()<<endl;
    dep.pop();
    }
}

void printstack1(stack<int> wit){
    cout<<"Your recent withdrawal history are"<<endl;
    while(!wit.empty()){
    cout<<wit.top()<<endl;
    wit.pop();
    }
}
int main()
{
    cout<<"***************MENU***************"<<endl;
    cout<<"Enter your 16 digit card number"<<endl;
    long long s;
    cin>>s;
    int pin;
    cout<<"Enter your 4 digit pin"<<endl;
    cin>>pin;
    if(s==1234567891234567 && pin==5655){
            cout<<"----successfully entered----"<<endl;
            while(1){
                cout<<"***************MENU***************"<<endl;
                cout<<"     1. Withdraw"<<endl;
                cout<<"     2. Deposit"<<endl;
                cout<<"     3. Available balance"<<endl;
                cout<<"     4. Transaction History"<<endl;
                cout<<"     5. Exit"<<endl;
                int n;
                cout<<" Enter your choice"<<endl;
                cout<<" ";
                cin>>n;
                switch(n){
                    case 1:{
                        cout<<" You have chosen first choice"<<endl;
                        cout<<" Enter the amount you want to withdraw"<<endl;
                        cout<<" ";
                        cin>>sub;

                        if(money>=sub){
                            money=money-sub;
                            history1(sub);
                        }
                        else{
                            cout<<"     Insufficient Fund"<<endl;
                        }
                        break;
                    }
                    case 2:{
                        cout<<" You have chosen second choice"<<endl;
                        cout<<" Enter the amount you want to deposit"<<endl;
                        cout<<" ";
                        cin>>add;
                        string s="Deposited";
                        history(add);
                        money=money+add;
                        break;
                    }
                    case 3:{
                        cout<<" You have chosen third choice"<<endl;
                        cout<<" Your current balance is "<<money<<endl;
                        break;
                    }
                    case 4:{
                        printstack(dep);
                        printstack1(wit);
                    }
                    case 5:{
                        return 0;
                    }
                    default:{
                        cout<<" Entered a valid choice"<<endl;
                    }
                }
                cout<<endl;

            }
    }
    else{
        cout<<" Invalid Card number"<<endl;
    }
    return 0;
}
