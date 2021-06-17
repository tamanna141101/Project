#include<stdio.h>
#include<stdlib.h>
#include<time.h>
///Structure
struct patient
{
    char name[100];
    int sex;
    int blood_group;
    int age;
    int phone_number;
    int choice;
    int choose;
    int choose1;
    int q;
    int time;

} p ;
/// Functions
void log_in();
void Hospital_Type();
void Hospital_Name();
void Selection();
void Selection1();
void Department_Name();
void Booking_Time();
void display ();



int main()///main Function
{
    system("COLOR 0A");
    log_in();
    Hospital_Type();



    return 0;
}
void Hospital_Name()
{
    printf("\n\n\t\t***********************************HOSPITAL NAME***********************************\n\n\n");
}

void log_in()
{
    printf("\t\t********************************************************************************************\n");
    printf("\t\t             This is Hospital Appointment System  .Please enter your information\n");
    printf("\t\t********************************************************************************************\n\n\n");
    printf("Enter your Name : ");
    gets(p.name);
///do while loop
    do{
    printf("1.Male \n2.Female \n3.Others\n");
    printf("Enter your Sex  :\t");
    scanf("%d",&p.sex);
    fflush(stdin);

    if(p.sex == 1)
    {
        printf("Sex : Male\n");
        break;
    }
    else if(p.sex == 2)
    {
        printf("Sex : Female\n");
        break;
    }
    else if(p.sex == 3){
        printf("Sex : Others\n");
        break;
    }
    else
        printf("\n\nWrong Choice. please Try Again\n\n");
    }
    while (p.sex > 3);


///do while loop
    do
    {

        printf("Your Blood Group--> 1.A+ ,2.A- ,3.B+ ,4.B- ,5.AB+ ,6.AB- ,7.O+ ,8.O- ,9. DON'T KNOW:");
        scanf("%d",&p.blood_group);
        fflush(stdin);

        if(p.blood_group == 1)
        {
        printf("Blood Group : A+");
        break;
        }
        else if(p.blood_group == 2)
        {
        printf("Blood Group : A-");
        break;
        }
        else if(p.blood_group == 3)
        {
        printf("Blood Group : B+");
        break;
        }
        else if(p.blood_group == 4)
        {
        printf("Blood Group : B-");
        break;
        }
        else if(p.blood_group == 5)
        {
        printf("Blood Group : AB+");
        break;
        }
        else if(p.blood_group == 6)
        {
        printf("Blood Group : AB-");
        break;
        }
        else if(p.blood_group == 7)
        {
        printf("Blood Group : O+");
        break;
        }
        else if(p.blood_group == 8)
        {
        printf("Blood Group : O-");
        break;
        }
        else if(p.blood_group == 9)
        {
        printf("Blood Group : DON'T KNOW");
        break;
        }
        else
        printf("\n\nWrong Choice. please Try Again\n\n");
    }
        while(p.blood_group > 9);


    printf("\nEnter your Age  : ");
    scanf("%d",&p.age);
    fflush(stdin);
    printf("\nEnter your Phone Number  : ");
    scanf("%d",&p.phone_number);
    fflush(stdin);
return ;
}


void Hospital_Type()
{
    system("cls");
    printf("\t\t***********************************Today's Appointment***********************************\n\n\n");
    printf("\nThere are two types of hospitals.  Please enter your choice \n");
    ///do while loop
    do{
    printf("1. Government Hospital\n2. Private Hospital\n");
    printf("\n\nIf you want to exit, please press 3.  Otherwise Enter your choice: ");
    scanf(" %d",& p.choice);
    fflush(stdin);

        if(p.choice == 1)
        {
        printf("\n\nGovernment Hospital\n\n\n");
        Selection();
        break;
        }

        else if(p.choice == 2)
        {
        printf("\n\nPrivate Hospital\n\n\n");
        Selection1();
        break ;
        }
        else if( p.choice == 3)
        {
            exit (0);
        }
        else
        printf("\n\nWrong Choice. please Try Again\n\n");
    }
     while (p.choice > 3);

    return  ;
}

