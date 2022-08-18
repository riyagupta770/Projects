#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void Bill(){
float num,sum=0;
FILE *fp;
fp=fopen("Bill.txt","r+");
while(1){
    num=getw(fp);
    if(num!=EOF){
      sum=sum+num;
    }
    else
    break;
}
fclose(fp);
printf("\n Bill: %.2f",sum);
}
void services()
{
	int n;
	printf("\n1.Starters\n2.Burger\n3.Pasta\n4.Mocktails\n5.Exit\n Select One item...");
	scanf("%d",&n);
	switch (n)
	{
		case 1:
			printf("\n1.Honey Chilly Fries\n2.Manchurian\n3. Chilly Paneer\n4.Chinese Bhell\n Select One item...");
			starters();
			 break;
		case 2:
			printf("\n1.Cheese Burst Burger\n2. Green Chilly Burger\n3.Masala Burger\n4.Punjabi Tadka Burger\n Select One item...");
			 Burger();
			  break;
		case 3:
			printf("\n1.Creamy White Sauce Pasta\n2.Spicy Red Sauce Pasta\n3.Cheese Burst Pasta\n4.Baked Cheese Pasta \n Select One item...");
			Pasta();
			 break;
		case 4:
			printf("\n1.Black Currant\n2.Green Apple\n3.Pineapple Crush\n4.Mojito\n5.Kiwi Crush \n Select One item...");
			Mocktails();
			 break;
		case 5:
             printf("\tThank you to Visit Us");
              break;
		default:
			printf("Wrong Input:\nServices:");
			services();
	}
}
void starters()
{
	int n,pieces;
	float bill;
	FILE *fp;
	fp= fopen("bill.txt","a");
	scanf("%d",&n);
	printf("\n");
	switch (n)
	{
		case 1:
			printf("Honey Chilly Fries \t\t180rs\n How many pieces - ");
			scanf(" %d",&pieces);
			bill= pieces*180;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;
        case 2:
			printf("Manchurian \t\t129rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*129;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;
        case 3:
			printf(" Chilly Paneer \t\t330rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*330;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;
        case 4:
			printf("Chinese Bhell \t\t55rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*55;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;

	}
}

void Burger()
{
	int n,pieces;
	float bill;
	FILE *fp;
	fp= fopen("bill.txt","a");
	scanf("%d",&n);
	printf("\n");
	switch (n)
	{
		case 1:
			printf("Cheese Burst Burger \t\t120rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*120;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;
        case 2:
			printf("Green Chilly Burger \t\t77rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*77;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;
        case 3:
			printf(" Masala Burger \t\t60rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*60;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;
        case 4:
			printf("Punjabi Tadka Burger \t\t45rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*45;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;

	}
}

void Pasta()
{
	int n,pieces;
	float bill;
	FILE *fp;
	fp= fopen("bill.txt","a");
	scanf("%d",&n);
	printf("\n");
	switch (n)
	{
		case 1:
			printf("Creamy White Sauce Pasta \t\t70rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*70;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;
        case 2:
			printf("Spicy Red Sauce Pasta \t\t60rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*60;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;
        case 3:
			printf(" Cheese Burst Pasta \t\t85rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*85;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;
        case 4:
			printf("Baked Cheese Pasta \t\t75rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*75;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;

	}
}
void Mocktails()
{
	int n,pieces;
	float bill;
	FILE *fp;
	fp= fopen("bill.txt","a");
	scanf("%d",&n);
	printf("\n");
	switch (n)
	{
		case 1:
			printf("Black Currant \t\t120rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*120;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;
        case 2:
			printf("Green Apple \t\t99rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*99;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;
        case 3:
			printf(" Pineapple Crush \t\t59rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*59;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;
        case 4:
			printf("Mojito \t\t149rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*149;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;
        case 5:
			printf("Kiwi Crush \t\t99rs\n How many pieces - ");
			scanf("%d",&pieces);
			bill= pieces*99;
			putw(bill,fp);
			fclose(fp);
			Bill();
			services();
			break;

	}
}
int admn()
{
    int n,c,i;
    char *s,ch;
    s=(char *)malloc(12*sizeof(char));
    printf("1.Tapesh Kumar Sharma\t2.Paritosh Mishra\n3.Vinay Saini\t        4.Riya Gupta\n");
     printf("Please select your Account: ");
    scanf("%d",&n);
    switch (n)
        {
        case 1:
            printf("Enter Password: ");
            for(i=0;i<12;i++){
             s[i]=getch();
             if(s[i]==13){
                s[i]='\0';
                break;}
             printf("*");
            }
            c=strcmp(s,"tapesh@");
            if(c==0)
            {
               printf("\nOur Services:");
               services();
            }
            else{
                printf("\nIncorrect Password..\nTry Again:\n");
                admn();
            }
            break;
        case 2:
            printf("Enter Password: ");
             for(i=0;i<12;i++){
             s[i]=getch();
             if(s[i]==13){
                s[i]='\0';
                break;}
             printf("*");
            }
            c=strcmp(s,"paritosh@1");
            if(c==0)
            {
                printf("\nOur Services:");
                services();
            }
            else{
                printf("\nIncorrect Password..\nTry Again:\n");
                admn();
            }
            break;
        case 3:
            printf("Enter Password: ");
            for(i=0;i<12;i++){
             s[i]=getch();
             if(s[i]==13){
                s[i]='\0';
                break;}
             printf("*");
            }
            c=strcmp(s,"vinay@");
            if(c==0)
            {
                printf("\nOur Services:");
                services();
            }
            else{
                printf("\nIncorrect Password..\nTry Again:\n");
                admn();
            }
            break;
        case 4:
            printf("Enter Password: ");
             for(i=0;i<12;i++){
             s[i]=getch();
             if(s[i]==13){
                s[i]='\0';
                break;}
             printf("*");
            }
            c=strcmp(s,"riya@");
            if(c==0)
            {
                printf("\nOur Services:");
                services();
            }
            else{
                printf("\nIncorrect Password..\nTry Again:\n");
                admn();
            }
            break;
        default:
            printf("Choose Correct Option..");
            admn();
            break;
        }

    return 0;
}
int main()
{
    FILE *fp;
    fp=fopen("Bill.txt","w");
    fclose(fp);
    printf("                                                 *\n");
    printf("                                                ***\n");
    printf("                                               *****\n");
    printf("                                             *********\n");
    printf("                +--  -+-  --  +   +  ~  ^*  i +--    +===   ---   |  |   ==  +-->  +====\n");
    printf("                |  }  |  |__| | v | | | | * | |  }   |__   |   |  |  |  |__| |__}  |===\n");
    printf("                +--  -+- |  | |   |  ~  i  *_ +--    ___|  |__x|  |__|  |  | |  L_ |==== \n");
    printf("                                             *********\n");
    printf("                                               *****\n");
    printf("                                                ***\n");
    printf("                                                 *\n\n\n");
    printf("                              WELCOME TO DIAMOND SQUARE RESTRAURANT\n\n\n");
    printf("ADMINS:\n");
    admn();
    return 0;
}
