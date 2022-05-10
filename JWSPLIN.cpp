    #include <iostream>
    using namespace std;
    int main()
    {
    		int y[3],x[3],k;
    		double a,b,tempx,tempy;
     
    		cin >> k;
    		for(int j=0;j<k;j++)
    		{
     
    				for(int i=0;i<3;i++)
    				{
    					cin >> x[i] >> y[i];
     
     
    				}
    				tempy=y[0]-y[1];
    				tempx=x[0]-x[1];
    				a=tempy/tempx;
    				b=y[0]-a*x[0];
     
    				tempx=x[2];
    				tempy=y[2];
    				if(tempy-(a*tempx)==b)cout << "TAK";
    				else if(x[0]==x[1]&&x[1]==x[2])cout << "TAK";
    				else if(y[0]==y[1]&&y[1]==y[2])cout << "TAK";
    				else cout << "NIE";
    				cout << endl;
     
    	}
    	return 0;
    }