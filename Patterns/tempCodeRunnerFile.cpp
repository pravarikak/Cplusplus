for(int i=0;i<numberOfStars;i++){
        int value = i+1;
        char ch='A'+numberOfStars;
        for(int j=1;j<i+2;j++){
            if(j==i+1){
                cout<<'A'+numberOfStars+value;
                }
            else{
            cout<<'A'+numberOfStars+value--;
            }
        }
        cout<<endl;
    }