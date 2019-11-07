#include <iostream>
#include <time.h>
using namespace std;


char a[6][6];
int l=0,p=0,t=0,e=0;
int soso (int i,int j)
{
    int k=0;
    if(a[i - 1] [j - 1] == '0'&& a[i - 2][j - 2] =='.')
    {
        k++;
        l=i-2;
        p=j-2;
    }
    if (a[i][j - 1] == '0'&&a[i][j - 2] == '.')
    {
        k++;
        l=i;
        p=j-2;
    }
    if (a[i + 1][j - 1] == '0'&&a[i + 2][j - 2] == '.')
    {
        k++;
        l=i+2;
        p=j-2;
    }
    if (a[i - 1][j] == '0'&&a[i - 2][j] == '.')
    {
        k++;
        l=i-2;
        p=j ;
    }
    if (a[i + 1][j] == '0'&&a[i + 2][j] == '.')
    {
        k++;
        l=i+2;
        p=j ;
    }
    if (a[i - 1][j + 1] == '0'&&a[i - 2][j + 2] == '.')
    {
        k++;
        l=i-2;
        p=j+2;
    }
    if (a[i][j + 1] == '0'&&a[i][j + 2] == '.')
    {
        k++;
        l=i ;
        p=j+2;
    }
    if (a[i + 1][j + 1] == '0'&&a[i + 2][j + 2] == '.')
    {
        k++;
        l=i+2;
        p=j+2;
    }



    if (a[i - 1][j - 1] == '.'&&a[i - 2][j - 2] == '0')
    {
        k++;
        l=i-1;
        p=j-1;
    }
    if (a[i][j - 1] == '.'&&a[i][j - 2] == '0')
    {
        k++;
        l=i;
        p=j-1;
    }
    if (a[i + 1][j - 1] == '.'&&a[i + 2][j - 2] == '0')
    {
        k++;
        l=i+1;
        p=j-1;
    }
    if (a[i - 1][j] == '.'&&a[i - 2][j] == '0')
    {
        k++;
        l=i-1;
        p=j;
    }

    if (a[i + 1][j] == '.'&&a[i + 2][j] == '0')
    {
        k++;
        l=i+1;
        p=j;
    }
    if (a[i - 1][j + 1] == '.'&&a[i - 2][j + 2] == '0')
    {
        k++;
        l=i-1;
        p=j+1;
    }
    if (a[i][j + 1] == '.'&&a[i][j + 2] == '0')
    {
        k++;
        l=i;
        p=j+1;
    }
    if (a[i + 1][j + 1] == '.'&&a[i + 2][j + 2] == '0')
    {
        k++;
        l=i+1;
        p=j+1;
    }
    if (k!=0)
        return 1;
    else
        return 2;
}


