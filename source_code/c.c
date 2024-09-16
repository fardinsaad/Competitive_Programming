 {
        k1=cnt1-cnt3+k1;
        if(k1>5)
        if(cnt1>=4)
        {
            if(cnt1%4==0)
                k1=cnt1/4;
            else if(cnt1&4!=0)
            {
                k1=cnt1/4;
                k11=cnt1%4;
            }
        k1=cnt1-cnt3+k1;
        k=cnt1-k1;
        if(k1==2 && x==1)
            k1=1;
        else if(k1!=2 || x!=1)
        {
            temp=k1-x;
            k21=k21+k1-temp;
            if(temp>=0)
        {
            if(temp%4==0)
                k1=temp/4;
            else if(temp%4!=0)
                k1=(temp/4)+1;
        }

        }
    }
