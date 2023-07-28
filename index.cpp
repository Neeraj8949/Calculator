#include<bits/stdc++.h>
using namespace std;

void add()  
{  
   int i,n;
double sum = 0, number;  
cout <<"How many numbers you want to add: ";  
cin >> n;  
cout << "Please enter the number one by one: \n";  
for (i = 1; i <= n; i++)  
{  
cin >> number;  
sum = sum + number;  
}  
cout << "\n Sum of the numbers = "<< sum;  
}  
void sub()  
{  
double num1, num2, z;  
cout <<" \n Enter the First number = ";  
cin >> num1;  
cout << "\n Enter the Second number = ";  
cin >> num2;  
z = num1-num2;  
cout <<"\n Subtraction of the number = " << z;  
}  
void multi()  
{  
double num1, num2, mul;  
cout <<" \n Enter the First number = ";  
cin >> num1;  
cout << "\n Enter the Second number = ";  
cin >> num2;  
mul = num1 * num2;  
cout <<"\n Multiplication of two numbers = " << mul;  
}  
void division()  
{  
double num1, num2, div;  
cout <<" \n Enter the First number = ";  
cin >> num1;  
cout << "\n Enter the Second number = ";  
cin >> num2;  
while ( num2 == 0)  
     {  
     cout << "\n Divisor canot be zero"  
         "\n Please enter the divisor once again: ";  
         cin >> num2;  
         }  
div = num1 / num2;  
cout <<"\n Division of two numbers = " << div;  
}  
void sqr()  
{  
double num1;  
double sq;
cout <<" \n Enter a number to find the Square: ";  
cin >> num1;  
sq = num1 * num1;  
cout <<" \n Square of " << num1<< " is : "<< sq;  
}  
void srt()  
{  
double q;  
double num1;  
cout << "\n Enter the number to find the Square Root:";  
cin >> num1;  
q = sqrt(num1);  
cout <<" \n Square Root of " << num1<< " is : "<< q;
} 
void remainder(){
    int a,b;
    cout << "\n Enter the dividend:";
    cin>>a;
    cout<<"\nEnter the divisor:";
    cin>>b;
    cout<<"The remainder comes out to be:"<<a%b<<endl;

}
void factorial(){
    int a;
    cout<<"Enter the number to find factorial:";
    cin>>a;
    int fac=1;
    for(int i=0;i<a;i++){
        
        fac=fac*i;
        
    }
    cout<<fac;
}
void cube(){
double a;
cout<<"Enter the number to find the cube:";
cin>>a;
cout<<a*a*a;
}
void power(){
    double a,b;
    cout<<"Enter the number:";
    cin>>a;
    cout<<"Enter the power";
    cin>>b;
    cout<<pow(a,b);

}
void logarithm(){
    double value;
    cout<<"Enter the value:";
    cin>>value;
    cout<<log(value); 
}
void trignometry(){
    double val;
    int op,type;
    cout<<"Enter the operation:\n1.Sine\n2.Cosine\n3.Tan\n4.Sec\n5.Cosec\n6.Sin inverse\n7.Cos inverse\n";
    cin>>op;
    cout<<"Options to enter the value:\n1.Radian\n2.Degree\n";
    cin>>type;
    cout<<"Enter the value:";
    cin>>val;
    if(op==1 && type==1){

        cout<<sin(val);

    }
    else if(op==1 && type==2){
         val=val*(3.14/180.0);
        cout<<sin(val);
    }
    else if(op==2 && type==1){
        cout<<cos(val);
    }
    else if(op==2 && type==2){
        val=val*(3.14/180.0);
        cout<<cos(val);
    }
     else if(op==3 && type==1){
        cout<<tan(val);
    }
    else if(op==3 && type==2){
        val=val*(3.14/180.0);
        cout<<tan(val);
    }
    else if(op==4 && type==1){
        cout<<1/(cos(val));
    }
    else if(op==4 && type==2){
         val=val*(3.14/180.0);
        cout<<1/(cos(val));
   }
   else if(op==4 && type==1){
        cout<<1/(sin(val));
    }
    else if(op==4 && type==1){
         val=val*(3.14/180.0);
        cout<<1/(sin(val));
    }

    }