void Selection()
{
    system("cls");

    Hospital_Name();

    printf("\n\nGovernment Hospital\n");
    printf("===================\n\n");
    ///do while loop
    do{
        printf("\n 1.Dhaka Medical College, Dhaka\n");
        printf("\n 2.Sir Salimullah Medical College, Dhaka\n");
        printf("\n 3.Kurmitola General Hospitall, Dhaka\n");
        printf("\n 4.Mirpur Maternity Hospital, Dhaka\n");
        printf("\n 5.Bangladesh Railway Hospital, Dhaka\n");
        printf("\nIf you want to exit, please press 6.  Otherwise Enter your choice: ");
        scanf("%d",&p.choose);
        fflush(stdin);

        if(p.choose == 1)
        {
        printf("\n\nHospital Name : Dhaka Medical College, Dhaka\n\n\n ");
        break;
        }
        else if( p.choose == 2)
        {
        printf("\n\nHospital Name : Sir Salimullah Medical College, Dhaka\n\n\n");
        break;
        }
        else if( p.choose == 3)
        {
        printf("\n\nHospital Name : Kurmitola General Hospital, Dhaka\n\n\n");
        break;
        }
        else if( p.choose == 4)
        {
        printf("\n\nHospital Name : Mirpur Maternity Hospital, Dhaka\n\n\n");
        break;
        }
        else if( p.choose == 5)
        {
        printf("\n\nHospital Name : Bangladesh Railway Hospital, Dhaka\n\n\n");
        break;
        }
        else if( p.choose == 6)
        {
            exit (0);
        }
        else
        printf("\n\nWrong Choice. please Try Again\n\n");
    }
        while(p.choose > 6);


                system("pause");
                system("cls");
                Department_Name();
        return ;
  }


