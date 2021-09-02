#include<iostream>
#include<string>
using namespace std;


int main() 
{
    //Sets all of the Variables
    string reply;
    string Q1;
    string Q2;
    string Q3;
    string Q4;
    string Q5;
    cout<<"This will ask questions and you have to answer them"<<endl;
    cout<<"Are you ready?"<<endl;
    getline(cin, reply);
    if (reply == "no"){
        cout<<"Come back when you are ready";
    }
    else if (reply == "yes"){
        //Question 1
        cout<<"Question 1: how many superbowl titles has tom brady won?"<<endl;
        cin>>Q1;
        if (Q1 == "7"){
            cout<<"Correcto!"<<endl;
        }
        else {
            cout<<"Wrong!"<<endl;
        }
        //Question 2
        cout<<"Question 2: What is the most watched sport?"<<endl;
        cin>>Q2;
        if (Q2 == "Soccer"){
            cout<<"Correcto!"<<endl;
        }
        else if(Q2 == "soccer"){
            cout<<"Correcto!"<<endl;
        }
        else {
            cout<<"Wrong!"<<endl;
        }
        //Question 3
        cout<<"Question 3: About how many people are living in the world as of 2021(round you answer to the nearest billionth and with numbers)"<<endl;
        cin>>Q3;
        if (Q3 == "8,000,000,000"){
            cout<<"Correcto!"<<endl;
        }
        else if(Q3 == "8000000000"){
            cout<<"Correcto!"<<endl;
        }
        else {
            cout<<"Wrong!"<<endl;
        }
        //Question 4
        cout<<"Question 4: Which Team won the 2020-2021 superbowl?"<<endl;
        cin>>Q4;
        if (Q4 == "Buccaneers"){
            cout<<"Correcto!"<<endl;
        }
        else if (Q4 == "buccaneers"){
            cout<<"Correcto!"<<endl;
        }
        else if (Q4 == "Tampa Bay"){
            cout<<"Correcto!"<<endl;
        }
        else {
            cout<<"Wrong!"<<endl;
        }
        //Question 5
        cout<<"Question 5: What color is black?"<<endl;
        cin>>Q5;
        if (Q5 == "Black"){
            cout<<"Correcto!"<<endl;
        }
        else if (Q5 == "black"){
            cout<<"Correcto!"<<endl;
        }
        else{
            cout<<"Wrong!"<<endl;
        }

        cout<<"Here are your answers"<<endl;
        cout<<Q1<<endl;
        cout<<Q2<<endl;
        cout<<Q3<<endl;
        cout<<Q4<<endl;
        cout<<Q5<<endl;

        system("pause");

        
    }


    

    
    
    return 0;

}