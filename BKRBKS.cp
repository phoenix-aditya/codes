//
//  main.cpp
//  practice c++
//
//  Created by Aditya  Ranaut on 09/01/20.
//  Copyright © 2020 Aditya  Ranaut. All rights reserved.
//
using namespace std;
#include <iostream>
#include<stdlib.h>
#include<stdio.h>
//this code works fine

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int s, w1, w2, w3;
        cin>>s>>w1>>w2>>w3;
        if(w1+w2+w3<=s)
            cout<<"1";
        else if(w1+w2<=s || w1+w3<=s || w2+w3<=s)
            cout<<"2";
        else
            cout<<"3";
        
        cout<<"\n";
    }
    
    return 0;
}