int sosx (int i,int j)
{
    int k=0;
    if (a[i - 1][j - 1] == 'X'&&a[i - 2][j - 2] == '.')
    {
        k++;
        t=i-2;
        e=j-2;
    }
    if (a[i][j - 1] == 'X'&&a[i][j - 2] == '.')
    {
        k++;
        t=i;
        e=j-2;
    }
    if (a[i + 1][j - 1] == 'X'&&a[i + 2][j - 2] == '.')
    {
        k++;
        t=i+2;
        e=j-2;
    }
    if (a[i - 1][j] == 'X'&&a[i - 2][j] == '.')
    {
        k++;
        t=i-2;
        e=j ;
    }
    if (a[i + 1][j] == 'X'&&a[i + 2][j] == '.')
    {
        k++;
        t=i+2;
        e=j ;
    }
    if (a[i - 1][j + 1] == 'X'&&a[i - 2][j + 2] == '.')
    {
        k++;
        t=i-2;
        e=j+2;
    }
    if (a[i][j + 1] == 'X'&&a[i][j + 2] == '.')
    {
        k++;
        t=i ;
        e=j+2;
    }
    if (a[i + 1][j + 1] == 'X'&&a[i + 2][j + 2] == '.')
    {
        k++;
        t=i+2;
        e=j+2;
    }



    if (a[i - 1][j - 1] == '.'&&a[i - 2][j - 2] == 'X')
    {
        k++;
        t=i-1;
        e=j-1;
    }
    if (a[i][j - 1] == '.'&&a[i][j - 2] == 'X')
    {
        k++;
        t=i;
        e=j-1;
    }
    if (a[i + 1][j - 1] == '.'&&a[i + 2][j - 2] == 'X')
    {
        k++;
        t=i+1;
        e=j-1;
    }
    if (a[i - 1][j] == '.'&&a[i - 2][j] == 'X')
    {
        k++;
        t=i-1;
        e=j;
    }

    if (a[i + 1][j] == '.'&&a[i + 2][j] == 'X')
    {
        k++;
        t=i+1;
        e=j;
    }
    if (a[i - 1][j + 1] == '.'&&a[i - 2][j + 2] == 'X')
    {
        k++;
        t=i-1;
        e=j+1;
    }
    if (a[i][j + 1] == '.'&&a[i][j + 2] == 'X')
    {
        k++;
        t=i;
        e=j+1;
    }
    if (a[i + 1][j + 1] == '.'&&a[i + 2][j + 2] == 'X')
    {
        k++;
        t=i+1;
        e=j+1;
    }
    if (k!=0)
        return 1;
    else
        return 2;
}
int sosx1 (int i,int j)
{
    int k=0;
    if (a[i - 1][j - 1] == '.'&&a[i - 2][j - 2] == '.')
    {
        k++;
        t=i-2;
        e=j-2;
    }
    if (a[i][j - 1] == '.'&&a[i][j - 2] == '.')
    {
        k++;
        t=i;
        e=j-2;
    }
    if (a[i + 1][j - 1] == '.'&&a[i + 2][j - 2] == '.')
    {
        k++;
        t=i+2;
        e=j-2;
    }
    if (a[i - 1][j] == '.'&&a[i - 2][j] == '.')
    {
        k++;
        t=i-2;
        e=j ;
    }
    if (a[i + 1][j] == '.'&&a[i + 2][j] == '.')
    {
        k++;
        t=i+2;
        e=j ;
    }
    if (a[i - 1][j + 1] == '.'&&a[i - 2][j + 2] == '.')
    {
        k++;
        t=i-2;
        e=j+2;
    }
    if (a[i][j + 1] == '.'&&a[i][j + 2] == '.')
    {
        k++;
        t=i ;
        e=j+2;
    }
    if (a[i + 1][j + 1] == '.'&&a[i + 2][j + 2] == '.')
    {
        k++;
        t=i+2;
        e=j+2;

    }




    if (k!=0)
        return 1;
    else
        return 2;
}

int sosx2 (int i,int j)
{
    int k=0;
    if ((a[i - 2][j - 2] == 'X'||a[i - 2][j - 2] == '0'||a[i - 2][j - 2] == '1')&&a[i - 1][j - 1] == '.')
    {
        k++;
        t=i-1;
        e=j-1;
    }
    if ((a[i][j - 2] == 'X'||a[i][j - 2] == '0'||a[i][j - 2] == '1')&&a[i][j - 1] == '.')
    {
        k++;
        t=i;
        e=j-1;
    }
    if ((a[i + 2][j - 2] == 'X'||a[i + 2][j - 2] == '0'||a[i + 2][j - 2] == '1')&&a[i + 1][j - 1] == '.')
    {
        k++;
        t=i+1;
        e=j-1;
    }
    if ((a[i - 2][j] == 'X'||a[i - 2][j] == '0'||a[i - 2][j] == '1')&&a[i - 1][j] == '.')
    {
        k++;
        t=i-1;
        e=j ;
    }
    if ((a[i + 2][j] == 'X'||a[i + 2][j] == '0'||a[i + 2][j] == '1')&&a[i + 1][j] == '.')
    {
        k++;
        t=i+1;
        e=j ;
    }
    if ((a[i - 2][j + 2] == 'X'||a[i - 2][j + 2] == '0'||a[i - 2][j + 2] == '1')&&a[i - 1][j + 1] == '.')
    {
        k++;
        t=i-1;
        e=j+1;
    }
    if ((a[i][j + 2] == 'X'||a[i][j + 2] == '0'||a[i][j + 2] == '1')&&a[i][j + 1] == '.')
    {
        k++;
        t=i ;
        e=j+1;
    }
    if ((a[i + 2][j + 2] == 'X'||a[i + 2][j + 2] == '0'||a[i + 2][j + 2] == '1')&&a[i + 1][j + 1] == '.')
    {
        k++;
        t=i+1;
        e=j+1;

    }




    if (k!=0)
        return 1;
    else
        return 2;
}