void Selection1()
{
    system("cls");
    Hospital_Name();
    printf("\n\nPrivate Hospital\n");
    printf("================\n\n");
    ///do while loop
      do {
        printf("\n 1.Asgar Ali Hospital, Dhaka\n");
        printf("\n 2.Lab-aid Cardiac and Specialized Hospital, Dhaka\n");
        printf("\n 3.BIRDEM Hospital, Dhaka\n");
        printf("\n 4.Ibn Sina Medical College and Hospital, Dhaka\n");
        printf("\n 5.United Hospital Gulshan, Dhaka\n");
        printf("\n\nIf you want to exit, please press 6.  Otherwise Enter your choice: ");
        scanf("%d", & p.choose1);
        fflush(stdin);

            if( p.choose1 == 1)
            {
            printf("\n\nHospital Name : Asgar Ali Hospital, Dhaka\n\n\n");
            break;
            }
            else if( p.choose1 == 2)
            {
            printf("\n\nHospital Name : Lab-aid Cardiac and Specialized Hospital, Dhaka\n\n\n");
            break;
            }
            else if( p.choose1 == 3)
            {
            printf("\n\nHospital Name : BIRDEM Hospital, Dhaka\n\n\n");
            break;
            }
            else if( p.choose1 == 4)
            {
            printf("\n\nHospital Name : Ibn Sina Medical College and Hospital, Dhaka\n\n\n");
            break;
            }
            else if( p.choose1 == 5)
            {
            printf("\n\nHospital Name : United Hospital Gulshan, Dhaka\n\n\n");
            break;
            }
            else if( p.choose1 == 6)
            {
            exit (0);
            }
            else
            printf("\n\nWrong Choice. please Try Again\n\n");
        }
            while( p.choose1 > 6 );

                system("pause");
                system("cls");
                Department_Name();
      return ;
  }



  void Department_Name()

  {
        system("cls");
        printf("\n\n\t\t***********************************DEPARTMENT NAME***********************************\n\n\n");

        printf("\n 1. Department of Cardiology\n");
        printf("\n 2. Department of Urology\n");
        printf("\n 3. Department of Nephrology\n");
        printf("\n 4. Department of Neuro Medicine\n");
        printf("\n 5. Department of Medicine focuses\n");
        printf("\n 6. Department of Dermatology\n");
        ///do while loop
        do{
        printf("\n\nIf you want to exit, please press 7.  Otherwise Enter your choice: ");
        scanf("%d",&p.q);
        fflush(stdin);

                if(p.q==1)
                {
                printf("\n\nDepartment Name : Department of Cardiology\n\n\n");
                break;
                }
                else if (p.q == 2)
                {
                printf("\n\nDepartment Name :Department of Urology\n\n\n");
                break;
                }
                else if (p.q == 3)
                {
                printf("\n\nDepartment Name : Department of Nephrology\n\n\n");
                break;
                }
                else if (p.q == 4)
                {
                printf("\n\nDepartment Name : Department of Neuro Medicine\n\n\n");
                break;
                }
                else if (p.q == 5){
                printf("\n\nDepartment Name : Department of Medicine focuses\n\n\n");
                break;
                }
                else if (p.q == 6)
                {
                printf("\n\nDepartment Name : Department of Dermatology\n\n\n");
                break;
                }
                else if( p.q == 7)
                {
                exit (0);
                }
                else
                printf("\n\nWrong Choice. please Try Again\n\n");
            }
                while(p.q > 7);

                system("pause");
                system("cls");
                Booking_Time();


                return ;
  }


  void Booking_Time()
  {
      system("cls");

      printf("\n\n\t\t***********************************BOOKING TIME***********************************\n\n\n");

    do{
        printf("\n1. 04:00 pm  \n2. 05:00 pm \n3. 06:00 pm \n4. 07:00 pm \n5. 08:00 pm \n6. 09:00 pm\n\n");
        printf ("\n\nIf you want to exit, please press 7.  Otherwise Enter your Booking Time : ");
        scanf("%d", &p.time);
        fflush(stdin);
        ///Nested
        if(p.time == 1)
        {
            ///2D array
            int array[1][1]={4},i=0,j=0 ;

            for(i=0; i<1; i++)
            {
               for(j=0; j<1; j++)
                {
                    printf("\n\n0%d :00 pm = Booked  \n\n\n", array[i][j]);

                }
            }

        }

        else  if(p.time == 2)
        {
            ///2D array
            int array[1][1]={5},i=0,j=0 ;
            for(i=0; i<1; i++)
            {
                for(j=0; j<1; j++)
                {
                    printf("\n\n0%d :00 pm = Available  \n\n\n", array[i][j]);
                }
            }
            break;
        }

        else  if(p.time == 3)
        {
            ///2D array
            int array[1][1]={6},i=0,j=0 ;
            for(i=0; i<1; i++)
            {
                for(j=0; j<1; j++)
                {
                    printf("\n\n0%d :00 pm = Available  \n\n\n", array[i][j]);
                }
            }
            break;
        }
        else  if(p.time == 4)
        {
            ///2D array
            int array[1][1]={7},i=0,j=0 ;
            for(i=0; i<1; i++)
            {
                for(j=0; j<1; j++)
                {
                    printf("\n\n0%d :00 pm = Booked  \n\n\n", array[i][j]);
                }
            }
        }
        else  if(p.time == 5)
        {
            ///2D array
            int array[1][1]={8},i=0,j=0 ;
            for(i=0; i<1; i++)
            {
                for(j=0; j<1; j++)
                {
                    printf("\n 0%d :00 pm = Available  \n\n\n", array[i][j]);
                }
            }
            break;
        }
        else  if(p.time== 6)
        {
            ///2D array
            int array[1][1]={9},i=0,j=0 ;
            for(i=0; i<1; i++)
            {
                for(j=0; j<1; j++)
                {
                    printf("\n\n0%d :00 pm = Available  \n\n\n", array[i][j]);
                }
            }
            break;
        }
        else if( p.time == 7)
        {
            exit (0);
        }

        else
            printf("\n\nWrong Choice. please Try Again\n\n");

    }
    while(p.time != 1 || 4 || 7 );

                system("pause");
                system("cls");
                display ();

    return  ;


  }

  void display ()

