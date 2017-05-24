#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct block
{
char name[30];
int cost;
int rent, hotrent, hourent,house,hotel;
int owner;
int colour;
};
struct players
{
char name[30];
int location;
int balance;
int blocks;
int loan;
int house;
int hotel;
int bid;
int wantbid;
};
int main()
{ int n=1,q=0,i,j,r,l;
  struct players p[4];
  struct block b[28];

  strcpy(b[0].name,"start");
  b[0].cost=0;
  b[0].rent=0;
  b[0].hotrent=0;
  b[0].hourent=0;
  b[0].house=0;
  b[0].hotel=0;
  b[0].owner=5;
  b[0].colour=0;

  strcpy(b[1].name,"Kochi");
  b[1].cost=5000;
  b[1].rent=800;
  b[1].hotrent=2200;
  b[1].hourent=1200;
  b[1].house=0;
  b[1].hotel=0;
  b[1].owner=5;
  b[1].colour=1;

  strcpy(b[2].name,"Ahmedabad");
  b[2].cost=4000;
  b[2].rent=1000;
  b[2].hotrent=2000;
  b[2].hourent=1200;
  b[2].house=0;
  b[2].hotel=0;
  b[2].owner=5;
  b[2].colour=3;

  strcpy(b[3].name,"Income Tax");
  b[3].cost=0;
  b[3].rent=0;
  b[3].hotrent=0;
  b[3].hourent=0;
  b[3].house=0;
  b[3].hotel=0;
  b[3].owner=5;
  b[3].colour=0;

  strcpy(b[4].name,"Indore");
  b[4].cost=1500;
  b[4].rent=400;
  b[4].hotrent=800;
  b[4].hourent=600;
  b[4].house=0;
  b[4].hotel=0;
  b[4].owner=5;
  b[4].colour=2;

  strcpy(b[5].name,"Chance");
  b[5].cost=0;
  b[5].rent=0;
  b[5].hotrent=0;
  b[5].hourent=0;
  b[5].house=0;
  b[5].hotel=0;
  b[5].owner=5;
  b[5].colour=0;

  strcpy(b[6].name,"Jaipur");
  b[6].cost=3000;
  b[6].rent=600;
  b[6].hotrent=1500;
  b[6].hourent=1000;
  b[6].house=0;
  b[6].hotel=0;
  b[6].owner=5;
  b[6].colour=4;

  strcpy(b[7].name,"Ootacaland");
  b[7].cost=2500;
  b[7].rent=500;
  b[7].hotrent=1000;
  b[7].hourent=800;
  b[7].house=0;
  b[7].hotel=0;
  b[7].owner=5;
  b[7].colour=1;

  strcpy(b[8].name,"REST HOUSE");
  b[8].cost=0;
  b[8].rent=0;
  b[8].hotrent=0;
  b[8].hourent=0;
  b[8].house=0;
  b[8].hotel=0;
  b[8].owner=5;
  b[8].colour=0;

  strcpy(b[9].name,"Delhi");
  b[9].cost=6000;
  b[9].rent=1000;
  b[9].hotrent=2000;
  b[9].hourent=1500;
  b[9].house=0;
  b[9].hotel=0;
  b[9].owner=5;
  b[9].colour=4;

  strcpy(b[10].name,"Shimla");
  b[10].cost=2200;
  b[10].rent=500;
  b[10].hotrent=1000;
  b[10].hourent=800;
  b[10].house=0;
  b[10].hotel=0;
  b[10].owner=5;
  b[10].colour=3;

  strcpy(b[11].name,"Amritsar");
  b[11].cost=330;
  b[11].rent=600;
  b[11].hotrent=1000;
  b[11].hourent=800;
  b[11].house=0;
  b[11].hotel=0;
  b[11].owner=5;
  b[11].colour=2;

  strcpy(b[12].name,"Community Chest");
  b[12].cost=0;
  b[12].rent=0;
  b[12].hotrent=0;
  b[12].hourent=0;
  b[12].house=0;
  b[12].hotel=0;
  b[12].owner=5;
  b[12].colour=0;

  strcpy(b[13].name,"Shrinagar");
  b[13].cost=5000;
  b[13].rent=800;
  b[13].hotrent=3000;
  b[13].hourent=1000;
  b[13].house=0;
  b[13].hotel=0;
  b[13].owner=5;
  b[13].colour=1;

  strcpy(b[14].name,"Club");
  b[14].cost=0;
  b[14].rent=0;
  b[14].hotrent=0;
  b[14].hourent=0;
  b[14].house=0;
  b[14].hotel=0;
  b[14].owner=5;
  b[14].colour=3;

  strcpy(b[15].name,"Agra");
  b[15].cost=2500;
  b[15].rent=500;
  b[15].hotrent=1000;
  b[15].hourent=800;
  b[15].house=0;
  b[15].hotel=0;
  b[15].owner=5;
  b[15].colour=1;

  strcpy(b[16].name,"Chance");
  b[16].cost=0;
  b[16].rent=0;
  b[16].hotrent=0;
  b[16].hourent=0;
  b[16].house=0;
  b[16].hotel=0;
  b[16].owner=5;
  b[16].colour=0;

  strcpy(b[17].name,"Darjeeling");
  b[17].cost=4000;
  b[17].rent=1000;
  b[17].hotrent=2000;
  b[17].hourent=1200;
  b[17].house=0;
  b[17].hotel=0;
  b[17].owner=5;
  b[17].colour=2;

  strcpy(b[18].name,"Patna");
  b[18].cost=2000;
  b[18].rent=400;
  b[18].hotrent=800;
  b[18].hourent=600;
  b[18].house=0;
  b[18].hotel=0;
  b[18].owner=5;
  b[18].colour=3;

  strcpy(b[19].name,"Kolkata");
  b[19].cost=2500;
  b[19].rent=500;
  b[19].hotrent=1000;
  b[19].hourent=800;
  b[19].house=0;
  b[19].hotel=0;
  b[19].owner=5;
  b[19].colour=4;

  strcpy(b[20].name,"Hyderabad");
  b[20].cost=3500;
  b[20].rent=700;
  b[20].hotrent=2000;
  b[20].hourent=1000;
  b[20].house=0;
  b[20].hotel=0;
  b[20].owner=5;
  b[20].colour=3;

  strcpy(b[21].name,"Pune");
  b[21].cost=3000;
  b[21].rent=600;
  b[21].hotrent=1500;
  b[21].hourent=1000;
  b[21].house=0;
  b[21].hotel=0;
  b[21].owner=5;
  b[21].colour=2;

  strcpy(b[22].name,"JAIL");
  b[22].cost=0;
  b[22].rent=0;
  b[22].hotrent=0;
  b[22].hourent=0;
  b[22].house=0;
  b[22].hotel=0;
  b[22].owner=5;
  b[22].colour=0;

  strcpy(b[23].name,"Chennai");
  b[23].cost=7000;
  b[23].rent=1300;
  b[23].hotrent=2800;
  b[23].hourent=1800;
  b[23].house=0;
  b[23].hotel=0;
  b[23].owner=5;
  b[23].colour=1;

  strcpy(b[24].name,"Bengaluru");
  b[24].cost=4000;
  b[24].rent=1000;
  b[24].hotrent=2000;
  b[24].hourent=1200;
  b[24].house=0;
  b[24].hotel=0;
  b[24].owner=5;
  b[24].colour=2;

  strcpy(b[25].name,"WEALTH TAX");
  b[25].cost=0;
  b[25].rent=0;
  b[25].hotrent=0;
  b[25].hourent=0;
  b[25].house=0;
  b[25].hotel=0;
  b[25].owner=5;
  b[25].colour=0;

  strcpy(b[26].name,"Guwahati");
  b[26].cost=4000;
  b[26].rent=1000;
  b[26].hotrent=2000;
  b[26].hourent=1200;
  b[26].house=0;
  b[26].hotel=0;
  b[26].owner=5;
  b[26].colour=4;

  strcpy(b[27].name,"Mumbai");
  b[27].cost=8500;
  b[27].rent=1500;
  b[27].hotrent=5000;
  b[27].hourent=2000;
  b[27].house=0;
  b[27].hotel=0;
  b[27].owner=5;
  b[27].colour=2;

  for(int i=0;i<4;i++)
  {
    p[i].location=0;
    p[i].balance=8000;
    p[i].blocks=0;
    p[i].loan=0;
    p[i].house=0;
    p[i].hotel=0;
    p[i].bid=0;
    p[i].wantbid=0;
  }
	
  printf("Enter Player Names\n");
  scanf("                    %s%s%s%s",p[0].name,p[1].name,p[2].name,p[3].name);
for(;;)
{
for(int i=0;i<4;i++)
{ FILE *board=fopen("board.txt","r");
  char ch;
  while((ch=getc(board))!=EOF)
  putchar(ch);
  printf("\n%s To Roll The Dice Press R\nTo Quit Press Q\n",p[i].name);
  char c;
  scanf("                                              %c",&c);
  if(c=='R'||c=='r')
  { r=rand()%11+2;
     printf("value on dice is %d\n",r);
     p[i].location=(p[i].location+r)%28;
     
     printf("%s you are at %s with amount %d\n",p[i].name,b[p[i].location].name,p[i].balance);
     if(b[p[i].location].owner==i)
     { if(b[p[i].location].house&&b[p[i].location].hotel!=3)
       {printf("what do You Want to Do\n1.Buy Hotel\n2.Buy House\n3.Do nothing");
        int x;
        scanf("%d",&x);
        if(x==1)
        {  p[i].balance=p[i].balance-b[p[i].location].hotrent;
           b[p[i].location].hotel++;
           p[i].hotel++;
        }
        else if(x==2)
        { p[i].balance=p[i].balance-b[p[i].location].hourent;
           b[p[i].location].house++;
        }
      }
     }
      else if(b[p[i].location].owner==5)
      	{ if(p[i].location==0)
          { p[i].balance+=1500;
              printf(" congrats! %s you got 1500 as Reward\n",p[i].name);
          }
          else if(p[i].location==3||p[i].location==25||p[i].location==8||p[i].location==14)
          {   p[i].balance-=200;
              printf("%s you need to pay 200 as Tax\n",p[i].name);
          }
          else if(p[i].location==22)
            { printf("%s \n You are at JAIL,you need to pay 500 as Bounty",p[i].name);
              p[i].balance-=599;
            } 
          else if(p[i].location==12)
          {
            if(r==2)
            {
              printf("Birthday Gift from each player of Rs.500.");
              p[i].balance+=1500;
              for(j=0;j<4;j++)
              {
                if(j!=i)
                {
                  p[j].balance-=500;
                }
              } 
            }
            if(r==3)
            {
              printf("Go to jail");
              p[i].location=22;
            }
            if(r==4)
            {
              printf("1st price in beauty contest, collect Rs.2500");
              p[i].balance+=2500;
            } 
            if(r==5)
            {
              printf("Pay School fee:Rs.1000");
              p[i].balance-=1000;
            } 
            if(r==6)
            {
              printf("Income tax refund:Rs.2000");
              p[i].balance+=2000;
            }
            if(r==7)
            {
             printf("Marriage celebration, Pay Rs.2000");
             p[i].balance-=2000;
            }
            if(r==8)
            {
             printf("Go to rest house");
             p[i].balance-=200;
             p[i].location=8;
            }
            if(r==9)
            {
             printf("Make repairs on houses:Rs.50/House and Rs.100/Hotel");
             p[i].balance=p[i].balance-p[i].house*50-p[i].hotel*100;
            }
            if(r==10)
            {
             printf("Receive Rs.3500 interest");
             p[i].balance+=3500;
            }
            if(r==11)
            {
             printf("Pay insurance premium:Rs.1500");
             p[i].balance-=1500;
            }
            if(r==12)
            {
             printf("Sale of stocks: Rs.3000");
             p[i].balance+=3000;
            }
            }     
	else if(p[i].location==5 || p[i].location==16)
{
if(r==2)
{
printf("Loss in share market.Pay 2000");
p[i].balance-=2000;
}
if(r==3)
{
printf("Lottery Price:Rs.2500");
p[i].balance+=2500;
}
if(r==4)
{
printf("Fine fordrunk driving Rs.1000");
p[i].balance-=1000;
}
if(r==5)
{
printf("Won crossword competition:Rs.1000");
p[i].balance+=1000;
} 
if(r==6)
{
printf("House repairs. Rs.1500");
p[i].balance-=1500;
}
if(r==7)
{
printf("Jackpot. Rs.2000");
p[i].balance+=2000;
}
if(r==8)
{
printf("Fire-loss in gundown.RS.3000");
p[i].balance-=3000;
}
if(r==9)
{
printf("Go back to bombay.If you have to pass starting pt, collect Rs.1500 and go to Darjeeling.");
if(p[i].location>17)
{
p[i].balance+=1500;
p[i].location=17;
}

}
if(r==10)
{
printf("Go to Jail");
p[i].location=22;
}
if(r==11)
{
printf("Best in export, collect 3000");
p[i].balance+=3000;
}
if(r==12)
{
printf("Go to resthouse.");
p[i].balance-=200;
}
}
           else
          {
          printf("what do You Want to Do\n1.Buy\n2.Leave It\n");
        int x;
        scanf("%d",&x);
        if(x==1)
         { 
           if(p[i].balance<b[p[i].location].cost)
           {
            p[i].blocks++;
            p[i].balance=p[i].balance-b[p[i].location].cost;
            b[p[i].location].owner=i;
            printf("You Bought %s. You are out of Money,Please take Loan From Bank or Auction Your asset\n",b[p[i].location].name);
           }
          else
          { 
           p[i].blocks++;
           p[i].balance=p[i].balance-b[p[i].location].cost;
           b[p[i].location].owner=i;
           printf("You Bought %s. Your current balance is %d\n",b[p[i].location].name,p[i].balance);
          }
         }
        }
       } 
      else
       {
        for(int j=0;j<4;j++)
       	 { if(b[p[i].location].owner==j)
       	 	{  int count=0;
            for(int x=0;x<28;x++)
             {
              if(b[x].colour==b[p[j].location].colour && b[x].owner==j)
                count++;
            }
             if(count<3)
             {
             int x=b[p[i].location].rent+b[p[i].location].hotrent*b[p[i].location].hotel+b[p[i].location].hourent*b[p[i].location].house;
       	 	   p[i].balance=p[i].balance-x;
       	 	   p[j].balance=p[j].balance+x;
             printf("%s You need To Give %d to %s as You are At his city\n",p[i].name,x,p[j].name);
             }
             else
            {
             int x=b[p[i].location].rent+b[p[i].location].hotrent*b[p[i].location].hotel+b[p[i].location].hourent*b[p[i].location].house;
             x=x*2;
             p[i].balance=p[i].balance-x;
             p[j].balance=p[j].balance+x;
             printf("%s You need To Give %d to %s as You are At his city\n",p[i].name,x,p[j].name);
             }


       	 	}
       	 }
       }
    }
    else
      q=1;     
       if(p[i].balance<=0)
        { 
          int k;
          printf("\n1.Quit 2.Loan 3.Sell/Auction\n");
          scanf("%d",&k);
          if(k==1)
          { 
          n=0;
         break;
          }
       else if(k==2)
       { if(p[i].loan==0)
          { int z;
            printf("%s Please Enter the amount you want as loan(less than 8000)",p[i].name);
            scanf("                                                             %d",&z);
            if(z<=8000)
            {
              p[i].balance+=z;
              p[i].loan+=z;
              printf("\n%s,You Got %d As Loan From bank",p[i].name,z);
            }
            else
            {
              printf("\nAmount Entered is greater than 5k, you can't get that. We give you 8k as loan now.Bye.");
              p[i].balance+=8000;
              p[i].loan=8000;
              printf("\n%s,You Got 8000 As Loan From bank",p[i].name);
            } 
          }
         else
         { n=0;
           p[i].balance=0;
           printf("\nsorry, you are already a defaulter of bank.");
         }  

          } 
          else if(k==3)
          {
            int k,d=1;
  char city[30];
  printf("Cities you own are:\n");
  for(l=0;l<28;l++)
  {
    if(b[l].owner==i)
    {
      printf("%s\n",b[l].name);
    }
  }

  printf("%s,What do you want to sell?\n",p[i].name);
  scanf("%s",&city[30]);
  for(l=0;l<28;l++)
  {
    if(city==b[l].name)
    {
      n=l;
      break;
    }
  }
  int c;
  printf("Enter minimum bid amount %s", p[i].name);
  scanf("%d",&c);
    for(j=0;j<4;j++)
    {
      if(j!=i)
      {
      printf("%s, \ndo you want to bid?\n1.Yes\n2.No",p[j].name);
      scanf("%d",&k);
      if(k==1)
      {
        p[j].wantbid=1;
      }
      if(k==2)
      {
        d++;
      }
    }

    }
 for (;;)
  {
  for(k=0;k<4;k++)
  {
    if(p[k].wantbid==1)
    {
     printf("%s, \nenter bid, enter 0 to stop bidding\n",p[k].name);
     scanf("%d",&p[k].bid);
     if(p[k].bid==0)
     {
      p[k].wantbid=0;
      d++;
      if(d==3)
      {
        break;
      }
     }
     if(p[k].bid<=c)
     {
      printf("\n%s Incorrect bid,You are out from the bidding process.\n",p[k].name);
      d++;
      p[k].wantbid=0;
     }
     else
     {
      c=p[k].bid;
     }
  }
 }
 if(d==3)
  break;
}
  for(k=0;k<4;k++)
  {
    if(p[k].wantbid!=0)
    { printf("%s, You Were highest bidder,You bought Kochi\n",p[k].name);
      p[k].balance-=p[k].bid;
      p[i].balance+=p[k].bid;
      b[n].owner=k;
      p[i].blocks--;
    }
  }
          
       }
  }
    
  
  if(n==0||q==1)
  { for(int j=0;j<4;j++)
    { printf("balance of %s is %d,loan is %d and no. of cards owned are %d\n",p[j].name,p[j].balance,p[j].loan,p[j].blocks);}
    break;
  }
  if(r==12)
  {
    i--;
  }
fclose(board);
}

if(n==0||q==1)
  break;
}
return 0;
}