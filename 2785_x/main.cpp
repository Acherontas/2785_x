#include <iostream>
#include <iomanip>
#include <math.h>

#include "get_the_sum.h"

using namespace std;

int main(int argc,char** argv)
{
    cout<<"enter number and precision \n";
    long double nmb;
    nmb=stoll(argv[1]);
    int preci=0;
    preci=stoi(argv[2]);
    string tmps;
    tmps.clear();
    tmps+=to_string(nmb);
    long double ar_zeros[1000]; int arzer=1;
    long double ar_nines[1000]; int arnin=1;
    int ar_mn[1000];int armn=1;
    char ck;int lki=0; int actual_lenght=0;
    for(int i=0;i<=tmps.size()-1;i++){
       ck=tmps.at(i);
       if(ck!='.'){lki=stoi(&ck);ar_mn[armn]=lki; armn+=1; actual_lenght+=1;}
       if(ck=='.'){break;}
    }
    int lent=-1;
    lent=actual_lenght;
    int stt=1;
    long double pwd;
    long double rwd;
    for(int i=lent-1;i>=1;i--){
        pwd=pow(10,i);
        rwd=pwd-1;
        ar_zeros[arzer]=pwd;
        ar_nines[arnin]=rwd;
        arzer+=1;
        arnin+=1;
    }
    cout<<"for ur number : " <<std::setprecision(preci) << nmb <<"\n";
    cout<<"integer parts are : " <<"\n";
    for(int i=1;i<=armn-1;i++){cout <<i << " " << ar_mn[i] << " \n";}
    cout<<"for zeros parts are : " <<"\n";
    for(int i=1;i<=lent;i++){cout<<i << " " << ar_zeros[i] <<"\n";}
    cout<<"for nine parts are : " << "\n";
    for(int i=1;i<=lent;i++){cout<<i << " " << ar_nines[i] <<"\n";}

    string mlni;
    mlni.clear();
    long double xty;
    long double zty;
    long double xt[1000];int xtyi=0;
    long double zt[1000];int ztyi=0;
    for(int i=1;i<=lent;i++){
        mlni+=to_string(ar_mn[i]);
        mlni+="*";
        mlni+=to_string(ar_zeros[i]);
        mlni+=" = ";
        mlni+="(";
        mlni+=to_string(ar_nines[i]);
        mlni+=" + ";
        mlni+="1";
        mlni+=")";
        mlni+=" * ";
        mlni+=to_string(ar_mn[i]);
        mlni+=" = ";
        mlni+=to_string(ar_nines[i]);
        mlni+=" * ";
        mlni+=to_string(ar_mn[i]);
        mlni+=" + ";
        mlni+="1";
        mlni+=" * ";
        mlni+=to_string(ar_mn[i]);
        mlni+=" = ";
        xty=ar_mn[i]*ar_nines[i];
        zty=ar_mn[i]*1;
        xt[xtyi]=xty; xtyi+=1;
        zt[ztyi]=zty; ztyi+=1;
        mlni+=to_string(xty);
        mlni+=" + ";
        mlni+=to_string(zty);
        cout<<mlni <<"\n";
        mlni.clear();
    }

    long double zzty,xxty;
    for(int i=0;i<=xtyi;i++){
     zzty=zzty+zt[i];
     xxty=xxty+xt[i];
    }
    cout<<"of ::== " << std::setprecision(preci) << xxty << " " << std::setprecision(preci) << zzty <<"\n";

    long double xp;
    long double stbl=9;
    xp=(long double)xxty/(long double)stbl;
    cout<<"with Divisibility of 9 " << std::setprecision(preci)<<xp <<"\n";

    long double stbli=3;
    xp=(long double)xxty/(long double)stbli;
    cout<<"with Divisibility of 3 " << std::setprecision(preci) <<xp <<"\n";

    get_the_sum *gtsm=new get_the_sum();
    long double a;
    long double b;
    a=gtsm->get_da_number(xxty);
    if(a<=9){a=a;}
    if(a>9){
           while(a>9){
                     a=gtsm->get_da_number(a);
                     if(a<=9){break;}
                     }
          }

    b=gtsm->get_da_number(zzty);
    if(b<=9){b=b;}
    if(b>9){
            while(b>9){
                      b=gtsm->get_da_number(b);
                      if(b<=9){break;}
                      }
           }
    cout<<std::setprecision(preci) << a << " " <<std::setprecision(preci) << b <<"\n";
    return 0;
}
