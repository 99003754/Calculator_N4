#include<trignometic.h>
#include<math.h>

void trig_choose()
{
     int choose_op;

    double angle_value_rad;
    double angle_value_degrees;
    
        printf("chooose trigonometric operation\n");
        printf("1.Sine\n2.cosine\n3.Tangent\n4.cotangent\n5.Sec\n6.Cosec\n7.back to main menu\n ");

        scanf("%d",&choose_op);
        printf("Enter angle value\n");
        scanf("%lf",&angle_value_degrees);
        angle_value_rad=0.0174533*angle_value_degrees;
        switch(choose_op)
        {
        case 1:
            sine(angle_value_rad);
            break;
        case 2:
            cosine(angle_value_rad);
            break;
        case 3:
            tangent(angle_value_rad);
            break;
        case 4:
            cot(angle_value_rad);
            break;
        case 5:
            sec(angle_value_rad);
            break;
        case 6:
            cosec(angle_value_rad);
            break;
        default:
           printf("Choose correct operation\n");
            break;
        }
    
}

double sine(double angle_value_rad)
{
      printf("\n%lf\n",sin(angle_value_rad));
    return (sin(angle_value_rad));
  
}

double  cosine(double angle_value_rad)
{
   
    printf("\n%lf\n",cos(angle_value_rad));
      return (cos(angle_value_rad));
}
double  tangent(double angle_value_rad)
{
    
    printf("\n%lf\n",tan(angle_value_rad));
     return (tan(angle_value_rad));
}

double cot(double angle_value_rad)
{
     printf("\n%lf\n",(1.0/tan(angle_value_rad)));
    return (1.0/tan(angle_value_rad));
    
}

double sec(double angle_value_rad)
{
    double x=cos(angle_value_rad);
        printf("\n%lf\n",(1.0/x));
     return (1/x);

}

double cosec(double angle_value_rad)
{
   printf("\n%lf\n",(1.0/sin(angle_value_rad)));
     return (1.0/sin(angle_value_rad));
    
}
