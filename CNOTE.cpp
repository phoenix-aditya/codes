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
    
    int x, y, k, n, need, flag=0;
    while(t--)
    {
        flag=0;
        cin>>x>>y>>k>>n;
        int arr[n][2];
        
        for(int i=0;i<n;i++)
            for(int j=0;j<2;j++)
                cin>>arr[i][j];
        
        need=x-y;
        
        for(int j=0; j<n; j++)
        {
            if(arr[j][0]>=need && arr[j][1]<=k)
            { flag=1;
                break;}
                
        }
        if(flag==0)
            cout<<"UnluckyChef \n";
        else if(flag==1)
            cout<<"LuckyChef \n";
        
        
    }
    
    return 0;
}