int main(int argc, char **argv){
int opr;  
  
  do{
    cout<< "Select any operation from the C++ Calculator" 
    "\n1.Simple calculator" 
    "\n2.Scientific calculator"
    "\n3.Converter" 
     "\n4.Exit"  
     "\n \n Make a choice: ";  
     cin >> opr;
        if(opr==1){
        int choice;
        cout<<"\n1.Addition"  
     "\n2.Subtraction"  
     "\n3.Multiplication"  
     "\n4.Division"
     "\n \n Make a choice: "; 
     cin>>choice; 
     switch (choice)  
     {  
     case 1:  
    add();  
    break;  
    case 2:  
    sub();   
    break;  
    case 3:  
    multi();  
    break;  
    case 4:  
    division(); 
    break;
    default:  
    cout <<"Something is wrong..!!";  
    break;  
     }  
        }
     else if(opr==2){
        int choice;
        cout<<"\n1.Square"  
     "\n2.Square Root"
     "\n3.Remainder"  
     "\n4.Factorial"
     "\n5.Cube"
     "\n6.Power"
     "\n7.Logarithm"
     "\n8.Trignometry"
     "\n \n Make a choice: ";
     cin>>choice; 
     switch(choice){
     case 1:  
    sqr();  
    break;  
    case 2:  
    srt();   
    break; 
    case 3:
    remainder();
    break;
    case 4:
    factorial();
    break;
    case 5:
    cube();
    break;
    case 6:
    power();
    break;
    case 7:
    logarithm();
    break;
    case 8:
    trignometry();
    break;
    default:  
    cout <<"Something is wrong..!!";  
    break;
     }
     }
     else if(opr==3){
        int choice;
        cout<<
     "\n1.Length"  
     "\n2.Area "
     "\n3.Volume"  
     "\n4.Speed"
     "\n5.Weight"
     "\n6.Temperature"
     "\n \n Make a choice: ";
     cin>>choice;
     if(choice==1){
        int choice1,choice2;
        cout<<"\nTo convert choice 1 to choice 2 :"
    "\n1.Kilometer\n2.Meter\n3.Centimeter\n4.Millimeter\n5.Micrometer\n6.Nanometer\n7.Mile\n8.Yard\n9.Foot\n10.Inch\n11.Nautical miles\n"
      "\nInput choice 1:";
      cin>>choice1;
      double a;
       cout<<"Give the value you want to convert:\n";
      cin>>a;
      cout<<"Choose from\n1.Kilometer\n2.Meter\n3.Centimeter\n4.Millimeter\n5.Micrometer\n6.Nanometer\n7.Mile\n8.Yard\n9.Foot\n10.Inch\n11.Nautical miles\nInput choice 2:";
      cin>>choice2;
      
       if(choice1==1){
             switch(choice2){
                case 1:
                cout<<a;
                break;
                case 2:
                cout<<a*1000;
                break;
                case 3:
                cout<<a*100000;
                break;
                case 4:
                cout<<a*1000000;
                break;
                case 5:
                cout<<a*1000000000;
                break;
                case 6:
                cout<<a*1000000000000;
                break;
                case 7:
                cout<<a*0.621371;
                break;
                case 8:
                cout<<a*1093.61;
                break;
                case 9:
                cout<<a*3280.84;
                break;
                case 10:
                cout<<a*39370.1;
                break;
                case 11:
                cout<<a*0.5399570950324;
                break;
            
        }
       }
        else if(choice1==2){
             switch(choice2){
              case 1:
                cout<<a/1000;
                break;
                case 2:
                cout<<a;
                break;
                case 3:
                cout<<a*100;
                break;
                case 4:
                cout<<a*1000;
                break;
                case 5:
                cout<<a*1000000;
                break;
                case 6:
                cout<<a*10000000000;
                break;
                case 7:
                cout<<a*0.000621371;
                break;
                case 8:
                cout<<a*1.09361;
                break;
                case 9:
                cout<<a*3.28084;
                break;
                case 10:
                cout<<a*39.3701;
                break;
                case 11:
                cout<<a*0.0005399570950324;
                break;

            
        }
              
            
        }
        else if(choice1==3){
             switch(choice2){
                case 1:
                cout<<a/10000;
                break;
                case 2:
                cout<<a/100;
                break;
                case 3:
                cout<<a;
                break;
                case 4:
                cout<<a*10;
                break;
                case 5:
                cout<<a*10000;
                break;
                case 6:
                cout<<a*10000000;
                break;
                case 7:
                cout<<a*(6.2137*pow(10,-6));
                break;
                case 8:
                cout<<a*0.0109361;
                break;
                case 9:
                cout<<a*0.0328084;
                break;
                case 10:
                cout<<a*0.393701;
                break;
                case 11:
                cout<<a*(5.3996*pow(10,-6));
                break;  
            



      
     }
     
      } 
     
     
       else if(choice1==4){
             switch(choice2){
                case 1:
                cout<<a*pow(10,-6);
                break;
                case 2:
                cout<<a*0.001;
                break;
                case 3:
                cout<<a*0.1;
                break;
                case 4:
                cout<<a;
                break;
                case 5:
                cout<<a*1000;
                break;
                case 6:
                cout<<a*pow(10,6);
                break;
                case 7:
                cout<<a*(6.2137*pow(10,-7));
                break;
                case 8:
                cout<<a*0.00109361;
                break;
                case 9:
                cout<<a*0.00328084;
                break;
                case 10:
                cout<<a*0.0393701;
                break;
                case 11:
                cout<<a*(5.3996*pow(10,-7));
                break;  
            



      
     }
     
      }   
         else if(choice1==5){
             switch(choice2){
                case 1:
                cout<<a*pow(10,-9);
                break;
                case 2:
                cout<<a*pow(10,-6);
                break;
                case 3:
                cout<<a*pow(10,-4);
                break;
                case 4:
                cout<<a*0.001; 
                break;
                case 5:
                cout<<a;
                break;
                case 6:
                cout<<a*1000;
                break;
                case 7:
                cout<<a*(6.2137*pow(10,-10));
                break;
                case 8:
                cout<<a*1.09361*pow(10,-6);
                break;
                case 9:
                cout<<a*3.28084*pow(10,-6);
                break;
                case 10:
                cout<<a*3.93701*pow(10,-5);
                break;
                case 11:
                cout<<a*(5.3996*pow(10,-10));
                break;  
     }
      } 
       else if(choice1==6){
             switch(choice2){
                case 1:
                cout<<a*pow(10,-12);
                break;
                case 2:
                cout<<a*pow(10,-9);
                break;
                case 3:
                cout<<a*pow(10,-7);
                break;
                case 4:
                cout<<a*pow(10,-6); 
                break;
                case 5:
                cout<<a*0.001;
                break;
                case 6:
                cout<<a;
                break;
                case 7:
                cout<<a*(6.2137*pow(10,-13));
                break;
                case 8:
                cout<<a*1.09361*pow(10,-9);
                break;
                case 9:
                cout<<a*3.28084*pow(10,-9);
                break;
                case 10:
                cout<<a*3.93701*pow(10,-8);
                break;
                case 11:
                cout<<a*(5.3996*pow(10,-13));
                break;  
            

      
     }
     
      }
      else if(choice1==7){
             switch(choice2){
                case 1:
                cout<<a*1.60934;
                break;
                case 2:
                cout<<a*1609.34;
                break;
                case 3:
                cout<<a*160934;
                break;
                case 4:
                cout<<a*1.609*pow(10,6); 
                break;
                case 5:
                cout<<a*1.609*pow(10,9);
                break;
                case 6:
                cout<<a*1.609*pow(10,12);
                break;
                case 7:
                cout<<a;
                break;
                case 8:
                cout<<a*1760;
                break;
                case 9:
                cout<<a*5280;
                break;
                case 10:
                cout<<a*63360;
                break;
                case 11:
                cout<<a*0.868976;
                break;  
            



      
     }
     
      }
      else if(choice1==8){
             switch(choice2){
                case 1:
                cout<<a*0.0009144;
                break;
                case 2:
                cout<<a*0.9144;
                break;
                case 3:
                cout<<a*91.44;
                break;
                case 4:
                cout<<a*914.4; 
                break;
                case 5:
                cout<<a*914400;
                break;
                case 6:
                cout<<a*9.144*pow(10,8);
                break;
                case 7:
                cout<<a*0.000568182;
                break;
                case 8:
                cout<<a;
                break;
                case 9:
                cout<<a*3;
                break;
                case 10:
                cout<<a*36;
                break;
                case 11:
                cout<<a*0.000493737;
                break;  
        
     }
     
      } 
      else if(choice1==9){
             switch(choice2){
              case 1:
                cout<<a*0.0003048;
                break;
                case 2:
                cout<<a*0.3048;
                break;
                case 3:
                cout<<a*30.48;
                break;
                case 4:
                cout<<a*304.8;
                break;
                case 5:
                cout<<a*304800;
                break;
                case 6:
                cout<<a*3.048*pow(10,8);
                break;
                case 7:
                cout<<a*0.000189394;
                break;
                case 8:
                cout<<a*0.333333;
                break;
                case 9:
                cout<<a;
                break;
                case 10:
                cout<<a*12;
                break;
                case 11:
                cout<<a*0.000164579;
                break;

            
        }
              
            
        }
        else if(choice1==10){
             switch(choice2){
                case 1:
                cout<<a*2.54*pow(10,5);
                break;
                case 2:
                cout<<a*0.0254;
                break;
                case 3:
                cout<<a*2.54;
                break;
                case 4:
                cout<<a*25.4;
                break;
                case 5:
                cout<<a*25400;
                break;
                case 6:
                cout<<a*2.54*pow(10,7);
                break;
                case 7:
                cout<<a*1.5783*(10,-5);
                break;
                case 8:
                cout<<a*0.0277778;
                break;
                case 9:
                cout<<a*0.0328084;
                break;
                case 10:
                cout<<a;
                break;
                case 11:
                cout<<a*1.3715*pow(10,-5);
                break;  
            
     }
     
      } 
     
     
       else if(choice1==11){
             switch(choice2){
                case 1:
                cout<<a*1.852;
                break;
                case 2:
                cout<<a*1852;
                break;
                case 3:
                cout<<a*185200;
                break;
                case 4:
                cout<<a*1.852*pow(10,6);
                break;
                case 5:
                cout<<a*1.852*pow(10,9);
                break;
                case 6:
                cout<<a*1.852*pow(10,12);
                break;
                case 7:
                cout<<a*1.15078;
                break;
                case 8:
                cout<<a*2025.37;
                break;
                case 9:
                cout<<a*6076.12;
                break;
                case 10:
                cout<<a*72913.4;
                break;
                case 11:
                cout<<a;
                break;  
            



      
     }
     
      }   
           
     }    
        
        else if(choice==2){
        int choice1,choice2;
        cout<<"\nTo convert choice 1 to choice 2 :"
    "\n1.Square kilometer\n2.Square Meter\n3.Square mile\n4.Square yard\n5.Square foot\n6.Sqauare inch\n7.Hectare\n8.Acre\n"
      "\nInput choice 1:";
      cin>>choice1;
      double a;
       cout<<"Give the value you want to convert:\n";
      cin>>a;
      cout<<"Choose from\n1.Square kilometer\n2.Square Meter\n3.Square mile\n4.Square yard\n5.Square foot\n6.Sqauare inch\n7.Hectare\n8.Acre\nInput choice 2:";
      cin>>choice2;
      
       if(choice1==1){
             switch(choice2){
                case 1:
                cout<<a;
                break;
                case 2:
                cout<<a*pow(10,6);
                break;
                case 3:
                cout<<a*0.386102;
                break;
                case 4:
                cout<<a*1.196*pow(10,6);
                break;
                case 5:
                cout<<a*1.076*pow(10,7);
                break;
                case 6:
                cout<<a*1.55*pow(10,9);
                break;
                case 7:
                cout<<a*100;
                break;
                case 8:
                cout<<a*247.105;
                break;
        }
       }
        else if(choice1==2){
             switch(choice2){
              case 1:
                cout<<a*pow(10,-6);
                break;
                case 2:
                cout<<a;
                break;
                case 3:
                cout<<a*3.861*pow(10,-7);
                break;
                case 4:
                cout<<a*1.19599;
                break;
                case 5:
                cout<<a*10.7639;
                break;
                case 6:
                cout<<a*1550;
                break;
                case 7:
                cout<<a*pow(10,-4);
                break;
                case 8:
                cout<<a*0.000247105;
                break;
               
        }
              
            
        }
        else if(choice1==3){
             switch(choice2){
                case 1:
                cout<<a*2.58999;
                break;
                case 2:
                cout<<a*2.59*pow(10,6);
                break;
                case 3:
                cout<<a;
                break;
                case 4:
                cout<<a*3.098*pow(10,6);
                break;
                case 5:
                cout<<a*2.788*pow(10,70);
                break;
                case 6:
                cout<<a*4.014*pow(10,9);
                break;
                case 7:
                cout<<a*258.999;
                break;
                case 8:
                cout<<a*640;
                break;
      }
      } 
       else if(choice1==4){
             switch(choice2){
                case 1:
                cout<<a*8.3613*pow(10,-7);
                break;
                case 2:
                cout<<a*0.836127;
                break;
                case 3:
                cout<<a*3.2283*pow(10,-7);
                break;
                case 4:
                cout<<a;
                break;
                case 5:
                cout<<a*9;
                break;
                case 6:
                cout<<a*1296;
                break;
                case 7:
                cout<<a*8.3613*pow(10,-5);
                break;
                case 8:
                cout<<a*0.000206612;
                break;
                
                }
                }   
         else if(choice1==5){
             switch(choice2){
                case 1:
                cout<<a*9.2903*pow(10,-8);
                break;
                case 2:
                cout<<a*0.092903;
                break;
                case 3:
                cout<<a*3.587*pow(10,-8);
                break;
                case 4:
                cout<<a*0.111111; 
                break;
                case 5:
                cout<<a;
                break;
                case 6:
                cout<<a*144;
                break;
                case 7:
                cout<<a*9.2903*pow(10,-6);
                break;
                case 8:
                cout<<a*2.2957*pow(10,-5);
                break;
     }
      } 
       else if(choice1==6){
             switch(choice2){
                case 1:
                cout<<a*6.4516*pow(10,-10);
                break;
                case 2:
                cout<<a*0.00064516;
                break;
                case 3:
                cout<<a*2.491*pow(10,-10);
                break;
                case 4:
                cout<<a*0.000771605; 
                break;
                case 5:
                cout<<a*0.00694444;
                break;
                case 6:
                cout<<a;
                break;
                case 7:
                cout<<a*(6.4516*pow(10,-8));
                break;
                case 8:
                cout<<a*1.5942*pow(10,-7);
                break;
               
     }
     
      }
      else if(choice1==7){
             switch(choice2){
                case 1:
                cout<<a*0.01;
                break;
                case 2:
                cout<<a*10000;
                break;
                case 3:
                cout<<a*0.00386102;
                break;
                case 4:
                cout<<a*11959.9; 
                break;
                case 5:
                cout<<a*107639;
                break;
                case 6:
                cout<<a*1.55*pow(10,7);
                break;
                case 7:
                cout<<a;
                break;
                case 8:
                cout<<a*2.47105;
                break;
             
     }
     
      }
      else if(choice1==8){
             switch(choice2){
                case 1:
                cout<<a*0.00404686;
                break;
                case 2:
                cout<<a*4046.86;
                break;
                case 3:
                cout<<a*0.0015625;
                break;
                case 4:
                cout<<a*4840; 
                break;
                case 5:
                cout<<a*43560;
                break;
                case 6:
                cout<<a*6.273*pow(10,6);
                break;
                case 7:
                cout<<a*0.404686;
                break;
                case 8:
                cout<<a;
                break;
               
     }
     
      } }
      else if(choice==3){
        int choice1,choice2;
        cout<<"\nTo convert choice 1 to choice 2 :"
    "\n1.US liquid gallon \n2.US liquid quart\n3.US liquid prit\n4.US legal cup \n5.fluid ounce\n6.US tablespoon\n7.US teaspoon\n8.Cubic meter\n9.Litre\n10.Millilitre\n11.Imperial gallon\n12.Imperial quart\n13.Imperial print\n14.Imprial cup\n15.fluid ounce\n16.Imperial tablespoon\n17.Imperial teaspoon\n18.Cubic foot\n19.Cubic inch"
      "\nInput choice 1:";
      cin>>choice1;
      double a;
       cout<<"Give the value you want to convert:\n";
      cin>>a;
      cout<<"Choose from\n1.US liquid gallon \n2.US liquid quart\n3.US liquid prit\n4.US legal cup\n5.fluid ounce\n6.US tablespoon\n7.US teaspoon\n8.Cubic meter\n9.Litre\n10.Millilitre\n11.Imperial gallon\n12.Imperial quart\n13.Imperial print\n14.Imprial cup\n15.fluid ounce\n16.Imperial tablespoon\n17.Imperial teaspoon\n18.Cubic foot\n19.Cubic inch\nInput choice 2:";
      cin>>choice2;
      
       if(choice1==1){
             switch(choice2){
                case 1:
                cout<<a;
                break;
                case 2:
                cout<<a*4;
                break;
                case 3:
                cout<<a*8;
                break;
                case 4:
                cout<<a*15.7725;
                break;
                case 5:
                cout<<a*128;
                break;
                case 6:
                cout<<a*256;
                break;
                case 7:
                cout<<a*768;
                break;
                case 8:
                cout<<a*0.00378541;
                break;
                case 9:
                cout<<a*3.78541;
                break;
                case 10:
                cout<<a*3785.41;
                break;
                case 11:
                cout<<a*0.832674;
                break;
                case 12:
                cout<<a*3.3307; 
                break; 
                case 13:
                cout<<a*6.66139;
                break;
                case 14:
                cout<<a*13.3228;
                break;
                case 15:
                cout<<a*133.228;
                break;
                case 16:
                cout<<a*213.165;
                break;
                case 17:
                cout<<a*639.494;
                break;
                case 18:
                cout<<a*0.133681;  
                break;
                case 19:
                cout<<a*231;  
                break;
            
        }
       }
        else if(choice1==2){
             switch(choice2){
               case 1:
                cout<<a*0.25;
                break;
                case 2:
                cout<<a;
                break;
                case 3:
                cout<<a*2;
                break;
                case 4:
                cout<<a*3.94314;
                break;
                case 5:
                cout<<a*32;
                break;
                case 6:
                cout<<a*64;
                break;
                case 7:
                cout<<a*192;
                break;
                case 8:
                cout<<a*0.000946353;
                break;
                case 9:
                cout<<a*0.946353;
                break;
                case 10:
                cout<<a*946.353;
                break;
                case 11:
                cout<<a*0.208169;
                break;
                case 12:
                cout<<a*0.832674; 
                break; 
                case 13:
                cout<<a*1.66535;
                break;
                case 14:
                cout<<a*3.3307;
                break;
                case 15:
                cout<<a*33.307;
                break;
                case 16:
                cout<<a*53.2911;
                break;
                case 17:
                cout<<a*159.873;
                break;
                case 18:
                cout<<a*0.0334201;  
                break;
                case 19:
                cout<<a*57.75;  
                break;
            

            
        }
              
            
        }
        else if(choice1==3){
             switch(choice2){
                  case 1:
                cout<<a*0.25;
                break;
                case 2:
                cout<<a;
                break;
                case 3:
                cout<<a*2;
                break;
                case 4:
                cout<<a*3.94314;
                break;
                case 5:
                cout<<a*32;
                break;
                case 6:
                cout<<a*64;
                break;
                case 7:
                cout<<a*192;
                break;
                case 8:
                cout<<a*0.000946353;
                break;
                case 9:
                cout<<a*0.946353;
                break;
                case 10:
                cout<<a*946.353;
                break;
                case 11:
                cout<<a*0.208169;
                break;
                case 12:
                cout<<a*0.832674; 
                break; 
                case 13:
                cout<<a*1.66535;
                break;
                case 14:
                cout<<a*3.3307;
                break;
                case 15:
                cout<<a*33.307;
                break;
                case 16:
                cout<<a*53.2911;
                break;
                case 17:
                cout<<a*159.873;
                break;
                case 18:
                cout<<a*0.0334201;  
                break;
                case 19:
                cout<<a*57.75;  
                break;
            

            
        }
              
            
        }
        else if(choice1==3){
             switch(choice2){
                    case 1:
                cout<<a*0.125;
                break;
                case 2:
                cout<<a*0.5;
                break;
                case 3:
                cout<<a;
                break;
                case 4:
                cout<<a*1.97157;
                break;
                case 5:
                cout<<a*16;
                break;
                case 6:
                cout<<a*32;
                break;
                case 7:
                cout<<a*96;
                break;
                case 8:
                cout<<a*0.000473176;
                break;
                case 9:
                cout<<a*0.473176;
                break;
                case 10:
                cout<<a*473.176;
                break;
                case 11:
                cout<<a*0.104084;
                break;
                case 12:
                cout<<a*0.416337; 
                break; 
                case 13:
                cout<<a*0.832674;
                break;
                case 14:
                cout<<a*1.66535;
                break;
                case 15:
                cout<<a*16.6535;
                break;
                case 16:
                cout<<a*26.6456;
                break;
                case 17:
                cout<<a*79.9367;
                break;
                case 18:
                cout<<a*0.0167101;  
                break;
                case 19:
                cout<<a*28.875;  
                break;
            
            



      
     }
     
      } 
     
     
       else if(choice1==4){
             switch(choice2){
                case 1:
                cout<<a*0.0634013;
                break;
                case 2:
                cout<<a*0.253605;
                break;
                case 3:
                cout<<a*0.50721;
                break;
                case 4:
                cout<<a;
                break;
                case 5:
                cout<<a*8.11537;
                break;
                case 6:
                cout<<a*16.2307;
                break;
                case 7:
                cout<<a*48.6922;
                break;
                case 8:
                cout<<a*0.00024;
                break;
                case 9:
                cout<<a*0.24;
                break;
                case 10:
                cout<<a*240;
                break;
                case 11:
                cout<<a*0.0527926;
                break;
                case 12:
                cout<<a*0.21117; 
                break; 
                case 13:
                cout<<a*0.422341;
                break;
                case 14:
                cout<<a*0.844682;
                break;
                case 15:
                cout<<a*8.44682;
                break;
                case 16:
                cout<<a*13.5149;
                break;
                case 17:
                cout<<a*40.5447;
                break;
                case 18:
                cout<<a*0.00847552;  
                break;
                case 19:
                cout<<a*14.6457;  
                break;
     }
     
      }   
         else if(choice1==5){
             switch(choice2){
                 case 1:
                cout<<a*0.0078125;
                break;
                case 2:
                cout<<a*0.03125;
                break;
                case 3:
                cout<<a*0.0625;
                break;
                case 4:
                cout<<a*0.123223;
                break;
                case 5:
                cout<<a;
                break;
                case 6:
                cout<<a*2;
                break;
                case 7:
                cout<<a*6;
                break;
                case 8:
                cout<<a*2.9574*pow(10,-5);
                break;
                case 9:
                cout<<a*0.0295735;
                break;
                case 10:
                cout<<a*29.5735;
                break;
                case 11:
                cout<<a*0.00650527;
                break;
                case 12:
                cout<<a*0.0260211; 
                break; 
                case 13:
                cout<<a*0.0520421;
                break;
                case 14:
                cout<<a*0.104084;
                break;
                case 15:
                cout<<a*1.04084;
                break;
                case 16:
                cout<<a*1.66535;
                break;
                case 17:
                cout<<a*4.99604;
                break;
                case 18:
                cout<<a*0.00104438;  
                break;
                case 19:
                cout<<a*1.80469;  
                break;
             
     }
      } 
       else if(choice1==6){
             switch(choice2){
                case 1:
                cout<<a*0.00390625;
                break;
                case 2:
                cout<<a*0.015625;
                break;
                case 3:
                cout<<a*0.03125;
                break;
                case 4:
                cout<<a*0.0616115;
                break;
                case 5:
                cout<<a*0.5;
                break;
                case 6:
                cout<<a;
                break;
                case 7:
                cout<<a*3;
                break;
                case 8:
                cout<<a*1.4787*pow(10,-5);
                break;
                case 9:
                cout<<a*0.0147868;
                break;
                case 10:
                cout<<a*14.7868;
                break;
                case 11:
                cout<<a*0.00325263;
                break;
                case 12:
                cout<<a*0.0130105; 
                break; 
                case 13:
                cout<<a*0.0260211;
                break;
                case 14:
                cout<<a*0.0520421;
                break;
                case 15:
                cout<<a*0.520421;
                break;
                case 16:
                cout<<a*0.832674;
                break;
                case 17:
                cout<<a*2.49802;
                break;
                case 18:
                cout<<a*0.00052219;  
                break;
                case 19:
                cout<<a*0.902344;  
                break;
             
     }
      } 
       
      else if(choice1==7){
             switch(choice2){
                case 1:
                cout<<a*0.00130208;
                break;
                case 2:
                cout<<a*0.00520833;
                break;
                case 3:
                cout<<a*0.0104167;
                break;
                case 4:
                cout<<a*0.0205372;
                break;
                case 5:
                cout<<a*0.166667;
                break;
                case 6:
                cout<<a*0.333333;
                break;
                case 7:
                cout<<a;
                break;
                case 8:
                cout<<a*4.9289*pow(10,-6);
                break;
                case 9:
                cout<<a*0.00492892;
                break;
                case 10:
                cout<<a*4.92892;
                break;
                case 11:
                cout<<a*0.00108421;
                break;
                case 12:
                cout<<a*0.00433684; 
                break; 
                case 13:
                cout<<a*0.00867369;
                break;
                case 14:
                cout<<a*0.0173474;
                break;
                case 15:
                cout<<a*0.173474;
                break;
                case 16:
                cout<<a*0.277558;
                break;
                case 17:
                cout<<a*0.832674;
                break;
                case 18:
                cout<<a*0.000174063;  
                break;
                case 19:
                cout<<a*0.300781;  
                break;
             

      
     }
     
      }
      else if(choice1==8){
             switch(choice2){
              case 1:
                cout<<a*264.172;
                break;
                case 2:
                cout<<a*1056.69;
                break;
                case 3:
                cout<<a*2113.38;
                break;
                case 4:
                cout<<a*4166.67;
                break;
                case 5:
                cout<<a*33814;
                break;
                case 6:
                cout<<a*67628;
                break;
                case 7:
                cout<<a*202884;
                break;
                case 8:
                cout<<a;
                break;
                case 9:
                cout<<a*1000;
                break;
                case 10:
                cout<<a*pow(10,6);
                break;
                case 11:
                cout<<a*219.969;
                break;
                case 12:
                cout<<a*879.877; 
                break; 
                case 13:
                cout<<a*1759.75;
                break;
                case 14:
                cout<<a*3519.51;
                break;
                case 15:
                cout<<a*35195.1;
                break;
                case 16:
                cout<<a*56312.1;
                break;
                case 17:
                cout<<a*168936;
                break;
                case 18:
                cout<<a*35.3147;
                break;
                case 19:
                cout<<a*61023.7;  
                break;
             

      
     }
     
      } 
      else if(choice1==9){
             switch(choice2){
                 case 1:
                cout<<a*0.264172;
                break;
                case 2:
                cout<<a*1.05669;
                break;
                case 3:
                cout<<a*2.11338;
                break;
                case 4:
                cout<<a*4.16667;
                break;
                case 5:
                cout<<a*33.814;
                break;
                case 6:
                cout<<a*67.628;
                break;
                case 7:
                cout<<a*202.884;
                break;
                case 8:
                cout<<a*0.001;
                break;
                case 9:
                cout<<a;
                break;
                case 10:
                cout<<a*1000;
                break;
                case 11:
                cout<<a*0.219969;
                break;
                case 12:
                cout<<a*0.879877; 
                break; 
                case 13:
                cout<<a*1.75975;
                break;
                case 14:
                cout<<a*3.51951;
                break;
                case 15:
                cout<<a*35.1951;
                break;
                case 16:
                cout<<a*56.3121;
                break;
                case 17:
                cout<<a*168.936;
                break;
                case 18:
                cout<<a*0.0353147;
                break;
                case 19:
                cout<<a*61.0237;  
                break;
             

        }
              
            
        }
        else if(choice1==10){
             switch(choice2){
                case 1:
                cout<<a*0.000264172;
                break;
                case 2:
                cout<<a*0.00105669;
                break;
                case 3:
                cout<<a*0.00211338;
                break;
                case 4:
                cout<<a*0.00416667;
                break;
                case 5:
                cout<<a*0.033814;
                break;
                case 6:
                cout<<a*0.067628;
                break;
                case 7:
                cout<<a*0.202884;
                break;
                case 8:
                cout<<a*pow(10,-6);
                break;
                case 9:
                cout<<a*0.001;
                break;
                case 10:
                cout<<a;
                break;
                case 11:
                cout<<a*0.000219969;
                break;  
                  case 12:
                cout<<a*0.000879877; 
                break; 
                case 13:
                cout<<a*0.00175975;
                break;
                case 14:
                cout<<a*0.00351951;
                break;
                case 15:
                cout<<a*0.0351951;
                break;
                case 16:
                cout<<a*0.0563121;
                break;
                case 17:
                cout<<a*0.168936;
                break;
                case 18:
                cout<<a*3.5315*pow(10,-5);
                break;
                case 19:
                cout<<a*0.0610237;  
                break;
     
     }
     
      } 
     
     
       else if(choice1==11){
             switch(choice2){
                case 1:
                cout<<a*1.20095;
                break;
                case 2:
                cout<<a*4.8038;
                break;
                case 3:
                cout<<a*9.6076;
                break;
                case 4:
                cout<<a*18.942;
                break;
                case 5:
                cout<<a*153.722;
                break;
                case 6:
                cout<<a*307.443;
                break;
                case 7:
                cout<<a*922.33;
                break;
                case 8:
                cout<<a*0.00454609;
                break;
                case 9:
                cout<<a*4.54609;
                break;
                case 10:
                cout<<a*4546.09;
                break;
                case 11:
                cout<<a;
                break;
                case 12:
                cout<<a*4;
                break;  
                case 13:
                cout<<a*8; 
                break; 
                case 14:
                cout<<a*16;
                break;
                case 15:
                cout<<a*160;
                break;
                case 16:
                cout<<a*256;
                break;
                case 17:
                cout<<a*768;
                break;
                case 18:
                cout<<a*0.168936;
                break;
                case 19:
                cout<<a*277.419;
                break;
     
     }
     
      }   
 else if(choice1==12){
             switch(choice2){
                case 1:
                cout<<a*0.300237;
                break;
                case 2:
                cout<<a*1.20095;
                break;
                case 3:
                cout<<a*2.4019;
                break;
                case 4:
                cout<<a*4.73551;
                break;
                case 5:
                cout<<a*38.4304;
                break;
                case 6:
                cout<<a*76.8608;
                break;
                case 7:
                cout<<a*230.582;
                break;
                case 8:
                cout<<a*0.00113652;
                break;
                case 9:
                cout<<a*1.13652;
                break;
                case 10:
                cout<<a*1136.52;
                break;
                case 11:
                cout<<a*0.25;
                break;
                case 12:
                cout<<a;
                break;  
                case 13:
                cout<<a*2; 
                break; 
                case 14:
                cout<<a*4;
                break;
                case 15:
                cout<<a*40;
                break;
                case 16:
                cout<<a*64;
                break;
                case 17:
                cout<<a*192;
                break;
                case 18:
                cout<<a*0.0401359;
                break;
                case 19:
                cout<<a*69.3549;
                break;
     
     }
     
      }   else if(choice1==13){
             switch(choice2){
                case 1:
                cout<<a*0.150119;
                break;
                case 2:
                cout<<a*0.600475;
                break;
                case 3:
                cout<<a*1.20095;
                break;
                case 4:
                cout<<a*2.36776;
                break;
                case 5:
                cout<<a*19.2152;
                break;
                case 6:
                cout<<a*38.4304;
                break;
                case 7:
                cout<<a*115.291;
                break;
                case 8:
                cout<<a*0.000568261;
                break;
                case 9:
                cout<<a*0.568261;
                break;
                case 10:
                cout<<a*568.261;
                break;
                case 11:
                cout<<a*0.125;
                break;
                case 12:
                cout<<a*0.5;
                break;  
                case 13:
                cout<<a; 
                break; 
                case 14:
                cout<<a*2;
                break;
                case 15:
                cout<<a*20;
                break;
                case 16:
                cout<<a*32;
                break;
                case 17:
                cout<<a*96;
                break;
                case 18:
                cout<<a*0.020068;
                break;
                case 19:
                cout<<a*34.6774;
                break;
     
     }
     
      }   else if(choice1==14){
             switch(choice2){
                case 1:
                cout<<a*0.0750594;
                break;
                case 2:
                cout<<a*0.300237;
                break;
                case 3:
                cout<<a*0.600475;
                break;
                case 4:
                cout<<a*1.18388;
                break;
                case 5:
                cout<<a*9.6076;
                break;
                case 6:
                cout<<a*19.2152;
                break;
                case 7:
                cout<<a*57.6456;
                break;
                case 8:
                cout<<a*0.000284131;
                break;
                case 9:
                cout<<a*0.284131;
                break;
                case 10:
                cout<<a*284.131;
                break;
                case 11:
                cout<<a*0.0625;
                break;
                case 12:
                cout<<a*0.25;
                break;  
                case 13:
                cout<<a*0.5; 
                break; 
                case 14:
                cout<<a;
                break;
                case 15:
                cout<<a*10;
                break;
                case 16:
                cout<<a*16;
                break;
                case 17:
                cout<<a*48;
                break;
                case 18:
                cout<<a*0.010034;
                break;
                case 19:
                cout<<a*17.3387;
                break;
     
     }
     
      }   else if(choice1==15){
             switch(choice2){
                case 1:
                cout<<a*0.00750594;
                break;
                case 2:
                cout<<a*0.0300237;
                break;
                case 3:
                cout<<a*0.0600475;
                break;
                case 4:
                cout<<a*0.118388;
                break;
                case 5:
                cout<<a*0.96076;
                break;
                case 6:
                cout<<a*1.92152;
                break;
                case 7:
                cout<<a*5.76456;
                break;
                case 8:
                cout<<a*2.8413*pow(10,-5);
                break;
                case 9:
                cout<<a*0.0284131;
                break;
                case 10:
                cout<<a*28.4131;
                break;
                case 11:
                cout<<a*0.00625;
                break;
                case 12:
                cout<<a*0.025;
                break;  
                case 13:
                cout<<a*0.05; 
                break; 
                case 14:
                cout<<a*0.1;
                break;
                case 15:
                cout<<a;
                break;
                case 16:
                cout<<a*1.6;
                break;
                case 17:
                cout<<a*4.8;
                break;
                case 18:
                cout<<a*0.0010034;
                break;
                case 19:
                cout<<a*1.73387;
                break;
     
     }
     
      }   else if(choice1==16){
             switch(choice2){
                case 1:
                cout<<a*0.00469121;
                break;
                case 2:
                cout<<a*0.0187649;
                break;
                case 3:
                cout<<a*0.0375297;
                break;
                case 4:
                cout<<a*0.0739924;
                break;
                case 5:
                cout<<a*0.600475;
                break;
                case 6:
                cout<<a*1.20095;
                break;
                case 7:
                cout<<a*3.60285;
                break;
                case 8:
                cout<<a*1.7758*pow(10,-5);
                break;
                case 9:
                cout<<a*0.0177582;
                break;
                case 10:
                cout<<a*17.7582;
                break;
                case 11:
                cout<<a*0.00390625;
                break;
                case 12:
                cout<<a*0.015625;
                break;  
                case 13:
                cout<<a*0.03125; 
                break; 
                case 14:
                cout<<a*0.0625;
                break;
                case 15:
                cout<<a*0.625;
                break;
                case 16:
                cout<<a;
                break;
                case 17:
                cout<<a*3;
                break;
                case 18:
                cout<<a*0.000627124;
                break;
                case 19:
                cout<<a*1.08367;
                break;
     
     }
     
      }  
else if(choice1==17){
             switch(choice2){
                case 1:
                cout<<a*0.00156374;
                break;
                case 2:
                cout<<a*0.00625495;
                break;
                case 3:
                cout<<a*0.0125099;
                break;
                case 4:
                cout<<a*0.0246641;
                break;
                case 5:
                cout<<a*0.200158;
                break;
                case 6:
                cout<<a*0.400317;
                break;
                case 7:
                cout<<a*1.20095;
                break;
                case 8:
                cout<<a*5.9194*pow(10,-6);
                break;
                case 9:
                cout<<a*0.00591939;
                break;
                case 10:
                cout<<a*5.91939;
                break;
                case 11:
                cout<<a*0.00130208;
                break;
                case 12:
                cout<<a*0.00520834;
                break;  
                case 13:
                cout<<a*0.0104167; 
                break; 
                case 14:
                cout<<a*0.0208333;
                break;
                case 15:
                cout<<a*0.208333;
                break;
                case 16:
                cout<<a*0.333333;
                break;
                case 17:
                cout<<a;
                break;
                case 18:
                cout<<a*0.000627124;
                break;
                case 19:
                cout<<a*1.08367;
                break;
     
     }
     
      }  else if(choice1==18){
             switch(choice2){
                case 1:
                cout<<a*7.48052;
                break;
                case 2:
                cout<<a*29.9221;
                break;
                case 3:
                cout<<a*59.8442;
                break;
                case 4:
                cout<<a*117.987;
                break;
                case 5:
                cout<<a*957.506;
                break;
                case 6:
                cout<<a*1915.01;
                break;
                case 7:
                cout<<a*5745.04;
                break;
                case 8:
                cout<<a*0.0283168;
                break;
                case 9:
                cout<<a*28.3168;
                break;
                case 10:
                cout<<a*28316.8;
                break;
                case 11:
                cout<<a*6.22884;
                break;
                case 12:
                cout<<a*24.9153;
                break;  
                case 13:
                cout<<a*49.8307; 
                break; 
                case 14:
                cout<<a*99.6614;
                break;
                case 15:
                cout<<a*996.614;
                break;
                case 16:
                cout<<a*1594.58;
                break;
                case 17:
                cout<<a*4783.74;
                break;
                case 18:
                cout<<a;
                break;
                case 19:
                cout<<a*1728;
                break;
     
     }
     
      }  else if(choice1==19){
             switch(choice2){
                case 1:
                cout<<a*0.004329;
                break;
                case 2:
                cout<<a*0.017316;
                break;
                case 3:
                cout<<a*0.034632;
                break;
                case 4:
                cout<<a*0.0682794;
                break;
                case 5:
                cout<<a*0.554113;
                break;
                case 6:
                cout<<a*1.10823;
                break;
                case 7:
                cout<<a*3.32468;
                break;
                case 8:
                cout<<a*1.6387*pow(10,-5);
                break;
                case 9:
                cout<<a*0.0163871;
                break;
                case 10:
                cout<<a*16.3871;
                break;
                case 11:
                cout<<a*0.00360465;
                break;
                case 12:
                cout<<a*0.0144186;
                break;  
                case 13:
                cout<<a*0.0288372; 
                break; 
                case 14:
                cout<<a*0.0576744;
                break;
                case 15:
                cout<<a*0.576744;
                break;
                case 16:
                cout<<a*0.92279;
                break;
                case 17:
                cout<<a*2.76837;
                break;
                case 18:
                cout<<a*0.000578704;
                break;
                case 19:
                cout<<a;
                break;
     
     }
     
      }  
           
     }  
      
      
       else if(choice==4){
        int choice1,choice2;
        cout<<"\nTo convert choice 1 to choice 2 :"
    "\n1.Miles per hour\n2.Foot per second\n3.Meter per second\n4.Kilometer per hour \n5.Knot\n"
      "\nInput choice 1:";
      cin>>choice1;
      double a;
       cout<<"Give the value you want to convert:\n";
      cin>>a;
      cout<<"Choose from\n1.Miles per hour\n2.Foot per second\n3.Meter per second\n4.Kilometer per hour \n5.Knot\n";
      cin>>choice2;
      
       if(choice1==1){
             switch(choice2){
                case 1:
                cout<<a;
                break;
                case 2:
                cout<<a*1.46667;
                break;
                case 3:
                cout<<a*0.44704;
                break;
                case 4:
                cout<<a*1.60934;
                break;
                case 5:
                cout<<a*0.868976;
                break;
               
        }
       }
        else if(choice1==2){
             switch(choice2){
              case 1:
                cout<<a*0.681818;
                break;
                case 2:
                cout<<a;
                break;
                case 3:
                cout<<a*0.3048;
                break;
                case 4:
                cout<<a*1.09728;
                break;
                case 5:
                cout<<a*0.592484;
                break;
               
        }
              
            
        }
        else if(choice1==3){
             switch(choice2){
                case 1:
                cout<<a*2.23694;
                break;
                case 2:
                cout<<a*3.28084;
                break;
                case 3:
                cout<<a;
                break;
                case 4:
                cout<<a*3.6;
                break;
                case 5:
                cout<<a*1.94384;
                break;
                
     }
     
      }  
       else if(choice1==4){
             switch(choice2){
                case 1:
                cout<<a*0.621371;
                break;
                case 2:
                cout<<a*0.911344;
                break;
                case 3:
                cout<<a*0.277778;
                break;
                case 4:
                cout<<a;
                break;
                case 5:
                cout<<a*0.539957;
                break;
                
     }
     
      }   
         else if(choice1==5){
             switch(choice2){
               
                case 1:
                cout<<a*1.15078;
                break;
                case 2:
                cout<<a*1.68781;
                break;
                case 3:
                cout<<a*0.514444; 
                break;
                 case 4:
                cout<<a*1.852;
                break;
                case 5:
                cout<<a;
                break;
               
     }
      } 
        
        }
        else if(choice==5){
        int choice1,choice2;
        cout<<"\nTo convert choice 1 to choice 2 :"
    "\n1.Tonne\n2.Kilogram\n3.Gram\n4.Milligram\n5.Microgram\n6.Imperial ton\n7.US ton\n8.Stone\n9.Pound\n10.Ounce\n"
      "\nInput choice 1:";
      cin>>choice1;
       cout<<"Give the value you want to convert:\n";
       double a;
      cin>>a;
      cout<<"Choose from\n1.Tonne\n2.Kilogram\n3.Gram\n4.Milligram\n5.Microgram\n6.Imperial ton\n7.US ton\n8.Stone\n9.Pound\n10.Ounce\nInput choice 2:";
      cin>>choice2;
      
       if(choice1==1){
             switch(choice2){
                case 1:
                cout<<a;
                break;
                case 2 :
                cout<<a*1000;
                break;
                case 3:
                cout<<a*pow(10,6);
                break;
                 case 4:
                cout<<a*pow(10,9);
                break;
                case 5:
                cout<<a*pow(10,12);
                break;
               case 6:
                cout<<a*0.984207;
                break;
                case 7:
                cout<<a*1.10231;
                break;
                case 8:
                cout<<a*157.473;
                break;
                case 9:
                cout<<a*2204.62;
                break;
                case 10:
                cout<<a*35274;
                break;
        }
       }
        else if(choice1==2){
             switch(choice2){
              case 1:
                cout<<a/100;
                break;
                case 2:
                cout<<a;
                break;
                case 3:
                cout<<a*1000;
                break;
                case 4:
                cout<<a*pow(10,6);
                break;
                case 5:
               cout<<a*pow(10,9);
                break;
                case 6:
                  cout<<a*0.000984207;
                break;
                case 7:
              cout<<a*0.00110231;
                break;
                case 8:
                cout<<a*0.157473;
                break;
                case 9:
                 cout<<a*2.20462;
                break;
                case 10:
               cout<<a*35.274;
                break;
       
        }
              
            
        }
        else if(choice1==3){
             switch(choice2){
                case 1:
                cout<<a*pow(10,-6);
                break;
                case 2:
                cout<<a*0.001;
                break;
                case 3:
                cout<<a;
                break;
                case 4:
                cout<<a*1000;
                break;
                case 5:
                cout<<a*pow(10,6);
                break;
                case 6:
                cout<<a*9.8421*pow(10,-7);
                break;
                case 7:
                cout<<a*1.1023*pow(10,-6);
                break;
                case 8:
                cout<<a*0.000157473;
                break;
                case 9:
                cout<<a*0.00220462;
                break;
                case 10:
                cout<<a*0.035274;
                break;
            
     }
     
      } 
     
     
       else if(choice1==4){
             switch(choice2){
                case 1:
                cout<<a*pow(10,-9);
                break;
                case 2:
                cout<<a*pow(10,-6);
                break;
                case 3:
                cout<<a*0.001;
                break;
                case 4:
                cout<<a;
                break;
                case 5:
                cout<<a*1000;
                break;
                case 6:
                cout<<a*9.8421*pow(10,-10);
                break;
                case 7:
                cout<<a*1.1023*pow(10,-9);
                break;
                case 8:
                cout<<a*1.5747*pow(10,-7);
                break;
                case 9:
                cout<<a*2.2046*pow(10,-6);
                break;
                case 10:
                cout<<a*3.5274*pow(10,-5);
                break;
                
     }
     
      }   
         else if(choice1==5){
             switch(choice2){
                case 1:
                cout<<a*pow(10,-12);
                break;
                case 2:
                cout<<a*pow(10,-9);
                break;
                case 3:
                cout<<a*pow(10,-6);
                break;
                case 4:
                cout<<a*0.001; 
                break;
                case 5:
                cout<<a;
                break;
                case 6:
                cout<<a*9.8421*pow(10,-13);
                break;
                case 7:
                cout<<a*1.1023*pow(10,-12);
                break;
                case 8:
                cout<<a*1.5747*pow(10,-10);
                break;
                case 9:
                cout<<a*2.2046*pow(10,-9);
                break;
                case 10:
                cout<<a*3.5274*pow(10,-8);
                break;
                 
     }
      } 
       else if(choice1==6){
             switch(choice2){
                case 1:
                cout<<a*1.01605;
                break;
                case 2:
              cout<<a*pow(10,-7);
                break;
                case 3:
                  cout<<a*1.016*pow(10,6) ;
                break;
                case 4:
             cout<<a*1.016*pow(10,9);
                break;
                case 5:
                cout<<a*1.016*pow(10,12);
                break;
                case 6:
                cout<<a;
                break;
                case 7:
                cout<<a*1.12;
                break;
                case 8:
                cout<<a*160;
                break;
                case 9:
                cout<<a*2240;
                break;
                case 10:
                cout<<a*35840 ;
                break;
               
     }
     
      }
      else if(choice1==7){
             switch(choice2){
                case 1:
                cout<<a*0.907185;
                break;
                case 2:
                cout<<a*907.185;
                break;
                case 3:
                cout<<a*907185;
                break;
                case 4:
                cout<<a*9.072*pow(10,8);
                break;
                case 5:
                cout<<a*1.609*pow(10,11);
                break;
                case 6:
                cout<<a*0.892857;
                break;
                case 7:
                cout<<a;
                break;
                case 8:
                cout<<a*142.857;
                break;
                case 9:
                cout<<a*2000;
                break;
                case 10:
                cout<<a*32000;
                break;
  
     }
     
      }
      else if(choice1==8){
             switch(choice2){
                case 1:
                cout<<a*0.00635029;
                break;
                case 2:
                cout<<a*6.35029;
                break;
                case 3:
                cout<<a*6350.29;
                break;
                case 4:
                cout<<a*6.35*pow(10,6);
                break;
                case 5:
                cout<<a*6.35*pow(10,9);
                break;
                case 6:
                cout<<a*0.00625;
                break;
                case 7:
                cout<<a*0.007;
                break;
                case 8:
                cout<<a;
                break;
                case 9:
                cout<<a*14;
                break;
                case 10:
                cout<<a*224;
                break;
             
     }
     
      } 
      else if(choice1==9){
             switch(choice2){
              case 1:
                cout<<a*0.000453592;
                break;
                case 2:
                cout<<a*0.453592;
                break;
                case 3:
                cout<<a*453.592;
                break;
                case 4:
                cout<<a*453592;
                break;
                case 5:
                cout<<a*4.536*pow(10,8);
                break;
                case 6:
                cout<<a*0.000446429;
                break;
                case 7:
                cout<<a*0.0005;
                break;
                case 8:
                cout<<a*0.0714286;
                break;
                case 9:
                cout<<a;
                break;
                case 10:
                cout<<a*16;
                break;
               
        }
              
            
        }
        else if(choice1==10){
             switch(choice2){
                case 1:
                cout<<a*2.835*pow(10, -5);
                break;
                case 2:
                cout<<a*0.0283495;
                break;
                case 3:
                cout<<a*28.3495;
                break;
                case 4:
                cout<<a*28349.5;
                break;
                case 5:
                cout<<a*2.835*pow(10,7);
                break;
                case 6:
                cout<<a*2.7902*pow(10,-5);
                break;
                case 7:
                cout<<a*3.125*(10,-5);
                break;
                case 8:
                cout<<a*0.00446429;
                break;
                case 9:
                cout<<a*0.0625;
                break;
                case 10:
                cout<<a;
                break;
               
     }
}

         
    else if(choice==6){
        int choice1,choice2;
        cout<<"\nTo convert choice 1 to choice 2 :"
    "\n1.Celcius\n2.Fahrenheit\n3.Kelvin\n"
      "\nInput choice 1:";
      cin>>choice1;
       cout<<"Give the value you want to convert:\n";
       double a;
      cin>>a;
      cout<<"Choose from\\n1.Celcius\n2.Fahrenheit\n3.Kelvin\n";
      cin>>choice2;
      
       if(choice1==1){
             switch(choice2){
                case 1:
                cout<<a;
                break;
                case 2:
                cout<<(a+(9/5))+32;
                break;
               
               
        }
              
            
        }
        else if(choice1==2){
             switch(choice2){
                case 1:
                cout<<(a-32)*(5/9);
                break;
                case 2:
                cout<<a;
                break;
                case 3:
                cout<<((a - 32) * 5/9) + 273.15;
                break;
               
                
     }
     
      }  
       else if(choice1==3){
             switch(choice2){
                case 1:
                cout<<a-273.15;
                break;
                case 2:
                cout<<((a- 273.15) * 9/5) + 32;
                break;
                case 3:
                cout<<a;
                break;
                case 4:
                cout<<a;
                break;
                case 5:
                cout<<a*0.539957;
                break;
                
     }
     
      }       
  
    }

     }

     }
     else if(opr==4){
        return 0;
        break;
             }
     cout<<endl;
}while (opr!=4);
cout<<endl;
}