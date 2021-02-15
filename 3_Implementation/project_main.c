//include files here header
#include<bin_conv.h>
#include<trignometic.h>
#include<basic.h>
#include<dim.h>
#include<math.h>
#define VALID   (1)
#define INVALID (0)
enum operations{ Basic_Calculations=1,Trignometry,Dimension_Conversion,Binary_Decimal_Conversion, EXIT };
unsigned int calculator_operation ;
void calculator_menu(void);

int valid_operation(int operation);

int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}
void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n 1.Basic Calculations\n 2.Trigonometry\n3.Dimension Conversion\n4.Binary Decimal Conversion\n5. Exit");
    printf("\n\tEnter your choice\n");
   

    scanf("%d", &calculator_operation);

    switch(calculator_operation)
    {
        case 1:
             

            basics();
            

            break;
        case 2:

            trig_choose();
            

            break;
        case 3:
            dim_con();

            break;
        case 4:
        dectobin();

            break;
        case 5: 
            exit(0);
            break;
        default:
            printf("\nPlease choose correct options\n");

    }
}