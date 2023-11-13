#include <iostream>
using namespace std;
class stuffing{
    public:
    int CANframe[14]={0,0,0,0,0,0,1,1,1,1,1,1};
    public:
    /*void set_CAN(){
        cout<<"give me the elements of Elements"<<endl;
        for(int i=0;i<11;i++){
            cin>>CANframe[i];
        }
    }*/
    void Display(){
        for(int i=0;i<14;i++){
            cout<<CANframe[i];
        }  
    }
    void stuffing1(){
        int stafhigher=0;
        int staflow=0;
        int state=11;
        for(int i=0; i<14; i++){

           if (CANframe[i]==0){
                staflow++;
                stafhigher=0;
                if (staflow==5){
                    cout<<"staffing detected in low level "<<endl;
               for(int j=state;j>i;j--){
                     CANframe[j+1]=CANframe[j];
                  }
                  CANframe[i+1]=1;
                  state++;
                }
                    
              
                }
            
           if (CANframe[i]==1) {
                stafhigher++;
                staflow=0;
                if (stafhigher==5){
                    cout<<"staffing detected in higher level "<<endl;
                  for(int j=state;j>i;j--){
                     CANframe[j+1]=CANframe[j];
                  }
                  CANframe[i+1]=0;
                  state++;
                }
            }
         

        }
        
    }
};
 
 
 
int main()
{
    stuffing node1;
    node1.stuffing1();
    node1.Display();
 
    return 0;
}