int mul[3] ={0};
        int min = inp[0];
        int min_goal = goal[0];
        for(int i =1;i<3;i++){
            if(min_goal > goal[i])
                min_goal = goal[i];
        }
        for(int i =1;i<3;i++){
            if(min > inp[i])
                min = inp[i];
        }
        for(int j =0;j<3;j++){
            for(int i =2 ;i<=min_goal/2;i++){
                if(inp[j]*i == goal[j]){
                    mul[j] = i;
                    break;
                }
            }
        }
        if(mul != -1){
            cout<<"The value to multiply is :"<<mul<<"\n";
            for(int i =0;i<3;i++)
                cout<<inp[i]*mul<<"\t";
        }
        else{
            cout<<"Notfound";
        }
        