bool prov (int y,int u)
{
    int n=3;
    if (y>3||y<1||u>3||u<1)return false;
  y--;u--;
            if (a[y][u]=='0'||a[y][u]=='X') return false;
        return true;

}

int main ()
{

    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);



    int n=3,m;
    cout<<"How will you go?"<<endl;

     while (m!=1||m!=2)
     {

         cin>>m;
         if (m!=1&&m!=2){
                system("cls");
         cout<<"Repeat please)"<<endl;
         cout<<"How will you go?"<<endl;}
        else
            break;
     }
    if (m==2){
    srand(time(NULL));
    int o=rand() % 100 + 1;
    cout<<o<<endl;
    if (o>50)
        a[1][1]='X';
    else
        a[0][0]='X';
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
        {
            if (a[i][j]!='X')
                a[i][j]='.';


        }system("cls");
    for (int i=0; i<n; i++)
    {
        cout<<endl<<"========"<<endl<<'|';

        for (int j=0; j<n; j++)
            cout<<a[i][j]<<'|';
    }
        cout<<endl<<"========"<<endl;

    for (int i=-2; i<n+2; i++)
        for (int j=-2; j<n+2; j++)
        {
            if (a[i][j]!='.'&&a[i][j]!='X')
                a[i][j]='1';
        }

    int win = 0,k=0;

    while (win==0)
    {
        int u,y;
        cout<<endl;
        cout<<"Enter coordinates:"<<endl;
   bool t=false;
   while (t!=true)
   {
       cin >> y >> u;
       t=prov(y,u);
       system("cls");
       if (t==false) {for (int i=0; i<n; i++)
    {
        cout<<endl<<"========"<<endl<<'|';

        for (int j=0; j<n; j++)
            cout<<a[i][j]<<'|';
    }
        cout<<endl<<"========"<<endl;
        cout<<"Repeat please)"<<endl;
        cout<<"Enter coordinates:"<<endl;
   }

   }
        k++;
        y--;
        u--;
        a[y][u]='0';system("cls");
        for (int i=0; i<n; i++)
        {

        cout<<endl<<"========"<<endl<<'|';
            for (int j=0; j<n; j++)
                 cout<<a[i][j]<<'|';
        }
  cout<<endl<<"========"<<endl;

        if (k==1 && o==1 && y==0 && u==1)
            a[2][0]='X';
            else
        if (k==1 && o==2 && y==0 && u==2)
            a[2][0]='X';
            else
        if (k==1 && o==2 && y==0 && u==1)
            a[2][0]='X';
        else
        {
            int  z=0;


            for (int i=0; i<n; i++)
            {
                for (int j=0; j<n; j++)
                {
                    if (a[i][j]=='X'&& sosx(i,j)==1)
                    {

                        a[t][e]='X';
                        win=1;
                        z=1;
                        break;

                    }


                }
                if (win==1)
                    break;
            }



            if (win==1)
                break;
            else
                for (int i=0; i<n; i++)
                {
                    for (int j=0; j<n; j++)
                        if (a[i][j]=='0'&&soso(i,j)==1)
                        {
                            a[l][p]='X';
                            z=1;
                            break;
                        }



                    if (z==1)
                        break;
                }
            if (z==0)
            {
                for (int i=0; i<n; i++){
                    for (int j=0; j<n; j++)
                    {
                        if (a[i][j]=='X'&& sosx1(i,j)==1)
                        {

                            a[t][e]='X';
                             z=1;
                             break;

                        }

                    }
                    if (z==1) break;
                }
            }
            if (z!=1) {
              for (int i=0; i<n; i++){
                    for (int j=0; j<n; j++)
                    {
                        if (a[i][j]=='X'&& sosx2(i,j)==1)
                        {

                            a[t][e]='X';
                             z=1;
                             break;

                        }

                    }
                    if (z==1) break;
                }

            }
        }system("cls");
            cout<<endl;
        for (int i=0; i<n; i++)
        {

        cout<<endl<<"========"<<endl<<'|';
            for (int j=0; j<n; j++)
                cout<<a[i][j]<<'|';
        }
          cout<<endl<<"========"<<endl;
        if (win!=1)
        {
            int k1=0;
            for (int i=0; i<n; i++)
            {

                for (int j=0; j<n; j++)
                    if (a[i][j]=='.')
                    {
                        k1++;
                        break;
                    }

            }
            if (k1==0)
                win=2;
        }
    }system("cls");
    for (int i=0; i<n; i++)
        {

        cout<<endl<<"========"<<endl<<'|';
            for (int j=0; j<n; j++)
                cout<<a[i][j]<<'|';
        }
          cout<<endl<<"========"<<endl;
    if (win==2)
        cout<<"DRAW";
    else
        cout<<"Computer won!";
    }
    else
    {
        for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
        {
            if (a[i][j]!='X')
                a[i][j]='.';


        }system("cls");
    for (int i=0; i<n; i++)
    {
        cout<<endl<<"========"<<endl<<'|';

        for (int j=0; j<n; j++)
            cout<<a[i][j]<<'|';
    }
        cout<<endl<<"========"<<endl;

    for (int i=-2; i<n+2; i++)
        for (int j=-2; j<n+2; j++)
        {
            if (a[i][j]!='.'&&a[i][j]!='X')
                a[i][j]='1';
        }

    int win = 0,k=0;

    while (win==0)
    {
        int u,y;
        cout<<endl;
        cout<<"Enter coordinates:"<<endl;
bool t=false;
   while (t!=true)
   {
       cin >> y >> u;
       t=prov(y,u);
       system("cls");

       if (t==false) {for (int i=0; i<n; i++)
    {
        cout<<endl<<"========"<<endl<<'|';

        for (int j=0; j<n; j++)
            cout<<a[i][j]<<'|';
    }
        cout<<endl<<"========"<<endl;
        cout<<"Repeat please)"<<endl;
        cout<<"Enter coordinates:"<<endl;

   }
   }
        k++;
        y--;
        u--;
        a[y][u]='0';system("cls");
        for (int i=0; i<n; i++)
        {

        cout<<endl<<"========"<<endl<<'|';
            for (int j=0; j<n; j++)
                 cout<<a[i][j]<<'|';
        }
  cout<<endl<<"========"<<endl;
     if (k==1 && y!=1 && u!=1) a[1][1]='X';
     else
        if (k==1 && y==1 && u==1) a[0][0]='X';
     else
     {
         int  z=0;


            for (int i=0; i<n; i++)
            {
                for (int j=0; j<n; j++)
                {
                    if (a[i][j]=='X'&& sosx(i,j)==1)
                    {

                        a[t][e]='X';
                        win=1;
                        z=1;
                        break;

                    }


                }
                if (win==1)
                    break;
            }



            if (win==1)
                break;
            else
                for (int i=0; i<n; i++)
                {
                    for (int j=0; j<n; j++)
                        if (a[i][j]=='0'&&soso(i,j)==1)
                        {
                            a[l][p]='X';
                            z=1;
                            break;
                        }



                    if (z==1)
                        break;
                }
            if (z==0)
            {
                for (int i=0; i<n; i++){
                    for (int j=0; j<n; j++)
                    {
                        if (a[i][j]=='X'&& sosx1(i,j)==1)
                        {

                            a[t][e]='X';
                             z=1;
                             break;

                        }

                    }
                    if (z==1) break;
                }
            }
            if (z!=1) {
              for (int i=0; i<n; i++){
                    for (int j=0; j<n; j++)
                    {
                        if (a[i][j]=='X'&& sosx2(i,j)==1)
                        {

                            a[t][e]='X';
                             z=1;
                             break;

                        }

                    }
                    if (z==1) break;
                }

            }
        }
            cout<<endl;
        for (int i=0; i<n; i++)
        {

        cout<<endl<<"========"<<endl<<'|';
            for (int j=0; j<n; j++)
                cout<<a[i][j]<<'|';
        }
          cout<<endl<<"========"<<endl;
        if (win!=1)
        {
            int k1=0;
            for (int i=0; i<n; i++)
            {

                for (int j=0; j<n; j++)
                    if (a[i][j]=='.')
                    {
                        k1++;
                        break;
                    }

            }
            if (k1==0)
                win=2;
        }
    }
    for (int i=0; i<n; i++)
        {

        cout<<endl<<"========"<<endl<<'|';
            for (int j=0; j<n; j++)
                cout<<a[i][j]<<'|';
        }
          cout<<endl<<"========"<<endl;
    if (win==2)
        cout<<"DRAW";
    else
        cout<<"Computer won!";

     }

    }