{
    system("cls");
    time_t currentTime;
    time(&currentTime);
    printf("%s\n",ctime(&currentTime));

    printf("\t\t\t\t\t\tYour Booking Complete\n\n");
    printf("Name: ");
    puts(p.name);

    if(p.sex == 1)
    {
        printf("Sex : Male\n");
    }
    else if(p.sex == 2)
    {
        printf("Sex : Female\n");
    }
    else
        printf("Sex : Others\n");


    if(p.blood_group == 1)
        {
        printf("Blood Group : A+");

        }
        else if(p.blood_group == 2)
        {
        printf("Blood Group : A-");

        }
        else if(p.blood_group == 3)
        {
        printf("Blood Group : B+");

        }
        else if(p.blood_group == 4)
        {
        printf("Blood Group : B-");

        }
        else if(p.blood_group == 5)
        {
        printf("Blood Group : AB+");

        }
        else if(p.blood_group == 6)
        {
        printf("Blood Group : AB-");

        }
        else if(p.blood_group == 7)
        {
        printf("Blood Group : O+");

        }
        else if(p.blood_group == 8)
        {
        printf("Blood Group : O-");

        }
        else
        {
        printf("Blood Group : DON'T KNOW");

        }

    printf("\nAge:%d\n",p.age);
    printf("phone number:%d\n",p.phone_number);

    if(p.choice == 1)
    {
        if(p.choose == 1)
        {
        printf("\nYour Hospital name :Dhaka Medical College, Dhaka");
        }
        else if( p.choose == 2)
        {
        printf("\nYour Hospital name :Sir Salimullah Medical College, Dhaka");
        }
        else if( p.choose == 3)
        {
        printf("\nYour Hospital name :Kurmitola General Hospital, Dhaka");
        }
        else if( p.choose == 4)
        {
        printf("\nYour Hospital name :Mirpur Maternity Hospital, Dhaka");
        }
        else if( p.choose == 5)
        {
        printf("\nYour Hospital name :Bangladesh Railway Hospital, Dhaka");
        }
    }
    else if(p.choice == 2)
    {
        if( p.choose1 == 1)
            {
            printf("\nYour Hospital name :Asgar Ali Hospital, Dhaka");
            }
            else if( p.choose1 == 2)
            {
            printf("\nYour Hospital name :Lab-aid Cardiac and Specialized Hospital, Dhaka");
            }
            else if( p.choose1 == 3)
            {
            printf("\nYour Hospital name :BIRDEM Hospital, Dhaka");
            }
            else if( p.choose1 == 4)
            {
            printf("\nYour Hospital name :Ibn Sina Medical College and Hospital, Dhaka");
            }
            else if( p.choose1 == 5)
            {
            printf("\nYour Hospital name :United Hospital Gulshan, Dhaka");
            }
    }


                if(p.q==1)
                {
                printf("\nYour Department name : Department of Cardiology");
                }
                else if (p.q == 2)
                {
                printf("\nYour Department name : Department of Urology");
                }
                else if (p.q == 3)
                {
                printf("\nYour Department name : Department of Nephrology");
                }
                else if (p.q == 4)
                {
                printf("\nYour Department name : Department of Neuro Medicine");
                }
                else if (p.q == 5){
                printf("\nYour Department name : Department of Medicine focuses");
                }
                else if (p.q == 6)
                {
                printf("\nYour Department name : Department of Dermatology");
                }



        if(p.time == 2)
        {
            int array[1][1]={5},i=0,j=0 ;
            for(i=0; i<1; i++)
            {
                for(j=0; j<1; j++)
                {
                    printf("\nYour Booking Time 0%d :00 pm   \n", array[i][j]);
                }
            }
        }

        else  if(p.time == 3)
        {
            int array[1][1]={6},i=0,j=0 ;
            for(i=0; i<1; i++)
            {
                for(j=0; j<1; j++)
                {
                    printf("\nYour Booking Time 0%d :00 pm  \n", array[i][j]);
                }
            }
        }

        else  if(p.time == 5)
        {
            int array[1][1]={8},i=0,j=0 ;
            for(i=0; i<1; i++)
            {
                for(j=0; j<1; j++)
                {
                    printf("\nYour Booking Time 0%d :00 pm   \n", array[i][j]);
                }
            }

        }
        else if (p.time ==6)
        {
            int array[1][1]={9},i=0,j=0 ;
            for(i=0; i<1; i++)
            {
                for(j=0; j<1; j++)
                {
                    printf("\nYour Booking Time 0%d :00 pm  \n", array[i][j]);
                }
            }
        }

    printf("\n\n\t\t***********************************THANK YOU***********************************\n");

return ;
}
