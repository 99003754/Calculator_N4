#include"dim.h"
void dim_con()
{
    int choose_conv;
    int int_choice;
    int int_choice1;
    int int_choice2;
    float conv_inp;
    float conv_op;
    printf("Choose type of conversion\n1->Length Conversion\n2->Mass Conversion\n3->Temperature Conversion\n");
    scanf("%d",&choose_conv);
    switch(choose_conv)
    {
        case 1: 
                
                //centimeter/meter/km,inch/foot
                //printf("Enter input units\n1->Centimeter2->Meter3->Kilometer4->Inch5->Foot\n");
                //scanf("%d",&int_choice1);
                printf("Enter Value: ");
                scanf("%f",&conv_inp);
                if(int_choice1==1)  //Centimeter
                {
                    printf("\n1->Meter\n2->Kilometer\n3->Inch\n4->Foot: ");
                    scanf("%d",&int_choice2);

                    //Meter
                    if(int_choice2==1)
                    {
                        conv_op= conv_inp/100;
                        printf("\nIn Meter=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Kilometer
                    if(int_choice2==2)
                    {
                        conv_op= conv_inp/100000;
                        printf("\nIn Kilometer=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Inch
                    if(int_choice2==3)
                    {
                        conv_op= conv_inp/2.54;
                        printf("\nIn Inch=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Foot
                    if(int_choice2==4)
                    {
                        conv_op= conv_inp/30.48;
                        printf("\nIn Foot=%f",conv_op);
                        conv_op=0;
                    }
                                  
                }
                else if(int_choice1==2)  //Meter
                {
                    printf("\n1->Centimeter\n2->Kilometer\n3->Inch\n4->Foot:  ");
                    scanf("%d",&int_choice2);
                    //Centimeter
                    if(int_choice2==1)
                    {
                        conv_op= conv_inp*100;
                        printf("\nIn Centimeter=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Kilometer
                    if(int_choice2==2)
                    {
                        conv_op= conv_inp/1000;
                        printf("\nIn Kilometer=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Inch
                    if(int_choice2==3)
                    {
                        conv_op= conv_inp*39.37;
                        printf("\nIn Inch=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Foot
                    if(int_choice2==4)
                    {
                        conv_op= conv_inp*3.281;
                        printf("\nIn Foot=%f",conv_op);
                        conv_op=0;
                    }
                    
                }
                else if(int_choice1==3)  //Kilometer
                {
                    printf("\n1->Centimeter\n2->Meter\n3->Inch\n4->Foot:  ");
                    scanf("%d",&int_choice2);
                    //Centimeter
                    if(int_choice2==1)
                    {
                        conv_op= conv_inp*100000;
                        printf("\nIn Centimeter=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Meter
                    if(int_choice2==2)
                    {
                        conv_op= conv_inp*1000;
                        printf("\nIn Meter=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Inch
                    if(int_choice2==3)
                    {
                        conv_op= conv_inp*39370;
                        printf("\nIn Inch=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Foot
                    if(int_choice2==4)
                    {
                        conv_op= conv_inp*3281;
                        printf("\nIn Foot=%f",conv_op);
                        conv_op=0;
                    }
                    
                }
                else if(int_choice1==4)  //Inch
                {
                    printf("\n1->Centimeter\n2->Meter\n3->Kilometer\n4->Foot:  ");
                    scanf("%d",&int_choice2);
                    //Centimeter
                    if(int_choice2==1)
                    {
                        conv_op= conv_inp*2.54;
                        printf("\nIn Centimeter=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Meter
                    if(int_choice2==2)
                    {
                        conv_op= conv_inp/39.37;
                        printf("\nIn Meter=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Kilometer
                    if(int_choice2==3)
                    {
                        conv_op= conv_inp/39370;
                        printf("\nIn Kilometer=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Foot
                    if(int_choice2==4)
                    {
                        conv_op= conv_inp/12;
                        printf("\nIn Foot=%f",conv_op);
                        conv_op=0;
                    }
                    
                }
                else if(int_choice1==5) //Foot
                {
                    printf("\n1->Centimeter\n2->Meter\n3->Kilometer\n4->Inch:  ");
                    scanf("%d",&int_choice2); 
                    //Centimeter
                    if(int_choice2==1)
                    {
                        conv_op= conv_inp*30.48;
                        printf("\nIn Centimeter=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Meter
                    if(int_choice2==2)
                    {
                        conv_op= conv_inp/3.281;
                        printf("\nIn Meter=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Kilometer
                    if(int_choice2==3)
                    {
                        conv_op= conv_inp/3281;
                        printf("\nIn Kilometer=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Inch
                    if(int_choice2==4)
                    {
                        conv_op= conv_inp*12;
                        printf("\nIn Inch=%f",conv_op);
                        conv_op=0;
                    }
                    
                }
                else
                {
                    printf("\n---INVALID INPUT---");
                }
                break;
        case 2: printf("Enter input units\n1->gram2->Kilogram3->pound\n");
                scanf("%d",&int_choice1);
                printf("Enter Value: ");
                scanf("%f",&conv_inp);
                if(int_choice1==1)  //gram
                {
                    printf("\n1->Kilogram\n2->Pound: ");
                    scanf("%d",&int_choice2);
                    //Kilogram
                    if(int_choice2==1)
                    {
                        conv_op= conv_inp/1000;
                        printf("\nIn Kilogram=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //pound
                    if(int_choice2==2)
                    {
                        conv_op= conv_inp/454;
                        printf("\nIn Pound=%f",conv_op);
                        conv_op=0;
                    }
                    
                }
                else if(int_choice1==2)  //Kilogram
                {
                    printf("\n1->gram\n2->Pound: ");
                    scanf("%d",&int_choice2);
                    //gram
                    if(int_choice2==1)
                    {
                        conv_op= conv_inp*1000;
                        printf("\nIn gram=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Pound
                    if(int_choice2==2)
                    {
                        conv_op= conv_inp*2.205;
                        printf("\nIn Pound=%f",conv_op);
                        conv_op=0;
                    }
                    
                }
                else if(int_choice1==3)  //Pound
                {
                    printf("\n1->gram\n2->Kilogram: ");
                    scanf("%d",&int_choice2);
                    //gram
                    if(int_choice2==1)
                    {
                        conv_op= conv_inp*454;
                        printf("\nIn gram=%f",conv_op);
                        conv_op=0;
                    }
                    
                    //Kilogram
                    if(int_choice2==2)
                    {
                        conv_op= conv_inp/2.205;
                        printf("\nIn Kilogram=%f",conv_op);
                        conv_op=0;
                    }
                    
                }
                else
                {
                    printf("\n---INVALID INPUT---");
                }
                break;
        case 3: printf("Enter Choice 1->Celsius to Fahrenheit\n2->Fahrenheit to Celsius\n");
                scanf("%d",&int_choice);
                if(int_choice==1)
                {
                    printf("Enter Value: ");
                    scanf("%f",&conv_inp);
                    conv_op = (conv_inp*9/5)+32 ;
                    printf("\nConverted Value: %f",conv_op );
                }
                else if(int_choice==2)
                {
                    printf("Enter Value: ");
                    scanf("%f",&conv_inp);
                    conv_op = (conv_inp-32)* 5/9;
                    printf("\nConverted Value: %f",conv_op );
                }
                else
                {
                    printf("\n---INVALID INPUT---");
                }
                break;
        case 4: printf("---INVALID INPUT---");
    }
}