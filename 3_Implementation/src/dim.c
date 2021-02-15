
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
                printf("Enter input units\n1->Centimeter2->Meter3->Kilometer4->Inch5->Foot\n");
                scanf("%d",&int_choice1);
                printf("Enter Value: ");
                scanf("%f",&conv_inp);
                if(int_choice1==1)  //Centimeter
                {
                    printf("\nChoose output Units\n1->Meter\n2->Kilometer\n3->Inch\n4->Foot: ");
                    scanf("%d",&int_choice2);

                    //Meter
                    if(int_choice2==1)
                    {
                        /*conv_op= conv_inp/100;
                        printf("\nIn Meter=%f",conv_op);
                        conv_op=0;*/
                        conv_op=cm_to_m(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Kilometer
                    if(int_choice2==2)
                    {
                        /*conv_op= conv_inp/100000;
                        printf("\nIn Kilometer=%f",conv_op);
                        conv_op=0;*/
                        conv_op=cm_to_km(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Inch
                    if(int_choice2==3)
                    {
                        /*conv_op= conv_inp/2.54;
                        printf("\nIn Inch=%f",conv_op);
                        conv_op=0;*/
                        conv_op=cm_to_inch(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Foot
                    if(int_choice2==4)
                    {
                        /*conv_op= conv_inp/30.48;
                        printf("\nIn Foot=%f",conv_op);
                        conv_op=0;*/
                        conv_op=cm_to_foot(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                                  
                }
                else if(int_choice1==2)  //Meter
                {
                    printf("\n1->Centimeter\n2->Kilometer\n3->Inch\n4->Foot:  ");
                    scanf("%d",&int_choice2);
                    //Centimeter
                    if(int_choice2==1)
                    {
                        /*conv_op= conv_inp*100;
                        printf("\nIn Centimeter=%f",conv_op);
                        conv_op=0;*/
                        conv_op=m_to_cm(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Kilometer
                    if(int_choice2==2)
                    {
                        /*conv_op= conv_inp/1000;
                        printf("\nIn Kilometer=%f",conv_op);
                        conv_op=0;*/
                        conv_op=m_to_km(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Inch
                    if(int_choice2==3)
                    {
                        /*conv_op= conv_inp*39.37;
                        printf("\nIn Inch=%f",conv_op);
                        conv_op=0;*/
                        conv_op=m_to_inch(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Foot
                    if(int_choice2==4)
                    {
                        /*conv_op= conv_inp*3.281;
                        printf("\nIn Foot=%f",conv_op);
                        conv_op=0;*/
                        conv_op=m_to_foot(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                }
                else if(int_choice1==3)  //Kilometer
                {
                    printf("\n1->Centimeter\n2->Meter\n3->Inch\n4->Foot:  ");
                    scanf("%d",&int_choice2);
                    //Centimeter
                    if(int_choice2==1)
                    {
                        /*conv_op= conv_inp*100000;
                        printf("\nIn Centimeter=%f",conv_op);
                        conv_op=0;*/
                        conv_op=km_to_cm(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Meter
                    if(int_choice2==2)
                    {
                        /*conv_op= conv_inp*1000;
                        printf("\nIn Meter=%f",conv_op);
                        conv_op=0;*/
                        conv_op=km_to_m(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Inch
                    if(int_choice2==3)
                    {
                        /*conv_op= conv_inp*39370;
                        printf("\nIn Inch=%f",conv_op);
                        conv_op=0;*/
                        conv_op=km_to_inch(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Foot
                    if(int_choice2==4)
                    {
                        /*conv_op= conv_inp*3281;
                        printf("\nIn Foot=%f",conv_op);
                        conv_op=0;*/
                        conv_op=km_to_foot(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                }
                else if(int_choice1==4)  //Inch
                {
                    printf("\n1->Centimeter\n2->Meter\n3->Kilometer\n4->Foot:  ");
                    scanf("%d",&int_choice2);
                    //Centimeter
                    if(int_choice2==1)
                    {
                        /*conv_op= conv_inp*2.54;
                        printf("\nIn Centimeter=%f",conv_op);
                        conv_op=0;*/
                        conv_op=inch_to_cm(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Meter
                    if(int_choice2==2)
                    {
                        /*conv_op= conv_inp/39.37;
                        printf("\nIn Meter=%f",conv_op);
                        conv_op=0;*/
                        conv_op=inch_to_m(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Kilometer
                    if(int_choice2==3)
                    {
                        /*conv_op= conv_inp/39370;
                        printf("\nIn Kilometer=%f",conv_op);
                        conv_op=0;*/
                        conv_op=inch_to_km(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Foot
                    if(int_choice2==4)
                    {
                        /*conv_op= conv_inp/12;
                        printf("\nIn Foot=%f",conv_op);
                        conv_op=0;*/
                        conv_op=inch_to_foot(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                }
                else if(int_choice1==5) //Foot
                {
                    printf("\n1->Centimeter\n2->Meter\n3->Kilometer\n4->Inch:  ");
                    scanf("%d",&int_choice2); 
                    //Centimeter
                    if(int_choice2==1)
                    {
                        /*conv_op= conv_inp*30.48;
                        printf("\nIn Centimeter=%f",conv_op);
                        conv_op=0;*/
                        conv_op=foot_to_cm(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Meter
                    if(int_choice2==2)
                    {
                        /*conv_op= conv_inp/3.281;
                        printf("\nIn Meter=%f",conv_op);
                        conv_op=0;*/
                        conv_op=foot_to_m(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Kilometer
                    if(int_choice2==3)
                    {
                        /*conv_op= conv_inp/3281;
                        printf("\nIn Kilometer=%f",conv_op);
                        conv_op=0;*/
                        conv_op=foot_to_km(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Inch
                    if(int_choice2==4)
                    {
                        /*conv_op= conv_inp*12;
                        printf("\nIn Inch=%f",conv_op);
                        conv_op=0;*/
                        conv_op=foot_to_inch(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
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
                        /*conv_op= conv_inp/1000;
                        printf("\nIn Kilogram=%f",conv_op);
                        conv_op=0;*/
                        conv_op=g_to_kg(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //pound
                    if(int_choice2==2)
                    {
                        /*conv_op= conv_inp/454;
                        printf("\nIn Pound=%f",conv_op);
                        conv_op=0;*/
                        conv_op=g_to_pd(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                }
                else if(int_choice1==2)  //Kilogram
                {
                    printf("\n1->gram\n2->Pound: ");
                    scanf("%d",&int_choice2);
                    //gram
                    if(int_choice2==1)
                    {
                        /*conv_op= conv_inp*1000;
                        printf("\nIn gram=%f",conv_op);
                        conv_op=0;*/
                        conv_op=kg_to_g(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Pound
                    if(int_choice2==2)
                    {
                        /*conv_op= conv_inp*2.205;
                        printf("\nIn Pound=%f",conv_op);
                        conv_op=0;*/
                        conv_op=kg_to_pd(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                }
                else if(int_choice1==3)  //Pound
                {
                    printf("\n1->gram\n2->Kilogram: ");
                    scanf("%d",&int_choice2);
                    //gram
                    if(int_choice2==1)
                    {
                        /*conv_op= conv_inp*454;
                        printf("\nIn gram=%f",conv_op);
                        conv_op=0;*/
                        conv_op=pd_to_g(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
                    }
                    
                    //Kilogram
                    if(int_choice2==2)
                    {
                        /*conv_op= conv_inp/2.205;
                        printf("\nIn Kilogram=%f",conv_op);
                        conv_op=0;*/
                        conv_op=pd_to_kg(conv_inp);
                        printf("\nMeter:%f\n",conv_op);
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
                    //conv_op = (conv_inp*9/5)+32 ;
                    conv_op=C_to_F(conv_inp);
                    printf("\nConverted Value: %f",conv_op );
                }
                else if(int_choice==2)
                {
                    printf("Enter Value: ");
                    scanf("%f",&conv_inp);
                    //conv_op = (conv_inp-32)* 5/9;
                    conv_op=F_to_C(conv_inp);
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


float F_to_C(float conv_inp)
{
    return((conv_inp-32)* 5/9);
}

float C_to_F(float conv_inp)
{
     return( (conv_inp*9/5)+32);
}


float cm_to_m(float conv_inp)
{
    return (conv_inp/100);
   
}

float cm_to_km(float conv_inp)
{
    return (conv_inp/100000);
   
}

float cm_to_inch(float conv_inp)
{
    return (conv_inp/2.54);
   
}

float cm_to_foot(float conv_inp)
{
    return (conv_inp/30.48);
   
}


float m_to_cm(float conv_inp)
{
    return (conv_inp*100);
   
}

float m_to_km(float conv_inp)
{
    return (conv_inp/1000);
   
}

float m_to_inch(float conv_inp)
{
    return (conv_inp*39.27);
   
}

float m_to_foot(float conv_inp)
{
    return (conv_inp*3.281);
   
}

float km_to_cm(float conv_inp)
{
    return (conv_inp*100000);
   
}

float km_to_m(float conv_inp)
{
    return (conv_inp*1000);
   
}

float km_to_inch(float conv_inp)
{
    return (conv_inp*39370);
   
}

float km_to_foot(float conv_inp)
{
    return (conv_inp*3281);
   
}

float inch_to_cm(float conv_inp)
{
    return (conv_inp*2.54);
   
}

float inch_to_m(float conv_inp)
{
    return (conv_inp/39.37);
   
}

float inch_to_km(float conv_inp)
{
    return (conv_inp/39370);
   
}

float inch_to_foot(float conv_inp)
{
    return (conv_inp/12);
   
}

float foot_to_cm(float conv_inp)
{
    return (conv_inp*30.48);
   
}

float foot_to_m(float conv_inp)
{
    return (conv_inp/3.281);
   
}

float foot_to_km(float conv_inp)
{
    return (conv_inp/3281);
   
}

float foot_to_inch(float conv_inp)
{
    return (conv_inp*12);
   
}

float g_to_kg(float conv_inp)
{
    return (conv_inp/1000);
   
}

float g_to_pd(float conv_inp)
{
    return (conv_inp/454);
   
}

float kg_to_g(float conv_inp)
{
    return (conv_inp*1000);
   
}

float kg_to_pd(float conv_inp)
{
    return (conv_inp*2.205);
   
}

float pd_to_g(float conv_inp)
{
    return (conv_inp*454);
   
}

float pd_to_kg(float conv_inp)
{
    return (conv_inp/2.205);
   
}







