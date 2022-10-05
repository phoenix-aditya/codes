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
#include<iomanip>
#include<stdio.h>

int main()
{
    int t;
    cin>>t;
    
    
    while(t--)
    {
        int n, c;
        cin>>n>>c;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int sum=0;
        for(int i=0;i<n;i++)
            sum=sum+arr[i];
        if(sum<=c)
            cout<<"YES \n";
        else
            cout<<"NO \n";
        
    }
    
    return 0;
}
