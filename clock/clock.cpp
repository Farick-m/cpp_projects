#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    int hour, minute, second, a, error;
    error = a = 0;


        cout<<"Enter hour"<<endl;
        cin>>hour;

        cout<<"Enter minutes"<<endl;
        cin>>minute;

        cout<<"Enter seconds"<<endl;
        cin>>second;

        while(error == 0)
        {
        if(hour<24 && minute<60 && second<60)
        {
            error++;
        }
        else
        {
            system("clear");
        }
        }
        
        while (a==0)
        {
            system("clear");
            cout<<"The current time is:"<<endl;
            cout<<hour<<":"<<minute<<":"<<second<<endl;
            sleep(1);           //delays the time to imitate increment of 1 second for each loop
            second++;

            if (second>59)
            {
                second=0;
                minute++;
            }
            else if (minute>59)
            {
                minute=0;
                hour++;
            }
            else if (hour>24)
            {
                hour=0;
            }
        }
        return 0;
}
 



